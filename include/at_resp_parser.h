#ifndef AT_REP_DEFINE_h
#define AT_REP_DEFINE_h
#include<stdint.h>



#define ECHO_STATE 1



/******************************************
 *  Variables and Structures Declarations *
 ******************************************/
typedef struct{
    int8_t * cmd;
    uint8_t (*func)(int8_t*);
}at_struct;



/******************************
 *  Function Declaration      *
 * **************************** */

uint8_t Parse_Response(int8_t * resp);
uint8_t parse_ati(int8_t* argv);
uint8_t parse_cops(int8_t *argv);


#endif