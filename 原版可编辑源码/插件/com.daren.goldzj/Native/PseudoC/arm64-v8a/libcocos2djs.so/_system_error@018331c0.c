
/* std::__ndk1::system_error::~system_error() */

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  overflow_error::~overflow_error((overflow_error *)this);
  operator_delete(this);
  return;
}

