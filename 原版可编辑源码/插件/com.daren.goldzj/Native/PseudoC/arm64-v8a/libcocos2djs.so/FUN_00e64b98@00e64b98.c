
void FUN_00e64b98(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  
  lVar5 = param_1 + (ulong)param_2 * 0x9e8;
  iVar3 = *(int *)(lVar5 + 0x58);
  lVar8 = (long)iVar3;
  uVar6 = 4;
  if (param_2 != 0) {
    uVar6 = 8;
  }
  if ((0 < iVar3) && (0 < *(int *)(param_1 + 0x2c))) {
    puVar9 = *(ushort **)(param_1 + 0x30);
    puVar10 = *(ushort **)(lVar5 + 0x60);
    puVar11 = puVar9 + (long)*(int *)(param_1 + 0x2c) * 0x28;
    if (param_2 == 1) {
      do {
        while (((uVar6 | 0x10) & *puVar9) != 0) {
          puVar9 = puVar9 + 0x28;
          if (puVar11 <= puVar9) {
            return;
          }
        }
        uVar1 = puVar9[0xd];
        uVar2 = *puVar10;
        if ((short)uVar2 < (short)uVar1) {
          if ((short)puVar10[lVar8 * 0x2c + -0x2c] <= (short)uVar1) {
            lVar5 = *(long *)(puVar10 + lVar8 * 0x2c + -0x28);
            lVar4 = *(long *)(puVar10 + lVar8 * 0x2c + -0x24);
            goto LAB_00e64c98;
          }
          if (iVar3 < 9) {
            if ((short)uVar2 < (short)uVar1) {
              lVar5 = 0;
              puVar7 = puVar10 + 0x2c;
              do {
                uVar2 = *puVar7;
                lVar5 = lVar5 + 1;
                if (lVar8 <= lVar5) break;
                puVar7 = puVar7 + 0x2c;
              } while ((short)uVar2 < (short)uVar1);
            }
            else {
              lVar5 = 0;
            }
            if (uVar2 != uVar1) goto LAB_00e64d20;
            lVar5 = *(long *)(puVar10 + lVar5 * 0x2c + 8);
          }
          else {
            lVar5 = 0;
            lVar4 = lVar8;
            do {
              lVar12 = lVar4 + lVar5 >> 1;
              if ((short)puVar10[lVar12 * 0x2c] <= (short)uVar1) {
                if ((short)uVar1 <= (short)puVar10[lVar12 * 0x2c]) {
                  lVar5 = *(long *)(puVar10 + lVar12 * 0x2c + 8);
                  goto LAB_00e64ca0;
                }
                lVar5 = lVar12 + 1;
                lVar12 = lVar4;
              }
              lVar4 = lVar12;
            } while (lVar5 < lVar4);
LAB_00e64d20:
            puVar7 = puVar10 + lVar5 * 0x2c;
            lVar4 = *(long *)(puVar7 + -0x1c);
            if (lVar4 == 0) {
              lVar4 = FT_DivFix(*(long *)(puVar10 + lVar5 * 0x2c + 8) - *(long *)(puVar7 + -0x24),
                                (long)(short)*puVar7 - (long)(short)puVar7[-0x2c]);
              *(long *)(puVar7 + -0x1c) = lVar4;
            }
            lVar12 = *(long *)(puVar7 + -0x24);
            lVar5 = FT_MulFix((long)(short)uVar1 - (long)(short)puVar7[-0x2c],lVar4);
            lVar5 = lVar5 + lVar12;
          }
        }
        else {
          lVar5 = *(long *)(puVar10 + 4);
          lVar4 = *(long *)(puVar10 + 8);
LAB_00e64c98:
          lVar5 = (lVar4 + *(long *)(puVar9 + 8)) - lVar5;
        }
LAB_00e64ca0:
        *(long *)(puVar9 + 0x14) = lVar5;
        *puVar9 = *puVar9 | uVar6;
        puVar9 = puVar9 + 0x28;
      } while (puVar9 < puVar11);
    }
    else {
      do {
        while (((uVar6 | 0x10) & *puVar9) != 0) {
          puVar9 = puVar9 + 0x28;
          if (puVar11 <= puVar9) {
            return;
          }
        }
        uVar1 = puVar9[0xc];
        uVar2 = *puVar10;
        if ((short)uVar2 < (short)uVar1) {
          if ((short)puVar10[lVar8 * 0x2c + -0x2c] <= (short)uVar1) {
            lVar5 = *(long *)(puVar10 + lVar8 * 0x2c + -0x28);
            lVar4 = *(long *)(puVar10 + lVar8 * 0x2c + -0x24);
            goto LAB_00e64e20;
          }
          if (iVar3 < 9) {
            if ((short)uVar2 < (short)uVar1) {
              lVar5 = 0;
              puVar7 = puVar10 + 0x2c;
              do {
                uVar2 = *puVar7;
                lVar5 = lVar5 + 1;
                if (lVar8 <= lVar5) break;
                puVar7 = puVar7 + 0x2c;
              } while ((short)uVar2 < (short)uVar1);
            }
            else {
              lVar5 = 0;
            }
            if (uVar2 != uVar1) goto LAB_00e64ea4;
LAB_00e64f00:
            lVar5 = *(long *)(puVar10 + lVar5 * 0x2c + 8);
          }
          else {
            lVar5 = 0;
            lVar4 = lVar8;
            do {
              lVar12 = lVar4 + lVar5 >> 1;
              if ((short)puVar10[lVar12 * 0x2c] <= (short)uVar1) {
                lVar5 = lVar12;
                if ((short)uVar1 <= (short)puVar10[lVar12 * 0x2c]) goto LAB_00e64f00;
                lVar5 = lVar12 + 1;
                lVar12 = lVar4;
              }
              lVar4 = lVar12;
            } while (lVar5 < lVar4);
LAB_00e64ea4:
            puVar7 = puVar10 + lVar5 * 0x2c;
            lVar4 = *(long *)(puVar7 + -0x1c);
            if (lVar4 == 0) {
              lVar4 = FT_DivFix(*(long *)(puVar10 + lVar5 * 0x2c + 8) - *(long *)(puVar7 + -0x24),
                                (long)(short)*puVar7 - (long)(short)puVar7[-0x2c]);
              *(long *)(puVar7 + -0x1c) = lVar4;
            }
            lVar12 = *(long *)(puVar7 + -0x24);
            lVar5 = FT_MulFix((long)(short)uVar1 - (long)(short)puVar7[-0x2c],lVar4);
            lVar5 = lVar5 + lVar12;
          }
        }
        else {
          lVar5 = *(long *)(puVar10 + 4);
          lVar4 = *(long *)(puVar10 + 8);
LAB_00e64e20:
          lVar5 = (lVar4 + *(long *)(puVar9 + 4)) - lVar5;
        }
        lVar4 = 0x20;
        if (param_2 != 0) {
          lVar4 = 0x28;
        }
        *(long *)((long)puVar9 + lVar4) = lVar5;
        *puVar9 = *puVar9 | uVar6;
        puVar9 = puVar9 + 0x28;
      } while (puVar9 < puVar11);
    }
  }
  return;
}

