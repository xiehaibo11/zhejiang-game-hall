
/* v8::internal::ScopeInfo::HasFunctionName() const */

bool __thiscall v8::internal::ScopeInfo::HasFunctionName(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return (*(uint *)(*(long *)this + 7) & 0x6000) != 0;
  }
  return false;
}

