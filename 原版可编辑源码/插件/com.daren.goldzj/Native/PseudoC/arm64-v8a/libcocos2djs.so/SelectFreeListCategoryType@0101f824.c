
/* v8::internal::FreeListMany::SelectFreeListCategoryType(unsigned long) */

int __thiscall
v8::internal::FreeListMany::SelectFreeListCategoryType(FreeListMany *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 < 0x101) {
    if (param_1 < 0x20) {
      return 0;
    }
    iVar2 = (int)(param_1 >> 4) + -1;
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    lVar3 = 0x10;
    while (lVar3 + -1 < (long)iVar2) {
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
      if (param_1 < *(uint *)(categories_min + lVar1)) {
        return (int)lVar3 + -2;
      }
    }
  }
  return iVar2;
}

