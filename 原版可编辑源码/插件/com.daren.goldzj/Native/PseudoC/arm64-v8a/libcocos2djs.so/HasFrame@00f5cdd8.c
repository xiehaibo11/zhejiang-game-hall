
/* v8::internal::FrameArrayIterator::HasFrame() const */

bool __thiscall v8::internal::FrameArrayIterator::HasFrame(FrameArrayIterator *this)

{
  return *(int *)(this + 0x10) < *(int *)(**(long **)(this + 8) + 7) >> 1;
}

