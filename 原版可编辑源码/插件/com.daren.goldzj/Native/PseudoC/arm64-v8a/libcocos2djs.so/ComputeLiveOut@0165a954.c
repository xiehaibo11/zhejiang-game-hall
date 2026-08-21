
/* v8::internal::compiler::LiveRangeBuilder::ComputeLiveOut(v8::internal::compiler::InstructionBlock
   const*, v8::internal::compiler::RegisterAllocationData*) */

int * v8::internal::compiler::LiveRangeBuilder::ComputeLiveOut
                (InstructionBlock *param_1,RegisterAllocationData *param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  int *piVar16;
  Zone *this;
  InstructionBlock *pIVar17;
  long lVar18;
  int *piVar19;
  
  iVar8 = *(int *)(param_1 + 100);
  piVar16 = *(int **)(*(long *)(param_2 + 0x68) + (long)iVar8 * 8);
  if (piVar16 == (int *)0x0) {
    this = *(Zone **)param_2;
    lVar18 = *(long *)(param_2 + 0x10);
    piVar16 = *(int **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)piVar16) < 0x10) {
      piVar16 = (int *)Zone::NewExpand(this,0x10);
    }
    else {
      *(int **)(this + 0x10) = piVar16 + 4;
    }
    iVar6 = *(int *)(lVar18 + 0xd0);
    *piVar16 = iVar6;
    if (iVar6 < 0x41) {
      piVar16[1] = 1;
      piVar16[2] = 0;
      piVar16[3] = 0;
    }
    else {
      iVar2 = iVar6 + 0x3e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      uVar7 = (iVar2 >> 6) + 1;
      piVar16[2] = 0;
      piVar16[3] = 0;
      piVar16[1] = uVar7;
      puVar9 = *(undefined8 **)(this + 0x10);
      uVar10 = (ulong)uVar7 * 8;
      if (uVar10 < (ulong)(*(long *)(this + 0x18) - (long)puVar9) ||
          uVar10 - (*(long *)(this + 0x18) - (long)puVar9) == 0) {
        *(undefined8 **)(this + 0x10) = puVar9 + uVar7;
      }
      else {
        puVar9 = (undefined8 *)Zone::NewExpand(this,uVar10);
      }
      *(undefined8 **)(piVar16 + 2) = puVar9;
      if (piVar16[1] == 1) {
        piVar16[2] = 0;
        piVar16[3] = 0;
      }
      else if ((0 < piVar16[1]) && (*puVar9 = 0, 1 < piVar16[1])) {
        lVar11 = 1;
        do {
          *(undefined8 *)(*(long *)(piVar16 + 2) + lVar11 * 8) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < piVar16[1]);
      }
    }
    piVar19 = *(int **)param_1;
    piVar4 = *(int **)(param_1 + 8);
    if (piVar19 != piVar4) {
      puVar1 = (ulong *)(piVar16 + 2);
      do {
        if (*(int *)(param_1 + 100) < *piVar19) {
          lVar11 = *(long *)(*(long *)(param_2 + 0x48) + (long)*piVar19 * 8);
          if (lVar11 != 0) {
            if (piVar16[1] == 1) {
              *puVar1 = *puVar1 | *(ulong *)(lVar11 + 8);
            }
            else if (0 < piVar16[1]) {
              lVar12 = 0;
              do {
                lVar15 = lVar12 * 8;
                lVar12 = lVar12 + 1;
                *(ulong *)(*(long *)(piVar16 + 2) + lVar15) =
                     *(ulong *)(*(long *)(piVar16 + 2) + lVar15) |
                     *(ulong *)(*(long *)(lVar11 + 8) + lVar15);
              } while (lVar12 < piVar16[1]);
            }
          }
          plVar13 = *(long **)(lVar18 + 0x10);
          lVar11 = *plVar13;
          if ((ulong)(plVar13[1] - lVar11 >> 3) <= (ulong)(long)*piVar19) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pIVar17 = *(InstructionBlock **)(lVar11 + (long)*piVar19 * 8);
          lVar11 = InstructionBlock::PredecessorIndexOf(pIVar17,*(undefined4 *)(param_1 + 100));
          plVar5 = *(long **)(pIVar17 + 0x48);
          for (plVar13 = *(long **)(pIVar17 + 0x40); plVar13 != plVar5; plVar13 = plVar13 + 1) {
            uVar7 = *(uint *)(*(long *)(*plVar13 + 0x10) + lVar11 * 4);
            puVar14 = puVar1;
            if (piVar16[1] != 1) {
              uVar3 = uVar7 + 0x3f;
              if (-1 < (int)uVar7) {
                uVar3 = uVar7;
              }
              puVar14 = (ulong *)(*(long *)(piVar16 + 2) + (long)((int)uVar3 >> 6) * 8);
            }
            *puVar14 = *puVar14 | 1L << ((ulong)uVar7 & 0x3f);
          }
        }
        piVar19 = piVar19 + 1;
      } while (piVar19 != piVar4);
    }
    *(int **)(*(long *)(param_2 + 0x68) + (long)iVar8 * 8) = piVar16;
  }
  return piVar16;
}

