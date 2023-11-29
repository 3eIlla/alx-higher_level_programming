#!/usr/bin/python3

for li in range(25, -1, -1):
    c = li + ord('A')

    if li % 2 == 1:
        c += 32

    print("{:c}".format(c),
          end="")
