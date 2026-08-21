
/* v8::internal::CodeCommentsIterator::HasCurrent() const */

bool __thiscall v8::internal::CodeCommentsIterator::HasCurrent(CodeCommentsIterator *this)

{
  return *(ulong *)(this + 0x10) < *(long *)this + (ulong)*(uint *)(this + 8);
}

