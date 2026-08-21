
/* v8::internal::JSStackFrame::IsPromiseAll() const */

byte __thiscall v8::internal::JSStackFrame::IsPromiseAll(JSStackFrame *this)

{
  return (byte)this[0x34] >> 2 & 1;
}

