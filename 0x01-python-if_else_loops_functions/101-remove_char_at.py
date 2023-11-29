#!/usr/bin/python3

def remove_char_at(str, n):

    newstr = ""

    for li, c in enumerate(str):
        if li != n:
            newstr += c

    return newstr
