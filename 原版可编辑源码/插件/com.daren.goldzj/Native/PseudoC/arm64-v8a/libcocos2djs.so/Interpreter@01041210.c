
/* v8::internal::interpreter::Interpreter::Interpreter(v8::internal::Isolate*) */

void __thiscall
v8::internal::interpreter::Interpreter::Interpreter(Interpreter *this,Isolate *param_1)

{
  Interpreter *pIVar1;
  void *__s;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__Interpreter_01cacb58;
  *(Isolate **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x1818) = 0;
  *(undefined8 *)(this + 0x1810) = 0;
  memset(this + 0x10,0,0x1800);
  if (FLAG_trace_ignition_dispatches != '\0') {
    pIVar1 = this + 0x1810;
    __s = operator_new__(0x41688);
    pvVar2 = *(void **)pIVar1;
    *(void **)pIVar1 = __s;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
      __s = *(void **)pIVar1;
    }
    memset(__s,0,0x41688);
  }
  return;
}

