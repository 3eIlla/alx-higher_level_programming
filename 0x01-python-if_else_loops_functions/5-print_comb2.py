#!/usr/bin/python3

for lil in range(100):
    print("{:02d}".format(lil), end="\n"
          if lil == 99 else ", ")
