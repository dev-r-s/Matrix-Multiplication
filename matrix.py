
while True:
    a = []
    b = []
    c = []
    n = int(input("\nEnter the number of rows in the first matrix (Matrix A): "))
    m = int(input("Enter the number of columns in the first matrix (Matrix A): "))
    p = int(input("Enter the number of rows in the second matrix (Matrix B): "))
    q = int(input("Enter the number of columns in the second matrix (Matrix B): "))

    if m == p or (m == n == p == q):
        print("\nEnter the values of Matrix A:")
        for i in range(1, n + 1):
            row = []
            for j in range(1, m + 1):
                row.append(float(input("Enter the value A[{}][{}]: ".format(i, j))))
            a.append(row)

        print("\nMatrix A is")
        for i in range(n):
            for j in range(m):
                print("\t", a[i][j], end="")
            print()

        print("\nEnter the values of Matrix B:")
        for i in range(1, p + 1):
            row = []
            for j in range(1, q + 1):
                row.append(float(input("Enter the value B[{}][{}]: ".format(i, j))))
            b.append(row)

        print("\nMatrix B is")
        for i in range(p):
            for j in range(q):
                print("\t", b[i][j], end="")
            print()

        for i in range(1, n + 1):
            row = []
            for j in range(1, q + 1):
                sum = 0
                for k in range(1, m + 1):
                    sum += a[i - 1][k - 1] * b[k - 1][j - 1]
                row.append(sum)
            c.append(row)

        print("\nMatrix A X B = C =")
        for i in range(n):
            for j in range(q):
                print("\t", c[i][j], end="")
            print()
    else:
        print("\nMultiplication is not possible.")

    ch = input("\nWant to continue? Press 'Y' or 'y', else press any key to exit: ")
    if ch.lower() != 'y':
        break
