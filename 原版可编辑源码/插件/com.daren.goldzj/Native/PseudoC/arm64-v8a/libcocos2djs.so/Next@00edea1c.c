
/* v8::internal::CodeCommentsIterator::Next() */

void __thiscall v8::internal::CodeCommentsIterator::Next(CodeCommentsIterator *this)

{
  *(ulong *)(this + 0x10) =
       *(long *)(this + 0x10) + (ulong)(*(int *)(*(long *)(this + 0x10) + 4) + 8);
  return;
}

