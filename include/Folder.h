#ifndef FOLDER_H
#define FOLDER_H
#include "Luutru.h"
#include "File.h"

class Folder: public Luutru
{
    private:
        File*listfile;
        int n_sofile;
        static int sum;
    public:
        Folder();
        void timkichthuoc();
};

#endif // FOLDER_H
