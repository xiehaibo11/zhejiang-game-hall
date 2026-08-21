
/* v8::internal::ScopeInfo::HasSavedClassVariableIndex() const */

uint __thiscall v8::internal::ScopeInfo::HasSavedClassVariableIndex(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0xb & 1;
  }
  return 0;
}

