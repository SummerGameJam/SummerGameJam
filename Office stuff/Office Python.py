#python version of my office 1.0 code and the office 2.0. 
#we will see the differance :) 


money = str(input("Do you have money? "))
if money == "yes":
    office = str(input("Do you want an office? "))
    if office == "yes":
        car = str(input("Do you have a car? "))
        if car == "yes":
            print("You can buy an office, you do not need to buy anything else")
        else:
            print("You need to buy a car first")
    else:
        exit()
else: 
    exit()