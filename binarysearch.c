#include <stdio.h>
int BinarySearch(int array[], int start, int end, int x){
   if (end >= start){
      int middle = start + (end - start )/2;
      if (array[middle] == x)
         return middle;
      if (array[middle] > x)
         return BinarySearch(array, start, middle-1, x);
      return BinarySearch(array, middle+1, end, x);
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int x =9;
   int found = BinarySearch(array, 0, n-1, x);
   if(found == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found);
   }
   return 0;
}
