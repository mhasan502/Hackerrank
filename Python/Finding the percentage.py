if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    res = (sum(student_marks[query_name]))/3
    f = "{:.2f}".format(res)
    print(f)
