# DataStructures
This is the code which I have written practising data structures in c++


Day-1
----------------------------
                                  *** part-1***
------------------------------------
 1- half pattern in cpp of *

---------------------------------------------------------
 2- half pyramid of numbers

---------------------------------------------------------
 3- Half Pyramid of Alphabets

---------------------------------------------------------
 4- Inverted half pyramid of *

---------------------------------------------------------
 5- Inverted half pyramid of numbers

---------------------------------------------------------
 6- Full Pyramid of *
     
---------------------------------------------------------
 7- Full Pyramid of Numbers
     
---------------------------------------------------------
 8- Inverted full pyramid of *

---------------------------------------------------------
 9- Pascal's Triangle
   
 ---------------------------------------------------------
10- Floyd's Triangle

---------------------------------------------------------
                              ***part2***
                                        
                                        
 1. How to find the missing number in integer array of 1 to 100? 
 
This is one of the most simple array problems you will see, mostly asked in a telephonic round of Interview. You have given an integer array which contains numbers from 1 to 100 but one number is missing, you need to write a Java program to find that missing number in an array. You cannot use any open source library or Java API method which solves this problem. One trick to solve this problem is to calculate sum of all numbers in the array and compare with expected sum, the difference would be the missing number.
--------------------------------------------------------------------------------------------------------------------------------------
2. How to find duplicate number on Integer array in Java? 

An array contains n numbers ranging from 0 to n-2. There is exactly one number is repeated in the array. You need to write a program to find that duplicate number. For example, if an array with length 6 contains numbers {0, 3, 1, 2, 3}, then duplicated number is 3. Actually, this problem is very similar to previous one and you can apply the same trick of comparing actual sum of an array to expected sum of series to find out that duplicate. This is generally asked as follow-up question of previous problem.

 --------------------------------------------------------------------------------------------------------------------------------------

3. How to check if array contains a number in Java? 

Another interesting array problem, because array doesn't provide any built-in method to check if any number exists or not. This problem is essentially how to search an element in the array. There are two options sequential search or binary search. You should ask the interviewer about whether an array is sorted or not, if the array is sorted then you can use binary search to check if given number is present in an array or not. The complexity of binary search is O(logN). BTW, if interviewer says that array is not sorted then you can still sort and perform binary search otherwise you can use sequential search. Time complexity of sequential search in array is O(n).
--------------------------------------------------------------------------------------------------------------------------------------

4. How to find largest and smallest number in unsorted array? 

This is a rather simple array interview question. You have given an unsorted integer array and you need to find the largest and smallest element in the array. Of course, you can sort the array and then pick the top and bottom element but that would cost you O(NLogN) because of sorting, getting element in array with index is O(1) operation.

--------------------------------------------------------------------------------------------------------------------------------------
5. How to find all pairs on integer array whose sum is equal to given number? 

This is an intermediate level of array coding question, it's neither too easy nor too difficult. You have given an integer array and a number, you need to write a program to find all elements in the array whose sum is equal to the given number. Remember, the array may contain both positive and negative numbers, so your solution should consider that. Don't forget to write unit test though, even if the interviewer is not asked for it, that would separate you from a lot of developers. Unit testing is always expected from a professional developer.
--------------------------------------------------------------------------------------------------------------------------------------

6.   How to find repeated numbers in an array if it contains multiple duplicates? 

This is actually the follow-up question of problem 2, how to find a duplicate number on integer array. In that case, an array contains only one duplicate but what if it contains multiple duplicates? Suppose, an array contains n numbers ranging from 0 to n-1 and there are 5 duplicates on it, how do you find it? You can use the approach, we have learned in similar String based problem of finding repeated characters in given String.
--------------------------------------------------------------------------------------------------------------------------------------

7. Write a program to remove duplicates from array in Java? 

This is another follow-up question from problem 2 and 6. You have given an array which contains duplicates, could be one or more. You need to write a program to remove all duplicates from array in Java. For example if given array is {1, 2, 1, 2, 3, 4, 5} then your program should return an array which contains just {1, 2, 3, 4, 5}. This array question is also comes at intermediate category because there is no way to delete an element from an array. If substituting with another value is not an option then you need to create another array to mimic deletion.
--------------------------------------------------------------------------------------------------------------------------------------

