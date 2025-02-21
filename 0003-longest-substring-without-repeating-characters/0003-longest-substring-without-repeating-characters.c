
int lengthOfLongestSubstring(char* s) {
    int charIndex[128]; // ASCII characters
    memset(charIndex, -1, sizeof(charIndex));

    int left = 0, maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        if (charIndex[s[right]] >= left) {
            left = charIndex[s[right]] + 1;
        }
        charIndex[s[right]] = right;
        maxLength = (maxLength > (right - left + 1)) ? maxLength : (right - left + 1);
    }

    return maxLength;
}
