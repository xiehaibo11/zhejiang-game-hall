
/* v8::internal::ScopeInfo::HasContextExtensionSlot() const */

uint __thiscall v8::internal::ScopeInfo::HasContextExtensionSlot(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0x1b & 1;
  }
  return 0;
}

