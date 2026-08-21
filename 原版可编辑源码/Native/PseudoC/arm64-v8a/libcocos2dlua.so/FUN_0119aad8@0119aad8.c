
void FUN_0119aad8(char *param_1,int param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  ushort *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  ushort *puVar13;
  ushort *puVar14;
  char cVar15;
  ushort *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  long alStack_10048 [8193];
  
  lVar4 = tpidr_el0;
  alStack_10048[0x2000] = *(long *)(lVar4 + 0x28);
  lVar17 = (long)param_2;
  puVar16 = (ushort *)(param_1 + lVar17 + -2);
  if (param_2 < 4) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      *param_3 = (char)param_2 + -1;
      if (param_1 <= param_1 + lVar17 + -1) {
        puVar14 = (ushort *)(param_1 + -1);
        do {
          param_3 = param_3 + 1;
          puVar14 = (ushort *)((long)puVar14 + 1);
          *param_3 = *(char *)puVar14;
        } while (puVar14 <= puVar16);
      }
      param_2 = param_2 + 1;
    }
  }
  else {
    lVar18 = 0;
    do {
      lVar1 = lVar18 + 0x20;
      *(char **)((long)alStack_10048 + lVar18 + 8) = param_1;
      *(char **)((long)alStack_10048 + lVar18) = param_1;
      *(char **)((long)alStack_10048 + lVar18 + 0x18) = param_1;
      *(char **)((long)alStack_10048 + lVar18 + 0x10) = param_1;
      lVar18 = lVar1;
    } while (lVar1 != 0x10000);
    *param_3 = '\x1f';
    puVar14 = (ushort *)(param_1 + 2);
    pcVar12 = param_3 + 3;
    param_3[1] = *param_1;
    uVar19 = 2;
    param_3[2] = param_1[1];
    puVar13 = puVar14;
    if (2 < lVar17 + -0xc) {
      do {
        puVar14 = (ushort *)((long)puVar13 + 1);
        uVar7 = (ushort)(*puVar13 ^ *puVar13 >> 3 ^ *puVar14) & 0x1fff;
        pcVar11 = (char *)alStack_10048[uVar7];
        alStack_10048[uVar7] = (long)puVar13;
        iVar10 = (int)puVar13;
        uVar7 = ~(uint)pcVar11 + iVar10;
        if (uVar7 < 0x1fff) {
          cVar6 = *pcVar11;
          cVar8 = (char)*puVar13;
          if (((cVar6 != (char)*puVar13) || (cVar8 = cVar6, pcVar11[1] != *(char *)puVar14)) ||
             (pcVar11[2] != (char)puVar13[1])) goto LAB_0119ab9c;
          pcVar2 = pcVar11 + 3;
          if (uVar7 == 0) {
            puVar9 = (ushort *)((long)puVar13 + 3);
            for (; (puVar9 < puVar16 && (*pcVar2 == pcVar11[2])); pcVar2 = pcVar2 + 1) {
              puVar9 = (ushort *)((long)puVar9 + 1);
            }
joined_r0x0119ad0c:
            if (uVar19 == 0) goto LAB_0119ad2c;
LAB_0119ad10:
            pcVar12[~(ulong)uVar19] = (char)uVar19 + -1;
          }
          else {
            if (*pcVar2 == *(char *)((long)puVar13 + 3)) {
              if (pcVar11[4] == (char)puVar13[2]) {
                if (pcVar11[5] == *(char *)((long)puVar13 + 5)) {
                  if (pcVar11[6] == (char)puVar13[3]) {
                    if (pcVar11[7] == *(char *)((long)puVar13 + 7)) {
                      if (pcVar11[8] == (char)puVar13[4]) {
                        if (pcVar11[9] == *(char *)((long)puVar13 + 9)) {
                          puVar9 = (ushort *)((long)puVar13 + 0xb);
                          if (pcVar11[10] == (char)puVar13[5]) {
                            puVar14 = (ushort *)((long)puVar13 + 0xb);
                            pcVar11 = pcVar11 + 0xb;
                            do {
                              puVar9 = puVar14;
                              if (puVar16 <= puVar14) break;
                              cVar8 = *pcVar11;
                              puVar9 = (ushort *)((long)puVar14 + 1);
                              uVar5 = *puVar14;
                              puVar14 = puVar9;
                              pcVar11 = pcVar11 + 1;
                            } while (cVar8 == (char)uVar5);
                          }
                        }
                        else {
                          puVar9 = puVar13 + 5;
                        }
                      }
                      else {
                        puVar9 = (ushort *)((long)puVar13 + 9);
                      }
                    }
                    else {
                      puVar9 = puVar13 + 4;
                    }
                    goto joined_r0x0119ad0c;
                  }
                  puVar9 = (ushort *)((long)puVar13 + 7);
                }
                else {
                  puVar9 = puVar13 + 3;
                }
              }
              else {
                puVar9 = (ushort *)((long)puVar13 + 5);
              }
            }
            else {
              puVar9 = puVar13 + 2;
            }
            if (uVar19 != 0) goto LAB_0119ad10;
LAB_0119ad2c:
            pcVar12 = pcVar12 + -1;
          }
          iVar20 = (int)(char *)((long)puVar9 + -3);
          uVar19 = iVar20 - iVar10;
          cVar6 = (char)uVar7;
          cVar8 = (char)(uVar7 >> 8);
          if (0x106 < uVar19) {
            uVar3 = ((ulong)((iVar20 - iVar10) - 0x107) & 0xfffffffe) / 0x106 + 1;
            cVar15 = cVar8 + -0x20;
            if (0x1f < uVar3) {
              uVar21 = uVar3 & 0x1ffffe0;
              uVar19 = uVar19 + (int)uVar21 * -0x106;
              pcVar11 = pcVar12 + uVar21 * 3;
              uVar22 = uVar21;
              do {
                *pcVar12 = cVar15;
                pcVar12[1] = -3;
                pcVar12[2] = cVar6;
                pcVar12[3] = cVar15;
                pcVar12[4] = -3;
                pcVar12[5] = cVar6;
                pcVar12[6] = cVar15;
                pcVar12[7] = -3;
                pcVar12[8] = cVar6;
                pcVar12[9] = cVar15;
                pcVar12[10] = -3;
                pcVar12[0xb] = cVar6;
                pcVar12[0xc] = cVar15;
                pcVar12[0xd] = -3;
                pcVar12[0xe] = cVar6;
                pcVar12[0xf] = cVar15;
                pcVar12[0x10] = -3;
                pcVar12[0x11] = cVar6;
                pcVar12[0x12] = cVar15;
                pcVar12[0x13] = -3;
                pcVar12[0x14] = cVar6;
                pcVar12[0x15] = cVar15;
                pcVar12[0x16] = -3;
                pcVar12[0x17] = cVar6;
                pcVar12[0x18] = cVar15;
                pcVar12[0x19] = -3;
                pcVar12[0x1a] = cVar6;
                pcVar12[0x1b] = cVar15;
                pcVar12[0x1c] = -3;
                pcVar12[0x1d] = cVar6;
                pcVar12[0x1e] = cVar15;
                pcVar12[0x1f] = -3;
                pcVar12[0x20] = cVar6;
                pcVar12[0x21] = cVar15;
                pcVar12[0x22] = -3;
                pcVar12[0x23] = cVar6;
                pcVar12[0x24] = cVar15;
                pcVar12[0x25] = -3;
                pcVar12[0x26] = cVar6;
                pcVar12[0x27] = cVar15;
                pcVar12[0x28] = -3;
                pcVar12[0x29] = cVar6;
                pcVar12[0x2a] = cVar15;
                pcVar12[0x2b] = -3;
                pcVar12[0x2c] = cVar6;
                pcVar12[0x2d] = cVar15;
                pcVar12[0x2e] = -3;
                pcVar12[0x2f] = cVar6;
                uVar22 = uVar22 - 0x20;
                pcVar12[0x30] = cVar15;
                pcVar12[0x31] = -3;
                pcVar12[0x32] = cVar6;
                pcVar12[0x33] = cVar15;
                pcVar12[0x34] = -3;
                pcVar12[0x35] = cVar6;
                pcVar12[0x36] = cVar15;
                pcVar12[0x37] = -3;
                pcVar12[0x38] = cVar6;
                pcVar12[0x39] = cVar15;
                pcVar12[0x3a] = -3;
                pcVar12[0x3b] = cVar6;
                pcVar12[0x3c] = cVar15;
                pcVar12[0x3d] = -3;
                pcVar12[0x3e] = cVar6;
                pcVar12[0x3f] = cVar15;
                pcVar12[0x40] = -3;
                pcVar12[0x41] = cVar6;
                pcVar12[0x42] = cVar15;
                pcVar12[0x43] = -3;
                pcVar12[0x44] = cVar6;
                pcVar12[0x45] = cVar15;
                pcVar12[0x46] = -3;
                pcVar12[0x47] = cVar6;
                pcVar12[0x48] = cVar15;
                pcVar12[0x49] = -3;
                pcVar12[0x4a] = cVar6;
                pcVar12[0x4b] = cVar15;
                pcVar12[0x4c] = -3;
                pcVar12[0x4d] = cVar6;
                pcVar12[0x4e] = cVar15;
                pcVar12[0x4f] = -3;
                pcVar12[0x50] = cVar6;
                pcVar12[0x51] = cVar15;
                pcVar12[0x52] = -3;
                pcVar12[0x53] = cVar6;
                pcVar12[0x54] = cVar15;
                pcVar12[0x55] = -3;
                pcVar12[0x56] = cVar6;
                pcVar12[0x57] = cVar15;
                pcVar12[0x58] = -3;
                pcVar12[0x59] = cVar6;
                pcVar12[0x5a] = cVar15;
                pcVar12[0x5b] = -3;
                pcVar12[0x5c] = cVar6;
                pcVar12[0x5d] = cVar15;
                pcVar12[0x5e] = -3;
                pcVar12[0x5f] = cVar6;
                pcVar12 = pcVar12 + 0x60;
              } while (uVar22 != 0);
              pcVar12 = pcVar11;
              if (uVar3 == uVar21) goto LAB_0119ad48;
            }
            do {
              pcVar11 = pcVar12 + 3;
              uVar19 = uVar19 - 0x106;
              *pcVar12 = cVar15;
              pcVar12[1] = -3;
              pcVar12[2] = cVar6;
              pcVar12 = pcVar11;
            } while (0x106 < uVar19);
          }
LAB_0119ad48:
          if (uVar19 < 7) {
            pcVar11 = pcVar12 + 2;
            *pcVar12 = (char)uVar19 * ' ' + cVar8;
          }
          else {
            pcVar12[2] = cVar6;
            uVar7 = uVar19 - 7;
            pcVar11 = pcVar12 + 3;
            *pcVar12 = cVar8 + -0x20;
          }
          pcVar12[1] = (char)uVar7;
          puVar13 = puVar9 + -1;
          puVar14 = (ushort *)((long)puVar9 + -1);
          alStack_10048
          [(ushort)(*(ushort *)((long)puVar9 + -3) ^ *(ushort *)((long)puVar9 + -3) >> 3 ^ *puVar13)
           & 0x1fff] = (long)puVar9 + -3;
          alStack_10048
          [(ushort)(*puVar13 ^ *puVar13 >> 3 ^ CONCAT11((char)*puVar9,*(char *)puVar14)) & 0x1fff] =
               (long)puVar13;
          pcVar12 = pcVar11 + 1;
LAB_0119add0:
          uVar19 = 0;
          *pcVar11 = '\x1f';
          pcVar11 = pcVar12;
        }
        else {
          cVar8 = (char)*puVar13;
LAB_0119ab9c:
          uVar19 = uVar19 + 1;
          pcVar11 = pcVar12 + 1;
          *pcVar12 = cVar8;
          if (uVar19 == 0x20) {
            pcVar12 = pcVar12 + 2;
            goto LAB_0119add0;
          }
        }
        pcVar12 = pcVar11;
        puVar13 = puVar14;
      } while (puVar14 < param_1 + lVar17 + -0xc);
    }
    if (puVar14 <= param_1 + lVar17 + -1) {
      puVar14 = (ushort *)((long)puVar14 - 1);
      do {
        uVar19 = uVar19 + 1;
        *pcVar12 = *(char *)((long)puVar14 + 1);
        pcVar11 = pcVar12 + 1;
        if (uVar19 == 0x20) {
          uVar19 = 0;
          pcVar12[1] = '\x1f';
          pcVar11 = pcVar12 + 2;
        }
        pcVar12 = pcVar11;
        puVar14 = (ushort *)((long)puVar14 + 1);
      } while (puVar14 <= puVar16);
    }
    if (uVar19 == 0) {
      pcVar12 = pcVar12 + -1;
    }
    else {
      pcVar12[~(ulong)uVar19] = (char)uVar19 + -1;
    }
    param_2 = (int)pcVar12 - (int)param_3;
  }
  if (*(long *)(lVar4 + 0x28) == alStack_10048[0x2000]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}

