#include <stdio.h>

int main(void){
        int primos[15000] = {};
        int length = 0, real = 0, maior = 0;

        for(int i=2; i!=1000000; i++){
                int primo = 1;
                for(int c=0; c!=length; c++){
                        if(i%primos[c] == 0){
                                if (primos[c] > maior){
                                        maior = primos[c];
                                }
                                primo = 0;
                                break;
                        }
                }

                if (primo == 1){
                        if (i < 997){
                                primos[length] = i;
                                length++;
                        }
                        printf("[%d]  ", i);
                        real++;
                }
        }
        printf("Lista: %d, %d, %d, _%d_", real, primos[length-1], maior, length);
}
