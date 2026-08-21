
/* v8::internal::ValueSerializer::WriteHeader() */

void __thiscall v8::internal::ValueSerializer::WriteHeader(ValueSerializer *this)

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
      goto LAB_0113ee14;
    }
    *(void **)(this + 0x10) = pvVar3;
    *(size_t *)(this + 0x20) = local_38;
  }
  else {
    pvVar3 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined1 *)((long)pvVar3 + lVar2) = 0xff;
LAB_0113ee14:
  WriteVarint<unsigned_int>(this,0xd);
  return;
}

