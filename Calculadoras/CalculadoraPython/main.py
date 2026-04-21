# Calculator project in python

import os


def main():
    os.system("cls")
    num1 = input("Primeiro Valor: ")
    op = input("Operador (+ - * /): ")
    num2 = input("Segundo Valor: ")
    if op == "+":
        result = float(num1) + float(num2)
        print(result)
    elif op == "-":
        result = float(num1) - float(num2)
        print(result)
    elif op == "*":
        result = float(num1) * float(num2)
        print(result)
    elif op == "/":
        result = float(num1) / float(num2)
        print(result)


if __name__ == "__main__":
    main()
