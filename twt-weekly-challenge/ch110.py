for T in range(int(input())):
    N = int(input())
    val = [int(x) for x in input().split()]
    for i in range(1,(2*N),2):
        if i not in val:
            print(i)
