ids=[4353,2314,2956,3382,9362,3900]
print(ids)
ids.remove(3382)
print("Removed 3382")
print(ids)
index=ids.index(9362)
print(index)
ids.insert(index+1,4499)
print(ids)
ids.extend([5566,1830])
print(ids)
ids.reverse()
print(ids)
ids.sort()
print(ids)