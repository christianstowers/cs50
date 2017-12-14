#greedy.c port
change = 0
coins = 0

while True:
    try:
        change = float(input('Change: '))
    except ValueError:
        print('Error: that\'s not a number. try again.')
    else:
        if change > 0:
            break

x = round(change * 100)

while(x > 0):
    while(x >= 25):
        x -= 25
        coins += 1

    while(x >= 10):
        x -= 10
        coins += 1

    while(x >= 5):
        x -= 5
        coins += 1

    while(x <= 4 and x > 0):
        x -= 1
        coins += 1

    break

print(coins)
