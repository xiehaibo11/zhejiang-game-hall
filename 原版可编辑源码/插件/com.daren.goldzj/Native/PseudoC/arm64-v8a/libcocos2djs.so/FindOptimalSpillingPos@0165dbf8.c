
/* v8::internal::compiler::RegisterAllocator::FindOptimalSpillingPos(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::RegisterAllocationData::SpillMode, v8::internal::compiler::LiveRange**)
    */

uint __thiscall
v8::internal::compiler::RegisterAllocator::FindOptimalSpillingPos
          (RegisterAllocator *this,long param_1,uint param_3,int param_4,long *param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  long *plVar12;
  
  *param_5 = param_1;
  if (param_4 != 1) {
    uVar2 = (param_3 & 0xfffffffe) + 3;
    if (-1 < (int)param_3) {
      uVar2 = param_3 & 0xfffffffe;
    }
    lVar3 = InstructionSequence::GetInstructionBlock
                      (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar2 >> 2);
    if (*(int *)(lVar3 + 0x6c) < 0) {
      uVar2 = *(uint *)(lVar3 + 0x68);
      if ((int)uVar2 < 0) {
        return param_3;
      }
      plVar12 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
      lVar3 = *plVar12;
      if ((ulong)(plVar12[1] - lVar3 >> 3) <= (ulong)uVar2) {
LAB_0165df94:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(lVar3 + (ulong)uVar2 * 8);
    }
    if (lVar3 != 0) {
      lVar5 = *(long *)this;
      if ((*(byte *)(lVar5 + 0x1d0) & 1) != 0) {
LAB_0165dcbc:
        plVar1 = (long *)(*(long *)(lVar5 + 0x1b0) + (long)*(int *)(lVar3 + 100) * 0x20);
        plVar12 = (long *)*plVar1;
        plVar1 = (long *)plVar1[1];
        if (plVar12 != plVar1) {
          uVar2 = *(int *)(lVar3 + 0x70) * 4;
          do {
            lVar5 = *plVar12;
            if (*(long *)(lVar5 + 0x20) == *(long *)(param_1 + 0x20)) {
              puVar9 = (undefined8 *)(lVar5 + 0x10);
              if ((((int *)*puVar9 != (int *)0x0) && (*(int *)*puVar9 <= (int)uVar2)) &&
                 ((int)uVar2 < *(int *)(*(long *)(lVar5 + 8) + 4))) {
                puVar8 = (undefined8 *)(lVar5 + 0x30);
                puVar6 = puVar9;
                if (((int *)*puVar8 != (int *)0x0) &&
                   (puVar6 = puVar8, (int)uVar2 < *(int *)*puVar8)) {
                  *puVar8 = 0;
                  puVar6 = puVar9;
                }
                for (puVar10 = (uint *)*puVar6; puVar10 != (uint *)0x0;
                    puVar10 = *(uint **)(puVar10 + 2)) {
                  uVar11 = *puVar10;
                  if ((int)uVar11 <= (int)uVar2) {
                    if ((int *)*puVar8 == (int *)0x0) {
                      if (uVar11 < 0x80000000) goto LAB_0165dd7c;
                    }
                    else if (*(int *)*puVar8 < (int)uVar11) {
LAB_0165dd7c:
                      *puVar8 = puVar10;
                      uVar11 = *puVar10;
                    }
                  }
                  if ((int)uVar2 < (int)uVar11) break;
                  if ((int)uVar2 < (int)puVar10[1]) {
                    lVar4 = lVar5;
                    if ((*(byte *)(lVar5 + 4) & 1) == 0) goto LAB_0165de04;
                    break;
                  }
                }
              }
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar1);
        }
        uVar11 = *(uint *)(lVar3 + 0x68);
        if ((int)uVar11 < 0) {
          return param_3;
        }
        goto LAB_0165ddc0;
      }
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          if ((int)param_3 <= *(int *)(lVar5 + 0x18)) break;
          if ((*(byte *)(lVar5 + 0x1c) & 0x20) != 0) {
            lVar4 = lVar5;
          }
          lVar5 = *(long *)(lVar5 + 0x10);
        } while (lVar5 != 0);
      }
      puVar6 = (undefined8 *)(param_1 + 0x10);
      puVar9 = (undefined8 *)(param_1 + 0x30);
      do {
        if ((((int *)*puVar6 != (int *)0x0) &&
            (uVar2 = *(int *)(lVar3 + 0x70) * 4, *(int *)*puVar6 <= (int)uVar2)) &&
           ((int)uVar2 < *(int *)(*(long *)(param_1 + 8) + 4))) {
          puVar8 = puVar6;
          if (((int *)*puVar9 != (int *)0x0) && (puVar8 = puVar9, (int)uVar2 < *(int *)*puVar9)) {
            *puVar9 = 0;
            puVar8 = puVar6;
          }
          for (puVar10 = (uint *)*puVar8; puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2))
          {
            uVar11 = *puVar10;
            if ((int)uVar11 <= (int)uVar2) {
              if ((int *)*puVar9 == (int *)0x0) {
                if (uVar11 < 0x80000000) goto LAB_0165df08;
              }
              else if (*(int *)*puVar9 < (int)uVar11) {
LAB_0165df08:
                *puVar9 = puVar10;
                uVar11 = *puVar10;
              }
            }
            if ((int)uVar2 < (int)uVar11) break;
            if ((int)uVar2 < (int)puVar10[1]) {
              if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) < (int)uVar2)) {
                param_3 = uVar2;
              }
              break;
            }
          }
        }
        uVar2 = *(uint *)(lVar3 + 0x68);
        if ((int)uVar2 < 0) {
          return param_3;
        }
        plVar12 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
        lVar3 = *plVar12;
        if ((ulong)(plVar12[1] - lVar3 >> 3) <= (ulong)uVar2) goto LAB_0165df94;
        lVar3 = *(long *)(lVar3 + (ulong)uVar2 * 8);
      } while (lVar3 != 0);
    }
  }
  return param_3;
