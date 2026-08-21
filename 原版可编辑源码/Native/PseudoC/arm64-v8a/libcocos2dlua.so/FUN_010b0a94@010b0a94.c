
void FUN_010b0a94(__jmp_buf_tag *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
                    /* try { // try from 010b0aa8 to 011b0aaf has its CatchHandler @ 010b0ab0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b0aa8 with catch @ 010b0ab0
                        */
  lVar21 = (long)param_3 >> 8;
  lVar23 = param_1[2].__jmpbuf[0] >> 8;
  lVar7 = lVar21;
  if (lVar23 <= lVar21) {
    lVar7 = lVar23;
  }
  if (lVar7 < (long)param_1[1].__saved_mask.__val[3]) {
    uVar10 = param_1[1].__saved_mask.__val[2];
    lVar7 = lVar23;
    if (lVar23 <= lVar21) {
      lVar7 = lVar21;
    }
    if ((long)uVar10 <= lVar7) {
      uVar11 = param_1[1].__saved_mask.__val[0xe];
      uVar17 = param_1[1].__saved_mask.__val[0xf];
      lVar22 = param_3 - (param_3 & 0xffffffffffffff00);
      lVar7 = uVar17 - param_1[2].__jmpbuf[0];
      if (lVar23 != lVar21) {
        lVar25 = param_2 - uVar11;
        lVar14 = param_3 - uVar17;
        uVar17 = lVar14 >> 0x3f;
        if (lVar25 == 0) {
          uVar12 = param_1[1].__saved_mask.__val[1];
          if ((long)uVar11 >> 8 <= (long)uVar12) {
            uVar12 = (long)uVar11 >> 8;
          }
          uVar18 = param_1[1].__jmpbuf[7];
          uVar2 = (int)(lVar14 >> 0x3f) + 0x100U & 0xffffff00;
          uVar12 = uVar12 - param_1[1].__saved_mask.__val[0];
          iVar8 = ((int)uVar11 + (int)(uVar11 >> 8) * -0x100) * 2;
          iVar13 = uVar2 - (int)lVar7;
          uVar11 = param_1[1].__saved_mask.__val[7] + (long)iVar13;
          lVar23 = (uVar17 | 1) + lVar23;
          if ((long)uVar12 < 0) {
            uVar12 = 0xffffffffffffffff;
          }
          uVar15 = (long)(int)param_1[1].__saved_mask.__val[6] + (long)(iVar8 * iVar13);
          lVar7 = lVar23 - uVar10;
          param_1[1].__saved_mask.__val[7] = uVar11;
          *(int *)(param_1[1].__saved_mask.__val + 6) = (int)uVar15;
          if ((uVar12 != uVar18) || (lVar7 != *(long *)&param_1[1].__mask_was_saved)) {
            if (((int)param_1[1].__saved_mask.__val[8] == 0) && (uVar11 != 0 || uVar15 != 0)) {
              uVar19 = param_1[1].__saved_mask.__val[4];
              puVar5 = (ulong *)(param_1[0xc].__jmpbuf[6] +
                                *(long *)&param_1[1].__mask_was_saved * 8);
              puVar16 = (ulong *)*puVar5;
              if ((long)uVar18 <= (long)uVar19) {
                uVar19 = uVar18;
              }
              while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar19))) {
                if (*puVar16 == uVar19) goto LAB_010b0cd0;
                puVar5 = puVar16 + 3;
                puVar16 = (ulong *)*puVar5;
              }
              uVar18 = param_1[1].__saved_mask.__val[0xb];
              if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar18) {
LAB_010b1118:
                    /* WARNING: Subroutine does not return */
                longjmp(param_1,1);
              }
              uVar20 = param_1[1].__saved_mask.__val[9];
              param_1[1].__saved_mask.__val[0xb] = uVar18 + 1;
              puVar16 = (ulong *)(uVar20 + uVar18 * 0x20);
              *(undefined4 *)(puVar16 + 2) = 0;
              *puVar16 = uVar19;
              puVar16[1] = 0;
              puVar16[3] = *puVar5;
              *puVar5 = (ulong)puVar16;
LAB_010b0cd0:
              *(int *)(puVar16 + 2) = (int)puVar16[2] + (int)uVar15;
              puVar16[1] = puVar16[1] + uVar11;
            }
            uVar11 = 0;
            uVar15 = 0;
            *(undefined4 *)(param_1[1].__saved_mask.__val + 6) = 0;
            param_1[1].__saved_mask.__val[7] = 0;
            param_1[1].__jmpbuf[7] = uVar12;
            *(long *)&param_1[1].__mask_was_saved = lVar7;
          }
          iVar13 = (int)uVar15;
          uVar9 = (uint)param_1[1].__saved_mask.__val[5];
          if ((uint)lVar7 < uVar9) {
            uVar6 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar12);
          }
          else {
            uVar6 = 1;
          }
          *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar6;
          if (lVar23 != lVar21) {
            iVar4 = uVar2 * 2 + -0x100;
            lVar14 = lVar7;
            do {
              lVar23 = lVar23 + (uVar17 | 1);
              lVar25 = lVar23 - uVar10;
              uVar1 = (int)uVar15 + iVar8 * iVar4;
              uVar15 = (ulong)uVar1;
              uVar11 = uVar11 + (long)iVar4;
              if (lVar25 != lVar14) {
                if ((uVar6 == 0) && (uVar11 != 0 || uVar1 != 0)) {
                  uVar18 = param_1[1].__saved_mask.__val[4];
                  puVar5 = (ulong *)(param_1[0xc].__jmpbuf[6] + lVar7 * 8);
                  puVar16 = (ulong *)*puVar5;
                  if ((long)uVar12 <= (long)uVar18) {
                    uVar18 = uVar12;
                  }
                  while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar18))) {
                    if (*puVar16 == uVar18) goto LAB_010b0dd4;
                    puVar5 = puVar16 + 3;
                    /* try { // try from 010b0d98 to 011b0d9b has its CatchHandler @ 010b0d9c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b0d98 with catch @ 010b0d9c
                        */
                    puVar16 = (ulong *)*puVar5;
                  }
                  uVar15 = param_1[1].__saved_mask.__val[0xb];
                  if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar15) {
                    *(uint *)(param_1[1].__saved_mask.__val + 6) = uVar1;
                    param_1[1].__saved_mask.__val[7] = uVar11;
                    goto LAB_010b1118;
                  }
                  uVar19 = param_1[1].__saved_mask.__val[9];
                  param_1[1].__saved_mask.__val[0xb] = uVar15 + 1;
                  puVar16 = (ulong *)(uVar19 + uVar15 * 0x20);
                  *(undefined4 *)(puVar16 + 2) = 0;
                  *puVar16 = uVar18;
                  puVar16[1] = 0;
                  puVar16[3] = *puVar5;
                  *puVar5 = (ulong)puVar16;
