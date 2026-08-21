
void FUN_010a6150(long param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  short *psVar15;
  ushort *puVar16;
  
  lVar6 = param_1 + (ulong)param_2 * 0x28;
  iVar3 = *(int *)(lVar6 + 0x58);
  lVar13 = (long)iVar3;
  uVar7 = 4;
  if (param_2 != 0) {
    uVar7 = 8;
  }
  if ((0 < iVar3) && (0 < *(int *)(param_1 + 0x2c))) {
    puVar14 = *(ushort **)(param_1 + 0x30);
    psVar15 = *(short **)(lVar6 + 0x60);
    puVar16 = puVar14 + (long)*(int *)(param_1 + 0x2c) * 0x28;
    do {
      uVar5 = *puVar14;
      if (((uVar7 | 0x10) & uVar5) == 0) {
        if (param_2 == 1) {
          uVar1 = puVar14[0xd];
          puVar8 = puVar14 + 8;
        }
        else {
          uVar1 = puVar14[0xc];
          puVar8 = puVar14 + 4;
        }
        lVar6 = (long)(short)uVar1;
        sVar2 = *psVar15;
        if (sVar2 < lVar6) {
          if (psVar15[lVar13 * 0x2c + -0x2c] <= lVar6) {
            lVar6 = *(long *)(psVar15 + lVar13 * 0x2c + -0x28);
            lVar9 = *(long *)(psVar15 + lVar13 * 0x2c + -0x24);
            goto LAB_010a6318;
          }
          if (iVar3 < 9) {
            if (sVar2 < lVar6) {
              lVar9 = 0;
              psVar10 = psVar15;
              do {
                psVar10 = psVar10 + 0x2c;
                sVar2 = *psVar10;
                lVar9 = lVar9 + 1;
                if (lVar13 <= lVar9) break;
              } while (sVar2 < lVar6);
            }
            else {
              lVar9 = 0;
            }
            if (lVar6 != sVar2) goto LAB_010a6234;
            lVar6 = *(long *)(psVar15 + lVar9 * 0x2c + 8);
          }
          else {
            lVar9 = 0;
            lVar12 = lVar13;
            while (lVar11 = lVar12, lVar9 < lVar11) {
              lVar12 = lVar11 + lVar9 >> 1;
              if (psVar15[lVar12 * 0x2c] <= lVar6) {
                if (lVar6 <= psVar15[lVar12 * 0x2c]) {
                  lVar6 = *(long *)(psVar15 + lVar12 * 0x2c + 8);
                  goto LAB_010a6320;
                }
                lVar9 = lVar12 + 1;
                lVar12 = lVar11;
              }
            }
LAB_010a6234:
            psVar10 = psVar15 + lVar9 * 0x2c;
            if (*(long *)(psVar10 + -0x1c) == 0) {
              uVar4 = FT_DivFix(*(long *)(psVar15 + lVar9 * 0x2c + 8) - *(long *)(psVar10 + -0x24),
                                (long)*psVar10 - (long)psVar10[-0x2c]);
              *(undefined8 *)(psVar10 + -0x1c) = uVar4;
            }
            lVar9 = *(long *)(psVar10 + -0x24);
            lVar6 = FT_MulFix(lVar6 - psVar10[-0x2c]);
            uVar5 = *puVar14;
            lVar6 = lVar6 + lVar9;
          }
        }
        else {
          lVar6 = *(long *)(psVar15 + 4);
          lVar9 = *(long *)(psVar15 + 8);
LAB_010a6318:
          lVar6 = (lVar9 + *(long *)puVar8) - lVar6;
        }
LAB_010a6320:
        puVar8 = puVar14 + 0x10;
        if (param_2 != 0) {
          puVar8 = puVar14 + 0x14;
        }
        *(long *)puVar8 = lVar6;
        *puVar14 = uVar7 | uVar5;
      }
      puVar14 = puVar14 + 0x28;
    } while (puVar14 < puVar16);
  }
  return;
}

