#include<iostream>
#include<conio.h>
#include<string.h>
#include <iostream>
using namespace std;
char s[50] = "";

char* bachuso(unsigned int n)
{
    char kyso[10][5] = { "", "mot", "hai", "ba", "bon", "nam", "sau",
                      "bay", "tam", "chin" };
    int donvi, chuc, tram;

    s[0] = 0;
    donvi = n % 10;
    n /= 10;
    chuc = n % 10;
    tram = n / 10;
    if (tram > 0)
    {
        strcat_s(s, kyso[tram]);
        strcat_s(s, " tram ");
    }
    if (chuc > 0)
    {
        if (chuc == 1)
            strcat_s(s, "muoi ");
        else
        {
            strcat_s(s, kyso[chuc]);
            strcat_s(s, " muoi ");
        }
    }
    if (donvi > 0)
    {
        if (chuc == 0 && tram != 0)
            strcat_s(s, "le ");
        if (donvi == 1)
            strcat_s(s, "mot");
        else if (donvi == 5 && (chuc != 0 || tram != 0))
            strcat_s(s, "lam");
        else if (donvi == 5 && (chuc = 0 || tram != 0))
            strcat_s(s, "nam");
        else
            strcat_s(s, kyso[donvi]);
    }
    return s;
}

int main()
{
    unsigned long n;
    unsigned ngan, trieu, ty, donvi;
    char chuoi[200];

    cout<<"\nNhap mot so khong dau : ";
    cin >> n;
    cout<<"So doc bang chu la :"<< n;
    cout << endl;
    if (n == 0)
        cout<<"khong";
    else
    {
        donvi = n % 1000;
        n /= 1000;
        ngan = n % 1000;
        n /= 1000;
        trieu = n % 1000;
        ty = n / 1000;
        chuoi[0] = 0;
        if (ty > 0)
            cout << "ty" << bachuso(ty);
        if (trieu > 0)
            cout <<  "trieu" << bachuso(trieu);
        if (ngan > 0)
            cout << "nghan" << bachuso(ngan);
        if (donvi > 0)
            cout << "" << bachuso(donvi);
    }
    return 0;
}