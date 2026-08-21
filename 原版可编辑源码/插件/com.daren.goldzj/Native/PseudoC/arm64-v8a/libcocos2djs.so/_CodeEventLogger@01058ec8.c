
/* v8::internal::CodeEventLogger::~CodeEventLogger() */

void __thiscall v8::internal::CodeEventLogger::~CodeEventLogger(CodeEventLogger *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__CodeEventLogger_01cb1f20;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

