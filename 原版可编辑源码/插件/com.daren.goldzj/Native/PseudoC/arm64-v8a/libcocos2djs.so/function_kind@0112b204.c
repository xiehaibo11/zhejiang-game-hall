
/* v8::internal::ScopeInfo::function_kind() const */

uint __thiscall v8::internal::ScopeInfo::function_kind(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0x12 & 0x1f;
  }
  return 0;
}