LAB_010b0dd4:
                  *(uint *)(puVar16 + 2) = (int)puVar16[2] + uVar1;
                  puVar16[1] = puVar16[1] + uVar11;
                }
                uVar11 = 0;
                uVar15 = 0;
                param_1[1].__jmpbuf[7] = uVar12;
                *(long *)&param_1[1].__mask_was_saved = lVar25;
                lVar7 = lVar25;
              }
              iVar13 = (int)uVar15;
              if ((uint)lVar25 < uVar9) {
                uVar6 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar12);
              }
              else {
                uVar6 = 1;
              }
              *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar6;
              lVar14 = lVar25;
            } while (lVar23 != lVar21);
            *(int *)(param_1[1].__saved_mask.__val + 6) = iVar13;
            param_1[1].__saved_mask.__val[7] = uVar11;
          }
          iVar4 = (int)lVar22 + uVar2 + -0x100;
          *(int *)(param_1[1].__saved_mask.__val + 6) = iVar13 + iVar8 * iVar4;
          param_1[1].__saved_mask.__val[7] = uVar11 + (long)iVar4;
          goto LAB_010b10e8;
        }
        lVar24 = lVar7;
        lVar3 = -lVar14;
        if (-1 < lVar14) {
          lVar24 = 0x100 - lVar7;
          lVar3 = lVar14;
        }
        uVar10 = uVar17 + 0x100 & 0xffffffffffffff00;
        iVar8 = 0;
        if (lVar3 != 0) {
          iVar8 = (int)((lVar24 * lVar25) / lVar3);
        }
        uVar2 = (uint)lVar3;
        iVar13 = (int)(lVar24 * lVar25) - iVar8 * uVar2;
        lVar14 = (long)iVar13;
        if (iVar13 < 0) {
          iVar8 = iVar8 + -1;
          lVar14 = lVar14 + (int)uVar2;
        }
                    /* try { // try from 010b0b70 to 011b0b77 has its CatchHandler @ 010b0b78 */
        uVar12 = uVar11 + (long)iVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b0b70 with catch @ 010b0b78
                        */
        FUN_010b1124(param_1,lVar23,uVar11,lVar7,uVar12,uVar10);
        uVar11 = param_1[1].__saved_mask.__val[1];
        uVar18 = param_1[1].__jmpbuf[7];
        lVar24 = (uVar17 | 1) + lVar23;
        if ((long)uVar12 >> 8 <= (long)uVar11) {
          uVar11 = (long)uVar12 >> 8;
        }
        uVar11 = uVar11 - param_1[1].__saved_mask.__val[0];
        if ((long)uVar11 < 0) {
          uVar11 = 0xffffffffffffffff;
        }
        lVar23 = lVar24 - param_1[1].__saved_mask.__val[2];
        if ((uVar11 != uVar18) || (lVar23 != *(long *)&param_1[1].__mask_was_saved)) {
          if ((int)param_1[1].__saved_mask.__val[8] == 0) {
            iVar8 = (int)param_1[1].__saved_mask.__val[6];
            uVar15 = param_1[1].__saved_mask.__val[7];
            if (uVar15 != 0 || iVar8 != 0) {
              uVar19 = param_1[1].__saved_mask.__val[4];
              puVar5 = (ulong *)(param_1[0xc].__jmpbuf[6] +
                                *(long *)&param_1[1].__mask_was_saved * 8);
              puVar16 = (ulong *)*puVar5;
              if ((long)uVar18 <= (long)uVar19) {
                uVar19 = uVar18;
              }
              while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar19))) {
                if (*puVar16 == uVar19) goto LAB_010b0ed0;
                puVar5 = puVar16 + 3;
                puVar16 = (ulong *)*puVar5;
              }
              uVar18 = param_1[1].__saved_mask.__val[0xb];
              if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar18) goto LAB_010b1118;
              uVar20 = param_1[1].__saved_mask.__val[9];
              param_1[1].__saved_mask.__val[0xb] = uVar18 + 1;
              puVar16 = (ulong *)(uVar20 + uVar18 * 0x20);
              *(undefined4 *)(puVar16 + 2) = 0;
              *puVar16 = uVar19;
              puVar16[1] = 0;
              puVar16[3] = *puVar5;
              *puVar5 = (ulong)puVar16;
