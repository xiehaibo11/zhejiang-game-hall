
uint normalize16(long param_1,long param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 (*pauVar14) [16];
  undefined2 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar22;
  undefined1 auVar21 [16];
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  
  if ((int)param_4 < 1) {
    iVar9 = 1;
    if (0 < param_3) goto LAB_0010a250;
  }
  else {
    uVar7 = (ulong)param_4;
    if (param_4 < 4) {
      uVar11 = 0;
      iVar9 = 1;
LAB_0010a204:
      lVar8 = uVar7 - uVar11;
      piVar13 = (int *)(param_1 + uVar11 * 4);
      do {
        iVar4 = *piVar13;
        iVar3 = -iVar4;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        if (iVar9 <= iVar3) {
          iVar9 = iVar3;
        }
        lVar8 = lVar8 + -1;
        piVar13 = piVar13 + 1;
      } while (lVar8 != 0);
    }
    else {
      uVar11 = uVar7 & 0xfffffffc;
      puVar10 = (undefined8 *)(param_1 + 8);
      uVar16 = 1;
      uVar17 = 1;
      uVar18 = 0x100000001;
      uVar12 = uVar11;
      do {
        puVar1 = puVar10 + -1;
        uVar24 = *puVar10;
        uVar12 = uVar12 - 4;
        puVar10 = puVar10 + 2;
        uVar20 = MP_INT_ABS((int)*puVar1);
        uVar22 = MP_INT_ABS((int)((ulong)*puVar1 >> 0x20));
        uVar23 = MP_INT_ABS((int)uVar24);
        uVar25 = MP_INT_ABS((int)((ulong)uVar24 >> 0x20));
        uVar24 = NEON_smax(CONCAT44(uVar22,uVar20),CONCAT44(uVar17,uVar16),4);
        uVar16 = (undefined4)uVar24;
        uVar17 = (undefined4)((ulong)uVar24 >> 0x20);
        uVar18 = NEON_smax(CONCAT44(uVar25,uVar23),uVar18,4);
      } while (uVar12 != 0);
      uVar18 = NEON_smax(uVar24,uVar18,4);
      uVar16 = (undefined4)((ulong)uVar18 >> 0x20);
      uVar18 = NEON_smax(uVar18,CONCAT44(uVar16,uVar16),4);
      iVar9 = (int)uVar18;
      if (uVar11 != uVar7) goto LAB_0010a204;
    }
    if (iVar9 <= param_3) {
LAB_0010a250:
      uVar6 = 0;
      goto joined_r0x0010a248;
    }
  }
  uVar6 = 0;
  do {
    iVar9 = iVar9 >> 1;
    uVar6 = uVar6 + 1;
  } while (param_3 < iVar9);
joined_r0x0010a248:
  if (0 < (int)param_4) {
    uVar7 = (ulong)param_4;
    if (param_4 < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar7 & 0xfffffff8;
      pauVar14 = (undefined1 (*) [16])(param_1 + 0x10);
      puVar10 = (undefined8 *)(param_2 + 8);
      uVar12 = uVar11;
      do {
        pauVar2 = pauVar14 + -1;
        auVar5 = *pauVar14;
        pauVar14 = pauVar14 + 2;
        uVar12 = uVar12 - 8;
        auVar19._4_4_ = -uVar6;
        auVar19._0_4_ = -uVar6;
        auVar19._8_4_ = -uVar6;
        auVar19._12_4_ = -uVar6;
        auVar19 = NEON_sshl(*pauVar2,auVar19,4);
        auVar21._4_4_ = -uVar6;
        auVar21._0_4_ = -uVar6;
        auVar21._8_4_ = -uVar6;
        auVar21._12_4_ = -uVar6;
        auVar21 = NEON_sshl(auVar5,auVar21,4);
        puVar10[-1] = CONCAT26(auVar19._12_2_,
                               CONCAT24(auVar19._8_2_,CONCAT22(auVar19._4_2_,auVar19._0_2_)));
        *puVar10 = CONCAT26(auVar21._12_2_,
                            CONCAT24(auVar21._8_2_,CONCAT22(auVar21._4_2_,auVar21._0_2_)));
        puVar10 = puVar10 + 2;
      } while (uVar12 != 0);
      if (uVar11 == uVar7) {
        return uVar6;
      }
    }
    lVar8 = uVar7 - uVar11;
    puVar15 = (undefined2 *)(param_2 + uVar11 * 2);
    piVar13 = (int *)(param_1 + uVar11 * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar15 = (short)(*piVar13 >> (uVar6 & 0x1f));
      puVar15 = puVar15 + 1;
      piVar13 = piVar13 + 1;
    } while (lVar8 != 0);
  }
  return uVar6;
}

