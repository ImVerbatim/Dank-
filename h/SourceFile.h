#pragma once


#include <string>

class SourceFile
{
    public:
        SourceFile() {
            fileName = "[empty_file]";
            contents = "";
        }

        SourceFile(std::string,bool);

        std::string getDirPath();
        std::string getFileName();
        std::string getLine(int);

        inline int getSizeOfContent() { return contents.size(); }
    
    private:
        std::string fileName;
        std::string contents;
};

