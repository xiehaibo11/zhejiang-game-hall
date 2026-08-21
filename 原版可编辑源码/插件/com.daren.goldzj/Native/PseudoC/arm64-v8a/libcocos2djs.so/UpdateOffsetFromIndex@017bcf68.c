
/* v8::internal::interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex() */

void __thiscall
v8::internal::interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
          (BytecodeArrayRandomIterator *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x38);
  if ((-1 < (int)uVar1) &&
     ((ulong)uVar1 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 2))) {
    BytecodeArrayAccessor::SetOffset
              ((BytecodeArrayAccessor *)this,*(int *)(*(long *)(this + 0x18) + (ulong)uVar1 * 4));
    return;
  }
  return;
}

