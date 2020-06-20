if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    highest = max(arr)
    while max(arr) == highest:
        arr.remove(max(arr))
    print(max(arr))
