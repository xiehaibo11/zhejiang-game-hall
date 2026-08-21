
/* v8::internal::FreeListMany::GuaranteedAllocatable(unsigned long) */

ulong __thiscall v8::internal::FreeListMany::GuaranteedAllocatable(FreeListMany *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 < 0x18) {
    return 0;
  }
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      if (param_1 < *(uint *)(categories_min + lVar2 * 4 + 4)) {
        return (ulong)*(uint *)(categories_min + (lVar1 >> 0x1e));
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x100000000;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  return param_1;
}

