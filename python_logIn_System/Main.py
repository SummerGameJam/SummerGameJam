welcome = input("Do you have an account already? y/n: ")
if welcome == "n":
    While True:
    username = input("Enter a username: ")
    password = input("Enter a password: ")
    password1 = input("Enter your password again: ")
    if password == password1:
        file = open(username + ".txt", "w")
