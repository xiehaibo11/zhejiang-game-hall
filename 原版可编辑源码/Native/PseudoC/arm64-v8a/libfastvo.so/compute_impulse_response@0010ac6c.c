
void compute_impulse_response
               (undefined8 *param_1,undefined2 *param_2,undefined8 *param_3,undefined2 *param_4,
               uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  short *psVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined2 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined2 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  short sVar20;
  int *piVar21;
  short *psVar22;
  undefined8 *puVar23;
  int *__s;
  int *__s_00;
  size_t __n;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iStack_70;
  undefined1 auStack_6c [12];
  
  lVar5 = tpidr_el0;
  auStack_6c._4_8_ = *(long *)(lVar5 + 0x28);
  uVar12 = (ulong)param_6;
  __n = uVar12 * 4;
  uVar16 = __n + 0xf & 0x7fffffff0;
  lVar6 = -uVar16;
  __s = (int *)((long)&iStack_70 + lVar6);
  __s_00 = (int *)((long)__s - uVar16);
  *param_4 = 0x2000;
  if ((int)param_6 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_6;
    if ((param_6 < 0x10) || ((param_4 + 1 < param_2 + uVar12 && (param_2 < param_4 + uVar12 + 1))))
    {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar12 & 0xfffffff0;
      puVar9 = (undefined8 *)(param_4 + 9);
      puVar19 = (undefined8 *)(param_2 + 8);
      uVar18 = uVar16;
      do {
        puVar23 = puVar19 + -1;
        uVar26 = puVar19[-2];
        uVar25 = puVar19[1];
        uVar24 = *puVar19;
        uVar18 = uVar18 - 0x10;
        puVar19 = puVar19 + 4;
        puVar9[-1] = *puVar23;
        puVar9[-2] = uVar26;
        puVar9[1] = uVar25;
        *puVar9 = uVar24;
        puVar9 = puVar9 + 4;
      } while (uVar18 != 0);
      if (uVar16 == uVar12) goto LAB_0010ad44;
    }
    lVar13 = uVar12 - uVar16;
    puVar17 = param_4 + uVar16;
    puVar14 = param_2 + uVar16;
    do {
      puVar17 = puVar17 + 1;
      lVar13 = lVar13 + -1;
      *puVar17 = *puVar14;
      puVar14 = puVar14 + 1;
    } while (lVar13 != 0);
  }
LAB_0010ad44:
  if ((int)(uVar15 + 1) < (int)param_5) {
    memset(param_4 + (ulong)uVar15 + 1,0,(ulong)((param_5 - 2) - uVar15) * 2 + 2);
  }
  uVar15 = param_6 - 1;
  uVar12 = (ulong)uVar15;
  if (0 < (int)param_6) {
    memset(__s_00,0,__n);
    memset(__s,0,__n);
  }
  if ((int)param_5 < 1) {
LAB_0010aee8:
    if (*(long *)(lVar5 + 0x28) != auStack_6c._4_8_) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar16 = 0;
  lVar13 = (long)(int)uVar15;
  uVar18 = uVar12 & 0xfffffffc;
  sVar20 = 0x2000;
  do {
    sVar20 = sVar20 + (short)(*__s + 0x1000U >> 0xd);
    iVar4 = (int)-sVar20;
    uVar3 = *__s_00 + sVar20 * 0x4000 + 0x1000U >> 0xd;
    param_4[uVar16] = (short)uVar3;
    iVar1 = (int)(uVar3 * -0x10000) >> 0x10;
    if (1 < (int)param_6) {
      piVar7 = __s_00 + 1;
      puVar9 = (undefined8 *)(auStack_6c + lVar6);
      uVar10 = uVar18;
      puVar19 = param_1;
      puVar23 = param_3;
      if (uVar15 < 4) {
        uVar10 = 0;
      }
      else {
        do {
          uVar26 = *puVar23;
          uVar25 = *(undefined8 *)(piVar7 + 2);
          uVar24 = *(undefined8 *)piVar7;
          uVar10 = uVar10 - 4;
          *(ulong *)((long)puVar9 + 4) =
               CONCAT44((int)((ulong)puVar9[1] >> 0x20) + iVar4 * (short)((ulong)uVar26 >> 0x30),
                        (int)puVar9[1] + iVar4 * (short)((ulong)uVar26 >> 0x20));
          *(ulong *)((long)puVar9 + -4) =
               CONCAT44((int)((ulong)*puVar9 >> 0x20) + iVar4 * (short)((ulong)uVar26 >> 0x10),
                        (int)*puVar9 + iVar4 * (short)uVar26);
          uVar26 = *puVar19;
          *(ulong *)(piVar7 + 1) =
               CONCAT44((int)((ulong)uVar25 >> 0x20) + iVar1 * (short)((ulong)uVar26 >> 0x30),
                        (int)uVar25 + iVar1 * (short)((ulong)uVar26 >> 0x20));
          *(ulong *)(piVar7 + -1) =
               CONCAT44((int)((ulong)uVar24 >> 0x20) + iVar1 * (short)((ulong)uVar26 >> 0x10),
                        (int)uVar24 + iVar1 * (short)uVar26);
          piVar7 = piVar7 + 4;
          puVar9 = puVar9 + 2;
          puVar19 = puVar19 + 1;
          puVar23 = puVar23 + 1;
        } while (uVar10 != 0);
        uVar10 = uVar18;
        if (uVar18 == uVar12) goto LAB_0010aebc;
      }
      piVar21 = __s_00 + 1 + uVar10;
      piVar7 = (int *)((long)(auStack_6c + lVar6) + uVar10 * 4);
      lVar11 = uVar12 - uVar10;
      psVar8 = (short *)((long)param_3 + uVar10 * 2);
      psVar22 = (short *)((long)param_1 + uVar10 * 2);
      do {
        iVar2 = *piVar21;
        lVar11 = lVar11 + -1;
        piVar7[-1] = *piVar7 + *psVar8 * iVar4;
        piVar7 = piVar7 + 1;
        piVar21[-1] = iVar2 + iVar1 * *psVar22;
        piVar21 = piVar21 + 1;
        psVar8 = psVar8 + 1;
        psVar22 = psVar22 + 1;
      } while (lVar11 != 0);
    }
LAB_0010aebc:
    uVar16 = uVar16 + 1;
    __s[lVar13] = iVar4 * *(short *)((long)param_3 + lVar13 * 2);
    __s_00[lVar13] = iVar1 * *(short *)((long)param_1 + lVar13 * 2);
    if (uVar16 == param_5) goto LAB_0010aee8;
    sVar20 = param_4[uVar16];
  } while( true );
}

