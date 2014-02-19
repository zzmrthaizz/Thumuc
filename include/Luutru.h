#ifndef LUUTRU_H
#define LUUTRU_H
#include <iostream>

using namespace std;

class Luutru
{
    private:
        string Ten;
        int KichThuoc;
    public:
        Luutru();
        string getTen ();
        void setTen(string n_Ten);
        int getKichThuoc ();
        void setKichThuoc(int n_KichThuoc);
};

#endif // LUUTRU_H
