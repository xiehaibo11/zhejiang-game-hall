
/* v8::internal::compiler::RegisterAllocationData::RangesDefinedInDeferredStayInDeferred() */

undefined8 __thiscall
v8::internal::compiler::RegisterAllocationData::RangesDefinedInDeferredStayInDeferred
          (RegisterAllocationData *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  
  plVar9 = *(long **)(this + 0x88);
  plVar5 = *(long **)(this + 0x90);
  lVar7 = (long)plVar5 - (long)plVar9;
  if (plVar5 != plVar9) {
    while( true ) {
      lVar10 = *plVar9;
      if ((lVar10 != 0) && (*(int **)(lVar10 + 0x10) != (int *)0x0)) {
        iVar6 = **(int **)(lVar10 + 0x10);
        iVar1 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        lVar8 = InstructionSequence::GetInstructionBlock
                          (*(InstructionSequence **)(this + 0x10),iVar1 >> 2);
        if (*(char *)(lVar8 + 0x78) != '\0') {
          for (puVar11 = *(uint **)(lVar10 + 0x10); puVar11 != (uint *)0x0;
              puVar11 = *(uint **)(puVar11 + 2)) {
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            uVar2 = uVar3 + 3;
            if (-1 < (int)uVar3) {
              uVar2 = uVar3;
            }
            iVar1 = (uVar3 >> 1 & 1) + ((int)uVar2 >> 2);
            iVar6 = (uVar4 & 1) - 1;
            uVar2 = uVar4 + 3;
            if (-1 < (int)uVar4) {
              uVar2 = uVar4;
            }
            if ((uVar4 & 2) != 0) {
              iVar6 = 0;
            }
            while (iVar1 <= iVar6 + ((int)uVar2 >> 2)) {
              lVar10 = InstructionSequence::GetInstructionBlock
                                 (*(InstructionSequence **)(this + 0x10),iVar1);
              if (*(char *)(lVar10 + 0x78) == '\0') {
                return 0;
              }
              iVar1 = *(int *)(lVar10 + 0x74);
            }
          }
        }
      }
      plVar9 = plVar9 + 1;
      if (plVar9 == plVar5) break;
      if (lVar7 != *(long *)(this + 0x90) - *(long *)(this + 0x88)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","live_ranges_size == live_ranges().size()");
      }
    }
  }
  return 1;
}

