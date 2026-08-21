
/* v8::internal::BuiltinExitFrame::IsConstructor() const */

bool __thiscall v8::internal::BuiltinExitFrame::IsConstructor(BuiltinExitFrame *this)

{
  if ((*(ulong *)(*(long *)(this + 0x20) + 0x10) & 1) == 0) {
    return true;
  }
  return (int)*(ulong *)(*(long *)(this + 0x20) + 0x10) != *(int *)(*(long *)(this + 0x10) + 0xa0);
}