LAB_010b0ed0:
              *(int *)(puVar16 + 2) = (int)puVar16[2] + iVar8;
              puVar16[1] = puVar16[1] + uVar15;
            }
          }
          *(undefined4 *)(param_1[1].__saved_mask.__val + 6) = 0;
          param_1[1].__saved_mask.__val[7] = 0;
          param_1[1].__jmpbuf[7] = uVar11;
          *(long *)&param_1[1].__mask_was_saved = lVar23;
        }
        if ((uint)lVar23 < (uint)param_1[1].__saved_mask.__val[5]) {
          uVar9 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar11);
        }
        else {
          uVar9 = 1;
        }
        *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar9;
        lVar23 = lVar21;
        if (lVar24 == lVar21) {
          lVar7 = 0x100 - uVar10;
          uVar11 = uVar12;
        }
        else {
          iVar8 = 0;
          if (lVar3 != 0) {
            iVar8 = (int)((lVar25 * 0x100) / lVar3);
          }
          iVar13 = (int)(lVar25 * 0x100) - iVar8 * uVar2;
          uVar9 = iVar13 >> 0x1f;
          lVar14 = lVar14 - (int)uVar2;
          lVar7 = 0x100 - uVar10;
          do {
            lVar14 = lVar14 + (int)((uVar9 & uVar2) + iVar13);
            uVar11 = uVar12 + (long)(int)(uVar9 + iVar8 + ((uint)((ulong)lVar14 >> 0x3f) ^ 1));
            FUN_010b1124(param_1,lVar24,uVar12,lVar7,uVar11,uVar10);
            uVar12 = param_1[1].__saved_mask.__val[1];
            uVar18 = param_1[1].__jmpbuf[7];
            lVar24 = lVar24 + (uVar17 | 1);
            if ((long)uVar11 >> 8 <= (long)uVar12) {
              uVar12 = (long)uVar11 >> 8;
            }
            uVar12 = uVar12 - param_1[1].__saved_mask.__val[0];
            if ((long)uVar12 < 0) {
              uVar12 = 0xffffffffffffffff;
            }
            lVar25 = lVar24 - param_1[1].__saved_mask.__val[2];
            if ((uVar12 != uVar18) || (lVar25 != *(long *)&param_1[1].__mask_was_saved)) {
              if ((int)param_1[1].__saved_mask.__val[8] == 0) {
                iVar4 = (int)param_1[1].__saved_mask.__val[6];
                uVar15 = param_1[1].__saved_mask.__val[7];
                if (uVar15 != 0 || iVar4 != 0) {
                  uVar19 = param_1[1].__saved_mask.__val[4];
                  puVar5 = (ulong *)(param_1[0xc].__jmpbuf[6] +
                                    *(long *)&param_1[1].__mask_was_saved * 8);
                  puVar16 = (ulong *)*puVar5;
                  if ((long)uVar18 <= (long)uVar19) {
                    uVar19 = uVar18;
                  }
                  while ((puVar16 != (ulong *)0x0 && ((long)*puVar16 <= (long)uVar19))) {
                    if (*puVar16 == uVar19) goto LAB_010b106c;
                    puVar5 = puVar16 + 3;
                    puVar16 = (ulong *)*puVar5;
                  }
                  uVar18 = param_1[1].__saved_mask.__val[0xb];
                  if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar18) goto LAB_010b1118;
                  uVar20 = param_1[1].__saved_mask.__val[9];
                  param_1[1].__saved_mask.__val[0xb] = uVar18 + 1;
                  puVar16 = (ulong *)(uVar20 + uVar18 * 0x20);
                  *(undefined4 *)(puVar16 + 2) = 0;
                  *puVar16 = uVar19;
                  puVar16[1] = 0;
                  puVar16[3] = *puVar5;
                  *puVar5 = (ulong)puVar16;
LAB_010b106c:
                  *(int *)(puVar16 + 2) = (int)puVar16[2] + iVar4;
                  puVar16[1] = puVar16[1] + uVar15;
                }
              }
              *(undefined4 *)(param_1[1].__saved_mask.__val + 6) = 0;
              param_1[1].__saved_mask.__val[7] = 0;
              param_1[1].__jmpbuf[7] = uVar12;
              *(long *)&param_1[1].__mask_was_saved = lVar25;
            }
            lVar14 = lVar14 - ((long)(int)uVar2 & (lVar14 >> 0x3f ^ 0xffffffffffffffffU));
            if ((uint)lVar25 < (uint)param_1[1].__saved_mask.__val[5]) {
              uVar6 = (uint)((long)param_1[1].__saved_mask.__val[4] <= (long)uVar12);
            }
            else {
              uVar6 = 1;
            }
            *(uint *)(param_1[1].__saved_mask.__val + 8) = uVar6;
            uVar12 = uVar11;
          } while (lVar24 != lVar21);
        }
      }
      FUN_010b1124(param_1,lVar23,uVar11,lVar7,param_2,lVar22);
    }
  }
LAB_010b10e8:
  param_1[1].__saved_mask.__val[0xe] = param_2;
  param_1[1].__saved_mask.__val[0xf] = param_3;
  param_1[2].__jmpbuf[0] = param_3 & 0xffffffffffffff00;
  return;
}

