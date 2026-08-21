
/* v8::internal::compiler::LiveRangeBuilder::Verify() const */

void __thiscall v8::internal::compiler::LiveRangeBuilder::Verify(LiveRangeBuilder *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  LiveRangeBuilder *pLVar11;
  LiveRangeBuilder *pLVar12;
  TopLevelLiveRange *this_00;
  UseInterval *pUVar13;
  long lVar14;
  
  pLVar11 = *(LiveRangeBuilder **)(this + 8);
  while (pLVar11 != this + 0x10) {
    if ((*(uint *)(*(long *)(pLVar11 + 0x28) + 0x1c) & 0x1c) == 0x10) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","hint.second->IsResolved()");
    }
    pLVar12 = *(LiveRangeBuilder **)(pLVar11 + 8);
    if (*(LiveRangeBuilder **)(pLVar11 + 8) == (LiveRangeBuilder *)0x0) {
      pLVar12 = pLVar11 + 0x10;
      bVar7 = *(LiveRangeBuilder **)*(LiveRangeBuilder **)pLVar12 != pLVar11;
      pLVar11 = *(LiveRangeBuilder **)pLVar12;
      if (bVar7) {
        do {
          lVar14 = *(long *)pLVar12;
          pLVar12 = (LiveRangeBuilder *)(lVar14 + 0x10);
          pLVar11 = *(LiveRangeBuilder **)pLVar12;
        } while (*(long *)pLVar11 != lVar14);
      }
    }
    else {
      do {
        pLVar11 = pLVar12;
        pLVar12 = *(LiveRangeBuilder **)pLVar11;
      } while (*(LiveRangeBuilder **)pLVar11 != (LiveRangeBuilder *)0x0);
    }
  }
  puVar2 = *(undefined8 **)(*(long *)this + 0x88);
  puVar3 = *(undefined8 **)(*(long *)this + 0x90);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    this_00 = (TopLevelLiveRange *)*puVar2;
    if ((this_00 != (TopLevelLiveRange *)0x0) && (*(long *)(this_00 + 0x10) != 0)) {
      if (*(long *)(this_00 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(current->next()) == nullptr");
      }
      TopLevelLiveRange::Verify(this_00);
      lVar14 = *(long *)(this_00 + 0x10);
      if (*(int **)(lVar14 + 8) != (int *)0x0) {
        uVar4 = *(uint *)(lVar14 + 4);
        iVar5 = **(int **)(lVar14 + 8);
        uVar6 = uVar4 - 2 | 1;
        if ((uVar4 & 1) != 0) {
          uVar6 = uVar4 & 0xfffffffe;
        }
        uVar4 = uVar6 + 3;
        if (-1 < (int)uVar6) {
          uVar4 = uVar6;
        }
        lVar8 = InstructionSequence::GetInstructionBlock
                          (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar4 >> 2);
        iVar1 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        lVar9 = InstructionSequence::GetInstructionBlock
                          (*(InstructionSequence **)(*(long *)this + 0x10),iVar1 >> 2);
        if (*(int *)(lVar9 + 100) <= *(int *)(lVar8 + 100)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","NextIntervalStartsInDifferentBlocks(first)");
        }
        for (pUVar13 = *(UseInterval **)(lVar14 + 8); pUVar13 != (UseInterval *)0x0;
            pUVar13 = *(UseInterval **)(pUVar13 + 8)) {
          uVar6 = *(uint *)pUVar13;
          if ((uVar6 & 3) != 0) {
LAB_0165cb20:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IntervalStartsAtBlockBoundary(i)");
          }
          uVar4 = uVar6 + 3;
          if (-1 < (int)uVar6) {
            uVar4 = uVar6;
          }
          lVar14 = InstructionSequence::GetInstructionBlock
                             (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar4 >> 2);
          if (*(int *)(lVar14 + 0x70) != (int)uVar4 >> 2) goto LAB_0165cb20;
          uVar10 = IntervalPredecessorsCoveredByRange(this,pUVar13,this_00);
          if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IntervalPredecessorsCoveredByRange(i, current)");
          }
          if (*(int **)(pUVar13 + 8) == (int *)0x0) break;
          uVar4 = *(uint *)(pUVar13 + 4);
          iVar5 = **(int **)(pUVar13 + 8);
          uVar6 = uVar4 - 2 | 1;
          if ((uVar4 & 1) != 0) {
            uVar6 = uVar4 & 0xfffffffe;
          }
          uVar4 = uVar6 + 3;
          if (-1 < (int)uVar6) {
            uVar4 = uVar6;
          }
          lVar14 = InstructionSequence::GetInstructionBlock
                             (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar4 >> 2);
          iVar1 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar1 = iVar5;
          }
          lVar8 = InstructionSequence::GetInstructionBlock
                            (*(InstructionSequence **)(*(long *)this + 0x10),iVar1 >> 2);
          if (*(int *)(lVar8 + 100) <= *(int *)(lVar14 + 100)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","NextIntervalStartsInDifferentBlocks(i)");
          }
        }
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

