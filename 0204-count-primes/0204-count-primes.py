class Solution:
    def countPrimes(self, n):
        if n <= 2:
            return 0

        isprime = [True] * n
        isprime[0] = isprime[1] = False

        for i in range(2, int(n ** 0.5) + 1):
            if isprime[i]:
                isprime[i * i:n:i] = [False] * (((n - 1 - i * i) // i) + 1)

        return sum(isprime)