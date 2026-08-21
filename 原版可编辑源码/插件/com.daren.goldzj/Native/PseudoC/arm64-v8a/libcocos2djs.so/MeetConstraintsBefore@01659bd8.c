
/* v8::internal::compiler::ConstraintBuilder::MeetConstraintsBefore(int) */

void __thiscall
v8::internal::compiler::ConstraintBuilder::MeetConstraintsBefore
          (ConstraintBuilder *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  ParallelMove *pPVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  InstructionOperand *pIVar11;
  UnallocatedOperand *pUVar12;
  long lVar13;
  Zone *pZVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong local_68;
  
  lVar15 = (long)param_1;
  uVar18 = *(long *)(*(long *)(*(long *)this + 0x10) + 0xb0) + lVar15;
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)this + 0x10) + 0x88) +
                              (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8);
  uVar5 = *(uint *)(lVar16 + 4);
  if ((uVar5 & 0xffff00) != 0) {
    uVar18 = 0;
    do {
      pUVar12 = (UnallocatedOperand *)(lVar16 + (uVar18 + (uVar5 & 0xff)) * 8 + 0x28);
      uVar8 = *(ulong *)pUVar12;
      if (((uVar8 & 7) != 3) &&
         (((uVar8 >> 0x23 & 1) == 0 || (((uint)(uVar8 >> 0x24) & 7) - 3 < 2)))) {
        local_68 = uVar8 & 0x7fffffff8 | 0x9800000001;
        cVar3 = InstructionSequence::GetRepresentation
                          (*(InstructionSequence **)(*(long *)this + 0x10),(int)(uVar8 >> 3));
        AllocateFixed(this,pUVar12,param_1,(byte)(cVar3 - 7U) < 2 || (byte)(cVar3 - 9U) < 2,true);
        lVar6 = *(long *)(*(long *)this + 0x10);
        uVar8 = *(long *)(lVar6 + 0xb0) + lVar15;
        lVar17 = *(long *)(*(long *)(*(long *)(lVar6 + 0x88) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                          (uVar8 & 0x1ff) * 8);
        pPVar4 = *(ParallelMove **)(lVar17 + 0x10);
        if (pPVar4 == (ParallelMove *)0x0) {
          pZVar14 = *(Zone **)(lVar6 + 8);
          pPVar4 = *(ParallelMove **)(pZVar14 + 0x10);
          if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pPVar4) < 0x20) {
            pPVar4 = (ParallelMove *)Zone::NewExpand(pZVar14,0x20);
          }
          else {
            *(ParallelMove **)(pZVar14 + 0x10) = pPVar4 + 0x20;
          }
          *(undefined8 *)pPVar4 = 0;
          *(undefined8 *)(pPVar4 + 8) = 0;
          *(undefined8 *)(pPVar4 + 0x10) = 0;
          *(Zone **)(pPVar4 + 0x18) = pZVar14;
          *(ParallelMove **)(lVar17 + 0x10) = pPVar4;
        }
        ParallelMove::AddMove
                  (pPVar4,(InstructionOperand *)&local_68,(InstructionOperand *)pUVar12,
                   *(Zone **)(pPVar4 + 0x18));
        uVar5 = *(uint *)(lVar16 + 4);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uVar5 >> 8 & 0xffff));
  }
  uVar18 = (ulong)(uVar5 & 0xff);
  if ((uVar5 & 0xff) != 0) {
    uVar8 = 0;
    do {
      puVar10 = (ulong *)(lVar16 + uVar8 * 8 + 0x28);
      uVar19 = *puVar10;
      if ((uVar19 & 0x7800000007) == 0x7800000001) {
        pIVar11 = (InstructionOperand *)(lVar16 + uVar18 * 8 + 0x28);
        uVar9 = *(ulong *)pIVar11;
        local_68 = uVar9 & 0x7fffffff8 | 0x9800000001;
        *(ulong *)pIVar11 =
             *(ulong *)pIVar11 & 0xfffffff800000000 |
             *(ulong *)pIVar11 & 7 | (*puVar10 >> 3 & 0xffffffff) << 3;
        lVar6 = *(long *)(*(long *)this + 0x10);
        uVar18 = *(long *)(lVar6 + 0xb0) + lVar15;
        lVar17 = *(long *)(*(long *)(*(long *)(lVar6 + 0x88) + (uVar18 >> 6 & 0x3fffffffffffff8)) +
                          (uVar18 & 0x1ff) * 8);
        pPVar4 = *(ParallelMove **)(lVar17 + 0x10);
        if (pPVar4 == (ParallelMove *)0x0) {
          pZVar14 = *(Zone **)(lVar6 + 8);
          pPVar4 = *(ParallelMove **)(pZVar14 + 0x10);
          if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pPVar4) < 0x20) {
            pPVar4 = (ParallelMove *)Zone::NewExpand(pZVar14,0x20);
          }
          else {
            *(ParallelMove **)(pZVar14 + 0x10) = pPVar4 + 0x20;
          }
          *(undefined8 *)pPVar4 = 0;
          *(undefined8 *)(pPVar4 + 8) = 0;
          *(undefined8 *)(pPVar4 + 0x10) = 0;
          *(Zone **)(pPVar4 + 0x18) = pZVar14;
          *(ParallelMove **)(lVar17 + 0x10) = pPVar4;
        }
        lVar6 = ParallelMove::AddMove
                          (pPVar4,(InstructionOperand *)&local_68,pIVar11,*(Zone **)(pPVar4 + 0x18))
        ;
        cVar3 = InstructionSequence::GetRepresentation
                          (*(InstructionSequence **)(*(long *)this + 0x10),(int)(uVar9 >> 3));
        if ((((byte)(cVar3 - 7U) < 4) &&
            (cVar3 = InstructionSequence::GetRepresentation
                               (*(InstructionSequence **)(*(long *)this + 0x10),(int)(uVar19 >> 3)),
            3 < (byte)(cVar3 - 7U))) && (lVar17 = *(long *)(lVar16 + 0x18), lVar17 != 0)) {
          lVar13 = *(long *)this;
          plVar1 = *(long **)(lVar13 + 0x150);
          if (plVar1 == *(long **)(lVar13 + 0x158)) {
            lVar20 = (long)plVar1 - *(long *)(lVar13 + 0x148) >> 4;
            uVar18 = lVar20 + 1;
            if (uVar18 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar7 = (long)*(long **)(lVar13 + 0x158) - *(long *)(lVar13 + 0x148);
            uVar19 = lVar7 >> 3;
            if (uVar18 <= uVar19) {
              uVar18 = uVar19;
            }
            if (0x3fffffe < (ulong)(lVar7 >> 4)) {
              uVar18 = 0x7ffffff;
            }
            if (uVar18 == 0) {
              lVar7 = 0;
            }
            else {
              pZVar14 = *(Zone **)(lVar13 + 0x160);
              uVar19 = uVar18 * 0x10;
              lVar7 = *(long *)(pZVar14 + 0x10);
              if (uVar19 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar7) ||
                  uVar19 - (*(long *)(pZVar14 + 0x18) - lVar7) == 0) {
                *(ulong *)(pZVar14 + 0x10) = lVar7 + uVar19;
              }
              else {
                lVar7 = Zone::NewExpand(pZVar14,uVar19);
              }
            }
            plVar1 = (long *)(lVar7 + lVar20 * 0x10);
            *plVar1 = lVar17;
            plVar1[1] = lVar6;
            lVar6 = *(long *)(lVar13 + 0x148);
            plVar2 = plVar1;
            for (lVar17 = *(long *)(lVar13 + 0x150); lVar17 != lVar6; lVar17 = lVar17 + -0x10) {
              lVar20 = *(long *)(lVar17 + -0x10);
              plVar2[-1] = *(long *)(lVar17 + -8);
              plVar2[-2] = lVar20;
              plVar2 = plVar2 + -2;
            }
            *(long **)(lVar13 + 0x148) = plVar2;
            *(long **)(lVar13 + 0x150) = plVar1 + 2;
            *(ulong *)(lVar13 + 0x158) = lVar7 + uVar18 * 0x10;
          }
          else {
            *plVar1 = lVar17;
            plVar1[1] = lVar6;
            *(long *)(lVar13 + 0x150) = *(long *)(lVar13 + 0x150) + 0x10;
          }
        }
        uVar5 = (uint)*(byte *)(lVar16 + 4);
      }
      uVar8 = uVar8 + 1;
      uVar18 = (ulong)(uVar5 & 0xff);
    } while (uVar8 < uVar18);
  }
  return;
}

