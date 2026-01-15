class Solution(object):
    def recoverOrder(self, order, friends):
        arr = []
        for i in range(len(order)):
            if order[i] in friends:
                arr.append(order[i])
        return arr