#include <stdio.h>
struct pininfo{
    int pin_number;
    char pin_name[10],pin_type[20],decription[50];
    };

int main()
{
    int i;
    struct pininfo pin[64];
    for(i=0;i<64;i++){
        printf("\nenter the details of the pin[%d] in the order pin number,pin name,pin type,description:-\n",i+1);
        scanf("%d %s %s %s",&pin[i].pin_number,pin[i].pin_name,pin[i].pin_type,pin[i].decription);
        
    }
    for(i=0;i<64;i++){
        printf("the information of pin[%d] is pin number %d with name %s and type %s is as shown:%s",i+1,pin[i].pin_number,pin[i].pin_name,pin[i].pin_type,pin[i].decription);
    }

    return 0;
}
