
int FUN_01199790(int param_1,long param_2,ushort *param_3,ushort *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  if (0 < param_1) {
    iVar11 = 0;
    do {
      iVar10 = iVar11 + 1;
      uVar13 = 0;
      if (iVar10 < param_1) {
        uVar13 = iVar11 + 1;
      }
      iVar4 = 0;
      if ((int)(uVar13 + 1) < param_1) {
        iVar4 = uVar13 + 1;
      }
      uVar7 = FUN_0119a6a0(iVar11,iVar4,param_1,param_2,param_3);
      if ((uVar7 & 1) != 0) {
        param_3[uVar13] = param_3[uVar13] | 0x8000;
      }
      iVar11 = iVar10;
    } while (param_1 != iVar10);
    if (3 < param_1) {
      uVar19 = (ulong)param_1;
      uVar7 = 0;
      uVar18 = uVar19;
      puVar15 = param_4;
      uVar20 = uVar19;
      do {
        uVar20 = uVar20 - 1;
        uVar8 = ~uVar7;
        uVar13 = 0xffffffff;
        uVar12 = 0;
        iVar11 = -1;
        do {
          uVar9 = uVar12 + 1;
          uVar16 = (uint)uVar9;
          if ((long)uVar18 <= (long)uVar9) {
            uVar16 = 0;
          }
          uVar6 = uVar13;
          iVar10 = iVar11;
          if ((short)param_3[uVar16] < 0) {
            uVar17 = (ulong)(uVar16 + 1);
            if ((long)uVar18 <= (long)(int)(uVar16 + 1)) {
              uVar17 = 0;
            }
            pbVar1 = (byte *)(param_2 + ((ulong)param_3[uVar12] & 0x7fff) * 4);
            pbVar2 = (byte *)(param_2 + ((ulong)param_3[uVar17] & 0x7fff) * 4);
            iVar10 = (uint)*pbVar2 - (uint)*pbVar1;
            iVar4 = (uint)pbVar2[2] - (uint)pbVar1[2];
            uVar6 = iVar10 * iVar10 + iVar4 * iVar4;
            iVar10 = (int)uVar12;
            if (uVar13 <= uVar6) {
              uVar6 = uVar13;
              iVar10 = iVar11;
            }
          }
          uVar13 = uVar6;
          uVar12 = uVar9;
          iVar11 = iVar10;
        } while (uVar18 != uVar9);
        if (iVar10 == -1) {
          return -(int)uVar7;
        }
        uVar13 = 0;
        if ((long)(iVar10 + 1) < (long)uVar18) {
          uVar13 = iVar10 + 1;
        }
        *puVar15 = param_3[iVar10] & 0x7fff;
        param_4 = puVar15 + 3;
        uVar7 = uVar7 + 1;
        puVar15[1] = param_3[(int)uVar13] & 0x7fff;
        lVar14 = (long)(int)(uVar13 + 1);
        if ((long)uVar18 <= lVar14) {
          lVar14 = 0;
        }
        uVar12 = (ulong)(int)uVar13;
        uVar18 = uVar18 - 1;
        puVar15[2] = param_3[lVar14] & 0x7fff;
        if ((long)uVar12 < (long)uVar18) {
          uVar9 = (uVar8 + uVar19) - uVar12;
          uVar8 = uVar12;
          if (0xf < uVar9) {
            uVar17 = uVar20 - uVar12 & 0xfffffffffffffff0;
            puVar15 = param_3 + uVar12 + 9;
            uVar8 = (uVar9 & 0xfffffffffffffff0) + uVar12;
            do {
              uVar17 = uVar17 - 0x10;
              *(undefined8 *)(puVar15 + -5) = *(undefined8 *)(puVar15 + -4);
              *(undefined8 *)(puVar15 + -9) = *(undefined8 *)(puVar15 + -8);
              *(undefined8 *)(puVar15 + 3) = *(undefined8 *)(puVar15 + 4);
              *(undefined8 *)(puVar15 + -1) = *(undefined8 *)puVar15;
              puVar15 = puVar15 + 0x10;
            } while (uVar17 != 0);
            if (uVar9 == (uVar9 & 0xfffffffffffffff0)) goto LAB_0119984c;
          }
          do {
            puVar15 = param_3 + uVar8;
            uVar8 = uVar8 + 1;
            *puVar15 = puVar15[1];
          } while (uVar20 != uVar8);
        }
LAB_0119984c:
        if ((long)uVar18 <= (long)uVar12) {
          uVar13 = 0;
        }
        uVar16 = uVar13;
        if ((int)uVar13 < 1) {
          uVar16 = (uint)uVar18;
        }
        uVar16 = uVar16 - 1;
        uVar6 = uVar16;
        if ((int)uVar16 < 1) {
          uVar6 = (uint)uVar18;
        }
        uVar12 = FUN_0119a6a0(uVar6 - 1,(ulong)uVar13,uVar18 & 0xffffffff,param_2,param_3);
        uVar8 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar16 << 1;
        uVar5 = *(ushort *)((long)param_3 + uVar8);
        uVar3 = uVar5 | 0x8000;
        if ((uVar12 & 1) == 0) {
          uVar3 = uVar5 & 0x7fff;
        }
        iVar11 = 0;
        if ((long)(int)(uVar13 + 1) < (long)uVar18) {
          iVar11 = uVar13 + 1;
        }
        *(ushort *)((long)param_3 + uVar8) = uVar3;
        uVar12 = FUN_0119a6a0((ulong)uVar16,iVar11,uVar18 & 0xffffffff,param_2,param_3);
        uVar8 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1;
        uVar5 = *(ushort *)((long)param_3 + uVar8);
        uVar3 = uVar5 | 0x8000;
        if ((uVar12 & 1) == 0) {
          uVar3 = uVar5 & 0x7fff;
        }
        *(ushort *)((long)param_3 + uVar8) = uVar3;
        puVar15 = param_4;
      } while ((int)uVar7 != param_1 + -3);
      param_1 = param_1 + -2;
      goto LAB_01199a40;
    }
  }
  param_1 = 1;
LAB_01199a40:
  *param_4 = *param_3 & 0x7fff;
  param_4[1] = param_3[1] & 0x7fff;
  param_4[2] = param_3[2] & 0x7fff;
  return param_1;
}

