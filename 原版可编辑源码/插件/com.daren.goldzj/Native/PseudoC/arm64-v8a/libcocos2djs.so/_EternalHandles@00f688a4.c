
/* v8::internal::EternalHandles::~EternalHandles() */

void __thiscall v8::internal::EternalHandles::~EternalHandles(EternalHandles *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  for (puVar1 = *(undefined8 **)(this + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
    }
  }
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar3;
  operator_delete(pvVar3);
  return;
}

