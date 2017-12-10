#now fix this while loop to guarantee a 1-23 height range
while (True):
    height = int(input("Height: "))
    break

for i in range(height):
    for j in range(height - i - 1):
        print (' ', end = '', flush = True)

    for i in range(i + 1):
        print ('#', end = '', flush = True)

    print (' ', end='')

    for l in range(i + 1):
        print ('#', end= '')

    print ('\r')

