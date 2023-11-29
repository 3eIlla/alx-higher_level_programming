#!/usr/bin/python3

for lil in range(ord('a'), ord('z') + 1):

    if lil != ord('q') and lil != ord('e'):
        print("{:c}".format(lil), end="")
