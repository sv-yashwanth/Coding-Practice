import random

computer = random.choice([-1, 0, 1])
user_input = input("Enter (Rock/Paper/Scissors) : ")
user_input = user_input.capitalize()
userDict = {"Rock" : -1, "Paper" : 0, "Scissors" : 1}
reverseDict = {-1 : "Rock", 0 : "Paper", 1 : "Scissors"}

if user_input not in userDict:
    print("Invalid input ! Please enter Rock, Paper or Scissors.")
    exit()
user = userDict[user_input]
print(f"User input : {reverseDict[user]}\nComputer's choice : {reverseDict[computer]}")

if (computer==user):
    print("MATCH DRAWN")
else:
    if (computer==-1 and user==0):
        print("YOU WIN !")
    elif (computer==-1 and user==1):
        print("YOU LOST.")
    elif (computer==0 and user==-1):
        print("YOU LOST.")
    elif (computer==0 and user==1):
        print("YOU WIN !")
    elif (computer==1 and user==-1):
        print("YOU WIN !")
    elif (computer==1 and user==0):
        print("YOU LOST.")
    else:
        print("Something went wrong. Please try again.")