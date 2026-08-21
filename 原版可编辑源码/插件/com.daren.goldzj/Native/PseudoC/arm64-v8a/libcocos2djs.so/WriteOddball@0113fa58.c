
/* v8::internal::ValueSerializer::WriteOddball(v8::internal::Oddball) */

void __thiscall v8::internal::ValueSerializer::WriteOddball(ValueSerializer *this,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  size_t local_38;
  
  if ((5 < (*(uint *)(param_2 + 0x17) >> 1 & 0xff)) ||
     (uVar3 = *(uint *)(param_2 + 0x17) >> 1, (0x2bU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_38 = 0;
    uVar5 = *(ulong *)(this + 0x20) * 2;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar4 = realloc(*(void **)(this + 0x10),uVar5 + 0x40);
      local_38 = uVar5 + 0x40;
    }
    else {
      pvVar4 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar4 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar4;
    *(size_t *)(this + 0x20) = local_38;
  }
  else {
    pvVar4 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(char *)((long)pvVar4 + lVar2) = (char)(0x5f5f305f5446 >> ((ulong)((uVar3 & 0xff) << 3) & 0x3f));
  return;
}

