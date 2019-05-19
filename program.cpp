#include "h/program.h"


    void Program::setFileName(std::string aFileName) {
        fileName = aFileName;
    }


    std::string Program::getFileName() {
        return fileName;
    }

    void Program::openFile() {
        
        if(fileName == "") {
            throw noFileName;
        }

        std::string line;
        std::fstream myfile;
        myfile.open(fileName);

        if(myfile.is_open()) {
            while(getline(myfile,line)) {
                for(int i = 0; i < line.size(); ++i) {
                    std::cout << line[i] << ",";                        
                    }
                }
        myfile.close();
        }

        else {
            throw fileDoesNotExist;
        }
    }
