
/* v8::internal::NativeFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::NativeFrame::GetCallerStackPointer(NativeFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

