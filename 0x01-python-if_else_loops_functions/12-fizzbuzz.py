#!/usr/bin/python3

def fizzbuzz():
    for li in range(1, 101):

        if li % 15 == 0:
            print("FizzBuzz",
                  end=" ")

        elif li % 5 == 0:
            print("Buzz",
                  end=" ")

        elif li % 3 == 0:
            print("Fizz",
                  end=" ")

        else:
            print("{:d}".format(li),
                  end=" ")
