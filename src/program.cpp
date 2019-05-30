#include "../h/program.h"
#include "../h/errorHandle.h"
Program::Program() {
    
}

void Program::cleanUp() {

}


void Program::resolveProgram(std::string inFile, bool printOut) {
    try {
        this->file=std::shared_ptr<SourceFile>(new SourceFile(inFile,printOut));
    }catch(DankErrors err) {
        err.log();
    }
}