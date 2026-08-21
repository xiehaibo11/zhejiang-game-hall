
/* v8::internal::ScopeInfo::InferredFunctionName() const */

ulong __thiscall v8::internal::ScopeInfo::InferredFunctionName(ScopeInfo *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ulong *)this;
  if (*(int *)(uVar1 + 3) < 2) {
    iVar2 = 0;
    iVar3 = 3;
  }
  else {
    iVar3 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) +
            (*(uint *)(uVar1 + 7) >> 0xb & 1);
    if ((*(uint *)(uVar1 + 7) >> 8 & 3) - 1 < 2) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 3;
    iVar2 = (uint)((*(uint *)(uVar1 + 7) & 0x6000) != 0) << 1;
  }
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7 + (long)((iVar2 + iVar3) * 4));
}

