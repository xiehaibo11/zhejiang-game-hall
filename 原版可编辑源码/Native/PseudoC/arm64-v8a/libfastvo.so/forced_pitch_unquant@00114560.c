
void forced_pitch_unquant
               (ulong param_1,long param_2,int param_3,undefined8 param_4,short param_5,
               undefined8 param_6,uint param_7,int *param_8,undefined2 *param_9)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (0x3e < param_5) {
    param_5 = 0x3f;
  }
  if (0 < (int)param_7) {
    iVar3 = (int)(short)(param_5 << 7);
    uVar4 = (ulong)param_7;
    if ((param_7 < 8) ||
       ((param_1 < param_1 + (uVar4 - (long)param_3) * 2 &&
        (param_1 + (long)param_3 * -2 < param_1 + uVar4 * 2)))) {
      uVar7 = 0;
      iVar6 = 0;
    }
    else {
      uVar7 = uVar4 & 0xfffffff8;
      puVar10 = (undefined8 *)(param_2 + 0x10);
      puVar12 = (undefined8 *)(param_1 + 8);
      iVar6 = -param_3;
      uVar13 = uVar7;
      do {
        puVar1 = (undefined8 *)(param_1 + (long)iVar6 * 2);
        uVar14 = *puVar1;
        uVar18 = puVar1[1];
        uVar13 = uVar13 - 8;
        iVar15 = (int)(short)((ulong)uVar14 >> 0x10);
        iVar16 = (int)(short)((ulong)uVar14 >> 0x20);
        iVar17 = (int)(short)((ulong)uVar14 >> 0x30);
        iVar19 = (int)(short)((ulong)uVar18 >> 0x10);
        iVar20 = (int)(short)((ulong)uVar18 >> 0x20);
        iVar21 = (int)(short)((ulong)uVar18 >> 0x30);
        puVar10[-1] = CONCAT44(iVar3 * iVar17,iVar3 * iVar16);
        puVar10[-2] = CONCAT44(iVar3 * iVar15,iVar3 * (short)uVar14);
        puVar10[1] = CONCAT44(iVar3 * iVar21,iVar3 * iVar20);
        *puVar10 = CONCAT44(iVar3 * iVar19,iVar3 * (short)uVar18);
        puVar10 = puVar10 + 4;
        puVar12[-1] = CONCAT26((short)(iVar3 * iVar17 + 0x1000U >> 0xd),
                               CONCAT24((short)(iVar3 * iVar16 + 0x1000U >> 0xd),
                                        CONCAT22((short)(iVar3 * iVar15 + 0x1000U >> 0xd),
                                                 (short)(iVar3 * (short)uVar14 + 0x1000U >> 0xd))));
        *puVar12 = CONCAT26((short)(iVar3 * iVar21 + 0x1000U >> 0xd),
                            CONCAT24((short)(iVar3 * iVar20 + 0x1000U >> 0xd),
                                     CONCAT22((short)(iVar3 * iVar19 + 0x1000U >> 0xd),
                                              (short)(iVar3 * (short)uVar18 + 0x1000U >> 0xd))));
        puVar12 = puVar12 + 2;
        iVar6 = iVar6 + 8;
      } while (uVar13 != 0);
      iVar6 = (int)uVar7;
      if (uVar7 == uVar4) goto LAB_001145f0;
    }
    lVar5 = uVar4 - uVar7;
    psVar8 = (short *)(param_1 + ((long)iVar6 - (long)param_3) * 2);
    puVar9 = (undefined2 *)(param_1 + uVar7 * 2);
    piVar11 = (int *)(param_2 + uVar7 * 4);
    do {
      sVar2 = *psVar8;
      lVar5 = lVar5 + -1;
      *piVar11 = sVar2 * iVar3;
      *puVar9 = (short)(sVar2 * iVar3 + 0x1000U >> 0xd);
      psVar8 = psVar8 + 1;
      puVar9 = puVar9 + 1;
      piVar11 = piVar11 + 1;
    } while (lVar5 != 0);
  }
LAB_001145f0:
  *param_8 = param_3;
  param_9[2] = 0;
  *param_9 = 0;
  param_9[1] = param_5;
  return;
}

