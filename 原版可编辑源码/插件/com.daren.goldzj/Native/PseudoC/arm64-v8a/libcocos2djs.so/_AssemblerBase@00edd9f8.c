
/* v8::internal::AssemblerBase::~AssemblerBase() */

void __thiscall v8::internal::AssemblerBase::~AssemblerBase(AssemblerBase *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__AssemblerBase_01ca10f8;
  puVar1 = *(void **)(this + 0x88);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x60);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = pvVar4;
    pvVar3 = *(void **)(this + 0x38);
    if (*(void **)(this + 0x38) != pvVar4) {
      do {
        pvVar5 = (void *)((long)pvVar3 + -0x20);
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar3 = pvVar5;
      } while (pvVar4 != pvVar5);
      pvVar5 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar4;
    operator_delete(pvVar5);
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  plVar2 = *(long **)(this + 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eddaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}

