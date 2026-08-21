
/* v8::internal::compiler::InstructionSelector::SelectInstructions() */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::SelectInstructions(InstructionSelector *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  Zone *this_00;
  InstructionScheduler *this_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long *plVar20;
  PhiInstruction *this_02;
  Instruction *pIVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar19;
  
  lVar22 = *(long *)(this + 0x28);
  plVar20 = *(long **)(lVar22 + 0x48);
  plVar2 = *(long **)(lVar22 + 0x50);
  if (plVar20 != plVar2) {
    do {
      lVar11 = *plVar20;
      if (*(long *)(lVar11 + 0x28) != 0) {
        plVar3 = *(long **)(lVar11 + 0x48);
        for (plVar1 = *(long **)(lVar11 + 0x40); plVar1 != plVar3; plVar1 = plVar1 + 1) {
          plVar13 = (long *)*plVar1;
          if (*(short *)(*plVar13 + 0x10) == 0x23) {
            plVar14 = plVar13 + 4;
            uVar15 = *(byte *)((long)plVar13 + 0x17) & 0xf;
            if (uVar15 == 0xf) {
              uVar15 = *(uint *)(*plVar14 + 8);
              plVar14 = (long *)(*plVar14 + 0x10);
            }
            if (uVar15 != 0) {
              lVar11 = (long)(int)uVar15 << 3;
              do {
                lVar11 = lVar11 + -8;
                uVar7 = ((ulong)*(uint *)(*plVar14 + 0x14) & 0xffffc0) >> 3;
                *(ulong *)(*(long *)(this + 0xd8) + uVar7) =
                     1L << ((ulong)*(uint *)(*plVar14 + 0x14) & 0x3f) |
                     *(ulong *)(*(long *)(this + 0xd8) + uVar7);
                plVar14 = plVar14 + 1;
              } while (lVar11 != 0);
            }
          }
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar2);
    plVar20 = *(long **)(lVar22 + 0x50);
  }
  while (plVar20 != *(long **)(lVar22 + 0x48)) {
    plVar20 = plVar20 + -1;
    VisitBlock(this,(BasicBlock *)*plVar20);
    if (this[0x178] != (InstructionSelector)0x0) {
      return 0;
    }
  }
  if ((*(int *)(this + 0x160) == 1) &&
     (uVar7 = InstructionScheduler::SchedulerSupported(), (uVar7 & 1) != 0)) {
    this_00 = *(Zone **)this;
    this_01 = *(InstructionScheduler **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0xa8) {
      this_01 = (InstructionScheduler *)Zone::NewExpand(this_00,0xa8);
    }
    else {
      *(InstructionScheduler **)(this_00 + 0x10) = this_01 + 0xa8;
    }
    InstructionScheduler::InstructionScheduler
              (this_01,*(Zone **)this,*(InstructionSequence **)(this + 0x10));
    *(InstructionScheduler **)(this + 0x158) = this_01;
  }
  plVar20 = *(long **)(lVar22 + 0x48);
  plVar2 = *(long **)(lVar22 + 0x50);
  do {
    if (plVar20 == plVar2) {
      return 1;
    }
    lVar11 = *plVar20;
    iVar17 = *(int *)(lVar11 + 4);
    lVar22 = **(long **)(*(long *)(this + 0x10) + 0x10);
    if ((ulong)((*(long **)(*(long *)(this + 0x10) + 0x10))[1] - lVar22 >> 3) <= (ulong)(long)iVar17
       ) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar24 = *(long *)(lVar22 + (long)iVar17 * 8);
    lVar22 = *(long *)(lVar24 + 0x40);
    lVar9 = *(long *)(lVar24 + 0x48);
    if (lVar9 != lVar22) {
      uVar7 = 0;
      do {
        this_02 = *(PhiInstruction **)(lVar22 + uVar7 * 8);
        lVar8 = *(long *)(this_02 + 0x10);
        lVar10 = *(long *)(this_02 + 0x18);
        if (lVar10 != lVar8) {
          uVar23 = 0;
          do {
            iVar17 = *(int *)(lVar8 + uVar23 * 4);
            iVar5 = iVar17;
            do {
              iVar16 = iVar5;
              if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <=
                  (ulong)(long)iVar16) break;
              iVar5 = *(int *)(*(long *)(this + 0x138) + (long)iVar16 * 4);
            } while (iVar5 != -1);
            if (iVar17 != iVar16) {
              PhiInstruction::RenameInput(this_02,uVar23,iVar16);
              lVar8 = *(long *)(this_02 + 0x10);
              lVar10 = *(long *)(this_02 + 0x18);
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ulong)(lVar10 - lVar8 >> 2));
          lVar22 = *(long *)(lVar24 + 0x40);
          lVar9 = *(long *)(lVar24 + 0x48);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(lVar9 - lVar22 >> 3));
      iVar17 = *(int *)(lVar11 + 4);
    }
    iVar5 = *(int *)(lVar24 + 0x70);
    uVar7 = (ulong)iVar5;
    iVar16 = *(int *)(lVar24 + 0x74);
    lVar22 = (long)iVar16;
    if ((*(int *)(this + 0x160) == 1) &&
       (uVar23 = InstructionScheduler::SchedulerSupported(), (uVar23 & 1) != 0)) {
      InstructionScheduler::StartBlock(*(InstructionScheduler **)(this + 0x158),iVar17);
    }
    else {
      InstructionSequence::StartBlock(*(InstructionSequence **)(this + 0x10),iVar17);
    }
    if (iVar16 != iVar5) {
      lVar9 = *(long *)(this + 0x38);
      while (lVar22 + 1U < uVar7) {
        uVar7 = uVar7 - 1;
        pIVar21 = *(Instruction **)(lVar9 + uVar7 * 8);
        uVar15 = *(uint *)(pIVar21 + 4);
        if ((uVar15 & 0xffff00) != 0) {
          uVar23 = 0;
          do {
            uVar12 = *(ulong *)(pIVar21 + (uVar23 + (uVar15 & 0xff)) * 8 + 0x28);
            if ((uVar12 & 7) == 1) {
              uVar19 = uVar12 >> 3 & 0xffffffff;
              do {
                uVar18 = uVar19;
                iVar17 = (int)uVar18;
                if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <=
                    (ulong)(long)iVar17) break;
                uVar6 = *(uint *)(*(long *)(this + 0x138) + (long)iVar17 * 4);
                uVar19 = (ulong)uVar6;
              } while (uVar6 != 0xffffffff);
              if (iVar17 != (int)(uVar12 >> 3)) {
                *(ulong *)(pIVar21 + (uVar23 + (uVar15 & 0xff)) * 8 + 0x28) =
                     uVar12 & 0xfffffff800000000 | uVar12 & 7 | uVar18 << 3;
                uVar15 = *(uint *)(pIVar21 + 4);
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < (uVar15 >> 8 & 0xffff));
          pIVar21 = *(Instruction **)(*(long *)(this + 0x38) + uVar7 * 8);
        }
        if ((*(int *)(this + 0x160) == 1) &&
           (uVar23 = InstructionScheduler::SchedulerSupported(), (uVar23 & 1) != 0)) {
          InstructionScheduler::AddInstruction(*(InstructionScheduler **)(this + 0x158),pIVar21);
        }
        else {
          InstructionSequence::AddInstruction(*(InstructionSequence **)(this + 0x10),pIVar21);
        }
        lVar9 = *(long *)(this + 0x38);
      }
      pIVar21 = *(Instruction **)(lVar9 + lVar22 * 8);
      uVar15 = *(uint *)(pIVar21 + 4);
      if ((uVar15 & 0xffff00) != 0) {
        uVar7 = 0;
        do {
          uVar23 = *(ulong *)(pIVar21 + (uVar7 + (uVar15 & 0xff)) * 8 + 0x28);
          if ((uVar23 & 7) == 1) {
            uVar12 = uVar23 >> 3 & 0xffffffff;
            do {
              uVar19 = uVar12;
              iVar17 = (int)uVar19;
              if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <=
                  (ulong)(long)iVar17) break;
              uVar6 = *(uint *)(*(long *)(this + 0x138) + (long)iVar17 * 4);
              uVar12 = (ulong)uVar6;
            } while (uVar6 != 0xffffffff);
            if (iVar17 != (int)(uVar23 >> 3)) {
              *(ulong *)(pIVar21 + (uVar7 + (uVar15 & 0xff)) * 8 + 0x28) =
                   uVar23 & 0xfffffff800000000 | uVar23 & 7 | uVar19 << 3;
              uVar15 = *(uint *)(pIVar21 + 4);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uVar15 >> 8 & 0xffff));
        pIVar21 = *(Instruction **)(*(long *)(this + 0x38) + lVar22 * 8);
      }
      if ((*(int *)(this + 0x160) == 1) &&
         (uVar7 = InstructionScheduler::SchedulerSupported(), (uVar7 & 1) != 0)) {
        InstructionScheduler::AddTerminator(*(InstructionScheduler **)(this + 0x158),pIVar21);
      }
      else {
        InstructionSequence::AddInstruction(*(InstructionSequence **)(this + 0x10),pIVar21);
      }
    }
    uVar4 = *(undefined4 *)(lVar11 + 4);
    if ((*(int *)(this + 0x160) == 1) &&
       (uVar7 = InstructionScheduler::SchedulerSupported(), (uVar7 & 1) != 0)) {
      InstructionScheduler::EndBlock(*(InstructionScheduler **)(this + 0x158),uVar4);
    }
    else {
      InstructionSequence::EndBlock(*(undefined8 *)(this + 0x10),uVar4);
    }
    plVar20 = plVar20 + 1;
  } while( true );
}

