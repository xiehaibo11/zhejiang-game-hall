
/* v8::internal::FreeListCategory::FreeListLength() */

int __thiscall v8::internal::FreeListCategory::FreeListLength(FreeListCategory *this)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  if ((int)uVar3 != 0) {
    iVar2 = 0;
    do {
      puVar1 = (uint *)(uVar3 + 7);
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*puVar1;
    } while (*puVar1 != 0);
    return iVar2;
  }
  return 0;
}

