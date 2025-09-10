#include<types.h>
#include<lib.h>
#include<syscall.h>

int sys_add_three_integers(int a, int b, int c, int *retval){
    *retval = a + b + c;
    return 0;
}

void sys_print_int(const char str[], int x){
    kprintf("%s %d\n", str, x);
}
