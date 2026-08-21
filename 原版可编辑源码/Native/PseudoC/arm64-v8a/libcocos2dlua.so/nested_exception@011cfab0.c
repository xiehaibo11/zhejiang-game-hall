
/* std::nested_exception::nested_exception() */

void __thiscall std::nested_exception::nested_exception(nested_exception *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__nested_exception_0172dc38;
  uVar1 = __cxa_current_primary_exception();
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

