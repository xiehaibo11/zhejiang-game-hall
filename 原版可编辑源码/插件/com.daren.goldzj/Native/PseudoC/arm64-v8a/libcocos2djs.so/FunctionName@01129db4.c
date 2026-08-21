
/* v8::internal::ScopeInfo::FunctionName() const */

ulong __thiscall v8::internal::ScopeInfo::FunctionName(ScopeInfo *this)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(ulong *)this;
  if (*(int *)(uVar1 + 3) < 2) {
    uVar2 = 0;
    iVar3 = 3;
  }
  else {
    iVar3 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) +
            (*(uint *)(uVar1 + 7) >> 0xb & 1) + 3;
    uVar2 = (uint)((*(uint *)(uVar1 + 7) >> 8 & 3) - 1 < 2);
  }
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7 + (long)(int)((uVar2 + iVar3) * 4))
  ;
}

