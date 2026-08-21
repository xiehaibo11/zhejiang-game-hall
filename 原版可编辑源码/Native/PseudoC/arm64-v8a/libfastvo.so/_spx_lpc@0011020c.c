
int _spx_lpc(short *param_1,ushort *param_2,uint param_3)

{
  ulong uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  short *psVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar10 = *param_2;
  uVar11 = (uint)uVar10;
  if (uVar10 == 0) {
    if (0 < (int)param_3) {
      memset(param_1,0,(ulong)param_3 << 1);
    }
    iVar18 = 0;
  }
  else {
    if (0 < (int)param_3) {
      uVar12 = 0;
      puVar13 = param_2 + -3;
      psVar14 = param_1 + -1;
      puVar15 = param_2;
      uVar16 = 0;
      do {
        uVar1 = uVar16 + 1;
        uVar17 = uVar16 >> 1 & 0x7fffffff;
        iVar18 = (short)param_2[uVar1] * -0x2000;
        if (uVar16 != 0) {
          if (uVar16 < 8) {
            uVar5 = 0;
          }
          else {
            iVar20 = 0;
            iVar21 = 0;
            uVar7 = uVar16 & 0xfffffffffffffff8;
            uVar5 = uVar16 & 0x7ffffffffffffff8;
            iVar19 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar25 = 0;
            puVar6 = puVar13;
            psVar8 = param_1 + 4;
            do {
              uVar26 = *(undefined8 *)(psVar8 + -4);
              uVar27 = *(undefined8 *)psVar8;
              psVar8 = psVar8 + 8;
              uVar7 = uVar7 - 8;
              uVar28 = NEON_rev64(*(undefined8 *)puVar6,2);
              uVar29 = NEON_rev64(*(undefined8 *)(puVar6 + -4),2);
              iVar18 = iVar18 - (int)(short)uVar28 * (int)(short)uVar26;
              iVar19 = iVar19 - (int)(short)((ulong)uVar28 >> 0x10) *
                                (int)(short)((ulong)uVar26 >> 0x10);
              iVar20 = iVar20 - (int)(short)((ulong)uVar28 >> 0x20) *
                                (int)(short)((ulong)uVar26 >> 0x20);
              iVar21 = iVar21 - (int)(short)((ulong)uVar28 >> 0x30) *
                                (int)(short)((ulong)uVar26 >> 0x30);
              iVar22 = iVar22 - (int)(short)uVar29 * (int)(short)uVar27;
              iVar23 = iVar23 - (int)(short)((ulong)uVar29 >> 0x10) *
                                (int)(short)((ulong)uVar27 >> 0x10);
              iVar24 = iVar24 - (int)(short)((ulong)uVar29 >> 0x20) *
                                (int)(short)((ulong)uVar27 >> 0x20);
              iVar25 = iVar25 - (int)(short)((ulong)uVar29 >> 0x30) *
                                (int)(short)((ulong)uVar27 >> 0x30);
              puVar6 = puVar6 + -8;
            } while (uVar7 != 0);
            iVar18 = iVar22 + iVar18 + iVar23 + iVar19 + iVar24 + iVar20 + iVar25 + iVar21;
            if (uVar16 == uVar5) goto LAB_001102e0;
          }
          puVar6 = puVar15 + -uVar5;
          do {
            psVar8 = param_1 + uVar5;
            uVar5 = uVar5 + 1;
            iVar18 = iVar18 - (int)(short)*puVar6 * (int)*psVar8;
            puVar6 = puVar6 + -1;
          } while (uVar16 != uVar5);
        }
LAB_001102e0:
        sVar4 = (short)uVar11;
        sVar3 = 0;
        if ((short)(sVar4 + 8) != 0) {
          sVar3 = (short)((iVar18 + (sVar4 + 1 >> 1)) / (int)(short)(sVar4 + 8));
        }
        param_1[uVar16] = sVar3;
        if ((int)uVar17 != 0) {
          uVar5 = (ulong)(uVar12 >> 1);
          psVar8 = psVar14;
          psVar9 = param_1;
          do {
            sVar2 = *psVar9;
            uVar5 = uVar5 - 1;
            *psVar9 = sVar2 + (short)((int)sVar3 * (int)*psVar8 + 0x1000U >> 0xd);
            *psVar8 = *psVar8 + (short)((int)sVar3 * (int)sVar2 + 0x1000U >> 0xd);
            psVar8 = psVar8 + -1;
            psVar9 = psVar9 + 1;
          } while (uVar5 != 0);
        }
        if ((uVar16 & 1) != 0) {
          param_1[uVar17] =
               param_1[uVar17] + (short)((int)sVar3 * (int)param_1[uVar17] + 0x1000U >> 0xd);
        }
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
        psVar14 = psVar14 + 1;
        uVar11 = uVar11 - ((uint)(((int)sVar4 * (int)sVar3 * 8 >> 0x10) * (int)sVar3) >> 0xd);
        uVar10 = (ushort)uVar11;
        uVar12 = uVar12 + 1;
        uVar16 = uVar1;
      } while (uVar1 != param_3);
    }
    iVar18 = (int)(short)uVar10;
  }
  return iVar18;
}

