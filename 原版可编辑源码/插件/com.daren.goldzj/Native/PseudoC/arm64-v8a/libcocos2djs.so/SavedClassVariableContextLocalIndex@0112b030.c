
/* v8::internal::ScopeInfo::SavedClassVariableContextLocalIndex() const */

int __thiscall v8::internal::ScopeInfo::SavedClassVariableContextLocalIndex(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if ((1 < *(int *)(lVar1 + 3)) && ((*(uint *)(lVar1 + 7) >> 0xb & 1) != 0)) {
    return (*(int *)(lVar1 + 7 +
                    (long)(int)(((*(uint *)(lVar1 + 0xf) >> 1) + (*(uint *)(lVar1 + 0xf) >> 1)) * 4
                               + 0xc)) >> 1) + -2;
  }
  return -1;
}

