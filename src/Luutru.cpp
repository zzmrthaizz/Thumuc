#include "Luutru.h"

Luutru::Luutru()
{
    this->Ten = "";
    KichThuoc = 0;
}

string Luutru::getTen()
{
    return this->Ten;
}
void Luutru::setTen(string n_Ten)
{
    this->Ten = n_Ten;
}
int Luutru::getKichThuoc()
{
    return this->KichThuoc;
}
void Luutru::setKichThuoc(int n_KichThuoc)
{
    this->KichThuoc = n_KichThuoc;
}
