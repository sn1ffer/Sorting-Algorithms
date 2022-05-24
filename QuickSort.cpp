#include <iostream>
using namespace std;

void QuickSort(int *ar, int end) {
    int start = 0;
    int mid = ar[(end+1) / 2];
    while (start <= end){
        while(ar[start] < mid){
            start++;
        }
        while(ar[end]> mid){
            end--;
        }
        if (start <= end){
            int tmp = ar[start];
            ar[start] = ar[end];
            ar[end] = tmp;
        }
    }
    if(end > 0){
        QuickSort(ar, start+1);
    }
    if(start < end){
        QuickSort(&ar[start], end);
    }
}

int main(){
    int count;
    cout<<"Введите кол-во элементов массива: ";
    cin >> count;
    cout << "Введите элементы массива: ";
    int arr[count];
    for (int i=0; i < count;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    QuickSort(arr, count-1);
};

