
/* v8::internal::ScopeInfo::SavedClassVariableInfoIndex() const */

int __thiscall v8::internal::ScopeInfo::SavedClassVariableInfoIndex(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (1 < *(int *)(lVar1 + 3)) {
    return (*(int *)(lVar1 + 0xf) >> 1) + (*(int *)(lVar1 + 0xf) >> 1) + 3;
  }
  return 3;
}

