
/* v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsSetInRange(unsigned int,
   unsigned int) */

bool __thiscall
v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsSetInRange
          (ConcurrentBitmap<(v8::internal::AccessMode)1> *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 <= param_1) {
    return false;
  }
  uVar3 = param_1 >> 5;
  uVar5 = (ulong)uVar3;
  uVar4 = param_2 - 1 >> 5;
  iVar1 = 1 << (ulong)(param_1 & 0x1f);
  uVar2 = 1 << (ulong)(param_2 - 1 & 0x1f);
  if (uVar3 == uVar4) {
    uVar2 = (uVar2 - iVar1 | uVar2) & (*(uint *)(this + uVar5 * 4) ^ 0xffffffff);
  }
  else {
    if ((-iVar1 & (*(uint *)(this + (ulong)uVar3 * 4) ^ 0xffffffff)) != 0) {
      return false;
    }
    while (uVar5 = uVar5 + 1, uVar5 < uVar4) {
      if (*(int *)(this + uVar5 * 4) != -1) {
        return false;
      }
    }
    uVar2 = (uVar2 - 1 | uVar2) & (*(uint *)(this + (ulong)uVar4 * 4) ^ 0xffffffff);
  }
  return uVar2 == 0;
}

