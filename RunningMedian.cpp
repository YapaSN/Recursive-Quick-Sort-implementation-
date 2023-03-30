#include<iostream>
#include<vector>

using namespace std;
using std :: vector;

void getMedian(vector <int> array){
    int size = array.size();
    // int temp = element;
    // // int j = 0;
    double median;

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
    }
    return 0;
}
