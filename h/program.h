#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <fstream>
#include <vector>
#include <math.h>
#include <iostream>

#include "../h/VERSION.h"
#include "../h/exceptions.h"


class Program {
    public:
        Program();
        ~Program();
        std::string getFileName();
        void setFileName(std::string);
        void openFile();
    
    
    private:
        std::string fileName;
        NoFileName noFileName;
        FileDoesNotExist fileDoesNotExist;
};


#endif