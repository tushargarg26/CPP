#include <iostream>
using namespace std;
int size=0;
void insert(int arr[],int capacity, int key){
    if(size<capacity ){
       arr[size]=key;
        size++;
    }
    else{
        cout<<"CANNOT INSERT ELEMENT, ARRAY IS FULL"<<endl;
    }
    
}
void insertAt(int arr[], int capacity, int index, int element) {
    if (size >= capacity) {
        std::cout << "Array is full. Cannot insert element." << std::endl;
        return;
    }
    if (index < 0 || index > size) {
        std::cout << "Index out of bounds." << std::endl;
        return;
    }
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
}
void deleteAt(int arr[], int index){
    if (index < 0 || index > size){
        cout << "Index out of bounds." << std::endl;
        return;
    }
    for (int i = index; i<size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;

}
void update(int arr[], int index, int key){
     if (index < 0 || index > size){
        cout << "Index out of bounds." << std::endl;
        return;
    }
    arr[index]=key;
}
void print(int arr[], int capacity){
    if (size==0)
    {
        cout<<"ARRAY IS EMPTY"<<endl;
    }else{
        for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int capacity;
    cout<<"Enter the capacity of the Array-";
    cin>>capacity;

   int arr[capacity];
   //Insertion at end of array
   insert(arr,capacity,1);
   insert(arr,capacity,2);
   insert(arr,capacity,4);
   insertAt(arr,capacity,2,3);
   insert(arr,capacity,5);
   //Printing initial array
   print(arr,capacity);
   deleteAt(arr, 2);
   //deletion at index 2
   cout<<"Array after deletion at index 2"<<endl;
   print(arr, capacity);
   insertAt(arr, capacity, 2,120);
   //insertionAt index 2
   cout<<"Array after insertion of 120 at index 2"<<endl;
   print(arr, capacity);
   //updation at index 2
   update(arr,2,150);
   cout<<"Array after updation at index 2"<<endl;
   print(arr, capacity);

}