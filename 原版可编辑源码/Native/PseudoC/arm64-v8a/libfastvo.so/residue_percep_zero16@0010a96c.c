
void residue_percep_zero16
               (long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
               uint param_7)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *__s;
  size_t __n;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_70;
  long local_68;
  
  local_70 = tpidr_el0;
  local_68 = *(long *)(local_70 + 0x28);
  __n = (ulong)param_7 * 4;
  lVar4 = -(__n + 0xf & 0x7fffffff0);
  __s = (int *)((long)&local_70 + lVar4);
  uVar3 = param_7 - 1;
  uVar19 = (ulong)uVar3;
  if (0 < (int)param_7) {
    memset(__s,0,__n);
  }
  if (0 < (int)param_6) {
    uVar13 = 0;
    uVar14 = uVar19 & 0xfffffff8;
    do {
      sVar2 = *(short *)(param_1 + uVar13 * 2);
      iVar15 = (int)sVar2;
      iVar1 = iVar15 + (*__s + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar16 = iVar1 * -0x10000 >> 0x10;
      iVar17 = (int)sVar2;
      if (1 < (int)param_7) {
        iVar18 = (int)sVar2;
        puVar7 = (undefined8 *)(param_2 + 8);
        puVar9 = (undefined8 *)(param_3 + 8);
        puVar10 = (undefined8 *)(&stack0xffffffffffffffa4 + lVar4);
        uVar5 = uVar14;
        if (uVar3 < 8) {
          uVar5 = 0;
        }
        else {
          do {
            uVar20 = puVar7[-1];
            uVar22 = *puVar7;
            uVar5 = uVar5 - 8;
            uVar21 = puVar9[-1];
            uVar23 = *puVar9;
            *(ulong *)((long)puVar10 + -0xc) =
                 CONCAT44((int)((ulong)puVar10[-1] >> 0x20) +
                          iVar18 * (short)((ulong)uVar20 >> 0x30) +
                          iVar16 * (short)((ulong)uVar21 >> 0x30),
                          (int)puVar10[-1] + iVar17 * (short)((ulong)uVar20 >> 0x20) +
                          iVar16 * (short)((ulong)uVar21 >> 0x20));
            *(ulong *)((long)puVar10 + -0x14) =
                 CONCAT44((int)((ulong)puVar10[-2] >> 0x20) +
                          iVar17 * (short)((ulong)uVar20 >> 0x10) +
                          iVar16 * (short)((ulong)uVar21 >> 0x10),
                          (int)puVar10[-2] + iVar15 * (short)uVar20 + iVar16 * (short)uVar21);
            *(ulong *)((long)puVar10 + 4) =
                 CONCAT44((int)((ulong)puVar10[1] >> 0x20) + iVar18 * (short)((ulong)uVar22 >> 0x30)
                          + iVar16 * (short)((ulong)uVar23 >> 0x30),
                          (int)puVar10[1] + iVar17 * (short)((ulong)uVar22 >> 0x20) +
                          iVar16 * (short)((ulong)uVar23 >> 0x20));
            *(ulong *)((long)puVar10 + -4) =
                 CONCAT44((int)((ulong)*puVar10 >> 0x20) + iVar17 * (short)((ulong)uVar22 >> 0x10) +
                          iVar16 * (short)((ulong)uVar23 >> 0x10),
                          (int)*puVar10 + iVar15 * (short)uVar22 + iVar16 * (short)uVar23);
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 4;
          } while (uVar5 != 0);
          uVar5 = uVar14;
          if (uVar14 == uVar19) goto LAB_0010ab00;
        }
        piVar6 = (int *)((long)&local_70 + uVar5 * 4 + lVar4 + 4);
        lVar12 = uVar19 - uVar5;
        psVar8 = (short *)(param_3 + uVar5 * 2);
        psVar11 = (short *)(param_2 + uVar5 * 2);
        do {
          lVar12 = lVar12 + -1;
          piVar6[-1] = *piVar6 + *psVar11 * iVar18 + iVar16 * *psVar8;
          piVar6 = piVar6 + 1;
          psVar8 = psVar8 + 1;
          psVar11 = psVar11 + 1;
        } while (lVar12 != 0);
      }
LAB_0010ab00:
      lVar12 = (long)(int)uVar3 * 2;
      __s[(int)uVar3] =
           *(short *)(param_2 + lVar12) * iVar17 + iVar16 * *(short *)(param_3 + lVar12);
      *(short *)(param_5 + uVar13 * 2) = (short)iVar1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_6);
  }
  uVar3 = param_7 - 1;
  uVar19 = (ulong)uVar3;
  if (0 < (int)param_7) {
    memset(__s,0,__n);
  }
  if (0 < (int)param_6) {
    uVar13 = 0;
    uVar14 = uVar19 & 0xfffffff8;
    do {
      sVar2 = *(short *)(param_5 + uVar13 * 2);
      iVar15 = (int)sVar2;
      iVar1 = iVar15 + (*__s + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar16 = (int)sVar2;
      if (1 < (int)param_7) {
        iVar17 = (int)sVar2;
        uVar5 = uVar14;
        puVar7 = (undefined8 *)(param_4 + 8);
        puVar9 = (undefined8 *)(&stack0xffffffffffffffa4 + lVar4);
        if (uVar3 < 8) {
          uVar5 = 0;
        }
        else {
          do {
            uVar20 = puVar7[-1];
            uVar21 = *puVar7;
            uVar5 = uVar5 - 8;
            *(ulong *)((long)puVar9 + -0xc) =
                 CONCAT44((int)((ulong)puVar9[-1] >> 0x20) + iVar17 * (short)((ulong)uVar20 >> 0x30)
                          ,(int)puVar9[-1] + iVar16 * (short)((ulong)uVar20 >> 0x20));
            *(ulong *)((long)puVar9 + -0x14) =
                 CONCAT44((int)((ulong)puVar9[-2] >> 0x20) + iVar16 * (short)((ulong)uVar20 >> 0x10)
                          ,(int)puVar9[-2] + iVar15 * (short)uVar20);
            *(ulong *)((long)puVar9 + 4) =
                 CONCAT44((int)((ulong)puVar9[1] >> 0x20) + iVar17 * (short)((ulong)uVar21 >> 0x30),
                          (int)puVar9[1] + iVar16 * (short)((ulong)uVar21 >> 0x20));
            *(ulong *)((long)puVar9 + -4) =
                 CONCAT44((int)((ulong)*puVar9 >> 0x20) + iVar16 * (short)((ulong)uVar21 >> 0x10),
                          (int)*puVar9 + iVar15 * (short)uVar21);
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + 4;
          } while (uVar5 != 0);
          uVar5 = uVar14;
          if (uVar14 == uVar19) goto LAB_0010ac18;
        }
        piVar6 = (int *)((long)&local_70 + uVar5 * 4 + lVar4 + 4);
        lVar12 = uVar19 - uVar5;
        psVar8 = (short *)(param_4 + uVar5 * 2);
        do {
          lVar12 = lVar12 + -1;
          piVar6[-1] = *piVar6 + *psVar8 * iVar17;
          piVar6 = piVar6 + 1;
          psVar8 = psVar8 + 1;
        } while (lVar12 != 0);
      }
LAB_0010ac18:
      __s[(int)uVar3] = *(short *)(param_4 + (long)(int)uVar3 * 2) * iVar16;
      *(short *)(param_5 + uVar13 * 2) = (short)iVar1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_6);
  }
  if (*(long *)(local_70 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

