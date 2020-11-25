#include <iostream>
#include <vector>

void printVector (std::vector<int> printed, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << printed[i] << " ";
    }
}

std::vector<int> removeFirstNumber (std::vector<int> list) {
    std::vector<int> result;
    for (int i = 1; i < list.size(); i++){
        result.push_back(list[i]);
    }
    return result;
}

int main() {
    int inputingNumber, realSize = 0;
    std::vector<int> numbers;
    std::cout << "Input numbers:\n" ;
    while(inputingNumber != -1) {
        std::cin >> inputingNumber;
        if (realSize == 20) {
            numbers = removeFirstNumber(numbers);
            realSize--;
        }
            numbers.push_back(inputingNumber);
            realSize++;
    }
    printVector(numbers, realSize);
    return 0;
}
