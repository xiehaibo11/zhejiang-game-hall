
/* v8::internal::SerializedHandleChecker::~SerializedHandleChecker() */

void __thiscall
v8::internal::SerializedHandleChecker::~SerializedHandleChecker(SerializedHandleChecker *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__SerializedHandleChecker_01cbbc40;
  puVar1 = *(void **)(this + 0x20);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}

