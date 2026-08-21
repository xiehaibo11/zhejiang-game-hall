
/* v8::internal::ScopeInfo::HasAllocatedReceiver() const */

bool __thiscall v8::internal::ScopeInfo::HasAllocatedReceiver(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return (*(uint *)(*(long *)this + 7) >> 8 & 3) - 1 < 2;
  }
  return false;
}

