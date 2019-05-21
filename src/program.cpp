#include "../h/program.h"

Program::Program() {
    
}

void Program::cleanUp() {

}


void Program::resolveProgram(std::string inFile, bool printOut) {
    try {
        this->file=std::shared_ptr<SourceFile>(new SourceFile(inFile,printOut));
    }catch(std::string err) {
        std::cout << "Error: " << err << std::endl;
    }
}