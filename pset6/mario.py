while (True):
    height = int(input("Height: "))
    break

for i in range(height):
    for j in range(height - i - 1):
        print (" ", end = " ")

    for i in range(i + 1):
        print ("#", end = " ")

    print ("  ")

    for l in range(height - i - 1):
        print ("#")

    print ("\n")
