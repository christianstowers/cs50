'''
porting the equivalent file in C to Python
'''

#check that height is between 1 and 23 inclusive
while True:
    try:
        height = int(input ('Height: '))
    except ValueError:
        print ('That\'s not a number!')
    else:
        if 1 <= height < 24:
            break
        else:
            print ('Out of range. Try again.')

#print loops. spaces, hashes, and carriage return (NOT \n)
for i in range (height):
    #spaces
    for j in range (height - i - 1):
        print (' ', end = '')
    #hashes
    for k in range (i + 1):
        print ('#', end = '')
    #divider
    print ('  ', end = '')
    #other hashes
    for l in range (i + 1):
        print ('#', end = '')
    #line return
    print ('\r')
