
/* v8::internal::ReadOnlySpace::ClearStringPaddingIfNeeded() */

void __thiscall v8::internal::ReadOnlySpace::ClearStringPaddingIfNeeded(ReadOnlySpace *this)

{
  ulong uVar1;
  ulong uVar2;
  ReadOnlyHeapObjectIterator aRStack_38 [24];
  ulong local_8;
  
  if (this[0xe9] == (ReadOnlySpace)0x0) {
    ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator(aRStack_38,this);
    while (uVar1 = ReadOnlyHeapObjectIterator::Next(aRStack_38), (int)uVar1 != 0) {
      uVar2 = uVar1 & 0xffffffff00000000 | 7;
      if (((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) < 0x40) &&
          ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) == 0)) &&
         ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) >> 3 & 1) != 0)) {
        local_8 = uVar1;
        SeqOneByteString::clear_padding((SeqOneByteString *)&local_8);
      }
      else if (((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) < 0x40) &&
               ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) == 0)) &&
              ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) >> 3 & 1) == 0)) {
        local_8 = uVar1;
        SeqTwoByteString::clear_padding((SeqTwoByteString *)&local_8);
      }
    }
    this[0xe9] = (ReadOnlySpace)0x1;
  }
  return;
}

