#!/usr/bin/python3

if __name__ == "__main__":

    import sys

    sum = 0

    for li in range(len(sys.argv) - 1):

        sum += int(sys.argv[li + 1])
    print(sum)
