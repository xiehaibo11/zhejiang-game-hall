
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_exception::~bad_exception((bad_exception *)this);
  operator_delete(this);
  return;
}

