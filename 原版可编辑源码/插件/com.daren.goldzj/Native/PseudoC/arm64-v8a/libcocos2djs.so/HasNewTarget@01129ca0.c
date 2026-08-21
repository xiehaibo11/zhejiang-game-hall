
/* v8::internal::ScopeInfo::HasNewTarget() const */

uint __thiscall v8::internal::ScopeInfo::HasNewTarget(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0xc & 1;
  }
  return 0;
}

