#include <stdio.h>

int main(void){
        int primos[100000] = {2};
        int length = 1;

        for(int i=3; i!=100000; i++){
                int primo = 1;
                for(int c=0; c!=length; c++){
                        if(i%primos[c] == 0){
                                primo = 0;
                                break;
                        }
                }

                switch(primo){
                        case 1:
                                primos[length] = i;
                                printf("%d\n", i);
                                length++;
                                break;
                }
        }
        printf("Lista: %d", length);
}
