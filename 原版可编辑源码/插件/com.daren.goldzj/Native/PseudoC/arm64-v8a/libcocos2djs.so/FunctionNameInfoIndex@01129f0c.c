
/* v8::internal::ScopeInfo::FunctionNameInfoIndex() const */

int __thiscall v8::internal::ScopeInfo::FunctionNameInfoIndex(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (1 < *(int *)(lVar1 + 3)) {
    return (uint)((*(uint *)(lVar1 + 7) >> 8 & 3) - 1 < 2) +
           (*(int *)(lVar1 + 0xf) >> 1) + (*(int *)(lVar1 + 0xf) >> 1) +
           (*(uint *)(lVar1 + 7) >> 0xb & 1) + 3;
  }
  return 3;
}

