
/* v8::internal::JSStackFrame::IsConstructor() */

byte __thiscall v8::internal::JSStackFrame::IsConstructor(JSStackFrame *this)

{
  return (byte)this[0x34] >> 1 & 1;
}

