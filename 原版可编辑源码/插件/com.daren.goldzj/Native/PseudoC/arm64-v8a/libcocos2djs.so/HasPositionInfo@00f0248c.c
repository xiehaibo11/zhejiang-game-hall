
/* v8::internal::ScopeIterator::HasPositionInfo() */

bool __thiscall v8::internal::ScopeIterator::HasPositionInfo(ScopeIterator *this)

{
  if (*(long *)(this + 0x20) != 0) {
    return true;
  }
  return *(short *)((**(ulong **)(this + 0x28) & 0xffffffff00000000 | 7) +
                   (ulong)*(uint *)(**(ulong **)(this + 0x28) - 1)) != 0x8f;
}

