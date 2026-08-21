
/* v8::internal::JSStackFrame::GetPromiseIndex() const */

undefined4 __thiscall v8::internal::JSStackFrame::GetPromiseIndex(JSStackFrame *this)

{
  if (((byte)this[0x34] >> 2 & 1) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(this + 0x28);
}

