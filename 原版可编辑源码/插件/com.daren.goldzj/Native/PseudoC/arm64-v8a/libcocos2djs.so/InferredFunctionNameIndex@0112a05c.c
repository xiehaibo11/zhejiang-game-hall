
/* v8::internal::ScopeInfo::InferredFunctionNameIndex() const */

int __thiscall v8::internal::ScopeInfo::InferredFunctionNameIndex(ScopeInfo *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (1 < *(int *)(lVar2 + 3)) {
    iVar1 = (*(int *)(lVar2 + 0xf) >> 1) + (*(int *)(lVar2 + 0xf) >> 1) +
            (*(uint *)(lVar2 + 7) >> 0xb & 1);
    if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
      iVar1 = iVar1 + 1;
    }
    return (uint)((*(uint *)(lVar2 + 7) & 0x6000) != 0) * 2 + iVar1 + 3;
  }
  return 3;
}