8. How to sort an array in place using QuickSort algorithm? 

You will often see sorting problems on array related questions because sorting mostly happen on array data structure. You need to write a program to implement in place quick sort algorithm in Java. You can implement either recursive or iterative quicksort, it's your choice but you cannot use additional buffer, array or list, you must sort array in place.
--------------------------------------------------------------------------------------------------------------------------------------

9.   Write a program to find intersection of two sorted arrays in Java? 

Another interesting array interview question, where you need to treat the array as Set. Your task is to write a function in your favorite language e.g. Java, Python, C or C++ to return the intersection of two sorted arrays. For example, if the two sorted arrays as input are {21, 34, 41, 22, 35} and {61, 34, 45, 21, 11}, it should return an intersection array with numbers {34, 21}, For the sake of this problem you can assume that numbers in each integer array are unique.

--------------------------------------------------------------------------------------------------------------------------------------
10. There is an array with every element repeated twice except one. Find that element? 

This is an interesting array coding problem, just opposite of question related to finding duplicates in array. Here you need to find the unique number which is not repeated twice. For example if given array is {1, 1, 2, 2, 3, 4, 4, 5, 5} then your program should return 3. Also, don't forget to write couple of unit test for your solution.

--------------------------------------------------------------------------------------------------------------------------------------

11. How to find kth smallest element in unsorted array? 

You are given an unsorted array of numbers and k, you need to find the kth smallest number in the array. For example if given array is {1, 2, 3, 9, 4} and k=2 then you need to find the 2nd smallest number in the array, which is 2. One way to solve this problem is to sort the array in ascending order then pick the k-1th element, that would be your kth smallest number in array because array index starts at zero, but can you do better? Once you are able to solve this array coding question, you can solve many similar questions easily e.g. our next question.
--------------------------------------------------------------------------------------------------------------------------------------

12. How to find kth largest element in unsorted array? 

This problem is exactly same as previous question with only difference being finding kth largest element instead of kth smallest number. For example if given array is {10, 20, 30, 50, 40} and k = 3 then your program should return 30 because 30 is the 3rd largest number in array. You can also solve this problem by sorting the array in decreasing order and picking k-1th element. I often seen this array question on Java interviews with 2 to 3 years experienced guys.
--------------------------------------------------------------------------------------------------------------------------------------
 
13 How to find common elements in three sorted array? 

Now we are coming on territory of tough array questions. Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

Examples:

input1 = {1, 5, 10, 20, 40, 80}
input2 = {6, 7, 20, 80, 100}
input3 = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20, 80
--------------------------------------------------------------------------------------------------------------------------------------

14. How find the first repeating element in an array of integers? 

Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of the first occurrence is smallest.

Examples:

Input:  input [] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 [5 is the first element that repeats]

--------------------------------------------------------------------------------------------------------------------------------------
15. How to find first non-repeating element in array of integers? 

This array interview question is exactly opposite of previous problem, In that you need to find first repeating element while in this you need to find first non-repeating element. I am sure you can use similar approach to solve this problem, just need to consider non repeating element though.

--------------------------------------------------------------------------------------------------------------------------------------



DAY-2
-----------------------------------------

ARRAY ROTATIONS
------------------------

1. Program for array rotation
--
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
[1,2,3,4,5]
AFTER ROTATION BY 2
[3,4,5,1,2]
 -----------------------------------------------------------------------------------------------------
2. Reversal algorithm for array rotation
 -----------------------------------------------------------------------------------------------------
3. Block swap algorithm for array rotation
 -----------------------------------------------------------------------------------------------------
4. Program to cyclically rotate an array by one
 -----------------------------------------------------------------------------------------------------
5. Search an element in a sorted and rotated array
 -----------------------------------------------------------------------------------------------------
6. Given a sorted and rotated array, find if there is a pair with a given sum
 -----------------------------------------------------------------------------------------------------
7. Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
 -----------------------------------------------------------------------------------------------------
8. Maximum sum of i*arr[i] among all rotations of a given array
 -----------------------------------------------------------------------------------------------------
9. Find the Rotation Count in Rotated Sorted array
 -----------------------------------------------------------------------------------------------------
10. Quickly find multiple left rotations of an array
 -----------------------------------------------------------------------------------------------------
