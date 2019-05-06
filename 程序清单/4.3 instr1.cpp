

#include <iostream>

int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n" ;
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}

运行结果：

  Enter your name:
  xu
  Enter your favorite dessert:
  suger
  I have some delicious suger for you, xu.
