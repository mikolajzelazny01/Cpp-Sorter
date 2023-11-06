#include <iostream>

using namespace std;

class Sorter {
    private:
        int number;
        int* sorted;
    public:
        Sorter();
        ~Sorter();
        void Read_Data();
        void Sort_Data();
        void Show_Results();
};

Sorter::Sorter() {
    cout << "How many numbers do you want to sort?" << endl;
    cin >> number;
    sorted = new int[number];
}

Sorter::~Sorter() {
    delete[] sorted;
}

void Sorter::Read_Data() {
   
    for (int i = 0; i < number; i++){
        cout << "Enter a number: " << endl;
        cin >> sorted[i];
    }
}

void Sorter::Sort_Data() {
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            if (sorted[j] > sorted[j + 1]) {
                swap(sorted[j], sorted[j + 1]);
            }
        }
    }
}

void Sorter::Show_Results() {
    cout << "Numbers:" << endl;
    for(int i = 0; i < number; i++) {
        cout << sorted[i] << " ";
    }

}

int main() {
    
    Sorter obj1;
    obj1.Read_Data();
    obj1.Sort_Data();
    obj1.Show_Results();

    return 0;
}