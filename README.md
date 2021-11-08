# LINKED LIST IMPLEMENTATION OF STACK

## ABOUT STACKS:
Stacks is a kind of data-structure that hold elements in a linear fashion. The principle followed is LIFO which stands Last-In-First-Out. The latter means that , the element inserted at last in stack would be removed first from same. Further the famous pointer “top” is used to highlight the top most element of the stack or last inserted element in stack.
#### A pictorial way of representing stack:
![image](https://user-images.githubusercontent.com/77229404/140744106-207d3f6c-6639-431d-ac12-cb76aebe7df2.png)

[image credit](https://vivadifferences.com/wp-content/uploads/2020/03/Stack-Data-Structure.jpg)

## ABOUT LINKED LIST:
Linked list is a type of data-structure that holds elements  through non contagious memory locations. The memory units are called as nodes that hold the data along with the address of the next unit. This way, we can save chunks of memory and increase the efficiency of the component. The address here acts as a link which helps  user to traverse data , from one node to other.
#### The pictorial representation is below:
![image](https://user-images.githubusercontent.com/77229404/140744224-4d4e2a04-8306-44bc-9822-5d6482738c78.png)

[imagecredit]https://codeforwin.org/wp-content/uploads/2015/09/Linked-list-nodes.png

## IMPLEMENTATION :
The biggest advantage of implementing stack using linked list is , that it allows one to change the size of stack in runtime. The implementation begins by considering a linked list attached within a stack. The top pointer will be the lead to create a stack as it will move along the new inserted nodes. 
#### The pictorial representation is below:
![image](https://user-images.githubusercontent.com/77229404/140744273-198c1716-79ca-4c51-9a04-ed34e2668beb.png)

 
#### OPERATIONS PERFORMED:
-	PUSH:  To insert element into stack using top pointer.
-	POP: To remove element from stack using top pointer.
-	PEEK: Returns the element pointed by top pointer.
-	DISPLAY: To display the element pointed by stack.
-	SPLIT: Split the stack of length n in two stacks, each of length p and q such that p+q=n.
-	COMBINE: Combine((p(i1,i2,i3...ip),q(j1,j2,...jq)) into one stack of length p+q=n. The new stack should contain the elements of the stacks p and q in any combination.


### OUTPUT FOR THE CODE:
Tested in online compiler:
#### FILLING THE STACK:
![image](https://user-images.githubusercontent.com/77229404/140744394-60d54f8c-8a86-479e-8a1b-f0bd68f4e478.png)
 

#### SPLITTING THE STACK:
 ![image](https://user-images.githubusercontent.com/77229404/140744443-ec5533cc-9911-4c1a-9d01-907c121adb86.png)


#### COMBINING THE STACK:
 ![image](https://user-images.githubusercontent.com/77229404/140744481-b4d7bab7-f8b6-4b62-bca3-a8d724cce870.png)


### REFERENCES:
-	https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/
-	https://www.javatpoint.com/ds-linked-list-implementation-of-stack
