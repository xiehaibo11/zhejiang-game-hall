
/* v8::internal::ScopeInfo::scope_type() const */

uint __thiscall v8::internal::ScopeInfo::scope_type(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 1 & 0xf;
  }
  return 0;
}

