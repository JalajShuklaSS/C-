//Bubble Sort
#include <iostream>
void sort (int array[], int size);

int main(){
int array [] = {1, 5, 3, 2, 4, 10,92,22, 8, 0};
int size = sizeof(array)/sizeof(array[0]);

for (int i = 0 ; i< size ; i++){
   std::cout<< array[i]<< "  ";
   
}

std::cout<< "\n"<<"The sorted array is \n";
sort(array, size);
for (int j = 0 ; j< size ; j++){
   std::cout<< array[j]<< "  ";
}


}

void sort (int array[], int size){
   int temp;
   for (int i = 0; i< size-1; i++){
      for (int j = 0; j< size-i-1;j++){
         if (array[j] > array[j+1]){
            temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
         }

      }

   }

}