11. Find the minimum element in a sorted and rotated array
 -----------------------------------------------------------------------------------------------------
12. Reversal algorithm for right rotation of an array
 -----------------------------------------------------------------------------------------------------
13. Find a rotation with maximum hamming distance
 -----------------------------------------------------------------------------------------------------
14. Queries on Left and Right Circular shift on array
 -----------------------------------------------------------------------------------------------------
15. Print left rotation of array in O(n) time and O(1) space
 -----------------------------------------------------------------------------------------------------
16. Find element at given index after a number of rotations
 -----------------------------------------------------------------------------------------------------
17. Split the array and add the first part to the end
 -----------------------------------------------------------------------------------------------------
 
 
 
                                                                 DAY-3
 ------------------------------------------------------------------------------------------------
                                                                 STL
 ----------------------------------------------------------------------------------------
                                                                 ****algorithms****
 
Sorting:
--
It is used for sorting an array syntax is sort [array_start_address,array_end_address) it is in header file <algorithm>
  -------------
  
Searching:
--
It is binary search algorithm syntax is binary_search(startaddress,endaddress, valuetofind) it is in header file <algorithm>
  ------------------------
  
Useful Array algorithms:
--
1. all_of():
-
This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.
-
 all_of(ar, ar+6, [](int x) { return x>0; })? 
          cout << "All are positive elements" : 
          cout << "All are not positive elements"; 

---
2. any_of():
-
This function checks for a given range if there’s even one element satisfying a given property mentioned in function. Returns true if at least one element satisfies the property else returns false.
-
any_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 


---
3. none_of():
-
This function returns true if none of elements satisfies the given condition else returns false.
-
 none_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "No negative elements" : 
          cout << "There are negative elements"; 

-----
4. copy_n():
-
copy_n() copies one array elements to new array. This type of copy creates a deep copy of array. This function takes 3 arguments, source array name, size of array and the target array name.
-
 // Using copy_n() to copy contents 
    copy_n(ar, 6, ar1); 
--
5. iota():
-
This function is used to assign continuous values to array. This function accepts 3 arguments, the array name, size, and the starting number.
---
 // Using iota() to assign values 
    iota(ar, ar+6, 20); 

-----------------------------------------------------------------------------------
Partition Operations:
 --for containers--
 1. partition(beg, end, condition) :- This function is used to partition the elements on basis of condition mentioned in its arguments.
 -
 2.  is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned else returns false.
 -
 3. stable_partition(beg, end, condition) :- This function is used to partition the elements on basis of condition mentioned in its arguments in such a way that the relative order of the elements is preserved.
 -
 4. partition_point(beg, end, condition) :- This function returns an iterator pointing to the partition point of container i.e. the first element in the partitioned range [beg,end) for which condition is not true. The container should already be partitioned for this function to work.
 -
 5. partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements in the differenet containers mentioned in its arguments. It takes 5 arguments. Beginning and ending position of container, beginning position of new container where elements have to be copied (elements returning true for condition), beginning position of new container where other elements have to be copied (elements returning false for condition) and the condition. Resizing new containers is necessary for this function.
 -
 ---------------------------------------------------------------------------------------------
 
 valarray class:
 -------------
 1. apply() :- This function applies the manipulation given in its arguments to all the valarray elements at once and returns a new valarray with manipulated values.
----
2. sum() :- This function returns the summation of all the elements of valarrays at once.
 ---
 3. min() :- This function returns the smallest element of valarray.
---
4. max() :- This function returns the largest element of valarray.
---
5. shift() :- This function returns the new valarray after shifting elements by the number mentioned in its argument. If the number is positive, left-shift is applied, if number is negative, right-shift is applied.
----
6. cshift() :- This function returns the new valarray after circularly shifting(rotating) elements by the number mentioned in its argument. If the number is positive, left-circular shift is applied, if number is negative, right-circular shift is applied.

----------------------------------------------------------------------------------
 --------------------------
                                                                  ****containers****
 --------------------------
 
 
 
 
 
 
 
 
 
 
 
 
 
 -----------------------------------------------------------------------------------
 ****iterators****
 -------------------------
 ****functions****
 ------------------------
 -------------------------------------------------------------------
 
 
 DAY-4
 ----------------------------------------------------------------------------------------
