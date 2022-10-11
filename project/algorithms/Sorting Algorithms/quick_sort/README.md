# Quck Sort


### Defintion

Quick sort performs partitioning of the list into two sublists and taking a pivot element which is being 
placed in its appropriate position by comparing the elements of original list.

The sublists are being further partitioned against their respective pivot elements until there is no possibility to create any more partitions. 

At this stage all the elements in the list will be in sorted order.

### Explanation

Let L be an unordered list with elements {A1, A2, …, An}

- Step 1
  - Let A1 be chosen as the pivot element,then compare A1 with all the elements in the list moving A1
    left to right until the first occurrence of a greatest number Ai that is greater than or equal to A1, i.e. Ai>=A1.

- Step 2
  - Again A1 is being chosen as the pivot element then compared with all the elements in the list moving A1
    left to right until the first occurrence of a lowest number Aj that is lower than or equal to A1, i.e. Aj<=A1.

- Step 3
  - If i<j the swap Ai and Aj

### Example 

slika


### Time Complexity

Quick sort worst case scenario time coplexity is O(n^2), while average case is θ(n*log(n)) and best case Ω(n*log(n)).

### Space Complexity

O(n)
