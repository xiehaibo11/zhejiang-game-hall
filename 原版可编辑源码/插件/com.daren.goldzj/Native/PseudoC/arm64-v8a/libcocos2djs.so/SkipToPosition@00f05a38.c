
/* v8::internal::BreakIterator::SkipToPosition(int) */

void __thiscall v8::internal::BreakIterator::SkipToPosition(BreakIterator *this,int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BreakIterator aBStack_b8 [8];
  int local_b0;
  int local_ac;
  int local_a8;
  SourcePositionTableIterator aSStack_a0 [24];
  int local_88;
  uint local_78;
  char local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  BreakIterator(aBStack_b8,*(undefined8 *)this);
  iVar5 = local_b0;
  if (local_88 != -1) {
    iVar6 = 0x7fffffff;
    iVar3 = local_ac - param_1;
    iVar4 = local_ac;
    while (((iVar4 < param_1 || (iVar6 <= iVar3)) || (iVar5 = local_b0, iVar6 = iVar3, iVar3 != 0)))
    {
      if (local_b0 == -1) goto LAB_00f05aec;
      do {
        SourcePositionTableIterator::Advance(aSStack_a0);
        if (local_88 == -1) goto LAB_00f05b1c;
LAB_00f05aec:
        iVar4 = (local_78 >> 1 & 0x3fffffff) - 1;
        if (local_70 != '\0') {
          local_a8 = iVar4;
        }
        local_ac = iVar4;
        iVar3 = GetDebugBreakType(aBStack_b8);
      } while (iVar3 == 0);
      local_b0 = local_b0 + 1;
      iVar3 = iVar4 - param_1;
    }
  }
LAB_00f05b1c:
  if (0 < iVar5) {
    iVar4 = *(int *)(this + 0x30);
    do {
      iVar5 = iVar5 + -1;
      bVar2 = *(int *)(this + 8) == -1;
      do {
        if (iVar4 == -1) break;
        if (!bVar2) {
          SourcePositionTableIterator::Advance((SourcePositionTableIterator *)(this + 0x18));
          iVar4 = *(int *)(this + 0x30);
          if (iVar4 == -1) goto LAB_00f05b3c;
        }
        iVar3 = (*(uint *)(this + 0x40) >> 1 & 0x3fffffff) - 1;
        *(int *)(this + 0xc) = iVar3;
        if (this[0x48] != (BreakIterator)0x0) {
          *(int *)(this + 0x10) = iVar3;
        }
        iVar3 = GetDebugBreakType(this);
        bVar2 = false;
      } while (iVar3 == 0);
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
LAB_00f05b3c:
    } while (0 < iVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

