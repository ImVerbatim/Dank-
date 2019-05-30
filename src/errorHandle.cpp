#include "../h/errorHandle.h"


ErrorHandler error;
std::string ErrorHandler::priorityToStr(ErrorPriority err) {
    if(err == SOURCE_ERROR) {
        return "SOURCE ERROR";
    }
     else if(err == SOURCE_WARNING) {
        return "SOURCE WARNING";
    }
    else if(err == INTERNAL_ERROR) {
        return "INTERNAL ERROR";
        }
    else if(err == RUNTIME_ERROR) {
        return "RUNTIME ERROR";
        }
    else {
        return "UNRECORDED ERROR FOUND";
    }
}
void ErrorHandler::log(std::string msg, ErrorPriority err) {
    isError = true;
    std::cout << priorityToStr(err) << ": " << msg << std::endl;
}

void ErrorHandler::msg(std::string msg) {
    std::cout << "message: " <<  msg << std::endl;
}


DankErrors::DankErrors(std::string msg, ErrorPriority errPri) {
    std::cout << "Hit dank errors call" << std::endl;
    this->msg = msg;
    this-> errPriority = errPri;
}

void DankErrors::log() {
    error.log(msg,errPriority);
}