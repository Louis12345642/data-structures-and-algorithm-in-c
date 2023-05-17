from array import *
import collections
# importing the array module because it is not compiled with the python language
print("data structure")


##this is an array data structure 

myArray = array('i',[1,2,3,4,5,6,7,8])
##inserting in an array
myArray.insert(1,30)

for i in myArray:
    print(i)


print(myArray.index(30))

## dictionaries they store data inform of key value pairs

people = {
    "name":"city",
    "age":9,
    "class":5
}
## updating value in the dictionaries
people["name"] = "Godwill louis dau"
print(people["name"])
## the del function deletes an item from the dictionary
del people["age"]
print(people)


#maps and chain maps
# this are data strucure that combines to dictionaries together

dict1 = {
    "name":"kual louis dau",
    "age":20
}

dict2 = {
    "name":"Arop louis dau",
    "age":14
}

res = collections.ChainMap(dict1,dict2)

elements =(res.maps,'\n')

for k in elements:
    for j in k:
        print(j)



