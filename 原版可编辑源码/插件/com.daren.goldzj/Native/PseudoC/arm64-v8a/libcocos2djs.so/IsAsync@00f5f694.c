
/* v8::internal::JSStackFrame::IsAsync() const */

byte __thiscall v8::internal::JSStackFrame::IsAsync(JSStackFrame *this)

{
  return (byte)this[0x34] & 1;
}

