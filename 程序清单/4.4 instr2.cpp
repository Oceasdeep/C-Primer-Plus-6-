
#include <iostream>
int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name <<". \n";
    return 0;
}

运行结果：

  Enter your name: 
  xu hai
  Enter your favorite dessert:
  fish eggs
  I have some delicious fish eggs for you, xu hai. 
