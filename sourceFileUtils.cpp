#include <fstream>
#include <sstream>
#include <string>
#include <iostream>


void loadFile(std::string filePath, std::string& contents) {
    
    std::fstream inFile;
    inFile.open(filePath);

    if(!inFile.is_open()){
        std::cout << "Cannot open file" << std::endl;         
    }
    else {
        std::stringstream strStream;
        strStream << inFile.rdbuf(); //read the file contents
        contents = strStream.str(); //str holds all the contents of the file
        std::cout <<"Contents: " << contents << std::endl;
        inFile.close();
    }
}

