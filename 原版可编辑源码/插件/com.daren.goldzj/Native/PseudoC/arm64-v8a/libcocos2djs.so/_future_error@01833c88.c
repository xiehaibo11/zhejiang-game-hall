
/* std::__ndk1::future_error::~future_error() */

void __thiscall std::__ndk1::future_error::~future_error(future_error *this)

{
  invalid_argument::~invalid_argument((invalid_argument *)this);
  operator_delete(this);
  return;
}

