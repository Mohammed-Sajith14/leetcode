#include <stdlib.h>
#include <string.h>

// Define a hash map node structure
typedef struct HashNode {
    int key;   // Stores the number
    int value; // Stores the index
    struct HashNode* next; // Handle collisions using chaining
} HashNode;

// Hash map implementation
#define HASH_SIZE 10000

HashNode* hashTable[HASH_SIZE];

// Helper function to calculate the hash
int hashFunction(int key) {
    return abs(key) % HASH_SIZE;
}

// Add a key-value pair to the hash map
void put(int key, int value) {
    int hashIndex = hashFunction(key);
    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashTable[hashIndex];
    hashTable[hashIndex] = newNode;
}

// Get the value from the hash map given a key
int get(int key, int* found) {
    int hashIndex = hashFunction(key);
    HashNode* current = hashTable[hashIndex];
    while (current) {
        if (current->key == key) {
            *found = 1;
            return current->value;
        }
        current = current->next;
    }
    *found = 0;
    return -1;
}

// Free all nodes in the hash map
void freeHashMap() {
    for (int i = 0; i < HASH_SIZE; i++) {
        HashNode* current = hashTable[i];
        while (current) {
            HashNode* temp = current;
            current = current->next;
            free(temp);
        }
        hashTable[i] = NULL;
    }
}

// Two Sum function
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    memset(hashTable, 0, sizeof(hashTable)); // Initialize the hash table
    *returnSize = 2; // Return size is always 2
    int* result = (int*)malloc(2 * sizeof(int)); // Allocate memory for the result

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int found;
        int complementIndex = get(complement, &found);
        if (found) {
            result[0] = complementIndex;
            result[1] = i;
            freeHashMap(); // Free the hash map
            return result;
        }
        put(nums[i], i); // Store the current number and index
    }

    freeHashMap(); // Free the hash map in case no solution is found
    return NULL; // Should never happen as per constraints
}
