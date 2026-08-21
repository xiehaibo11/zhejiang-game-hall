
/* v8::internal::ValueSerializer::WriteJSObjectSlow(v8::internal::Handle<v8::internal::JSObject>) */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteJSObjectSlow(ValueSerializer *this,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t local_28;
  
  lVar2 = *(long *)(this + 0x18);
  uVar3 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar3) {
    local_28 = 0;
    uVar4 = *(ulong *)(this + 0x20) * 2;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar1 = realloc(*(void **)(this + 0x10),uVar4 + 0x40);
      local_28 = uVar4 + 0x40;
    }
    else {
      pvVar1 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar1;
      *(size_t *)(this + 0x20) = local_28;
      goto LAB_01143928;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar1 = *(void **)(this + 0x10);
LAB_01143928:
    *(ulong *)(this + 0x18) = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x6f;
  }
  lVar2 = KeyAccumulator::GetKeys(param_2,0,0x12,1,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = WriteJSObjectPropertiesSlow(this,param_2,lVar2);
  if ((uVar3 & 0xff) == 0) {
    return 0;
  }
  lVar2 = *(long *)(this + 0x18);
  uVar4 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar4) {
    local_28 = 0;
    uVar5 = *(ulong *)(this + 0x20) * 2;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar1 = realloc(*(void **)(this + 0x10),uVar5 + 0x40);
      local_28 = uVar5 + 0x40;
    }
    else {
      pvVar1 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar1 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01143998;
    }
    *(void **)(this + 0x10) = pvVar1;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar1 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7b;
LAB_01143998:
  WriteVarint<unsigned_int>(this,(uint)(uVar3 >> 0x20));
  if (this[0x29] != (ValueSerializer)0x0) {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    return 0;
  }
  return 0x101;
}

