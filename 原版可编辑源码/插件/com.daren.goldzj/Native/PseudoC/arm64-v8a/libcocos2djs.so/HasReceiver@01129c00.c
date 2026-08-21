
/* v8::internal::ScopeInfo::HasReceiver() const */

bool __thiscall v8::internal::ScopeInfo::HasReceiver(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return (*(uint *)(*(long *)this + 7) & 0x300) != 0;
  }
  return false;
}

