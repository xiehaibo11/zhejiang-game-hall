
/* v8::internal::interpreter::Interpreter::~Interpreter() */

void __thiscall v8::internal::interpreter::Interpreter::~Interpreter(Interpreter *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x1810);
  *(undefined8 *)(this + 0x1810) = 0;
  *(undefined ***)this = &PTR__Interpreter_01cacb58;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(this);
  return;
}

