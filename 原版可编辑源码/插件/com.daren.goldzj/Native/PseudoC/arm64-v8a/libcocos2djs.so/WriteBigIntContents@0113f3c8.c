
/* v8::internal::ValueSerializer::WriteBigIntContents(v8::internal::BigInt) */

void __thiscall
v8::internal::ValueSerializer::WriteBigIntContents(ValueSerializer *this,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 local_40;
  size_t local_38;
  
  local_40 = param_2;
  uVar3 = BigInt::GetBitfieldForSerialization((BigInt *)&local_40);
  iVar4 = BigInt::DigitsByteLengthForBitfield(uVar3);
  WriteVarint<unsigned_int>(this,uVar3);
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + iVar4;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_38 = 0;
    uVar6 = *(ulong *)(this + 0x20) * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar5 = realloc(*(void **)(this + 0x10),uVar6 + 0x40);
      local_38 = uVar6 + 0x40;
    }
    else {
      pvVar5 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar5 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(this + 0x10) = pvVar5;
    *(size_t *)(this + 0x20) = local_38;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  BigInt::SerializeDigits((BigInt *)&local_40,(uchar *)((long)pvVar5 + lVar2));
  return;
}

