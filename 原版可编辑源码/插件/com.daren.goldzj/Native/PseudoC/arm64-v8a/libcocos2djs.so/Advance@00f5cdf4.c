
/* v8::internal::FrameArrayIterator::Advance() */

void __thiscall v8::internal::FrameArrayIterator::Advance(FrameArrayIterator *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}

