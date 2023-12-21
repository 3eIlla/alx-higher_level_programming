#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    zi = 0

    try:
        while zi is not x:
            print(my_list[zi], end='')
            zi += 1

    except IndexError:
        None
    print()

    return zi
