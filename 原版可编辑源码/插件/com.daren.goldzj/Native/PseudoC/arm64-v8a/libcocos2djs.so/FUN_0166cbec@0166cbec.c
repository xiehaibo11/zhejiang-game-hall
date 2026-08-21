
void FUN_0166cbec(byte param_1,long param_2,BytecodeArrayAccessor *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  int iVar15;
  long lVar16;
  
  if (param_1 == 0xb1) {
    uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand(param_3,0);
    if (*(int *)(param_2 + 0xc) == 1) {
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 1L << (uVar10 & 0x3f);
    }
    else {
      iVar7 = (int)uVar10;
      iVar4 = iVar7 + 0x3f;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      uVar13 = -(ulong)((uint)(iVar4 >> 6) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)(iVar4 >> 6) << 3;
      *(ulong *)(*(long *)(param_2 + 0x10) + uVar13) =
           *(ulong *)(*(long *)(param_2 + 0x10) + uVar13) | 1L << (uVar10 & 0x3f);
    }
  }
  else if (param_1 == 0xb0) {
    uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand(param_3,0);
    if (*(int *)(param_2 + 0xc) == 1) {
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 1L << (uVar10 & 0x3f);
      uVar8 = *(int *)(param_2 + 8) - 1;
    }
    else {
      iVar7 = (int)uVar10;
      iVar4 = iVar7 + 0x3f;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      uVar13 = -(ulong)((uint)(iVar4 >> 6) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)(iVar4 >> 6) << 3;
      *(ulong *)(*(long *)(param_2 + 0x10) + uVar13) =
           *(ulong *)(*(long *)(param_2 + 0x10) + uVar13) | 1L << (uVar10 & 0x3f);
      uVar8 = *(int *)(param_2 + 8) - 1;
      if (*(int *)(param_2 + 0xc) != 1) {
        uVar9 = *(int *)(param_2 + 8) + 0x3e;
        if (-1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        uVar10 = -(ulong)((uint)((int)uVar9 >> 6) >> 0x1f) & 0xfffffff800000000 |
                 (ulong)(uint)((int)uVar9 >> 6) << 3;
        *(ulong *)(*(long *)(param_2 + 0x10) + uVar10) =
             *(ulong *)(*(long *)(param_2 + 0x10) + uVar10) | 1L << ((ulong)uVar8 & 0x3f);
        return;
      }
    }
    *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 1L << ((ulong)uVar8 & 0x3f);
  }
  else {
    uVar10 = (ulong)param_1;
    iVar4 = *(int *)(v8::internal::interpreter::Bytecodes::kOperandCount + uVar10 * 4);
    lVar16 = *(long *)(v8::internal::interpreter::Bytecodes::kOperandTypes + uVar10 * 8);
    bVar5 = v8::internal::interpreter::Bytecodes::kAccumulatorUse[uVar10];
    if ((bVar5 >> 1 & 1) != 0) {
      uVar8 = *(int *)(param_2 + 8) - 1;
      if (*(int *)(param_2 + 0xc) == 1) {
        puVar11 = (ulong *)(param_2 + 0x10);
      }
      else {
        uVar9 = *(int *)(param_2 + 8) + 0x3e;
        if (-1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        puVar11 = (ulong *)(*(long *)(param_2 + 0x10) + (long)((int)uVar9 >> 6) * 8);
      }
      *puVar11 = *puVar11 & (1L << ((ulong)uVar8 & 0x3f) ^ 0xffffffffffffffffU);
    }
    if (0 < iVar4) {
      iVar7 = 0;
      puVar11 = (ulong *)(param_2 + 0x10);
      do {
        iVar15 = iVar7;
        switch(*(undefined1 *)(lVar16 + iVar7)) {
        case 0xc:
          uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                             (param_3,iVar7);
          if (-1 < (int)uVar10) {
            if (*(int *)(param_2 + 0xc) == 1) {
              uVar10 = *puVar11 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
              goto LAB_0166cfac;
            }
            lVar12 = (uVar10 >> 6 & 0x3ffffff) * 8;
            *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                 *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) &
                 (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
          }
          break;
        case 0xd:
          iVar15 = iVar7 + 1;
          uVar8 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                            (param_3,iVar7);
          uVar9 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                            (param_3,iVar15);
          if ((-1 < (int)uVar8) && (uVar9 != 0)) {
            iVar7 = 0;
            uVar10 = (ulong)uVar9;
            uVar9 = uVar8;
            do {
              puVar14 = puVar11;
              uVar1 = uVar9;
              if (*(int *)(param_2 + 0xc) != 1) {
                uVar2 = uVar9 + 0x3f;
                if (-1 < (int)uVar9) {
                  uVar2 = uVar9;
                }
                uVar1 = iVar7 + uVar8;
                puVar14 = (ulong *)(*(long *)(param_2 + 0x10) + (long)((int)uVar2 >> 6) * 8);
              }
              iVar7 = iVar7 + 1;
              uVar10 = uVar10 - 1;
              uVar9 = uVar9 + 1;
              *puVar14 = *puVar14 & (1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffffU);
            } while (uVar10 != 0);
          }
          break;
        case 0xe:
          uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                             (param_3,iVar7);
          iVar7 = (int)uVar10;
          if (-1 < iVar7) {
            if (*(int *)(param_2 + 0xc) == 1) {
              *puVar11 = *puVar11 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
              uVar10 = (ulong)(iVar7 + 1);
            }
            else {
              lVar12 = (uVar10 >> 6 & 0x3ffffff) * 8;
              *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                   *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) &
                   (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
              iVar3 = *(int *)(param_2 + 0xc);
              uVar8 = iVar7 + 1;
joined_r0x0166cfdc:
              uVar10 = (ulong)uVar8;
              if (iVar3 != 1) {
                lVar12 = (ulong)(uVar8 >> 6) * 8;
                *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                     *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) &
                     (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
                break;
              }
            }
LAB_0166cfa0:
            uVar10 = *puVar11 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
LAB_0166cfac:
            *puVar11 = uVar10;
          }
          break;
        case 0xf:
          uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                             (param_3,iVar7);
          iVar7 = (int)uVar10;
          if (-1 < iVar7) {
            if (*(int *)(param_2 + 0xc) == 1) {
              *puVar11 = *puVar11 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
              uVar10 = (ulong)(iVar7 + 1);
            }
            else {
              lVar12 = (uVar10 >> 6 & 0x3ffffff) * 8;
              *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                   *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) &
                   (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
              uVar10 = (ulong)(iVar7 + 1U);
              if (*(int *)(param_2 + 0xc) != 1) {
                lVar12 = (ulong)(iVar7 + 1U >> 6) * 8;
                *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                     *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) &
                     (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
                iVar3 = *(int *)(param_2 + 0xc);
                uVar8 = iVar7 + 2;
                goto joined_r0x0166cfdc;
              }
            }
            *puVar11 = *puVar11 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
            uVar10 = (ulong)(iVar7 + 2);
            goto LAB_0166cfa0;
          }
        }
        iVar7 = iVar15 + 1;
      } while (iVar7 < iVar4);
    }
    if ((bVar5 & 1) != 0) {
      uVar8 = *(int *)(param_2 + 8) - 1;
      if (*(int *)(param_2 + 0xc) == 1) {
        puVar11 = (ulong *)(param_2 + 0x10);
      }
      else {
        uVar9 = *(int *)(param_2 + 8) + 0x3e;
        if (-1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        puVar11 = (ulong *)(*(long *)(param_2 + 0x10) + (long)((int)uVar9 >> 6) * 8);
      }
      *puVar11 = *puVar11 | 1L << ((ulong)uVar8 & 0x3f);
    }
    if (0 < iVar4) {
      iVar7 = 0;
      puVar11 = (ulong *)(param_2 + 0x10);
      do {
        cVar6 = *(char *)(lVar16 + iVar7);
        iVar15 = iVar7;
        if (cVar6 == '\v') {
          uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                             (param_3,iVar7);
          iVar7 = (int)uVar10;
          if (-1 < iVar7) {
            if (*(int *)(param_2 + 0xc) == 1) {
              *puVar11 = *puVar11 | 1L << (uVar10 & 0x3f);
              uVar10 = (ulong)(iVar7 + 1);
            }
            else {
              lVar12 = (uVar10 >> 6 & 0x3ffffff) * 8;
              *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                   *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) | 1L << (uVar10 & 0x3f);
              uVar10 = (ulong)(iVar7 + 1U);
              if (*(int *)(param_2 + 0xc) != 1) {
                lVar12 = (ulong)(iVar7 + 1U >> 6) * 8;
                *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                     *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) | 1L << (uVar10 & 0x3f);
                goto LAB_0166d0a4;
              }
            }
            *puVar11 = *puVar11 | 1L << (uVar10 & 0x3f);
          }
        }
        else if (cVar6 == '\n') {
          iVar15 = iVar7 + 1;
          uVar8 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                            (param_3,iVar7);
          uVar9 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                            (param_3,iVar15);
          if ((-1 < (int)uVar8) && (uVar9 != 0)) {
            iVar7 = 0;
            uVar10 = (ulong)uVar9;
            uVar9 = uVar8;
            do {
              puVar14 = puVar11;
              uVar1 = uVar9;
              if (*(int *)(param_2 + 0xc) != 1) {
                uVar2 = uVar9 + 0x3f;
                if (-1 < (int)uVar9) {
                  uVar2 = uVar9;
                }
                uVar1 = iVar7 + uVar8;
                puVar14 = (ulong *)(*(long *)(param_2 + 0x10) + (long)((int)uVar2 >> 6) * 8);
              }
              iVar7 = iVar7 + 1;
              uVar10 = uVar10 - 1;
              uVar9 = uVar9 + 1;
              *puVar14 = *puVar14 | 1L << ((ulong)uVar1 & 0x3f);
            } while (uVar10 != 0);
          }
        }
        else if ((cVar6 == '\t') &&
                (uVar10 = v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
                                    (param_3,iVar7), -1 < (int)uVar10)) {
          if (*(int *)(param_2 + 0xc) == 1) {
            *puVar11 = *puVar11 | 1L << (uVar10 & 0x3f);
          }
          else {
            lVar12 = (uVar10 >> 6 & 0x3ffffff) * 8;
            *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) =
                 *(ulong *)(*(long *)(param_2 + 0x10) + lVar12) | 1L << (uVar10 & 0x3f);
          }
        }
LAB_0166d0a4:
        iVar7 = iVar15 + 1;
      } while (iVar7 < iVar4);
    }
  }
  return;
}

