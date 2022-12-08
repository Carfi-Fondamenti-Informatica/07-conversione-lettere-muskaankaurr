#include "lib.h"

bool carattere (char&a)  {
    bool segnalibro = false;
    if (( a > 64 ) && ( a < 91)) {
        a = a + 32;
        segnalibro = true;
    } else if ( (a > 96) && ( a < 123)){
        a = a - 32;
        segnalibro = true;

    }else {
        segnalibro = false ;
    } return segnalibro;
}
