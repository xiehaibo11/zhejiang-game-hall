
/* v8::internal::compiler::GlobalAccessFeedback::slot_index() const */

uint __thiscall v8::internal::compiler::GlobalAccessFeedback::slot_index(GlobalAccessFeedback *this)

{
  return *(uint *)(this + 0x20) >> 0xc & 0x3ffff;
}

