
/* v8::internal::ReturnValueScope::~ReturnValueScope() */

void __thiscall v8::internal::ReturnValueScope::~ReturnValueScope(ReturnValueScope *this)

{
  *(undefined8 *)(*(long *)this + 0x68) = **(undefined8 **)(this + 8);
  return;
}

