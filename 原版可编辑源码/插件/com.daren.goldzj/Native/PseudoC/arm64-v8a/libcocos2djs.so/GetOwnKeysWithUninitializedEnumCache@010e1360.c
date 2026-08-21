
/* v8::internal::FastKeyAccumulator::GetOwnKeysWithUninitializedEnumCache() */

long __thiscall
v8::internal::FastKeyAccumulator::GetOwnKeysWithUninitializedEnumCache(FastKeyAccumulator *this)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = **(ulong **)(this + 8);
  if ((*(int *)(uVar2 + 7) == *(int *)(*(long *)this + 0x168)) ||
     (*(int *)(uVar2 + 7) == *(int *)(*(long *)this + 1000))) {
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1);
    if ((*(uint *)(uVar2 + 0xb) & 0xffc00) == 0) {
      *(uint *)(uVar2 + 0xb) = *(uint *)(uVar2 + 0xb) & 0xfffffc00;
      lVar1 = *(long *)this + 0x168;
    }
    else {
      lVar1 = FUN_010e13f8();
      if (this[0x20] == (FastKeyAccumulator)0x0) {
        lVar1 = Factory::CopyFixedArray(*(Factory **)this);
        return lVar1;
      }
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

