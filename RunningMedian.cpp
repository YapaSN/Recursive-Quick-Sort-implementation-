#include<iostream>
#include<vector>

using namespace std;
using std :: vector;

// void addElement(int array[], int element){
//     // cout << "step 1 ";
//     // for (int i = 0; i < (sizeof(array)/4); i++)
//     // {
//     //     cout << array[i] << "\t";
//     // }
//     // cout << endl;
    
//     int size = ((sizeof(array)/4)+1);
//     int newArr[size];

//     cout << "sorted array: ";
    
//     if (size == 2){
//         newArr[0] = element;
//         for (int i = 0; i < size; i++)
//         {
//             cout << newArr[i] << " ";
//         }
//         cout << endl;
        
//         return;
//     }
//     for (int i = 0; i < size; i++){
//         if(array[i] <= element){
//             newArr[i] = array[i];
//         }
//         else{
//             newArr[i] = element;
//         }
//         for (int i = 0; i < size; i++){
//             cout << newArr[i] << " ";
//         }
//     cout << endl;

//     }return;
// }

// void getMedian(int array[]){
//     int length = (sizeof(array)/4);
//     double median;

//     cout << "Array: ";

//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << "\t";
//     }
    
//     if (length/2 == 0)
//     {
//         median = (array[(length/2)-1] + array[length/2])/2;
//     } else {
//         median = array[length/2];
//     }
//     cout << median << endl;
    
// }



void getMedian(vector <int> array){
    int size = array.size();
    // int temp = element;
    // // int j = 0;
    double median;

    // cout << "sorted array: ";

    // if(size == 0){
    //     array.push_back(element);
    //     cout << array.at(0) << endl;
    //     cout << "median: " << array.at(0) << endl;
    //     return;
    // }
    // for(int i = 0; i < size; i++){
    //     if(array.at(i) <= element){
    //         continue;
    //     }
    //     else{
    //         element = array.at(i);
    //         array.at(i) = temp;
    //     }
    //     array.push_back(element);
    // }
    // for(int i=0; i<size+1; i++){
    //     cout << array.at(i) << " ";
    // }
    // cout << endl;

    if(size%2 == 0){
        median = (array.at(size/2)+array.at((size/2)-1))/2;
    }
    else{
        median = array.at(size/2);
    }
    cout << "median: " << median << endl;
    return;
}


int main(int argc, char const *argv[])
{
    vector <int> array;
    int size;
    int element;
    int temp;
    double median;

    while(true){
        size = array.size();

        cout << "Enter number: ";
        cin >> element;
        int temp = element;
        
        cout << "sorted array: ";
        if(size == 0){
            array.push_back(element);
            cout << array.at(0) << endl;
            // cout << "median: " << array.at(0) << endl;
        }
        else {
            for(int i = 0; i < size; i++){
                if(array.at(i) <= element){
                    continue;
                }
                else{
                    element = array.at(i);
                    array.at(i) = temp;
                }
                array.push_back(element);
            }
        }
        for(int i : array){
            cout << i<< endl;
        }
        //getMedian(array);



    //     // addElement(array, element);
    //     int newArray[] = getMedian(array, element);
    //     array = ne
    }
    return 0;
}
