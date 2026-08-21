
/* v8::internal::ScopeInfo::HasSharedFunctionName() const */

bool __thiscall v8::internal::ScopeInfo::HasSharedFunctionName(ScopeInfo *this)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *(long *)this;
  if (*(int *)(lVar1 + 3) < 2) {
    uVar2 = 0;
    iVar3 = 3;
  }
  else {
    iVar3 = (*(int *)(lVar1 + 0xf) >> 1) + (*(int *)(lVar1 + 0xf) >> 1) +
            (*(uint *)(lVar1 + 7) >> 0xb & 1) + 3;
    uVar2 = (uint)((*(uint *)(lVar1 + 7) >> 8 & 3) - 1 < 2);
  }
  return *(int *)(lVar1 + 7 + (long)(int)((uVar2 + iVar3) * 4)) != 0;
}

