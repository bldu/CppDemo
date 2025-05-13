#ifndef C_PIMPL_INCLUDE_INTERFACE_H_
#define C_PIMPL_INCLUDE_INTERFACE_H_


struct MyClassImpl;
using MyClassHandle = MyClassImpl*;

MyClassHandle myclass_create();
void myclass_do_something(MyClassHandle handle);
void myclass_destroy(MyClassHandle handle);


#endif  // C_PIMPL_INCLUDE_INTERFACE_H_
