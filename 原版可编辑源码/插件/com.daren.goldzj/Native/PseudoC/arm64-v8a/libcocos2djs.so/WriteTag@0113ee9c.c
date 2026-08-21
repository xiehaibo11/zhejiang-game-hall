
/* v8::internal::ValueSerializer::WriteTag(v8::internal::SerializationTag) */

void __thiscall v8::internal::ValueSerializer::WriteTag(ValueSerializer *this,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  size_t local_38;
  
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_38 = 0;
    uVar4 = *(ulong *)(this + 0x20) * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar3 = realloc(*(void **)(this + 0x10),uVar4 + 0x40);
      local_38 = uVar4 + 0x40;
    }
    else {
      pvVar3 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar3 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar3;
    *(size_t *)(this + 0x20) = local_38;
  }
  else {
    pvVar3 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined1 *)((long)pvVar3 + lVar2) = param_2;
  return;
}

