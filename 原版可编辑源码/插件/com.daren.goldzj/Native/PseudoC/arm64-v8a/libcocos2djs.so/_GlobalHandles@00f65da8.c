
/* v8::internal::GlobalHandles::~GlobalHandles() */

void __thiscall v8::internal::GlobalHandles::~GlobalHandles(GlobalHandles *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x2000);
      operator_delete(pvVar1);
      pvVar1 = pvVar3;
    }
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x2000);
      operator_delete(pvVar1);
      pvVar1 = pvVar3;
    }
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar1 = *(void **)((long)pvVar2 + 8);
  while (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar1 + 0x2000);
    operator_delete(pvVar1);
    pvVar1 = pvVar3;
  }
  operator_delete(pvVar2);
  return;
}

