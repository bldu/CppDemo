#include "interface.h"

int main(int argc, char *argv[])
{
    MyClassHandle handle = myclass_create();
    myclass_do_something(handle);
    myclass_destroy(handle);

    return 0;
}
