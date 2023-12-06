#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):

    for kal in sorted(a_dictionary.keys()):

        print("{}: {}"
              .format(kal, a_dictionary[kal]))
