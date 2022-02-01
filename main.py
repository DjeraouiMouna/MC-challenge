
def Valide(n: int) -> int:
    r= int((pow(n, 2)) / 10)
    j = (pow(n, 2)) % 10
    d = 10

    while (r != 0) and (j != n):
        j = j + (r % 10) * d
        r = int(r / 10)
        d = d * 10

    return j



n = int(input("Give an integer N: "))
p = Valide(n)

if p == n:
    print("This number is valid")

else:
    print("This number is not valid")
