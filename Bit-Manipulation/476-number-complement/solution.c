#include <stdint.h>


int findComplement(int num) {
    uint32_t result = 0;
    uint32_t shift = 0;
    
    
    while (num > 0) {
     
        if (!(num & 1)) {
            
            result |= (1 << shift);
        }
        
        num >>= 1;
        shift++;     
    }
    return result;
}