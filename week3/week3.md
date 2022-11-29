# Week 3: Algorithm


## Linear search:

From from 0 to n-1:
  if number is behind i'th door:
    return true
return false

Big O notation: O(n)
Lower bound: Omega(1)



## Binary search:

If number behind middle door:
  return true
else if number < middle door
    search left half
else if number > middle door
    search right half

Big O notation: O(log n)
Lowerbound: Omega(1)


## Defining datatype:

typedef: we use it to define a new data type


for example:

typedef struct
{
  string name
  string number
}
PERSON;



## Selection Sort:



For I from 0 to n-1:
  find smallest item between i'th item and last item
  swap smalest item with i'th item
  
  
For i = 0, i < n-1;
  temp = i
  small = i
  
  for j in n-1:
    if small > j:
      small = j;
  i = small
  j  = temp
  
  
  
  
  Upper bound: Big O notation: O(n^2);
  Lower bound: Omega(n^2)
  
  
  
  ## Bubble sort:
  
  Repeat until sorted:
    for i from 0 to n-2:
      if i'th and i+'th element out of order:
        swap them
    if no swap:
      quit
      
 Upper bound:  Big O : O(n^2)
  uper bound: Omega(n)
  
  ## Recursion:
  
  A function calling itself. But we need base case. 
  
  ## Merge sort: 
  
  if only one number:
    quit
  sort left half of numbers
  sort right of numbers
  marrge sorted halves
  
  lower bound : O(n log n)
  
  upper bound : Omega (n log n)
  
  
  When an alogirthm has the same upper bound and lower bound we use the notation Teta
  
  Selection sort : Teta(n^2)
  merge sort: Teta(n log n)
  
  
  
  ## Problem Sets
  
  
  ### Plurality:
  
  Problem with plurality. If there is a tie it will be hard to determine the winner.
 
 ### Runoff
