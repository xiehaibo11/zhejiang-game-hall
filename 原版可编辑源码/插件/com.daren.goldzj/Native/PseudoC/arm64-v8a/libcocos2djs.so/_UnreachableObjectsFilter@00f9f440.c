
/* v8::internal::UnreachableObjectsFilter::~UnreachableObjectsFilter() */

void __thiscall
v8::internal::UnreachableObjectsFilter::~UnreachableObjectsFilter(UnreachableObjectsFilter *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  plVar2 = *(long **)(this + 0x28);
  *(undefined ***)this = &PTR__UnreachableObjectsFilter_01ca7c60;
  if (plVar2 != (long *)0x0) {
    do {
      puVar4 = (undefined8 *)plVar2[3];
      if (puVar4 != (undefined8 *)0x0) {
        puVar1 = (void *)puVar4[2];
        while (puVar1 != (void *)0x0) {
          pvVar3 = (void *)*puVar1;
          operator_delete(puVar1);
          puVar1 = pvVar3;
        }
        pvVar3 = (void *)*puVar4;
        *puVar4 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        operator_delete(puVar4);
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    puVar4 = *(void **)(this + 0x28);
    while (puVar4 != (void *)0x0) {
      pvVar3 = (void *)*puVar4;
      operator_delete(puVar4);
      puVar4 = pvVar3;
    }
  }
  pvVar3 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}

