
/* v8::internal::JSStackFrame::IsStrict() const */

byte __thiscall v8::internal::JSStackFrame::IsStrict(JSStackFrame *this)

{
  return (byte)this[0x34] >> 3 & 1;
}

