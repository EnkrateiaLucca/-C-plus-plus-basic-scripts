# Defining and using structures step
# Here we will use classes as the pyhton equivalent of structures although it is not necessarily the same thing.

class PythonStructure:
	def __init__(self):
		self.attrib1 = None

	def print_attributes(self):
		print(self.attrib1)

py_struct = PythonStructure()
py_struct.attrib1 = "Hello"
py_struct.print_attributes()