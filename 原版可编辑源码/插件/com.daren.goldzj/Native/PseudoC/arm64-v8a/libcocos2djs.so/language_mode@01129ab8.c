
/* v8::internal::ScopeInfo::language_mode() const */

uint __thiscall v8::internal::ScopeInfo::language_mode(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 6 & 1;
  }
  return 0;
}

