#include "program.cpp"
#include "SourceFile.cpp"

struct Flags {
    std::string myPath;
    std::vector<std::string> inFiles;   
    bool help=false;
    bool version=false;
    bool flagError=false;
};

Flags getFlags(int argc, char *argvp[]);

int main(int argc, char* argv[]) {

    Flags flags=getFlags(argc, argv);

    Program program;

    if (flags.help) {
        std::cout << "Dank++ " << VERSION_X << "." << VERSION_Y << "." << VERSION_Z << std::endl;
        std::cout << "Usage: ./a.out [options] [source file] [options]" << std::endl;
        std::cout << "-v, -version      display the version of Dank++" << std::endl;
        std::cout << "-h, -help          display this help and quit" << std::endl;
    }

    if(flags.version) {
        std::cout << "Version " << VERSION_X << "." << VERSION_Y << "." << VERSION_Z << std::endl;
    }

    else if(flags.inFiles.empty() && !flags.help) {
        std::cout << "No source file specified" << std::endl;
        std::cout << "For help, try -h for help" << std::endl;
    }

    else if(flags.inFiles.size()>1) {
        std::cout << "Multiple sources files passed" << std::endl;
        std::cout << "For help, try -h for help" << std::endl;
    }


    //TODO: Increase the level of inheritance
    else if(flags.inFiles.size() == 1) {
        program.resolveProgram(flags.inFiles[0],false);
    }

    //Program program;
    NoFileName noFileName;
    
    /*
    if (argv[1] == NULL){
        throw noFileName;
    }else { 
        //program.setFileName(*argv[1]);
    }
    std::cout << program.getFileName() << std::endl;

    program.openFile();
*/
    return 0;
}


Flags getFlags(int argc, char * argv[]) {
    Flags flags;

    //iterate each arguement 
    for(int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);

        if(arg.size() > 1 && arg[0] =='-') {

            //splits the args into different substrings 
            std::string flag=arg.substr(1,std::string::npos);

            if(flag=="h" || flag =="help") {
                flags.help = true;
            }
            else if(flag=="v" || flag =="version") {
                flags.version = true;
            }

            else {
                std::cout << "Unknown Flag '" + flag+"'" << std::endl;
                flags.flagError=true;
            }
            
        }

        else {
            flags.inFiles.push_back(arg);
        }
    }

    return flags;
}
