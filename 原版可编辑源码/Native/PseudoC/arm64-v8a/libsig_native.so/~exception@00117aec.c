
/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  operator_delete(this);
  return;
}

