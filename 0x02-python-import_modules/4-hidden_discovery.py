#!/usr/bin/python3

if __name__ == "__main__":
    """Print all hidden directories"""

    import hidden_4

    for lil in dir(hidden_4):
        if lil[0:2] != "__":
            print(lil)
