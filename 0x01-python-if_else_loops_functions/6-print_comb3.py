#!/usr/bin/python3

for li in range(10):
    for lj in range(li, 10):

        if li < lj:
            print("{:d}{:d}".format(li, lj), end="\n" 
                  if li == 8 and lj == 9 else ", ")
