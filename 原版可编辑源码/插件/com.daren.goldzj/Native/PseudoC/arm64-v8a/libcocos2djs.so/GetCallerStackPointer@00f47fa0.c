
/* v8::internal::InternalFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::InternalFrame::GetCallerStackPointer(InternalFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

