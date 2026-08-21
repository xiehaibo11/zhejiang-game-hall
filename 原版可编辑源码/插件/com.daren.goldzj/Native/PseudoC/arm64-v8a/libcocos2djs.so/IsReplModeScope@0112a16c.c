
/* v8::internal::ScopeInfo::IsReplModeScope() const */

uint __thiscall v8::internal::ScopeInfo::IsReplModeScope(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0x1c & 1;
  }
  return 0;
}

