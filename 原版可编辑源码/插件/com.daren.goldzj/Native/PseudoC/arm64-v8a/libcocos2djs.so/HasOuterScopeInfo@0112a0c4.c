
/* v8::internal::ScopeInfo::HasOuterScopeInfo() const */

uint __thiscall v8::internal::ScopeInfo::HasOuterScopeInfo(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0x17 & 1;
  }
  return 0;
}

