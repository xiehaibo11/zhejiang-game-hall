
/* v8::internal::ExitFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::ExitFrame::GetCallerStackPointer(ExitFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

