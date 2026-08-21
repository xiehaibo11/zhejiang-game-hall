
/* v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraintsForLastInstructionInBlock(v8::internal::compiler::InstructionBlock
   const*) */

void __thiscall
v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraintsForLastInstructionInBlock
          (ConstraintBuilder *this,InstructionBlock *param_1)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  RegisterAllocationData *this_00;
  long lVar5;
  ParallelMove *this_01;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  InstructionOperand *pIVar13;
  ulong uVar14;
  Zone *pZVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong local_68;
  
  this_00 = *(RegisterAllocationData **)this;
  iVar3 = *(int *)(param_1 + 0x74);
  lVar10 = (long)iVar3 + -1;
  uVar18 = *(long *)(*(long *)(this_00 + 0x10) + 0xb0) + lVar10;
  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(this_00 + 0x10) + 0x88) +
                              (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8);
  if (*(char *)(lVar17 + 4) == '\0') {
    return;
  }
  uVar18 = 0;
  do {
    pIVar13 = (InstructionOperand *)(lVar17 + uVar18 * 8 + 0x28);
    uVar14 = *(ulong *)pIVar13;
    lVar5 = RegisterAllocationData::GetOrCreateLiveRangeFor(this_00,(int)(uVar14 >> 3));
    if (((*(ulong *)pIVar13 >> 0x23 & 1) == 0) || (((uint)(*(ulong *)pIVar13 >> 0x24) & 7) - 3 < 2))
    {
      AllocateFixed(this,(UnallocatedOperand *)pIVar13,-1,false,false);
      bVar4 = false;
      if (((*(ulong *)pIVar13 & 0x1c) == 0xc) && (((uint)(*(ulong *)pIVar13 >> 5) & 0xff) < 0xb)) {
        iVar9 = *(int *)(lVar5 + 0x84);
        bVar4 = true;
        *(InstructionOperand **)(lVar5 + 0x70) = pIVar13;
        *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) & 0xffffff9f | 0x20;
        if (iVar3 <= iVar9) {
          iVar9 = (int)lVar10;
        }
        *(int *)(lVar5 + 0x84) = iVar9;
      }
      piVar16 = *(int **)param_1;
      piVar2 = *(int **)(param_1 + 8);
      if (piVar16 != piVar2) {
        uVar14 = uVar14 & 0x7fffffff8 | 0x9800000001;
        do {
          lVar7 = *(long *)(*(long *)this + 0x10);
          lVar12 = **(long **)(lVar7 + 0x10);
          if ((ulong)((*(long **)(lVar7 + 0x10))[1] - lVar12 >> 3) <= (ulong)(long)*piVar16)
          goto LAB_0165a6bc;
          uVar1 = *(long *)(lVar7 + 0xb0) +
                  (long)*(int *)(*(long *)(lVar12 + (long)*piVar16 * 8) + 0x70);
          lVar12 = *(long *)(*(long *)(*(long *)(lVar7 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                            (uVar1 & 0x1ff) * 8);
          this_01 = *(ParallelMove **)(lVar12 + 8);
          local_68 = uVar14;
          if (this_01 == (ParallelMove *)0x0) {
            pZVar15 = *(Zone **)(lVar7 + 8);
            this_01 = *(ParallelMove **)(pZVar15 + 0x10);
            if ((ulong)(*(long *)(pZVar15 + 0x18) - (long)this_01) < 0x20) {
              this_01 = (ParallelMove *)Zone::NewExpand(pZVar15,0x20);
            }
            else {
              *(ParallelMove **)(pZVar15 + 0x10) = this_01 + 0x20;
            }
            *(undefined8 *)this_01 = 0;
            *(undefined8 *)(this_01 + 8) = 0;
            *(undefined8 *)(this_01 + 0x10) = 0;
            *(Zone **)(this_01 + 0x18) = pZVar15;
            *(ParallelMove **)(lVar12 + 8) = this_01;
          }
          ParallelMove::AddMove
                    (this_01,pIVar13,(InstructionOperand *)&local_68,*(Zone **)(this_01 + 0x18));
          piVar16 = piVar16 + 1;
        } while (piVar2 != piVar16);
      }
      if (!bVar4) goto LAB_0165a5f0;
    }
    else {
LAB_0165a5f0:
      piVar16 = *(int **)param_1;
      piVar2 = *(int **)(param_1 + 8);
      while (piVar16 != piVar2) {
        plVar11 = *(long **)((*(undefined8 **)this)[2] + 0x10);
        lVar12 = *plVar11;
        if ((ulong)(plVar11[1] - lVar12 >> 3) <= (ulong)(long)*piVar16) {
LAB_0165a6bc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pZVar15 = (Zone *)**(undefined8 **)this;
        piVar6 = *(int **)(pZVar15 + 0x10);
        iVar9 = *(int *)(*(long *)(lVar12 + (long)*piVar16 * 8) + 0x70);
        if ((ulong)(*(long *)(pZVar15 + 0x18) - (long)piVar6) < 0x18) {
          piVar6 = (int *)Zone::NewExpand(pZVar15,0x18);
        }
        else {
          *(int **)(pZVar15 + 0x10) = piVar6 + 6;
        }
        uVar8 = *(undefined8 *)(lVar5 + 0x78);
        *piVar6 = iVar9;
        piVar16 = piVar16 + 1;
        *(InstructionOperand **)(piVar6 + 2) = pIVar13;
        *(undefined8 *)(piVar6 + 4) = uVar8;
        *(int **)(lVar5 + 0x78) = piVar6;
        if (*(int *)(lVar5 + 0x84) <= iVar9) {
          iVar9 = *(int *)(lVar5 + 0x84);
        }
        *(int *)(lVar5 + 0x84) = iVar9;
      }
    }
    uVar18 = uVar18 + 1;
    if (*(byte *)(lVar17 + 4) <= uVar18) {
      return;
    }
    this_00 = *(RegisterAllocationData **)this;
  } while( true );
}

