import getpass
#^ this will hide the password when typing it in

print("Login system")

welcome = input("Do you have an account already? y/n: ")

if welcome not in ("n", "y"):
	print("Please only enter 'y or 'n")
	exit()
else:
	if welcome == "n":
			while True:
					username = input("Enter a username: ")
					password = getpass.getpass("Enter a password: ")
					password1 = getpass.getpass("Please confirm your password: ")
					if password == password1:
							file = open(username + ".txt", "w")
							file.write(username + ":" + password)
							file.close()
							welcome = False
							break
					print(
							"We are sorry but your passwords do not match, please try again! - If you need assistance please contact the admin"
					)
#^ if you do not have an account 
#Bellow if you do have an account

if welcome == "y":
    while True:
        print("Welcome back!")
        login1 = getpass.getpass("Login: ")
        login2 = getpass.getpass("Password: ")
        file = open(login1 + ".txt", "r")
        data = file.readline()
        file.close()
        if data == login1 + ":" + login2:
            print("Welcome back")
            break
        print(
            "Your username or password is invalid, please try again"
        )

print("Testing123")
