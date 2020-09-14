# Linked Lists

Advantages of LinkedLists over Arrays:
1. The size of a linked list is dynamic whereas size of an array is fixed. So if you are going to use an array then you should be sure that the number of elements in the array will not exceed the size that you have specified for the array. Also an array will always consume the size that you have specified even if number of elements stored in an arrray is less than the array size.
2. Insertion and deletion operations are time efficient in a linked list as compared to an array. For example to insert an element in a sorted array you will have to shift all the elements thaty right of that element by one position. And similary on deleting an element, all elements to the right of that deleted element will shift left by one position. This is a O(n) operation in Array. In Linkedlist you just have to change node pointers of one or two elements which is effectively O(1).


Drawbacks of LinkedList:
1. Accessing elements of a linkedlist randomly is expensive. You have to traverse the entire linkedlist and thus this is O(n).
2. In a linked list with each element a pointer is associated which makes it memory inefficient as compared to arrays, since extra memory space is required for a pointer for each element.
