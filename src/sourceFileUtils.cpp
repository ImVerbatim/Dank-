#include <fstream>
#include <sstream>
#include <iostream>

#include "../h/sourceFileUtils.h"

void loadFile(std::string filePath, std::string& contents) {
    
    std::fstream inFile;
    inFile.open(filePath);

    if(!inFile.is_open()){
        throw "could not open " + filePath;
    }
    else {
        std::stringstream strStream;
        strStream << inFile.rdbuf(); //read the file contents
        contents = strStream.str(); //str holds all the contents of the file
        std::cout <<"Contents: " << contents << std::endl;
        inFile.close();
    }
}

