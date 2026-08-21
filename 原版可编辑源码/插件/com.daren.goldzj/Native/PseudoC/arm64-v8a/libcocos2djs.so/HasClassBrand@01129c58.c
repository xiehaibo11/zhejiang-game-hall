
/* v8::internal::ScopeInfo::HasClassBrand() const */

uint __thiscall v8::internal::ScopeInfo::HasClassBrand(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 10 & 1;
  }
  return 0;
}

