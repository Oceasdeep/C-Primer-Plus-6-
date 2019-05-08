#include <iostream>

int main() {
    using namespace std;
    cout << "what year was your house built?\n";
    int year =0;
    cin >> year;
    cout << "what is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Years built:" << year <<endl;
    cout << "Address:" << address <<endl;
    cout << "Done!\n";
    return 0;
}



运行结果：
what year was your house built?
2019
what is its street address?
Years built:2019
Address:
Done!
