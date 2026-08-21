
/* std::__ndk1::bad_function_call::~bad_function_call() */

void __thiscall std::__ndk1::bad_function_call::~bad_function_call(bad_function_call *this)

{
  bad_exception::~bad_exception((bad_exception *)this);
  operator_delete(this);
  return;
}

