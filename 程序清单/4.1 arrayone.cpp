

#include <iostream>

int main() {
    using namespace std;
    int yams [3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int  yamcosts[3] = {20,30,5};
    cout << "Total yams = ";
    cout << yams[0] +yams[1] + yams[2] <<endl;
    cout << "the package with " << yams[1] << " yaws costs";
    cout << yamcosts[1] << "cents per yam. \n";
    int total = yams[0] * yamcosts[0] +yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "the total yam expense is " << total <<" cents.\n";

    cout << "\nSize of yams arry = " << sizeof yams;
    cout << "bytes.\n";
    cout << "size of one element = " << sizeof yams[0];
    cout << "bytes.\n";
    return 0;
}


运行结果：

Total yams = 21
the package with 8 yaws costs 30 cents per yam. 
the total yam expense is 410 cents.

Size of yams arry = 12bytes.
size of one element = 4bytes.
