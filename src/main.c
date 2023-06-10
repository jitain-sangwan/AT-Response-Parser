#include<stdio.h>
#include<stdint.h>
#include"at_resp_parser.h"
int main()
{
//    int8_t response[100] = "ATI\r\nQuectel\r\nEC200U\r\nRevision: EC200UCNAAR01A04M08\r\nOK\r\n";
    int8_t response[100] ="+COPS: 0,0,\"CHN-UNICOM\",7\r\n\r\nOK";


    Parse_Response(response);


return 0;
}