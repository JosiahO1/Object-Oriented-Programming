//array.cpp
#include <iostream>
using namespace std;

void printMemArr(const int arr[], int size);
void incArrBy10(int arr[], int size);


int main(){
    const int SIZE = 5;
    int arrr[SIZE];

    for(int i = 0; i < SIZE; i++){
        arrr[i] = 100 + i;
    }
    printf("Before ---------------------------\n");
    printMemArr(arrr, SIZE);


    //change the value
    incArrBy10(arrr, SIZE);
    printf("After ---------------------------\n");
    printMemArr(arrr, SIZE);
    

}


void printMemArr(const int arr[], int size){
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++){
        printf("Value %i at Memory Location %p\n", arr[i], arr + i);
    }
    cout << endl;
}

void incArrBy10(int arr[], int size){
    for(int i=0; i < size; i++){
        arr[i] += 10;
    }
}