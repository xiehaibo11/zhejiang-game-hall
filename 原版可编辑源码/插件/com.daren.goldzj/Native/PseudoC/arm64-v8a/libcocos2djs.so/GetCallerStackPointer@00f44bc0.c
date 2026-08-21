
/* v8::internal::StubFrame::GetCallerStackPointer() const */

long __thiscall v8::internal::StubFrame::GetCallerStackPointer(StubFrame *this)

{
  return *(long *)(this + 0x20) + 0x10;
}

