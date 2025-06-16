


def isPerfectSquare(n:int) -> bool:
    """Check if a number is a perfect square."""
    if n < 0:
        return False
    root = int(n**0.5)
    return root * root == n
t: int = int(input())
for _ in range(t):
    s: str = input()
    num : int = int(s)
    if (num==0):
        print(0, 0)
        continue
    if (not isPerfectSquare(num)):
        print(-1)
        continue
    square = int(num ** (0.5))
    print(square-1, 1)