
/* v8::internal::FreeListCategory::SumFreeList() */

long __thiscall v8::internal::FreeListCategory::SumFreeList(FreeListCategory *this)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  if ((int)uVar3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (uint *)(uVar3 + 7);
      lVar2 = lVar2 + (*(int *)(uVar3 + 3) >> 1);
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*puVar1;
    } while (*puVar1 != 0);
    return lVar2;
  }
  return 0;
}

