
/* v8::internal::ScopeInfo::ContextLength() const */

int __thiscall v8::internal::ScopeInfo::ContextLength(ScopeInfo *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)this;
  if (1 < *(int *)(lVar3 + 3)) {
    uVar1 = *(uint *)(lVar3 + 7) & 0x6000;
    if (((((uVar1 == 0x4000) || (1 < *(int *)(lVar3 + 0xf))) ||
         ((*(uint *)(lVar3 + 7) >> 0x19 & 1) != 0)) ||
        ((((*(uint *)(lVar3 + 7) & 0x1e) == 0xe || ((*(uint *)(lVar3 + 7) & 0x1e) == 0)) ||
         (((*(uint *)(lVar3 + 7) & 0x1e) == 0xc &&
          (((*(uint *)(lVar3 + 7) >> 5 & 1) != 0 && ((*(uint *)(lVar3 + 7) >> 7 & 1) != 0)))))))) ||
       ((((*(uint *)(lVar3 + 7) & 0x1e) == 4 && ((*(uint *)(lVar3 + 7) >> 5 & 1) != 0)) ||
        ((((*(uint *)(lVar3 + 7) & 0x1e) == 4 && ((*(uint *)(lVar3 + 7) >> 0x10 & 1) != 0)) ||
         ((*(uint *)(lVar3 + 7) & 0x1e) == 6)))))) {
      iVar2 = *(int *)(lVar3 + 0xf) >> 1;
      iVar4 = 2;
      if ((*(uint *)(lVar3 + 7) & 0x8000000) != 0) {
        iVar4 = 3;
      }
      if (uVar1 == 0x4000) {
        iVar2 = iVar2 + 1;
      }
      return iVar2 + iVar4;
    }
  }
  return 0;
}

