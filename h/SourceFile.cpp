#include <iostream>
#include "h/exceptions.h"
#include "h/SourceFile.h"
#include "sourceFileUtils.cpp"

SourceFile::SourceFile(std::string fileNameIn,bool printOutput) {
    fileName = fileNameIn;
    try {
        loadFile(fileNameIn,contents);
        contents+="\n";
    }
    catch(std::string err) {
        std::cout << "Error: " << err << std::endl;
    }
}

std::string SourceFile::getFileName() { return fileName; }

std::string SourceFile::getDirPath() { 
    int i = fileName.size();

    while(i>=0 && fileName[i]!='/') {
        i--;
    }

    return fileName.substr(0,i);
}


//TODO: Implement this function 
std::string getLine(int lineNum) {
    return "your mom";
}
