#include<iostream>
#include<vector>

using namespace std;
using std :: vector;

int main(int argc, char const *argv[]){
    vector <int> array;
    int element;
    int temp;
    int size;
    double median;

    while (true){
        size = array.size();
        //cout << size << endl;
        cout << "Enter number: ";
        cin >> element;
        temp = element;

        cout << "sorted array: ";

        if(size == 0){
            array.push_back(element);
        }
        else{
            for(int i=0; i<size; i++){
                if(array.at(i) > element){
                    temp = array.at(i);
                    array.at(i) = element;
                    element = temp;
                }
            }
            array.push_back(element);
        }
        for (int i = 0; i < size+1; i++){
            cout << array.at(i) << " ";
        }
        cout << endl;

        if((size+1)%2 == 0){
            median = (array.at(((size+1)/2)-1)+array.at((size+1)/2))/2.0;
        }
        else{
            median = array.at((size+1)/2.0);
        }
        cout << "Median: " << median << endl;
        cout << endl;
    }
}

