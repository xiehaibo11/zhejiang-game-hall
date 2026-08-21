
/* v8::internal::CallPrinter::~CallPrinter() */

void __thiscall v8::internal::CallPrinter::~CallPrinter(CallPrinter *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

