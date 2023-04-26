#include <iostream>
#include <ctime>

using namespace std;

void XX(int& a, int& b, int pre)
{
    if(a > 100){
        cout << "Nguoi choi 1 khong the thang";
    }
    else if(b > 100){
        cout << "Nguoi choi 2 khong the thang";
    }
    else if(a == 100){
        cout << "Nguoi choi 1 thang";
    }
    else if(b == 100){
        cout << "Nguoi choi 2 thang";
    }
    else if(a == b){
        if(pre = 2){
            int xx = rand() % 6 + 1;
            a += xx;
            pre = 1;
            XX(a, b, pre);
        }
        else{
            int xx = rand() % 6 + 1;
            b += xx;
            pre = 2;
            XX(a, b, pre);
        }
    }
    else if(a < b){
        pre = 1;
        int xx = rand() % 6 + 1;
        a += xx;
        pre = 1;
        cout << "xuc xac nguoi choi 1: " << xx << "\t" << "Tong nguoi choi 1: " << a << endl;
        XX(a, b, pre);
    }
    else{
        pre = 2;
        int xx = rand() % 6 + 1;
        b += xx;
        pre = 1;
        cout << "xuc xac nguoi choi 2: " << xx << "\t" << "Tong nguoi choi 2: " << b << endl;
        XX(a, b, pre);
    }
}

int main()
{
    srand(time(0));
    int score1 = 0, score2 = 0;
    int pre = 2;
    XX(score1, score2, pre);
    return 0;
}
