
/* v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsClearInRange(unsigned int,
   unsigned int) */

bool __thiscall
v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsClearInRange
          (ConcurrentBitmap<(v8::internal::AccessMode)1> *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 <= param_1) {
    return true;
  }
  uVar4 = param_1 >> 5;
  uVar5 = (ulong)uVar4;
  uVar3 = param_2 - 1 >> 5;
  iVar1 = 1 << (ulong)(param_1 & 0x1f);
  uVar2 = 1 << (ulong)(param_2 - 1 & 0x1f);
  if (uVar4 == uVar3) {
    uVar4 = *(uint *)(this + uVar5 * 4);
    iVar1 = -iVar1;
  }
  else {
    if ((*(uint *)(this + (ulong)uVar4 * 4) & -iVar1) != 0) {
      return false;
    }
    while (uVar5 = uVar5 + 1, uVar5 < uVar3) {
      if (*(int *)(this + uVar5 * 4) != 0) {
        return false;
      }
    }
    uVar4 = *(uint *)(this + (ulong)uVar3 * 4);
    iVar1 = -1;
  }
  return (uVar4 & (uVar2 + iVar1 | uVar2)) == 0;
}

