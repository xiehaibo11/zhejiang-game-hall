
/* v8::internal::ScopeInfo::HasPositionInfo() const */

bool __thiscall v8::internal::ScopeInfo::HasPositionInfo(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return ((*(uint *)(*(long *)this + 7) >> 1 & 0xf) - 1 & 0xff) < 4;
  }
  return false;
}

