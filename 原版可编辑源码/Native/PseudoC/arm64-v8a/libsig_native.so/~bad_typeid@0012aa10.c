
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}

