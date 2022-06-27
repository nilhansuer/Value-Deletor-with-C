# Value-Deletor-with-C
Value deletor in an array using pointers with C.

The function deletes all the occurrences of the value in the array. Delete operation is carried out by swapping the last value that is not -1 in the array. Then, change the value to -1. As an example the value 2 is deleted from the array below:
Before delete: {3,2,4, 5,-1,-1}
Intermediate step: {3,5,4, 2,-1,-1}
After delete: {3,5,4,-1,-1,-1}
o The function returns 1 if the value exists in the array, otherwise, it will return 0.
o Also, the function should update the size value correctly if the size has changed.
