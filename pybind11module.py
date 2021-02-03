
#### Python module to demonstrate the use of pybind11 header library ###
#----------------------------------------------------------------------#

print("Please select operation -\n"
        "1. Add\n"
        "2. Subtract\n"
        "3. Multiply\n"
        "4. Divide\n") 

# Take input from the user  
select = int(input("Select operations form 1, 2, 3, 4 :")) 
  
number_1 = int(input("Enter first number: ")) 
number_2 = int(input("Enter second number: ")) 

import pybind11module
#result = pybind11module.Mult(3, 5)
#print (result, result)

if select == 1: 
    print(number_1, "+", number_2, "=", 
                    pybind11module.Add(number_1, number_2)) 
  
elif select == 2: 
    print(number_1, "-", number_2, "=", 
                    pybind11module.Subtract(number_1, number_2)) 
  
elif select == 3: 
    print(number_1, "*", number_2, "=", 
                    pybind11module.Multiply(number_1, number_2)) 
  
elif select == 4: 
    print(number_1, "/", number_2, "=", 
                    pybind11module.Divide(number_1, number_2)) 
else: 
    print("Invalid input") 