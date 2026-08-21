
void png_combine_row(long param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t __n;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte bVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  byte bVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  bVar11 = *(byte *)(param_1 + 0x2b7);
  if (bVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row logic error");
  }
  lVar25 = *(long *)(param_1 + 0x260);
  uVar24 = *(uint *)(param_1 + 0x230);
  uVar23 = (ulong)uVar24;
  bVar3 = *(byte *)(param_1 + 0x2ad);
  if (*(ulong *)(param_1 + 0x288) != 0) {
    if (bVar11 < 8) {
      uVar16 = uVar23 * bVar11 + 7 >> 3;
    }
    else {
      uVar16 = (bVar11 >> 3) * uVar23;
    }
    if (*(ulong *)(param_1 + 0x288) != uVar16) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal row size calculation error");
    }
  }
  if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row width error");
  }
  uVar16 = uVar23 * bVar11;
  uVar8 = (uint)uVar16 & 7;
  pbVar7 = (byte *)(lVar25 + 1);
  uVar12 = (uint)bVar11;
  if ((uVar16 & 7) == 0) {
    bVar22 = 0;
    bVar26 = 0;
    pbVar21 = (byte *)0x0;
    cVar4 = *(char *)(param_1 + 0x2ac);
  }
  else {
    uVar9 = (bVar11 >> 3) * uVar23;
    if (uVar12 < 8) {
      uVar9 = uVar16 + 7 >> 3;
    }
    pbVar21 = param_2 + (uVar9 - 1);
    bVar22 = *pbVar21;
    if ((*(byte *)(param_1 + 0x16e) & 1) == 0) {
      bVar26 = (byte)(0xff >> (ulong)uVar8);
      cVar4 = *(char *)(param_1 + 0x2ac);
    }
    else {
      bVar26 = (byte)(0xff << (ulong)uVar8);
      cVar4 = *(char *)(param_1 + 0x2ac);
    }
  }
  if (((cVar4 != '\0') && (bVar3 < 6)) && ((*(uint *)(param_1 + 0x16c) >> 1 & 1) != 0)) {
    uVar8 = (uint)bVar3;
    if (param_3 == 1) {
      if ((bVar3 & 1) != 0) {
        uVar14 = 1;
        goto LAB_00d755c0;
      }
    }
    else if (param_3 == 0) {
      uVar14 = uVar8 & 1;
LAB_00d755c0:
      uVar14 = uVar14 << (ulong)(3 - (uVar8 + 1 >> 1) & 0x1f) & 7;
      if (uVar24 <= uVar14) {
        return;
      }
      if (7 < uVar12) {
        if ((bVar11 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid user transform pixel depth");
        }
        uVar12 = (uint)(bVar11 >> 3);
        lVar15 = uVar23 * uVar12;
        uVar23 = (ulong)(uVar14 * uVar12);
        uVar16 = lVar15 - uVar23;
        pbVar21 = param_2 + uVar23;
        pbVar7 = pbVar7 + uVar23;
        uVar27 = uVar12;
        if (param_3 != 0) {
          uVar5 = uVar12 << (ulong)(6 - uVar8 >> 1 & 0x1f);
          uVar27 = (uint)uVar16;
          if (uVar5 <= uVar16) {
            uVar27 = uVar5;
          }
        }
        uVar8 = uVar12 << (ulong)(7 - uVar8 >> 1 & 0x1f);
        if (uVar27 == 1) {
          uVar9 = (ulong)uVar8;
          *pbVar21 = *pbVar7;
          if (uVar16 <= uVar9) {
            return;
          }
          lVar15 = 0;
          do {
            uVar16 = uVar16 - uVar9;
            param_2[lVar15 + uVar9 + uVar23] = *(byte *)(lVar25 + uVar9 + uVar23 + 1 + lVar15);
            lVar15 = lVar15 + uVar9;
          } while (uVar9 < uVar16);
          return;
        }
        if (uVar27 == 2) {
          uVar9 = (ulong)uVar8;
          do {
            bVar6 = uVar16 < uVar9;
            uVar16 = uVar16 - uVar9;
            param_2[uVar23] = *(byte *)(lVar25 + uVar23 + 1);
            (param_2 + uVar23)[1] = *(byte *)(lVar25 + uVar23 + 2);
            if (bVar6 || uVar16 == 0) {
              return;
            }
            uVar23 = uVar23 + uVar9;
          } while (1 < uVar16);
          param_2[uVar23] = *(byte *)(lVar25 + uVar23 + 1);
          return;
        }
        if (uVar27 == 3) {
          *pbVar21 = *pbVar7;
          pbVar21[1] = pbVar7[1];
          uVar9 = (ulong)uVar8;
          pbVar21[2] = pbVar7[2];
          if (uVar16 <= uVar9) {
            return;
          }
          lVar15 = 0;
          do {
            pbVar7 = (byte *)(lVar25 + uVar9 + uVar23 + 3 + lVar15);
            pbVar21 = param_2 + lVar15 + uVar9 + uVar23;
            uVar16 = uVar16 - uVar9;
            *pbVar21 = pbVar7[-2];
            lVar15 = lVar15 + uVar9;
            pbVar21[1] = pbVar7[-1];
            pbVar21[2] = *pbVar7;
          } while (uVar9 < uVar16);
          return;
        }
        if (((0xf < uVar27) || (((ulong)pbVar21 & 1) != 0)) ||
           ((((ulong)pbVar7 & 1) != 0 || (((uVar27 & 1) != 0 || ((uVar8 & 1) != 0)))))) {
          uVar9 = (ulong)uVar27;
          memcpy(pbVar21,pbVar7,uVar9);
          uVar13 = (ulong)uVar8;
          if (uVar16 <= uVar13) {
            return;
          }
          lVar15 = 0;
          uVar24 = uVar12 * (uVar24 - uVar14) - uVar8;
          do {
            uVar12 = uVar24;
            if (uVar9 <= uVar16 - uVar13) {
              uVar12 = uVar27;
            }
            uVar9 = (ulong)uVar12;
            uVar16 = uVar16 - uVar13;
            memcpy(param_2 + lVar15 + uVar13 + uVar23,
                   (void *)(lVar25 + uVar13 + uVar23 + 1 + lVar15),uVar9);
            lVar15 = lVar15 + uVar13;
            uVar24 = uVar24 - uVar8;
            uVar27 = uVar12;
          } while (uVar13 < uVar16);
          return;
        }
        uVar9 = (ulong)uVar27;
        uVar13 = (ulong)uVar8;
        if (((((uint)pbVar21 | (uint)pbVar7) & 3) == 0) && (((uVar27 | uVar8) & 3) == 0)) {
          lVar25 = (ulong)(uVar8 - uVar27 >> 2) * 4;
          uVar20 = uVar9;
          uVar23 = (lVar15 - uVar13) - uVar23;
          while( true ) {
            do {
              uVar19 = uVar23;
              pbVar18 = pbVar7 + 4;
              uVar20 = uVar20 - 4;
              pbVar17 = pbVar21 + 4;
              *(undefined4 *)pbVar21 = *(undefined4 *)pbVar7;
              pbVar21 = pbVar17;
              pbVar7 = pbVar18;
              uVar23 = uVar19;
            } while (uVar20 != 0);
            bVar6 = uVar16 < uVar13;
            uVar16 = uVar16 - uVar13;
            if (bVar6 || uVar16 == 0) break;
            pbVar21 = pbVar17 + lVar25;
            pbVar7 = pbVar18 + lVar25;
            uVar20 = uVar9;
            uVar23 = uVar19 - uVar13;
            if (uVar16 < uVar9) {
              if (((0x1f < uVar16) && (uVar23 = uVar16 & 0xffffffffffffffe0, uVar23 != 0)) &&
                 ((pbVar7 + uVar16 <= pbVar21 || (pbVar21 + uVar16 <= pbVar7)))) {
                pbVar7 = pbVar7 + uVar23;
                pbVar21 = pbVar21 + uVar23;
                uVar19 = uVar19 & 0xffffffffffffffe0;
                do {
                  pbVar1 = pbVar18 + lVar25;
                  uVar28 = *(undefined8 *)pbVar1;
                  uVar30 = *(undefined8 *)(pbVar1 + 0x18);
                  uVar29 = *(undefined8 *)(pbVar1 + 0x10);
                  pbVar2 = pbVar17 + lVar25;
                  uVar19 = uVar19 - 0x20;
                  lVar25 = lVar25 + 0x20;
                  *(undefined8 *)(pbVar2 + 8) = *(undefined8 *)(pbVar1 + 8);
                  *(undefined8 *)pbVar2 = uVar28;
                  *(undefined8 *)(pbVar2 + 0x18) = uVar30;
                  *(undefined8 *)(pbVar2 + 0x10) = uVar29;
                } while (uVar19 != 0);
                bVar6 = uVar16 == uVar23;
                uVar16 = uVar16 - uVar23;
                if (bVar6) {
                  return;
                }
              }
              do {
                uVar16 = uVar16 - 1;
                *pbVar21 = *pbVar7;
                pbVar21 = pbVar21 + 1;
                pbVar7 = pbVar7 + 1;
              } while (uVar16 != 0);
              return;
            }
          }
          return;
        }
        lVar25 = (ulong)(uVar8 - uVar27 >> 1) * 2;
        uVar20 = uVar9;
        uVar23 = (lVar15 - uVar13) - uVar23;
        while( true ) {
          do {
            uVar19 = uVar23;
            pbVar18 = pbVar7 + 2;
            uVar20 = uVar20 - 2;
            pbVar17 = pbVar21 + 2;
            *(undefined2 *)pbVar21 = *(undefined2 *)pbVar7;
            pbVar21 = pbVar17;
            pbVar7 = pbVar18;
            uVar23 = uVar19;
          } while (uVar20 != 0);
          bVar6 = uVar16 < uVar13;
          uVar16 = uVar16 - uVar13;
          if (bVar6 || uVar16 == 0) break;
          pbVar21 = pbVar17 + lVar25;
          pbVar7 = pbVar18 + lVar25;
          uVar20 = uVar9;
          uVar23 = uVar19 - uVar13;
          if (uVar16 < uVar9) {
            if (((0x1f < uVar16) && (uVar23 = uVar16 & 0xffffffffffffffe0, uVar23 != 0)) &&
               ((pbVar7 + uVar16 <= pbVar21 || (pbVar21 + uVar16 <= pbVar7)))) {
              pbVar7 = pbVar7 + uVar23;
              pbVar21 = pbVar21 + uVar23;
              uVar19 = uVar19 & 0xffffffffffffffe0;
              do {
                pbVar1 = pbVar18 + lVar25;
                uVar28 = *(undefined8 *)pbVar1;
                uVar30 = *(undefined8 *)(pbVar1 + 0x18);
                uVar29 = *(undefined8 *)(pbVar1 + 0x10);
                pbVar2 = pbVar17 + lVar25;
                uVar19 = uVar19 - 0x20;
                lVar25 = lVar25 + 0x20;
                *(undefined8 *)(pbVar2 + 8) = *(undefined8 *)(pbVar1 + 8);
                *(undefined8 *)pbVar2 = uVar28;
                *(undefined8 *)(pbVar2 + 0x18) = uVar30;
                *(undefined8 *)(pbVar2 + 0x10) = uVar29;
              } while (uVar19 != 0);
              bVar6 = uVar16 == uVar23;
              uVar16 = uVar16 - uVar23;
              if (bVar6) {
                return;
              }
            }
            do {
              uVar16 = uVar16 - 1;
              *pbVar21 = *pbVar7;
              pbVar21 = pbVar21 + 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar16 != 0);
            return;
          }
        }
        return;
      }
      lVar25 = 1;
      if (uVar12 != 2) {
        lVar25 = 2;
      }
      uVar24 = 0;
      if (uVar12 != 0) {
        uVar24 = 8 / uVar12;
      }
      lVar15 = 0;
      if (uVar12 != 1) {
        lVar15 = lVar25;
      }
      if ((*(uint *)(param_1 + 0x16c) >> 0x10 & 1) == 0) {
        if (param_3 == 0) {
          puVar10 = (uint *)(&UNK_0194c4b8 + lVar15 * 0x18 + (ulong)bVar3 * 4);
        }
        else {
          puVar10 = (uint *)(&UNK_0194c524 + lVar15 * 0xc + (ulong)(bVar3 >> 1) * 4);
        }
      }
      else {
        puVar10 = (uint *)(&UNK_0194c500 + (ulong)(bVar3 >> 1) * 4 + lVar15 * 0xc);
        if (param_3 == 0) {
          puVar10 = (uint *)(&UNK_0194c470 + (ulong)bVar3 * 4 + lVar15 * 0x18);
        }
      }
      uVar8 = *puVar10;
      uVar12 = uVar8;
      while( true ) {
        if ((uVar12 & 0xff) != 0) {
          if ((uVar12 & 0xff) == 0xff) {
            bVar11 = *pbVar7;
          }
          else {
            bVar11 = (byte)uVar8 & *pbVar7 | *param_2 & ((byte)uVar8 ^ 0xff);
          }
          *param_2 = bVar11;
        }
        bVar6 = uVar23 < uVar24;
        uVar23 = uVar23 - uVar24;
        if (bVar6 || uVar23 == 0) break;
        uVar12 = uVar8 >> 8;
        uVar8 = uVar12 | uVar8 << 0x18;
        param_2 = param_2 + 1;
        pbVar7 = pbVar7 + 1;
      }
      goto LAB_00d75584;
    }
  }
  __n = (bVar11 >> 3) * uVar23;
  if (uVar12 < 8) {
    __n = uVar16 + 7 >> 3;
  }
  memcpy(param_2,pbVar7,__n);
LAB_00d75584:
  if (pbVar21 != (byte *)0x0) {
    *pbVar21 = *pbVar21 & (bVar26 ^ 0xff) | bVar26 & bVar22;
  }
  return;
}

