#include <getopt.h>

namespace Tasks{
    int main(int argc, char* argv[]){
        int option;
        while ((option = getopt(argc, argv, "f:v")) != -1) {
            
            return 0; 
        }
    }
}