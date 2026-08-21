
/* v8::internal::ScopeIterator::HasContext() const */

bool __thiscall v8::internal::ScopeIterator::HasContext(ScopeIterator *this)

{
  if (*(long *)(this + 0x20) != 0) {
    return 0 < *(int *)(*(long *)(this + 0x50) + 0x7c);
  }
  return true;
}

