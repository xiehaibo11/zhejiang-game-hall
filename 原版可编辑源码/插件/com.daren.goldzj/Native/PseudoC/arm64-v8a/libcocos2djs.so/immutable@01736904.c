
/* v8::internal::compiler::GlobalAccessFeedback::immutable() const */

byte __thiscall v8::internal::compiler::GlobalAccessFeedback::immutable(GlobalAccessFeedback *this)

{
  return (byte)this[0x23] >> 6 & 1;
}

