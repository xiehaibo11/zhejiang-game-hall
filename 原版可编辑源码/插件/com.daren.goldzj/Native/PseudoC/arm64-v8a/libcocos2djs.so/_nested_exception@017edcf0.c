
/* std::nested_exception::~nested_exception() */

void __thiscall std::nested_exception::~nested_exception(nested_exception *this)

{
  *(undefined ***)this = &PTR__nested_exception_01cdb298;
  __cxa_decrement_exception_refcount(*(undefined8 *)(this + 8));
  operator_delete(this);
  return;
}

