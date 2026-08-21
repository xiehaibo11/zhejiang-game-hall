
/* v8::internal::BreakIterator::BreakIndexFromPosition(int) */

int __thiscall v8::internal::BreakIterator::BreakIndexFromPosition(BreakIterator *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(this + 8);
  if (*(int *)(this + 0x30) == -1) {
    return iVar3;
  }
  iVar4 = 0x7fffffff;
  do {
    iVar2 = *(int *)(this + 0xc) - param_1;
    if ((*(int *)(this + 0xc) < param_1) || (iVar4 <= iVar2)) {
      iVar1 = *(int *)(this + 8);
    }
    else {
      iVar3 = *(int *)(this + 8);
      iVar4 = iVar2;
      iVar1 = iVar3;
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    if (iVar1 != -1) goto LAB_00f05db0;
    while( true ) {
      iVar2 = (*(uint *)(this + 0x40) >> 1 & 0x3fffffff) - 1;
      *(int *)(this + 0xc) = iVar2;
      if (this[0x48] != (BreakIterator)0x0) {
        *(int *)(this + 0x10) = iVar2;
      }
      iVar2 = GetDebugBreakType(this);
      if (iVar2 != 0) break;
LAB_00f05db0:
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)(this + 0x18));
      if (*(int *)(this + 0x30) == -1) {
        return iVar3;
      }
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  } while( true );
}

