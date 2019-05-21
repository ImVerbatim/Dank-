#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <fstream>
#include <vector>
#include <math.h>
#include <iostream>
#include <memory>

#include "../h/VERSION.h"
#include "../h/exceptions.h"
#include "SourceFile.h"

class Program {
    public:
        Program();
        ~Program() { cleanUp(); };
        void resolveProgram(std::string, bool);

    private:

        void cleanUp();
    
    private:
        
        //std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer.
        //Several shared_ptr objects may own the same object. 
        std::shared_ptr<SourceFile> file = nullptr;
};


#endif