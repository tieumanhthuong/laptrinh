class Daynhauhoc(object):
	name = "" # co the co hoac khong
	def __init__(self,name):
		self.name = name
	def showName(self):
		print "Name of Website: "+ self.name

# new object of class Daynhauhoc

demo = Daynhauhoc("Day nhau hoc")

#call function of object demo
demo.showName()