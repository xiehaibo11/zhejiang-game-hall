
/* v8::internal::interpreter::BytecodeArrayRandomIterator::IsValid() const */

bool __thiscall
v8::internal::interpreter::BytecodeArrayRandomIterator::IsValid(BytecodeArrayRandomIterator *this)

{
  if (-1 < (int)*(uint *)(this + 0x38)) {
    return (ulong)*(uint *)(this + 0x38) <
           (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 2);
  }
  return false;
}

