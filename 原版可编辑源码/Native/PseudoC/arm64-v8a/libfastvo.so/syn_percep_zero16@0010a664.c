
void syn_percep_zero16(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6
                      ,uint param_7)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulong uVar14;
  ulong uVar15;
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
  lVar5 = -(__n + 0xf & 0x7fffffff0);
  __s = (int *)((long)&local_70 + lVar5);
  uVar4 = param_7 - 1;
  uVar19 = (ulong)uVar4;
  if (0 < (int)param_7) {
    memset(__s,0,__n);
  }
  if (0 < (int)param_6) {
    uVar14 = 0;
    uVar15 = uVar19 & 0xfffffff8;
    do {
      iVar1 = (int)*(short *)(param_1 + uVar14 * 2) + (*__s + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar16 = iVar1 * -0x10000 >> 0x10;
      if (1 < (int)param_7) {
        uVar6 = uVar15;
        puVar8 = (undefined8 *)(param_2 + 8);
        puVar10 = (undefined8 *)(&stack0xffffffffffffffa4 + lVar5);
        if (uVar4 < 8) {
          uVar6 = 0;
        }
        else {
          do {
            uVar20 = puVar8[-1];
            uVar21 = *puVar8;
            uVar6 = uVar6 - 8;
            *(ulong *)((long)puVar10 + -0xc) =
                 CONCAT44((int)((ulong)puVar10[-1] >> 0x20) +
                          iVar16 * (short)((ulong)uVar20 >> 0x30),
                          (int)puVar10[-1] + iVar16 * (short)((ulong)uVar20 >> 0x20));
            *(ulong *)((long)puVar10 + -0x14) =
                 CONCAT44((int)((ulong)puVar10[-2] >> 0x20) +
                          iVar16 * (short)((ulong)uVar20 >> 0x10),
                          (int)puVar10[-2] + iVar16 * (short)uVar20);
            *(ulong *)((long)puVar10 + 4) =
                 CONCAT44((int)((ulong)puVar10[1] >> 0x20) + iVar16 * (short)((ulong)uVar21 >> 0x30)
                          ,(int)puVar10[1] + iVar16 * (short)((ulong)uVar21 >> 0x20));
            *(ulong *)((long)puVar10 + -4) =
                 CONCAT44((int)((ulong)*puVar10 >> 0x20) + iVar16 * (short)((ulong)uVar21 >> 0x10),
                          (int)*puVar10 + iVar16 * (short)uVar21);
            puVar8 = puVar8 + 2;
            puVar10 = puVar10 + 4;
          } while (uVar6 != 0);
          uVar6 = uVar15;
          if (uVar15 == uVar19) goto LAB_0010a7c4;
        }
        piVar7 = (int *)((long)&local_70 + uVar6 * 4 + lVar5 + 4);
        lVar11 = uVar19 - uVar6;
        psVar9 = (short *)(param_2 + uVar6 * 2);
        do {
          lVar11 = lVar11 + -1;
          piVar7[-1] = *piVar7 + iVar16 * *psVar9;
          piVar7 = piVar7 + 1;
          psVar9 = psVar9 + 1;
        } while (lVar11 != 0);
      }
LAB_0010a7c4:
      __s[(int)uVar4] = iVar16 * *(short *)(param_2 + (long)(int)uVar4 * 2);
      *(short *)(param_5 + uVar14 * 2) = (short)iVar1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_6);
  }
  uVar4 = param_7 - 1;
  uVar19 = (ulong)uVar4;
  if (0 < (int)param_7) {
    memset(__s,0,__n);
  }
  if (0 < (int)param_6) {
    uVar14 = 0;
    uVar15 = uVar19 & 0xfffffff8;
    do {
      sVar3 = *(short *)(param_5 + uVar14 * 2);
      iVar16 = (int)sVar3;
      iVar1 = iVar16 + (*__s + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar2 = iVar1 * -0x10000 >> 0x10;
      iVar17 = (int)sVar3;
      if (1 < (int)param_7) {
        iVar18 = (int)sVar3;
        puVar8 = (undefined8 *)(param_3 + 8);
        puVar10 = (undefined8 *)(param_4 + 8);
        puVar12 = (undefined8 *)(&stack0xffffffffffffffa4 + lVar5);
        uVar6 = uVar15;
        if (uVar4 < 8) {
          uVar6 = 0;
        }
        else {
          do {
            uVar20 = puVar8[-1];
            uVar22 = *puVar8;
            uVar6 = uVar6 - 8;
            uVar21 = puVar10[-1];
            uVar23 = *puVar10;
            *(ulong *)((long)puVar12 + -0xc) =
                 CONCAT44((int)((ulong)puVar12[-1] >> 0x20) +
                          iVar18 * (short)((ulong)uVar20 >> 0x30) +
                          iVar2 * (short)((ulong)uVar21 >> 0x30),
                          (int)puVar12[-1] + iVar17 * (short)((ulong)uVar20 >> 0x20) +
                          iVar2 * (short)((ulong)uVar21 >> 0x20));
            *(ulong *)((long)puVar12 + -0x14) =
                 CONCAT44((int)((ulong)puVar12[-2] >> 0x20) +
                          iVar17 * (short)((ulong)uVar20 >> 0x10) +
                          iVar2 * (short)((ulong)uVar21 >> 0x10),
                          (int)puVar12[-2] + iVar16 * (short)uVar20 + iVar2 * (short)uVar21);
            *(ulong *)((long)puVar12 + 4) =
                 CONCAT44((int)((ulong)puVar12[1] >> 0x20) + iVar18 * (short)((ulong)uVar22 >> 0x30)
                          + iVar2 * (short)((ulong)uVar23 >> 0x30),
                          (int)puVar12[1] + iVar17 * (short)((ulong)uVar22 >> 0x20) +
                          iVar2 * (short)((ulong)uVar23 >> 0x20));
            *(ulong *)((long)puVar12 + -4) =
                 CONCAT44((int)((ulong)*puVar12 >> 0x20) + iVar17 * (short)((ulong)uVar22 >> 0x10) +
                          iVar2 * (short)((ulong)uVar23 >> 0x10),
                          (int)*puVar12 + iVar16 * (short)uVar22 + iVar2 * (short)uVar23);
            puVar8 = puVar8 + 2;
            puVar10 = puVar10 + 2;
            puVar12 = puVar12 + 4;
          } while (uVar6 != 0);
          uVar6 = uVar15;
          if (uVar15 == uVar19) goto LAB_0010a90c;
        }
        piVar7 = (int *)((long)&local_70 + uVar6 * 4 + lVar5 + 4);
        lVar11 = uVar19 - uVar6;
        psVar9 = (short *)(param_4 + uVar6 * 2);
        psVar13 = (short *)(param_3 + uVar6 * 2);
        do {
          lVar11 = lVar11 + -1;
          piVar7[-1] = *piVar7 + *psVar13 * iVar18 + iVar2 * *psVar9;
          piVar7 = piVar7 + 1;
          psVar9 = psVar9 + 1;
          psVar13 = psVar13 + 1;
        } while (lVar11 != 0);
      }
LAB_0010a90c:
      lVar11 = (long)(int)uVar4 * 2;
      __s[(int)uVar4] = *(short *)(param_3 + lVar11) * iVar17 + iVar2 * *(short *)(param_4 + lVar11)
      ;
      *(short *)(param_5 + uVar14 * 2) = (short)iVar1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_6);
  }
  if (*(long *)(local_70 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

