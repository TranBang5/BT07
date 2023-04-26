/*Rua va Tho*/
#include <iostream>
#include <ctime>

using namespace std;



void chay(int& viTri,int buoc)
{
    viTri += buoc;
    if(viTri < 0) viTri = 0;
}

void racing(int& vtRua, int& vtTho)
{
    if(vtRua == vtTho && vtRua == 70){
        cout << "Hoa!" << endl;
        return;
    }
    else if(vtRua >= 70){
        cout << "Rua thang! " << endl;
        return;
    }
    else if(vtTho >= 70){
        cout << "Tho thang! " << endl;
        return;
    }

    int rua = rand() % 10 + 1;
    if(rua > 5) rua = 3;
    else if(rua > 2) rua = 1;
    else rua = -6;
    chay(vtRua, rua);

    int tho = rand() % 10 + 1;
    if(tho > 8) tho = 0;
    else if(tho > 6) tho = 9;
    else if(tho > 5) tho = -12;
    else if(tho > 2) tho = 1;
    else tho = -2;
    chay(vtTho, tho);

    cout << "R(" << vtRua << ") & T(" << vtTho << ")" << endl;
    racing(vtRua, vtTho);
}

int main()
{
    srand(time(0));
    cout << "Game START: " << endl;
    int vtRua = 0, vtTho = 0;
    racing(vtRua, vtTho);
    return 0;
}