LAB_0165de04:
  if (**(int **)(lVar4 + 0x10) < (int)param_3) {
    lVar7 = *(long *)(lVar4 + 0x38);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) <= (int)uVar2)) goto LAB_0165de30;
    for (lVar7 = *(long *)(lVar4 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
LAB_0165de30:
      if ((int)uVar2 <= *(int *)(lVar7 + 0x18)) {
        *(long *)(lVar4 + 0x38) = lVar7;
        goto LAB_0165de4c;
      }
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    goto LAB_0165ddfc;
  }
  goto LAB_0165de70;
  while (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0) {
LAB_0165de4c:
    if ((*(byte *)(lVar7 + 0x1c) >> 5 & 1) != 0) {
      if (*(int *)(lVar7 + 0x18) < (int)param_3) {
        return param_3;
      }
      break;
    }
  }
LAB_0165ddfc:
  plVar12 = (long *)(lVar4 + 0x28);
  lVar4 = *plVar12;
  if (*plVar12 == 0) goto LAB_0165de70;
  goto LAB_0165de04;
LAB_0165de70:
  *param_5 = lVar5;
  uVar11 = *(uint *)(lVar3 + 0x68);
  param_3 = uVar2;
  if ((int)uVar11 < 0) {
    return uVar2;
  }
LAB_0165ddc0:
  plVar12 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
  lVar3 = *plVar12;
  if ((ulong)(plVar12[1] - lVar3 >> 3) <= (ulong)uVar11) goto LAB_0165df94;
  lVar3 = *(long *)(lVar3 + (ulong)uVar11 * 8);
  if (lVar3 == 0) {
    return param_3;
  }
  lVar5 = *(long *)this;
  goto LAB_0165dcbc;
}

