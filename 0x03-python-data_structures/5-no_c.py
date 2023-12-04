#!/usr/bin/python3

def no_c(my_string):
    ret = ""

    for li in range(len(my_string)):

        if (my_string[li] != 'c' and my_string[li] != 'C'):
            ret += my_string[li]

    return ret
