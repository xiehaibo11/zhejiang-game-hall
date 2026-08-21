
/* v8::internal::interpreter::BytecodeArrayWriter::EmitBytecode(v8::internal::interpreter::BytecodeNode
   const*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::EmitBytecode
          (BytecodeArrayWriter *this,BytecodeNode *param_1)

{
  undefined1 *puVar1;
  BytecodeNode *pBVar2;
  uint uVar3;
  undefined4 uVar4;
  BytecodeNode BVar5;
  BytecodeNode BVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  BytecodeNode *pBVar10;
  Zone *pZVar11;
  undefined1 *puVar12;
  ulong uVar13;
  BytecodeNode *pBVar14;
  undefined1 *puVar15;
  BytecodeNode *pBVar16;
  undefined1 *puVar17;
  BytecodeNode *pBVar18;
  undefined1 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  
  BVar5 = param_1[0x1c];
  BVar6 = *param_1;
  if (BVar5 == (BytecodeNode)0x4) {
    uVar19 = 1;
LAB_017bd470:
    puVar12 = *(undefined1 **)(this + 0x18);
    if (puVar12 < *(undefined1 **)(this + 0x20)) {
      *puVar12 = uVar19;
      pBVar10 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
      *(BytecodeNode **)(this + 0x18) = pBVar10;
    }
    else {
      lVar21 = *(long *)(this + 0x10);
      puVar1 = puVar12 + (1 - lVar21);
      if ((ulong)puVar1 >> 0x1f != 0) goto LAB_017bdbcc;
      uVar20 = (long)*(undefined1 **)(this + 0x20) - lVar21;
      puVar15 = (undefined1 *)(uVar20 * 2);
      if (puVar1 <= puVar15) {
        puVar1 = puVar15;
      }
      if (0x3ffffffe < uVar20) {
        puVar1 = (undefined1 *)0x7fffffff;
      }
      if (puVar1 == (undefined1 *)0x0) {
        lVar8 = 0;
      }
      else {
        pZVar11 = *(Zone **)(this + 0x28);
        uVar20 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
        lVar8 = *(long *)(pZVar11 + 0x10);
        if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar20) {
          lVar8 = Zone::NewExpand(pZVar11,uVar20);
        }
        else {
          *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar20;
        }
      }
      puVar12 = puVar12 + (lVar8 - lVar21);
      pBVar10 = (BytecodeNode *)(puVar12 + 1);
      *puVar12 = uVar19;
      puVar15 = *(undefined1 **)(this + 0x10);
      puVar17 = *(undefined1 **)(this + 0x18);
      while (puVar17 != puVar15) {
        puVar17 = puVar17 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *puVar17;
      }
      *(undefined1 **)(this + 0x10) = puVar12;
      *(BytecodeNode **)(this + 0x18) = pBVar10;
      *(undefined1 **)(this + 0x20) = puVar1 + lVar8;
    }
  }
  else {
    if (BVar5 == (BytecodeNode)0x2) {
      uVar19 = 0;
      goto LAB_017bd470;
    }
    if (BVar5 != (BytecodeNode)0x1) {
switchD_017bd650_caseD_0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pBVar10 = *(BytecodeNode **)(this + 0x18);
  }
  if (pBVar10 < *(BytecodeNode **)(this + 0x20)) {
    *pBVar10 = BVar6;
    pBVar16 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
    *(BytecodeNode **)(this + 0x18) = pBVar16;
  }
  else {
    lVar21 = *(long *)(this + 0x10);
    pBVar14 = pBVar10 + (1 - lVar21);
    if ((ulong)pBVar14 >> 0x1f != 0) {
LAB_017bdbcc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar20 = (long)*(BytecodeNode **)(this + 0x20) - lVar21;
    pBVar16 = (BytecodeNode *)(uVar20 * 2);
    if (pBVar14 <= pBVar16) {
      pBVar14 = pBVar16;
    }
    if (0x3ffffffe < uVar20) {
      pBVar14 = (BytecodeNode *)0x7fffffff;
    }
    if (pBVar14 == (BytecodeNode *)0x0) {
      lVar8 = 0;
    }
    else {
      pZVar11 = *(Zone **)(this + 0x28);
      uVar20 = (ulong)(pBVar14 + 7) & 0xfffffffffffffff8;
      lVar8 = *(long *)(pZVar11 + 0x10);
      if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar20) {
        lVar8 = Zone::NewExpand(pZVar11,uVar20);
      }
      else {
        *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar20;
      }
    }
    pBVar10 = pBVar10 + (lVar8 - lVar21);
    pBVar16 = pBVar10 + 1;
    *pBVar10 = BVar6;
    pBVar2 = *(BytecodeNode **)(this + 0x10);
    pBVar18 = *(BytecodeNode **)(this + 0x18);
    while (pBVar18 != pBVar2) {
      pBVar18 = pBVar18 + -1;
      pBVar10 = pBVar10 + -1;
      *pBVar10 = *pBVar18;
    }
    *(BytecodeNode **)(this + 0x10) = pBVar10;
    *(BytecodeNode **)(this + 0x18) = pBVar16;
    *(BytecodeNode **)(this + 0x20) = pBVar14 + lVar8;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    lVar21 = *(long *)(Bytecodes::kOperandSizes +
                      (ulong)(byte)BVar6 * 8 + (ulong)((byte)BVar5 >> 1) * 0x5b8);
    uVar20 = 0;
    do {
      switch(*(undefined1 *)(lVar21 + uVar20)) {
      case 0:
        goto switchD_017bd650_caseD_0;
      case 1:
        uVar4 = *(undefined4 *)(param_1 + uVar20 * 4 + 4);
        if (pBVar16 < *(BytecodeNode **)(this + 0x20)) {
          *pBVar16 = SUB41(uVar4,0);
          goto LAB_017bd620;
        }
        lVar8 = *(long *)(this + 0x10);
        pBVar10 = pBVar16 + (1 - lVar8);
        if ((ulong)pBVar10 >> 0x1f != 0) goto LAB_017bdbcc;
        uVar13 = (long)*(BytecodeNode **)(this + 0x20) - lVar8;
        pBVar14 = (BytecodeNode *)(uVar13 * 2);
        if (pBVar10 <= pBVar14) {
          pBVar10 = pBVar14;
        }
        if (0x3ffffffe < uVar13) {
          pBVar10 = (BytecodeNode *)0x7fffffff;
        }
        if (pBVar10 == (BytecodeNode *)0x0) {
          lVar7 = 0;
        }
        else {
          pZVar11 = *(Zone **)(this + 0x28);
          uVar13 = (ulong)(pBVar10 + 7) & 0xfffffffffffffff8;
          lVar7 = *(long *)(pZVar11 + 0x10);
          if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar7) < uVar13) {
            lVar7 = Zone::NewExpand(pZVar11,uVar13);
          }
          else {
            *(ulong *)(pZVar11 + 0x10) = lVar7 + uVar13;
          }
        }
        pBVar14 = pBVar16 + (lVar7 - lVar8);
        pBVar16 = pBVar14 + 1;
        *pBVar14 = SUB41(uVar4,0);
        pBVar2 = *(BytecodeNode **)(this + 0x10);
        pBVar18 = *(BytecodeNode **)(this + 0x18);
        pBVar10 = pBVar10 + lVar7;
        while (pBVar18 != pBVar2) {
          pBVar18 = pBVar18 + -1;
          pBVar14 = pBVar14 + -1;
          *pBVar14 = *pBVar18;
        }
LAB_017bdb10:
        *(BytecodeNode **)(this + 0x10) = pBVar14;
        *(BytecodeNode **)(this + 0x18) = pBVar16;
        *(BytecodeNode **)(this + 0x20) = pBVar10;
        break;
      case 2:
        BVar5 = SUB41(*(undefined4 *)(param_1 + uVar20 * 4 + 4),0);
        BVar6 = SUB41((uint)*(undefined4 *)(param_1 + uVar20 * 4 + 4) >> 8,0);
        if (pBVar16 == *(BytecodeNode **)(this + 0x20)) {
          uVar22 = (long)*(BytecodeNode **)(this + 0x20) - *(long *)(this + 0x10);
          uVar13 = uVar22 + 1;
          if (uVar13 >> 0x1f != 0) goto LAB_017bdbcc;
          if (uVar13 <= uVar22 * 2) {
            uVar13 = uVar22 * 2;
          }
          if (0x3ffffffe < uVar22) {
            uVar13 = 0x7fffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            pZVar11 = *(Zone **)(this + 0x28);
            uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
            lVar8 = *(long *)(pZVar11 + 0x10);
            if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
              lVar8 = Zone::NewExpand(pZVar11,uVar9);
            }
            else {
              *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
            }
          }
          pBVar14 = (BytecodeNode *)(lVar8 + uVar22);
          pBVar10 = pBVar14 + 1;
          *pBVar14 = BVar5;
          pBVar2 = *(BytecodeNode **)(this + 0x10);
          pBVar18 = *(BytecodeNode **)(this + 0x18);
          pBVar16 = (BytecodeNode *)(lVar8 + uVar13);
          while (pBVar18 != pBVar2) {
            pBVar18 = pBVar18 + -1;
            pBVar14 = pBVar14 + -1;
            *pBVar14 = *pBVar18;
          }
          *(BytecodeNode **)(this + 0x10) = pBVar14;
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          *(BytecodeNode **)(this + 0x20) = pBVar16;
          if (pBVar10 == pBVar16) goto LAB_017bda88;
        }
        else {
          *pBVar16 = BVar5;
          pBVar16 = *(BytecodeNode **)(this + 0x20);
          pBVar10 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          if (pBVar10 == pBVar16) {
LAB_017bda88:
            uVar22 = (long)pBVar16 - *(long *)(this + 0x10);
            uVar13 = uVar22 + 1;
            if (uVar13 >> 0x1f == 0) {
              if (uVar13 <= uVar22 * 2) {
                uVar13 = uVar22 * 2;
              }
              if (0x3ffffffe < uVar22) {
                uVar13 = 0x7fffffff;
              }
              if (uVar13 == 0) {
                lVar8 = 0;
              }
              else {
                pZVar11 = *(Zone **)(this + 0x28);
                uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
                lVar8 = *(long *)(pZVar11 + 0x10);
                if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
                  lVar8 = Zone::NewExpand(pZVar11,uVar9);
                }
                else {
                  *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
                }
              }
              pBVar14 = (BytecodeNode *)(lVar8 + uVar22);
              pBVar16 = pBVar14 + 1;
              *pBVar14 = BVar6;
              pBVar2 = *(BytecodeNode **)(this + 0x10);
              pBVar18 = *(BytecodeNode **)(this + 0x18);
              pBVar10 = (BytecodeNode *)(lVar8 + uVar13);
              while (pBVar18 != pBVar2) {
                pBVar18 = pBVar18 + -1;
                pBVar14 = pBVar14 + -1;
                *pBVar14 = *pBVar18;
              }
              goto LAB_017bdb10;
            }
            goto LAB_017bdbcc;
          }
        }
        *pBVar10 = BVar6;
        goto LAB_017bd620;
      case 4:
        if (pBVar16 == *(BytecodeNode **)(this + 0x20)) {
          uVar22 = (long)*(BytecodeNode **)(this + 0x20) - *(long *)(this + 0x10);
          uVar13 = uVar22 + 1;
          if (uVar13 >> 0x1f != 0) goto LAB_017bdbcc;
          if (uVar13 <= uVar22 * 2) {
            uVar13 = uVar22 * 2;
          }
          if (0x3ffffffe < uVar22) {
            uVar13 = 0x7fffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            pZVar11 = *(Zone **)(this + 0x28);
            uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
            lVar8 = *(long *)(pZVar11 + 0x10);
            if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
              lVar8 = Zone::NewExpand(pZVar11,uVar9);
            }
            else {
              *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
            }
          }
          pBVar14 = (BytecodeNode *)(lVar8 + uVar22);
          pBVar10 = pBVar14 + 1;
          *pBVar14 = param_1[uVar20 * 4 + 4];
          pBVar2 = *(BytecodeNode **)(this + 0x10);
          pBVar18 = *(BytecodeNode **)(this + 0x18);
          pBVar16 = (BytecodeNode *)(lVar8 + uVar13);
          while (pBVar18 != pBVar2) {
            pBVar18 = pBVar18 + -1;
            pBVar14 = pBVar14 + -1;
            *pBVar14 = *pBVar18;
          }
          *(BytecodeNode **)(this + 0x10) = pBVar14;
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          *(BytecodeNode **)(this + 0x20) = pBVar16;
          if (pBVar10 != pBVar16) goto LAB_017bd6f0;
LAB_017bd88c:
          uVar22 = (long)pBVar16 - *(long *)(this + 0x10);
          uVar13 = uVar22 + 1;
          if (uVar13 >> 0x1f != 0) goto LAB_017bdbcc;
          if (uVar13 <= uVar22 * 2) {
            uVar13 = uVar22 * 2;
          }
          if (0x3ffffffe < uVar22) {
            uVar13 = 0x7fffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            pZVar11 = *(Zone **)(this + 0x28);
            uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
            lVar8 = *(long *)(pZVar11 + 0x10);
            if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
              lVar8 = Zone::NewExpand(pZVar11,uVar9);
            }
            else {
              *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
            }
          }
          pBVar16 = (BytecodeNode *)(lVar8 + uVar22);
          pBVar10 = pBVar16 + 1;
          *pBVar16 = param_1[uVar20 * 4 + 5];
          pBVar2 = *(BytecodeNode **)(this + 0x10);
          pBVar18 = *(BytecodeNode **)(this + 0x18);
          pBVar14 = (BytecodeNode *)(lVar8 + uVar13);
          while (pBVar18 != pBVar2) {
            pBVar18 = pBVar18 + -1;
            pBVar16 = pBVar16 + -1;
            *pBVar16 = *pBVar18;
          }
          *(BytecodeNode **)(this + 0x10) = pBVar16;
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          *(BytecodeNode **)(this + 0x20) = pBVar14;
          if (pBVar10 != pBVar14) goto LAB_017bd70c;
LAB_017bd924:
          uVar22 = (long)pBVar14 - *(long *)(this + 0x10);
          uVar13 = uVar22 + 1;
          if (uVar13 >> 0x1f != 0) goto LAB_017bdbcc;
          if (uVar13 <= uVar22 * 2) {
            uVar13 = uVar22 * 2;
          }
          if (0x3ffffffe < uVar22) {
            uVar13 = 0x7fffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            pZVar11 = *(Zone **)(this + 0x28);
            uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
            lVar8 = *(long *)(pZVar11 + 0x10);
            if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
              lVar8 = Zone::NewExpand(pZVar11,uVar9);
            }
            else {
              *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
            }
          }
          pBVar14 = (BytecodeNode *)(lVar8 + uVar22);
          pBVar10 = pBVar14 + 1;
          *pBVar14 = param_1[uVar20 * 4 + 6];
          pBVar2 = *(BytecodeNode **)(this + 0x10);
          pBVar18 = *(BytecodeNode **)(this + 0x18);
          pBVar16 = (BytecodeNode *)(lVar8 + uVar13);
          while (pBVar18 != pBVar2) {
            pBVar18 = pBVar18 + -1;
            pBVar14 = pBVar14 + -1;
            *pBVar14 = *pBVar18;
          }
          *(BytecodeNode **)(this + 0x10) = pBVar14;
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          *(BytecodeNode **)(this + 0x20) = pBVar16;
          if (pBVar10 == pBVar16) goto LAB_017bd9bc;
        }
        else {
          *pBVar16 = param_1[uVar20 * 4 + 4];
          pBVar16 = *(BytecodeNode **)(this + 0x20);
          pBVar10 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          if (pBVar10 == pBVar16) goto LAB_017bd88c;
LAB_017bd6f0:
          *pBVar10 = param_1[uVar20 * 4 + 5];
          pBVar14 = *(BytecodeNode **)(this + 0x20);
          pBVar10 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          if (pBVar10 == pBVar14) goto LAB_017bd924;
LAB_017bd70c:
          *pBVar10 = param_1[uVar20 * 4 + 6];
          pBVar16 = *(BytecodeNode **)(this + 0x20);
          pBVar10 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
          *(BytecodeNode **)(this + 0x18) = pBVar10;
          if (pBVar10 == pBVar16) {
LAB_017bd9bc:
            uVar22 = (long)pBVar16 - *(long *)(this + 0x10);
            uVar13 = uVar22 + 1;
            if (uVar13 >> 0x1f == 0) {
              if (uVar13 <= uVar22 * 2) {
                uVar13 = uVar22 * 2;
              }
              if (0x3ffffffe < uVar22) {
                uVar13 = 0x7fffffff;
              }
              if (uVar13 == 0) {
                lVar8 = 0;
              }
              else {
                pZVar11 = *(Zone **)(this + 0x28);
                uVar9 = uVar13 + 7 & 0xfffffffffffffff8;
                lVar8 = *(long *)(pZVar11 + 0x10);
                if ((ulong)(*(long *)(pZVar11 + 0x18) - lVar8) < uVar9) {
                  lVar8 = Zone::NewExpand(pZVar11,uVar9);
                }
                else {
                  *(ulong *)(pZVar11 + 0x10) = lVar8 + uVar9;
                }
              }
              pBVar14 = (BytecodeNode *)(lVar8 + uVar22);
              pBVar16 = pBVar14 + 1;
              *pBVar14 = param_1[uVar20 * 4 + 7];
              pBVar2 = *(BytecodeNode **)(this + 0x10);
              pBVar18 = *(BytecodeNode **)(this + 0x18);
              pBVar10 = (BytecodeNode *)(lVar8 + uVar13);
              while (pBVar18 != pBVar2) {
                pBVar18 = pBVar18 + -1;
                pBVar14 = pBVar14 + -1;
                *pBVar14 = *pBVar18;
              }
              goto LAB_017bdb10;
            }
            goto LAB_017bdbcc;
          }
        }
        *pBVar10 = param_1[uVar20 * 4 + 7];
LAB_017bd620:
        pBVar16 = (BytecodeNode *)(*(long *)(this + 0x18) + 1);
        *(BytecodeNode **)(this + 0x18) = pBVar16;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  return;
}

