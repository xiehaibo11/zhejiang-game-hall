
void FUN_0119afa4(byte *param_1,int param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  ushort *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  byte bVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long alStack_10070 [8194];
  
  lVar4 = tpidr_el0;
  alStack_10070[0x2000] = *(long *)(lVar4 + 0x28);
  lVar7 = (long)param_2;
  pbVar21 = param_1 + lVar7 + -2;
  if (param_2 < 4) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      *param_3 = (char)param_2 - 1;
      if (param_1 <= param_1 + lVar7 + -1) {
        param_1 = param_1 + -1;
        do {
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          *param_3 = *param_1;
        } while (param_1 <= pbVar21);
      }
      param_2 = param_2 + 1;
    }
  }
  else {
    lVar10 = 0;
    do {
      lVar1 = lVar10 + 0x20;
      *(byte **)((long)alStack_10070 + lVar10 + 8) = param_1;
      *(byte **)((long)alStack_10070 + lVar10) = param_1;
      *(byte **)((long)alStack_10070 + lVar10 + 0x18) = param_1;
      *(byte **)((long)alStack_10070 + lVar10 + 0x10) = param_1;
      lVar10 = lVar1;
    } while (lVar1 != 0x10000);
    *param_3 = 0x1f;
    pbVar12 = param_1 + 2;
    pbVar18 = param_3 + 3;
    param_3[1] = *param_1;
    uVar15 = 2;
    param_3[2] = param_1[1];
    pbVar22 = pbVar18;
    if (2 < lVar7 + -0xc) {
      do {
        bVar17 = *pbVar12;
        iVar9 = (int)pbVar12;
        if (bVar17 == pbVar12[-1]) {
          pbVar18 = pbVar12 + 2;
          bVar3 = (byte)*(ushort *)(pbVar12 + 1);
          uVar19 = (uint)*(ushort *)(pbVar12 + 1);
          if (CONCAT11(bVar17,bVar17) != uVar19) goto LAB_0119b11c;
          pbVar12 = pbVar12 + 3;
          goto LAB_0119b0c4;
        }
        bVar3 = (byte)*(ushort *)(pbVar12 + 1);
        uVar19 = (uint)*(ushort *)(pbVar12 + 1);
LAB_0119b11c:
        uVar19 = ((ushort)(CONCAT11(bVar3,bVar17) ^ CONCAT11(bVar3,bVar17) >> 3) ^ uVar19) & 0x1fff;
        pbVar20 = (byte *)alStack_10070[uVar19];
        pbVar16 = pbVar12 + 1;
        alStack_10070[uVar19] = (long)pbVar12;
        uVar13 = iVar9 - (int)pbVar20;
        uVar19 = uVar13 - 1;
        if (uVar19 < 0x11ffc) {
          bVar3 = *pbVar20;
          bVar17 = *pbVar12;
          if (((bVar3 != *pbVar12) || (bVar17 = bVar3, pbVar20[1] != *pbVar16)) ||
             (pbVar20[2] != pbVar12[2])) goto LAB_0119b068;
          pbVar18 = pbVar20 + 3;
          if (uVar13 < 0x1fff) {
            pbVar12 = pbVar12 + 3;
            if (uVar19 == 0) goto LAB_0119b0c4;
LAB_0119b43c:
            pbVar20 = pbVar12 + 1;
            if (((*pbVar18 == *pbVar12) && (pbVar20 = pbVar12 + 2, pbVar18[1] == pbVar12[1])) &&
               ((pbVar20 = pbVar12 + 3, pbVar18[2] == pbVar12[2] &&
                ((((pbVar20 = pbVar12 + 4, pbVar18[3] == pbVar12[3] &&
                   (pbVar20 = pbVar12 + 5, pbVar18[4] == pbVar12[4])) &&
                  (pbVar20 = pbVar12 + 6, pbVar18[5] == pbVar12[5])) &&
                 ((pbVar20 = pbVar12 + 7, pbVar18[6] == pbVar12[6] &&
                  (pbVar20 = pbVar12 + 8, pbVar18[7] == pbVar12[7])))))))) {
              pbVar18 = pbVar18 + 8;
              pbVar12 = pbVar12 + 8;
              do {
                pbVar20 = pbVar12;
                if (pbVar21 <= pbVar12) break;
                bVar17 = *pbVar18;
                pbVar20 = pbVar12 + 1;
                bVar3 = *pbVar12;
                pbVar18 = pbVar18 + 1;
                pbVar12 = pbVar20;
              } while (bVar17 == bVar3);
            }
          }
          else {
            if ((pbVar12[3] != *pbVar18) || (pbVar12[4] != pbVar20[4])) goto LAB_0119b068;
            pbVar18 = pbVar20 + 5;
            pbVar12 = pbVar12 + 5;
            if (uVar19 != 0) goto LAB_0119b43c;
LAB_0119b0c4:
            if (pbVar12 < pbVar21) {
              pbVar16 = pbVar12 + -1;
              do {
                if (*pbVar18 != *pbVar16) break;
                pbVar12 = pbVar12 + 1;
                pbVar18 = pbVar18 + 1;
              } while (pbVar12 < pbVar21);
            }
            uVar19 = 0;
            uVar13 = 1;
            pbVar20 = pbVar12;
          }
          if (uVar15 == 0) {
            pbVar22 = pbVar22 + -1;
          }
          else {
            pbVar22[~(ulong)uVar15] = (char)uVar15 - 1;
          }
          iVar5 = (int)(pbVar20 + -3);
          uVar15 = iVar5 - iVar9;
          if (uVar19 < 0x1fff) {
            cVar6 = (char)(uVar19 >> 8);
            if (uVar15 < 7) {
              pbVar12 = pbVar22 + 1;
              pbVar18 = pbVar22 + 2;
              *pbVar22 = (char)uVar15 * ' ' + cVar6;
            }
            else {
              uVar15 = uVar15 - 7;
              pbVar18 = pbVar22 + 1;
              *pbVar22 = cVar6 - 0x20;
              if (0xfe < uVar15) {
                uVar13 = (iVar5 + -0x106) - iVar9;
                memset(pbVar18,0xff,(ulong)(uVar13 / 0xff + 1));
                uVar2 = (ulong)uVar13 / 0xff + 1;
                if (1 < uVar2) {
                  uVar11 = uVar2 & 0x3fffffe;
                  pbVar18 = pbVar18 + uVar11;
                  uVar15 = uVar15 + (int)uVar11 * -0xff;
                  uVar14 = uVar11;
                  do {
                    uVar14 = uVar14 - 2;
                  } while (uVar14 != 0);
                  if (uVar2 == uVar11) {
                    pbVar22 = pbVar22 + uVar11;
                    goto LAB_0119b2e8;
                  }
                }
                do {
                  pbVar22 = pbVar18;
                  uVar15 = uVar15 - 0xff;
                  pbVar18 = pbVar22 + 1;
                } while (0xfe < uVar15);
              }
LAB_0119b2e8:
              pbVar12 = pbVar22 + 2;
              *pbVar18 = (byte)uVar15;
              pbVar18 = pbVar22 + 3;
            }
          }
          else {
            uVar19 = uVar13 - 0x2000;
            bVar17 = (byte)(uVar19 >> 8);
            if (uVar15 < 7) {
              pbVar22[1] = 0xff;
              pbVar12 = pbVar22 + 3;
              pbVar22[2] = bVar17;
              *pbVar22 = (char)uVar15 * ' ' | 0x1f;
              pbVar18 = pbVar22 + 4;
            }
            else {
              uVar15 = uVar15 - 7;
              pbVar16 = pbVar22 + 1;
              *pbVar22 = 0xff;
              if (0xfe < uVar15) {
                uVar13 = (iVar5 + -0x106) - iVar9;
                memset(pbVar16,0xff,(ulong)(uVar13 / 0xff + 1));
                uVar2 = (ulong)uVar13 / 0xff + 1;
                if (1 < uVar2) {
                  uVar11 = uVar2 & 0x3fffffe;
                  pbVar16 = pbVar16 + uVar11;
                  uVar15 = uVar15 + (int)uVar11 * -0xff;
                  uVar14 = uVar11;
                  do {
                    uVar14 = uVar14 - 2;
                  } while (uVar14 != 0);
                  if (uVar2 == uVar11) {
                    pbVar22 = pbVar22 + uVar11;
                    goto LAB_0119b3b4;
                  }
                }
                do {
                  pbVar22 = pbVar16;
                  uVar15 = uVar15 - 0xff;
                  pbVar16 = pbVar22 + 1;
                } while (0xfe < uVar15);
              }
LAB_0119b3b4:
              pbVar12 = pbVar22 + 4;
              pbVar18 = pbVar22 + 5;
              *pbVar16 = (byte)uVar15;
              pbVar22[2] = 0xff;
              pbVar22[3] = bVar17;
            }
          }
          *pbVar12 = (byte)uVar19;
          puVar8 = (ushort *)(pbVar20 + -2);
          pbVar16 = pbVar20 + -1;
          alStack_10070
          [(ushort)(*(ushort *)(pbVar20 + -3) ^ *(ushort *)(pbVar20 + -3) >> 3 ^ *puVar8) & 0x1fff]
               = (long)(pbVar20 + -3);
          alStack_10070[(ushort)(*puVar8 ^ *puVar8 >> 3 ^ CONCAT11(*pbVar20,*pbVar16)) & 0x1fff] =
               (long)puVar8;
          pbVar22 = pbVar18 + 1;
LAB_0119b420:
          uVar15 = 0;
          *pbVar18 = 0x1f;
          pbVar18 = pbVar22;
          pbVar12 = pbVar16;
        }
        else {
          bVar17 = *pbVar12;
LAB_0119b068:
          uVar15 = uVar15 + 1;
          pbVar18 = pbVar22 + 1;
          *pbVar22 = bVar17;
          pbVar12 = pbVar16;
          if (uVar15 == 0x20) {
            pbVar22 = pbVar22 + 2;
            goto LAB_0119b420;
          }
        }
        pbVar22 = pbVar18;
      } while (pbVar12 < param_1 + lVar7 + -0xc);
    }
    if (pbVar12 <= param_1 + lVar7 + -1) {
      pbVar12 = pbVar12 + -1;
      do {
        uVar15 = uVar15 + 1;
        *pbVar18 = pbVar12[1];
        pbVar22 = pbVar18 + 1;
        if (uVar15 == 0x20) {
          uVar15 = 0;
          pbVar18[1] = 0x1f;
          pbVar22 = pbVar18 + 2;
        }
        pbVar18 = pbVar22;
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 <= pbVar21);
    }
    if (uVar15 == 0) {
      pbVar18 = pbVar18 + -1;
    }
    else {
      pbVar18[~(ulong)uVar15] = (char)uVar15 - 1;
    }
    param_2 = (int)pbVar18 - (int)param_3;
    *param_3 = *param_3 | 0x20;
  }
  if (*(long *)(lVar4 + 0x28) != alStack_10070[0x2000]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}

