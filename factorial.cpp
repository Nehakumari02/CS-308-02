#include "functions.h"

int factorial(int n){
    if(n<0){
        cout<<"re-enter a positive number";
        cout<<"hello";
        return 0;
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
