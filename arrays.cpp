#include<iostream>
using namespace std;

void displayArray(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void searchElement(int array[], int arraySize, int searchValue) {
    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == searchValue) {
            cout << "Element " << searchValue << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << searchValue << " not found in the array!" << endl;
    }
}

void deleteElement(int array[], int &arraySize, int deleteValue) {
    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == deleteValue) {
            // Shift elements to the left
            for (int j = i; j < arraySize - 1; j++) {
                array[j] = array[j + 1];
            }
            arraySize--; 
            found = true;
            cout << "Element " << deleteValue << " deleted!" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element " << deleteValue << " not found in the array!" << endl;
    }
}

void retrieveElements(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter a number: ";
        cin >> array[i];
    }
}

int main() {
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5}; 
    
    retrieveElements(arr, size);

    cout << "Array elements: ";
    displayArray(arr, size);

    int searchValue;
    cout << "Enter the element you want to search: ";
    cin >> searchValue;
    searchElement(arr, size, searchValue);

    int deleteValue;
    cout << "Enter the number you want to delete: ";
    cin >> deleteValue;
    deleteElement(arr, size, deleteValue);

    cout << "Array after deletion: ";
    displayArray(arr, size);

    return 0;
}