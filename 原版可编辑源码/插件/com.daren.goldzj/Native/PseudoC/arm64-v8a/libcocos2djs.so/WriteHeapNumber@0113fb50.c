
/* v8::internal::ValueSerializer::WriteHeapNumber(v8::internal::HeapNumber) */

void __thiscall v8::internal::ValueSerializer::WriteHeapNumber(ValueSerializer *this,long param_2)

{
  ulong uVar1;
  size_t __size;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  size_t local_28;
  
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_28 = 0;
    uVar6 = *(ulong *)(this + 0x20) * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar4 = realloc(*(void **)(this + 0x10),uVar6 + 0x40);
      local_28 = uVar6 + 0x40;
    }
    else {
      pvVar4 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar4 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_0113fb98;
    }
    *(void **)(this + 0x10) = pvVar4;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar4 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined1 *)((long)pvVar4 + lVar2) = 0x4e;
LAB_0113fb98:
  uVar5 = *(undefined8 *)(param_2 + 3);
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + 8;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_28 = 0;
    uVar6 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    __size = uVar6 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar4 = realloc(*(void **)(this + 0x10),__size);
      local_28 = __size;
    }
    else {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))
                                 (plVar3,*(void **)(this + 0x10),__size,&local_28);
    }
    if (pvVar4 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar4;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar4 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined8 *)((long)pvVar4 + lVar2) = uVar5;
  return;
}

