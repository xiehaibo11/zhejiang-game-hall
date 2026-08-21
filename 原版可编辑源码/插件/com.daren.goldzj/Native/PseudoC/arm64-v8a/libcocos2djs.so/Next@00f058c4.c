
/* v8::internal::BreakIterator::Next() */

void __thiscall v8::internal::BreakIterator::Next(BreakIterator *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x30);
  bVar1 = *(int *)(this + 8) == -1;
  do {
    if (iVar3 == -1) break;
    if (!bVar1) {
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)(this + 0x18));
      iVar3 = *(int *)(this + 0x30);
      if (iVar3 == -1) {
        return;
      }
    }
    iVar2 = (*(uint *)(this + 0x40) >> 1 & 0x3fffffff) - 1;
    *(int *)(this + 0xc) = iVar2;
    if (this[0x48] != (BreakIterator)0x0) {
      *(int *)(this + 0x10) = iVar2;
    }
    iVar2 = GetDebugBreakType(this);
    bVar1 = false;
  } while (iVar2 == 0);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

