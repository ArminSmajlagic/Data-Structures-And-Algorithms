# Insertion Sort

## Definition

This sorting algorithm sorts the array by inserting each element in their appropriate positions. 
Let A be the unordered list with elements A = a1,a2,...,an.
The insertion sort algorithm scans a1 to an, inserting each element ak into its proper position in the sorted sublist of predecessors 
{a1,a2,...,ak-1} where k is the key element position that is to be inserted.

## Explanation

- Step 1
  - A2 is compared with its sorted sublist of its predecessors, i.e. {A1} and A2 is inserted either after or
    before A1 so that {A1,A2} will be in the sorted order.

- Step 2
  - A3 is compared with its sorted sublist of its predecessors, i.e. {A1,A2}, and A3 is inserted at its proper
    position so that {A1,A2,A3} is in sorted order.

- Step n
  - An is compared with its sorted sublist of predecessor, i.e. {A1,A2,...,An-1}, and An is inserted at its
    proper position so that {A1,A2,...,An} is in sorted order.

This algorithm takes n comparisons and is useful only when n is small. 

![bubble](https://user-images.githubusercontent.com/45321513/193411761-0fbd7bfe-6f00-4519-9b10-ab6208811126.jpg)

## Time colpexity

The time complexity of insertion sort is O(n2)
