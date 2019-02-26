from sys import argv
import json

script , file_name = argv

json_file = open("D:/Workspace/python/learnpythonthehardway/database.txt","r",encoding = "utf-8")
database = json.load(json_file)
json_file.close()

with open('database_file.json') as f:
	database = json.loads(f)

def show_menu():
	print ("********************")
	print ("CHUONG TRINH TU DIEN")
	print ("********************")
	print ("1. Them tu.")
	print ("2. Tim tu.")
	print ("3. Xoa tu.")
	print ("4. Xem tat ca.")
	print ("An 0 de thoat chuong trinh.")
	print ("********************")
#Them tu
def add():
	print ("Them tu!")
	word = raw_input("Tu moi: ")
	mean = raw_input("Nghia la: ")
	database[word] = mean
	print ("Tu moi da duoc them vao!")

#Tim tu
def find():
	print ("Tim tu!")
	word = raw_input("Tim tu gi: ")
	if word in database:
		print ("Tim thay [ %s : %s ]") % (word,database[word])
	else:
		print ("Khong tim thay tu %s!") % word

#Xoa tu
def delete():
	print ("Xoa tu !")
	word = raw_input("Tu gi: ")
	if word in database:
		del database[word]
		print ("Tu [ %s ] da bi xoa !") % word
	else:
		print ("Khong tim thay tu: [ %s ] !") % word

#Xem tat ca
def view_all():
	print ("Xem tat ca !")
	for word, mean in database.items():
		print ("[ %s : %s ] ") % (word, mean)

#Hien menu
show_menu()

#Chuong trinh chinh
choice = int(raw_input("Ban muon lam gi: "))

while choice != 0:
	if choice == 0:
		break
	elif choice == 1:
		add()
	elif choice == 2:
		find()
	elif choice == 3:
		delete()
	elif choice == 4:
		view_all()
	else:
		print ("Khong co lua chon nay ! ")
	choice = int(raw_input("Ban muon lam gi: "))
print ("Hen gap lai !")