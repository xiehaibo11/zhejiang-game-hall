
/* v8::internal::ValueSerializer::WriteJSDate(v8::internal::JSDate) */

void __thiscall v8::internal::ValueSerializer::WriteJSDate(ValueSerializer *this,ulong param_2)

{
  ulong uVar1;
  size_t __size;
  long lVar2;
  long *plVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  double dVar7;
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
      pvVar5 = realloc(*(void **)(this + 0x10),uVar6 + 0x40);
      local_28 = uVar6 + 0x40;
    }
    else {
      pvVar5 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar5 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      uVar4 = *(uint *)(param_2 + 0xb);
      goto joined_r0x01141580;
    }
    *(void **)(this + 0x10) = pvVar5;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined1 *)((long)pvVar5 + lVar2) = 0x44;
  uVar4 = *(uint *)(param_2 + 0xb);
joined_r0x01141580:
  if ((uVar4 & 1) == 0) {
    dVar7 = (double)((int)uVar4 >> 1);
  }
  else {
    dVar7 = *(double *)((param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
  }
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
      pvVar5 = realloc(*(void **)(this + 0x10),__size);
      local_28 = __size;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))
                                 (plVar3,*(void **)(this + 0x10),__size,&local_28);
    }
    if (pvVar5 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar5;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(double *)((long)pvVar5 + lVar2) = dVar7;
  return;
}

