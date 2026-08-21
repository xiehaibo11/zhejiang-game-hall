
/* std::exception_ptr::~exception_ptr() */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  __cxa_decrement_exception_refcount(*(undefined8 *)this);
  return;
}

