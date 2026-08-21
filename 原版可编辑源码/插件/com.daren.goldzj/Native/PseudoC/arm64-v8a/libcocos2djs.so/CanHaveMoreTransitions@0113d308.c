
/* v8::internal::TransitionsAccessor::CanHaveMoreTransitions() */

bool __thiscall v8::internal::TransitionsAccessor::CanHaveMoreTransitions(TransitionsAccessor *this)

{
  if ((*(uint *)(*(long *)(this + 0x10) + 0xb) >> 0x15 & 1) != 0) {
    return false;
  }
  if ((*(int *)(this + 0x20) == 4) && (3 < *(int *)(*(long *)(this + 0x18) + 3))) {
    return *(int *)(*(long *)(this + 0x18) + 0xb) < 0xc00;
  }
  return true;
}

