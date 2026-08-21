
/* void v8::internal::ValueSerializer::WriteVarint<unsigned char>(unsigned char) */

void __thiscall
v8::internal::ValueSerializer::WriteVarint<unsigned_char>(ValueSerializer *this,uchar param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  void *pvVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  size_t __n;
  byte local_44 [4];
  size_t local_28;
  
  uVar6 = (uint)param_1;
  pbVar4 = local_44;
  do {
    pbVar7 = pbVar4;
    bVar3 = (byte)uVar6;
    *pbVar7 = bVar3 | 0x80;
    uVar6 = uVar6 >> 7;
    pbVar4 = pbVar7 + 1;
  } while ((char)bVar3 < '\0');
  *pbVar7 = bVar3;
  lVar2 = *(long *)(this + 0x18);
  __n = (long)(pbVar7 + 1) - (long)local_44;
  uVar1 = lVar2 + __n;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_28 = 0;
    uVar8 = *(ulong *)(this + 0x20) * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar5 = realloc(*(void **)(this + 0x10),uVar8 + 0x40);
      local_28 = uVar8 + 0x40;
    }
    else {
      pvVar5 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar5 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar5;
    *(size_t *)(this + 0x20) = local_28;
    *(ulong *)(this + 0x18) = uVar1;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
    *(ulong *)(this + 0x18) = uVar1;
  }
  if (__n != 0) {
    memcpy((void *)((long)pvVar5 + lVar2),local_44,__n);
  }
  return;
}

