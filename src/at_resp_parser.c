#include<stdio.h>
#include <string.h>
#include"at_resp_parser.h"
int8_t * del = ":";
at_struct at_cmd_list[]={
//        {(int8_t*)"ATI",&parse_ati},
        {(int8_t*)"+COPS",&parse_cops},
        0};
uint8_t Parse_Response(int8_t * resp)
{
    int8_t *token,*del2="\0";
    token = strtok(resp, del);
    for(int i = 0; at_cmd_list[i].cmd ;i++)
        {
            if(!strcmp(token,at_cmd_list[i].cmd))
                {
                    token = strtok(NULL, del2);
                    at_cmd_list[i].func(token);
                    break;
                }

        }

    return 0;
}

uint8_t parse_ati(int8_t * argv)
{
    if(strcmp("OK",&argv[strlen(argv-5)]))
        {
            printf("Power On Success");
            return 1;
        }

    return 0;
}

uint8_t parse_cops(int8_t *argv)
{
    if(strcmp("OK",&argv[strlen(argv-3)]))
    {
        printf("%s",argv);
        return 1;
    }
    return 0;
}


