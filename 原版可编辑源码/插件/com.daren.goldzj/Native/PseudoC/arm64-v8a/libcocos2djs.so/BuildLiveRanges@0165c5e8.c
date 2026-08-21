
/* v8::internal::compiler::LiveRangeBuilder::BuildLiveRanges() */

void __thiscall v8::internal::compiler::LiveRangeBuilder::BuildLiveRanges(LiveRangeBuilder *this)

{
  uint uVar1;
  TopLevelLiveRange *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  BitVector *pBVar7;
  Zone *pZVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  TopLevelLiveRange *pTVar15;
  InstructionBlock *pIVar16;
  SpillRange *pSVar17;
  undefined8 *puVar18;
  
  lVar11 = *(long *)this;
  plVar13 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
  uVar14 = plVar13[1] - *plVar13;
  if (0 < (int)(uVar14 >> 3)) {
    uVar14 = (long)(uVar14 * 0x20000000) >> 0x20;
    do {
      uVar14 = uVar14 - 1;
      TickCounter::DoTick(*(TickCounter **)(lVar11 + 0x1d8));
      plVar13 = *(long **)(*(long *)(*(RegisterAllocationData **)this + 0x10) + 0x10);
      lVar11 = *plVar13;
      if ((ulong)(plVar13[1] - lVar11 >> 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pIVar16 = *(InstructionBlock **)(lVar11 + uVar14 * 8);
      pBVar7 = (BitVector *)ComputeLiveOut(pIVar16,*(RegisterAllocationData **)this);
      AddInitialIntervals(this,pIVar16,pBVar7);
      ProcessInstructions(this,pIVar16,pBVar7);
      ProcessPhis(this,pIVar16,pBVar7);
      if (-1 < *(int *)(pIVar16 + 0x6c)) {
        ProcessLoopHeader(this,pIVar16,pBVar7);
      }
      *(BitVector **)(*(long *)(*(long *)this + 0x48) + uVar14 * 8) = pBVar7;
      lVar11 = *(long *)this;
    } while (0 < (long)uVar14);
  }
  puVar3 = *(undefined8 **)(lVar11 + 0x88);
  puVar4 = *(undefined8 **)(lVar11 + 0x90);
  lVar6 = (long)puVar4 - (long)puVar3;
  while( true ) {
    if (puVar4 == puVar3) {
      puVar4 = *(undefined8 **)(lVar11 + 0x198);
      for (puVar3 = *(undefined8 **)(lVar11 + 400); puVar3 != puVar4; puVar3 = puVar3 + 2) {
        pTVar15 = (TopLevelLiveRange *)*puVar3;
        uVar5 = *(undefined4 *)(puVar3 + 1);
        uVar10 = *(uint *)(pTVar15 + 4);
        if ((uVar10 >> 6 & 1) == 0) {
          pSVar17 = *(SpillRange **)(pTVar15 + 0x70);
          puVar18 = *(undefined8 **)this;
          if (pSVar17 == (SpillRange *)0x0) {
            pZVar8 = (Zone *)*puVar18;
            pSVar17 = *(SpillRange **)(pZVar8 + 0x10);
            if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pSVar17) < 0x38) {
              pSVar17 = (SpillRange *)Zone::NewExpand(pZVar8,0x38);
            }
            else {
              *(SpillRange **)(pZVar8 + 0x10) = pSVar17 + 0x38;
            }
            SpillRange::SpillRange(pSVar17,pTVar15,(Zone *)*puVar18);
            uVar10 = *(uint *)(pTVar15 + 4);
          }
          *(uint *)(pTVar15 + 4) = uVar10 & 0xffffff9f | 0x40;
          if (*(TopLevelLiveRange **)(pTVar15 + 0x68) != (TopLevelLiveRange *)0x0) {
            pTVar15 = *(TopLevelLiveRange **)(pTVar15 + 0x68);
          }
          *(SpillRange **)(puVar18[0x25] + (long)*(int *)(pTVar15 + 0x5c) * 8) = pSVar17;
        }
        else {
          pSVar17 = *(SpillRange **)(pTVar15 + 0x70);
        }
        *(undefined4 *)(pSVar17 + 0x2c) = uVar5;
      }
      return;
    }
    pTVar15 = (TopLevelLiveRange *)*puVar3;
    TickCounter::DoTick(*(TickCounter **)(lVar11 + 0x1d8));
    puVar18 = *(undefined8 **)this;
    if (lVar6 != puVar18[0x12] - puVar18[0x11]) break;
    if (pTVar15 != (TopLevelLiveRange *)0x0) {
      uVar9 = *(uint *)(pTVar15 + 4);
      uVar10 = uVar9 & 6;
      if ((uVar10 != 0) && ((uVar9 & 0x60) == 0)) {
        pSVar17 = *(SpillRange **)(pTVar15 + 0x70);
        if (pSVar17 == (SpillRange *)0x0) {
          pZVar8 = (Zone *)*puVar18;
          pSVar17 = *(SpillRange **)(pZVar8 + 0x10);
          if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pSVar17) < 0x38) {
            pSVar17 = (SpillRange *)Zone::NewExpand(pZVar8,0x38);
          }
          else {
            *(SpillRange **)(pZVar8 + 0x10) = pSVar17 + 0x38;
          }
          SpillRange::SpillRange(pSVar17,pTVar15,(Zone *)*puVar18);
          uVar9 = *(uint *)(pTVar15 + 4);
          uVar12 = uVar9 & 0x60;
        }
        else {
          uVar12 = 0;
        }
        uVar1 = uVar9 & 0xffffff9f | 0x40;
        if (uVar12 != 0x40 && uVar10 == 2) {
          uVar1 = uVar9 | 0x60;
        }
        *(uint *)(pTVar15 + 4) = uVar1;
        pTVar2 = pTVar15;
        if (*(TopLevelLiveRange **)(pTVar15 + 0x68) != (TopLevelLiveRange *)0x0) {
          pTVar2 = *(TopLevelLiveRange **)(pTVar15 + 0x68);
        }
        *(SpillRange **)(puVar18[0x25] + (long)*(int *)(pTVar2 + 0x5c) * 8) = pSVar17;
        uVar9 = *(uint *)(pTVar15 + 4);
      }
      if (((uVar9 & 0x60) == 0x20) && ((**(ulong **)(pTVar15 + 0x70) & 7) == 2)) {
        for (lVar11 = *(long *)(pTVar15 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
          if ((*(uint *)(lVar11 + 0x1c) & 1) == 0) {
            *(uint *)(lVar11 + 0x1c) =
                 *(uint *)(lVar11 + 0x1c) & 0x1c | *(uint *)(lVar11 + 0x18) & 2 | 0x820;
          }
        }
      }
    }
    lVar11 = *(long *)this;
    puVar3 = puVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
}

