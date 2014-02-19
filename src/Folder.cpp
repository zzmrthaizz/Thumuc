#include "Folder.h"

using namespace std;

Folder::Folder()
{
    n_sofile = 0;
    listfile = new File[n_sofile];
}
void Folder::timkichthuoc()
{
    for (int i = 1; i < n_sofile; i++)
    {
        sum = sum +listfile[i].getKichThuoc();
    }
}

