class Solution(object):
    def rotateString(self, s, goal):
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        if len(s) != len(goal) : return False
        ans = s+s
        if s in ans and goal in ans:
            return True
        return False
        