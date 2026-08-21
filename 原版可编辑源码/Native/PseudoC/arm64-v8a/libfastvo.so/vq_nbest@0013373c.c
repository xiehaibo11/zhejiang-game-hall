
void vq_nbest(long param_1,short *param_2,uint param_3,uint param_4,long param_5,uint param_6,
             long param_7,long param_8)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (0 < (int)param_4) {
    iVar2 = param_6 - 1;
    uVar7 = (ulong)param_3;
    lVar8 = (-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2) - 4;
    uVar4 = 0;
    iVar5 = 0;
    lVar6 = (long)(int)param_6;
    piVar1 = (int *)(param_8 + (long)iVar2 * 4);
    uVar3 = uVar7 & 0xfffffff8;
    do {
      if ((int)param_3 < 1) {
        iVar17 = 0;
      }
      else {
        if (param_3 < 8) {
          iVar17 = 0;
          psVar9 = param_2;
          uVar11 = 0;
LAB_0013381c:
          lVar14 = uVar7 - uVar11;
          psVar10 = (short *)(param_1 + uVar11 * 2);
          do {
            lVar14 = lVar14 + -1;
            iVar17 = iVar17 + (int)*psVar9 * (int)*psVar10;
            psVar9 = psVar9 + 1;
            psVar10 = psVar10 + 1;
          } while (lVar14 != 0);
        }
        else {
          psVar9 = param_2 + (uVar7 - (param_3 & 7));
          psVar10 = param_2 + 4;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          uVar11 = uVar3;
          puVar13 = (undefined8 *)(param_1 + 8);
          do {
            uVar25 = puVar13[-1];
            uVar26 = *puVar13;
            uVar27 = *(undefined8 *)(psVar10 + -4);
            uVar28 = *(undefined8 *)psVar10;
            psVar10 = psVar10 + 8;
            uVar11 = uVar11 - 8;
            puVar13 = puVar13 + 2;
            iVar17 = iVar17 + (int)(short)uVar27 * (int)(short)uVar25;
            iVar18 = iVar18 + (int)(short)((ulong)uVar27 >> 0x10) *
                              (int)(short)((ulong)uVar25 >> 0x10);
            iVar19 = iVar19 + (int)(short)((ulong)uVar27 >> 0x20) *
                              (int)(short)((ulong)uVar25 >> 0x20);
            iVar20 = iVar20 + (int)(short)((ulong)uVar27 >> 0x30) *
                              (int)(short)((ulong)uVar25 >> 0x30);
            iVar21 = iVar21 + (int)(short)uVar28 * (int)(short)uVar26;
            iVar22 = iVar22 + (int)(short)((ulong)uVar28 >> 0x10) *
                              (int)(short)((ulong)uVar26 >> 0x10);
            iVar23 = iVar23 + (int)(short)((ulong)uVar28 >> 0x20) *
                              (int)(short)((ulong)uVar26 >> 0x20);
            iVar24 = iVar24 + (int)(short)((ulong)uVar28 >> 0x30) *
                              (int)(short)((ulong)uVar26 >> 0x30);
          } while (uVar11 != 0);
          iVar17 = iVar21 + iVar17 + iVar22 + iVar18 + iVar23 + iVar19 + iVar24 + iVar20;
          uVar11 = uVar3;
          if (uVar3 != uVar7) goto LAB_0013381c;
        }
        param_2 = param_2 + (ulong)(param_3 - 1) + 1;
      }
      iVar17 = (*(int *)(param_5 + uVar4 * 4) >> 1) - iVar17;
      if (((long)uVar4 < lVar6) || (iVar17 < *piVar1)) {
        piVar12 = piVar1;
        iVar18 = iVar2;
        if (1 < (int)param_6) {
          lVar14 = 0;
          do {
            lVar15 = (long)(int)((param_6 - 2) + (int)lVar14);
            if ((lVar6 + lVar14 + -1 <= (long)iVar5) && (*(int *)(param_8 + lVar15 * 4) <= iVar17))
            break;
            lVar15 = lVar15 * 4;
            lVar16 = lVar14 * 4;
            lVar14 = lVar14 + -1;
            *(undefined4 *)(param_8 + lVar8 + lVar16) = *(undefined4 *)(param_8 + lVar15);
            *(undefined4 *)(param_7 + lVar8 + lVar16) = *(undefined4 *)(param_7 + lVar15);
          } while (1 < lVar6 + lVar14);
          iVar18 = iVar2 + (int)lVar14;
          piVar12 = (int *)(param_8 + (long)iVar18 * 4);
        }
        iVar5 = iVar5 + 1;
        *piVar12 = iVar17;
        *(int *)(param_7 + (long)iVar18 * 4) = (int)uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}

