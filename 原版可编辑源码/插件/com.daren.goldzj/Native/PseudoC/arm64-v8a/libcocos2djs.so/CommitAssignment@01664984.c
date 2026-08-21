
/* v8::internal::compiler::OperandAssigner::CommitAssignment() */

void __thiscall v8::internal::compiler::OperandAssigner::CommitAssignment(OperandAssigner *this)

{
  TopLevelLiveRange *pTVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  TopLevelLiveRange *pTVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  TopLevelLiveRange *this_00;
  ulong local_48;
  
  lVar9 = *(long *)this;
  puVar3 = *(undefined8 **)(lVar9 + 0x88);
  puVar4 = *(undefined8 **)(lVar9 + 0x90);
  lVar7 = (long)puVar4 - (long)puVar3;
  if (puVar4 == puVar3) {
    return;
  }
  this_00 = (TopLevelLiveRange *)*puVar3;
  TickCounter::DoTick(*(TickCounter **)(lVar9 + 0x1d8));
  lVar9 = *(long *)this;
  lVar12 = *(long *)(lVar9 + 0x90) - *(long *)(lVar9 + 0x88);
  do {
    if (lVar7 != lVar12) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
    }
    if ((this_00 != (TopLevelLiveRange *)0x0) && (*(long *)(this_00 + 0x10) != 0)) {
      local_48 = 0;
      lVar12 = *(long *)(this_00 + 0x20);
      if ((*(uint *)(this_00 + 4) & 0x60) == 0x20) {
        local_48 = **(ulong **)(lVar12 + 0x70);
      }
      else if ((*(uint *)(lVar12 + 4) >> 6 & 1) != 0) {
        local_48 = (ulong)(*(uint *)(lVar12 + 4) >> 8) & 0x1fe0 |
                   (ulong)*(uint *)(*(long *)(lVar12 + 0x70) + 0x2c) << 0x23 | 0xc;
      }
      uVar8 = *(uint *)(this_00 + 4);
      pTVar11 = this_00;
      if ((uVar8 >> 3 & 1) != 0) {
        iVar6 = *(int *)(this_00 + 0x5c);
        plVar10 = (long *)(lVar9 + 0x30);
        plVar16 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar16 == (long *)0x0) {
LAB_01664a6c:
          plVar15 = plVar10;
        }
        else {
          do {
            if (iVar6 <= (int)plVar16[4]) {
              plVar15 = plVar16;
            }
            plVar16 = (long *)plVar16[(int)plVar16[4] < iVar6];
          } while (plVar16 != (long *)0x0);
          if ((plVar15 == plVar10) || (iVar6 < (int)plVar15[4])) goto LAB_01664a6c;
        }
        if ((uVar8 & 0x1f80) == 0x1000) {
          if ((*(uint *)(lVar12 + 4) & 0x60) == 0x20) {
            uVar13 = **(ulong **)(lVar12 + 0x70);
          }
          else {
            uVar13 = (ulong)(*(uint *)(lVar12 + 4) >> 8) & 0x1fe0 |
                     (ulong)*(uint *)(*(long *)(lVar12 + 0x70) + 0x2c) << 0x23 | 0xc;
          }
        }
        else {
          uVar13 = (ulong)(uVar8 >> 8) & 0x1fe0 | (ulong)(uVar8 >> 7 & 0x3f) << 0x23 | 4;
        }
        puVar5 = *(undefined8 **)(plVar15[5] + 0x18);
        for (puVar14 = *(undefined8 **)(plVar15[5] + 0x10); puVar14 != puVar5; puVar14 = puVar14 + 1
            ) {
          *(ulong *)*puVar14 = uVar13;
        }
      }
      do {
        uVar8 = *(uint *)(pTVar11 + 4);
        if ((uVar8 & 0x1f80) == 0x1000) {
          lVar9 = *(long *)(pTVar11 + 0x20);
          if ((*(uint *)(lVar9 + 4) & 0x60) == 0x20) {
            uVar13 = **(ulong **)(lVar9 + 0x70);
            puVar14 = *(undefined8 **)(pTVar11 + 0x18);
          }
          else {
            uVar13 = (ulong)(*(uint *)(lVar9 + 4) >> 8) & 0x1fe0 |
                     (ulong)*(uint *)(*(long *)(lVar9 + 0x70) + 0x2c) << 0x23 | 0xc;
            puVar14 = *(undefined8 **)(pTVar11 + 0x18);
          }
        }
        else {
          uVar13 = (ulong)(uVar8 >> 8 & 0x1fe0 | 4) | (ulong)(uVar8 >> 7 & 0x3f) << 0x23;
          puVar14 = *(undefined8 **)(pTVar11 + 0x18);
        }
        for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)puVar14[2]) {
          if ((ulong *)*puVar14 != (ulong *)0x0) {
            uVar2 = local_48;
            if (((*(uint *)((long)puVar14 + 0x1c) ^ 0xffffffff) & 3) != 0) {
              uVar2 = uVar13;
            }
            *(ulong *)*puVar14 = uVar2;
          }
        }
        pTVar1 = pTVar11 + 0x28;
        pTVar11 = *(TopLevelLiveRange **)pTVar1;
      } while (*(TopLevelLiveRange **)pTVar1 != (TopLevelLiveRange *)0x0);
      if ((local_48 & 7) != 0) {
        if (((byte)(*(RegisterAllocationData **)this)[0x1d0] & 1) == 0) {
          if (this_00[0x80] == (TopLevelLiveRange)0x0) {
            uVar8 = *(uint *)(this_00 + 4);
LAB_01664bd4:
            TopLevelLiveRange::CommitSpillMoves
                      (this_00,*(RegisterAllocationData **)this,(InstructionOperand *)&local_48,
                       (uVar8 & 7) != 0);
          }
        }
        else {
          uVar8 = *(uint *)(this_00 + 4);
          if ((~uVar8 & 0x60) != 0) goto LAB_01664bd4;
        }
      }
    }
    puVar3 = puVar3 + 1;
    if (puVar3 == puVar4) {
      return;
    }
    this_00 = (TopLevelLiveRange *)*puVar3;
    TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0x1d8));
    lVar9 = *(long *)this;
    lVar12 = *(long *)(lVar9 + 0x90) - *(long *)(lVar9 + 0x88);
  } while( true );
}

