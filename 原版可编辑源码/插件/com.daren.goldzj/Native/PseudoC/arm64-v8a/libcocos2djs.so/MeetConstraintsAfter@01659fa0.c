
/* v8::internal::compiler::ConstraintBuilder::MeetConstraintsAfter(int) */

void __thiscall
v8::internal::compiler::ConstraintBuilder::MeetConstraintsAfter(ConstraintBuilder *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  ParallelMove *pPVar7;
  int *piVar8;
  int iVar9;
  UnallocatedOperand *pUVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  InstructionOperand *pIVar19;
  Zone *pZVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_68;
  
  uVar17 = *(long *)(*(long *)(*(long *)this + 0x10) + 0xb0) + (long)param_1;
  lVar21 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)this + 0x10) + 0x88) +
                              (uVar17 >> 6 & 0x3fffffffffffff8)) + (uVar17 & 0x1ff) * 8);
  uVar11 = *(uint *)(lVar21 + 4);
  if ((uVar11 & 0x3f000000) != 0) {
    uVar17 = 0;
    do {
      pUVar10 = (UnallocatedOperand *)
                (lVar21 + (uVar17 + ((uVar11 >> 8 & 0xffff) + (uVar11 & 0xff))) * 8 + 0x28);
      uVar14 = *(ulong *)pUVar10;
      if (((uVar14 >> 0x23 & 1) == 0) || (((uint)(uVar14 >> 0x24) & 7) - 3 < 2)) {
        AllocateFixed(this,pUVar10,param_1,false,false);
        uVar11 = *(uint *)(lVar21 + 4);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (uVar11 >> 0x18 & 0x3f));
  }
  if ((uVar11 & 0xff) != 0) {
    iVar1 = param_1 + 1;
    uVar17 = 0;
    do {
      pIVar19 = (InstructionOperand *)(lVar21 + uVar17 * 8 + 0x28);
      iVar9 = (int)(*(ulong *)pIVar19 >> 3);
      if ((*(ulong *)pIVar19 & 7) == 2) {
        lVar6 = RegisterAllocationData::GetOrCreateLiveRangeFor
                          (*(RegisterAllocationData **)this,iVar9);
        *(InstructionOperand **)(lVar6 + 0x70) = pIVar19;
        iVar9 = iVar1;
        if (*(int *)(lVar6 + 0x84) <= iVar1) {
          iVar9 = *(int *)(lVar6 + 0x84);
        }
        *(int *)(lVar6 + 0x84) = iVar9;
        *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) & 0xffffff9f | 0x20;
      }
      else {
        lVar6 = RegisterAllocationData::GetOrCreateLiveRangeFor
                          (*(RegisterAllocationData **)this,iVar9);
        uVar14 = *(ulong *)pIVar19;
        if (((uVar14 >> 0x23 & 1) == 0) || (((uint)(uVar14 >> 0x24) & 7) - 3 < 2)) {
          local_68 = uVar14 & 0x7fffffff8 | 0x9800000001;
          cVar5 = InstructionSequence::GetRepresentation
                            (*(InstructionSequence **)(*(long *)this + 0x10),(int)(uVar14 >> 3));
          if ((*(ulong *)pIVar19 & 0x17800000000) == 0x13800000000) {
            *(undefined1 *)(lVar6 + 0xa0) = 1;
            lVar22 = *(long *)this;
            plVar3 = *(long **)(lVar22 + 0x198);
            uVar14 = *(ulong *)pIVar19 >> 0x2f & 7;
            if (plVar3 < *(long **)(lVar22 + 0x1a0)) {
              *plVar3 = lVar6;
              plVar3[1] = uVar14;
              *(long *)(lVar22 + 0x198) = *(long *)(lVar22 + 0x198) + 0x10;
            }
            else {
              lVar18 = (long)plVar3 - *(long *)(lVar22 + 400) >> 4;
              uVar2 = lVar18 + 1;
              if (uVar2 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = (long)*(long **)(lVar22 + 0x1a0) - *(long *)(lVar22 + 400);
              uVar15 = lVar12 >> 3;
              if (uVar2 <= uVar15) {
                uVar2 = uVar15;
              }
              if (0x3fffffe < (ulong)(lVar12 >> 4)) {
                uVar2 = 0x7ffffff;
              }
              if (uVar2 == 0) {
                lVar12 = 0;
              }
              else {
                pZVar20 = *(Zone **)(lVar22 + 0x1a8);
                uVar15 = uVar2 * 0x10;
                lVar12 = *(long *)(pZVar20 + 0x10);
                if (uVar15 < (ulong)(*(long *)(pZVar20 + 0x18) - lVar12) ||
                    uVar15 - (*(long *)(pZVar20 + 0x18) - lVar12) == 0) {
                  *(ulong *)(pZVar20 + 0x10) = lVar12 + uVar15;
                }
                else {
                  lVar12 = Zone::NewExpand(pZVar20,uVar15);
                }
              }
              plVar3 = (long *)(lVar12 + lVar18 * 0x10);
              *plVar3 = lVar6;
              plVar3[1] = uVar14;
              lVar18 = *(long *)(lVar22 + 400);
              plVar4 = plVar3;
              for (lVar16 = *(long *)(lVar22 + 0x198); lVar16 != lVar18; lVar16 = lVar16 + -0x10) {
                lVar23 = *(long *)(lVar16 + -0x10);
                plVar4[-1] = *(long *)(lVar16 + -8);
                plVar4[-2] = lVar23;
                plVar4 = plVar4 + -2;
              }
              *(long **)(lVar22 + 400) = plVar4;
              *(long **)(lVar22 + 0x198) = plVar3 + 2;
              *(ulong *)(lVar22 + 0x1a0) = lVar12 + uVar2 * 0x10;
            }
          }
          AllocateFixed(this,(UnallocatedOperand *)pIVar19,param_1,
                        (byte)(cVar5 - 7U) < 2 || (byte)(cVar5 - 9U) < 2,false);
          if (((*(ulong *)pIVar19 & 0x1c) == 0xc) && (((uint)(*(ulong *)pIVar19 >> 5) & 0xff) < 0xb)
             ) {
            *(InstructionOperand **)(lVar6 + 0x70) = pIVar19;
            iVar9 = iVar1;
            if (*(int *)(lVar6 + 0x84) <= iVar1) {
              iVar9 = *(int *)(lVar6 + 0x84);
            }
            *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) & 0xffffff9f | 0x20;
            *(int *)(lVar6 + 0x84) = iVar9;
            lVar6 = *(long *)(*(long *)this + 0x10);
            uVar14 = *(long *)(lVar6 + 0xb0) + (long)iVar1;
            lVar22 = *(long *)(*(long *)(*(long *)(lVar6 + 0x88) + (uVar14 >> 6 & 0x3fffffffffffff8)
                                        ) + (uVar14 & 0x1ff) * 8);
            pPVar7 = *(ParallelMove **)(lVar22 + 8);
            if (pPVar7 == (ParallelMove *)0x0) {
              pZVar20 = *(Zone **)(lVar6 + 8);
              pPVar7 = *(ParallelMove **)(pZVar20 + 0x10);
              if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pPVar7) < 0x20) {
                pPVar7 = (ParallelMove *)Zone::NewExpand(pZVar20,0x20);
              }
              else {
                *(ParallelMove **)(pZVar20 + 0x10) = pPVar7 + 0x20;
              }
              *(undefined8 *)pPVar7 = 0;
              *(undefined8 *)(pPVar7 + 8) = 0;
              *(undefined8 *)(pPVar7 + 0x10) = 0;
              *(Zone **)(pPVar7 + 0x18) = pZVar20;
              *(ParallelMove **)(lVar22 + 8) = pPVar7;
            }
            ParallelMove::AddMove
                      (pPVar7,pIVar19,(InstructionOperand *)&local_68,*(Zone **)(pPVar7 + 0x18));
            goto LAB_0165a0a4;
          }
          lVar22 = *(long *)(*(long *)this + 0x10);
          uVar14 = *(long *)(lVar22 + 0xb0) + (long)iVar1;
          lVar18 = *(long *)(*(long *)(*(long *)(lVar22 + 0x88) + (uVar14 >> 6 & 0x3fffffffffffff8))
                            + (uVar14 & 0x1ff) * 8);
          pPVar7 = *(ParallelMove **)(lVar18 + 8);
          if (pPVar7 == (ParallelMove *)0x0) {
            pZVar20 = *(Zone **)(lVar22 + 8);
            pPVar7 = *(ParallelMove **)(pZVar20 + 0x10);
            if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pPVar7) < 0x20) {
              pPVar7 = (ParallelMove *)Zone::NewExpand(pZVar20,0x20);
            }
            else {
              *(ParallelMove **)(pZVar20 + 0x10) = pPVar7 + 0x20;
            }
            *(undefined8 *)pPVar7 = 0;
            *(undefined8 *)(pPVar7 + 8) = 0;
            *(undefined8 *)(pPVar7 + 0x10) = 0;
            *(Zone **)(pPVar7 + 0x18) = pZVar20;
            *(ParallelMove **)(lVar18 + 8) = pPVar7;
          }
          ParallelMove::AddMove
                    (pPVar7,pIVar19,(InstructionOperand *)&local_68,*(Zone **)(pPVar7 + 0x18));
        }
        pZVar20 = (Zone *)**(undefined8 **)this;
        piVar8 = *(int **)(pZVar20 + 0x10);
        if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)piVar8) < 0x18) {
          piVar8 = (int *)Zone::NewExpand(pZVar20,0x18);
        }
        else {
          *(int **)(pZVar20 + 0x10) = piVar8 + 6;
        }
        uVar13 = *(undefined8 *)(lVar6 + 0x78);
        *piVar8 = iVar1;
        *(InstructionOperand **)(piVar8 + 2) = pIVar19;
        *(undefined8 *)(piVar8 + 4) = uVar13;
        *(int **)(lVar6 + 0x78) = piVar8;
        iVar9 = iVar1;
        if (*(int *)(lVar6 + 0x84) <= iVar1) {
          iVar9 = *(int *)(lVar6 + 0x84);
        }
        *(int *)(lVar6 + 0x84) = iVar9;
      }
LAB_0165a0a4:
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(byte *)(lVar21 + 4));
  }
  return;
}

