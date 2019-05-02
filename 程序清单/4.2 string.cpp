


#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++playboy";

    cout << "Howdy! I'm " << name2;
    cout << "! and what's your name?\n";
    cin >> name1;
    cout << "well,hello," << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) <<" bytes.\n";
    cout << "your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 <<endl;
    return 0;
}


运行结果：

Howdy! I'm C++playboy! and what's your name?
hjai
well,hello,hjai, your name has 4 letters and is stored
in an array of 15 bytes.
your initial is h.
Here are the first 3 characters of my name: C++
