import random

punkty = 0

with open("pytania.txt", 'r') as pyt:
    pytania = pyt.read().split(";\n")

for pyt in pytania:
    pytanie = pyt.split("\n")
    print(pytanie[0])
    odpowiedzi = pytanie[1:]
    popOdp = odpowiedzi[0]
    random.shuffle(odpowiedzi);
    for i in range(len(odpowiedzi)):
        print(chr(i+97)+") "+odpowiedzi[i])
    odp = input("")
    if(odpowiedzi[int(ord(odp.casefold()))-97].find(popOdp) != -1):
        punkty += 1
        print("Prawidłowa odpowiedz!")
    else:
        print("Zle! Prawidłowa odpowiedź to: " + popOdp)

pom = "Masz "+str(punkty)+"/9 punktów"

if(punkty <= 2):
    print(pom + "jestes slabiakiem.")
elif(punkty <= 5):
    print(pom + ", nie ma tragedii.")
elif(punkty <= 8):
    print(pom + "bardzo dobrze znasz gre Wiedzmin 3.")
else:
    print(pom + "wysmienicie znasz gre Wiedzmin 3.")
