
/* WARNING: Type propagation algorithm not settling */

void vorbis_lsp_to_curve(void *param_1,ulong param_2,undefined8 param_3,long param_4,uint param_5,
                        int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  byte *pbVar29;
  long lVar30;
  int iVar31;
  int aiStack_b0 [2];
  long local_a8;
  long local_a0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  local_7c = param_6;
  lVar18 = tpidr_el0;
  local_68 = *(long *)(lVar18 + 0x28);
  lVar30 = -((-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2) + 0xf &
            0xfffffffffffffff0);
  piVar19 = (int *)((long)aiStack_b0 + lVar30);
  uVar20 = (ulong)(int)param_3;
  local_78 = 0;
  if (uVar20 != 0) {
    local_78 = 0x80000000 / uVar20;
  }
  local_70 = param_3;
  uVar21 = 0;
  do {
    if (((int)(uint)(ushort)(&DAT_01994fa2)[uVar21] <= param_8) &&
       (param_8 < (int)(uint)(ushort)(&DAT_01994fa4)[uVar21])) goto LAB_00e93118;
    uVar21 = uVar21 + 1;
  } while (uVar21 < 0x36);
  if ((int)uVar21 == 0x36) {
    lVar22 = 0x1b0000;
  }
  else {
LAB_00e93118:
    uVar28 = (ulong)(ushort)(&DAT_01994fa2)[(int)uVar21 + 1] -
             (ulong)(ushort)(&DAT_01994fa2)[uVar21 & 0xffffffff];
    uVar26 = 0;
    if (uVar28 != 0) {
      uVar26 = 0x80000000 / uVar28;
    }
    lVar22 = (long)(((int)(uVar26 * ((long)param_8 -
                                    (ulong)(ushort)(&DAT_01994fa2)[uVar21 & 0xffffffff]) >> 0x11) +
                    (int)uVar21 * 0x4000) * 2);
  }
  if (0 < (int)param_5) {
    lVar15 = 0;
    do {
      lVar13 = (long)*(int *)(param_4 + lVar15 * 4) * 0x517cc2;
      uVar17 = (uint)((ulong)lVar13 >> 0x20);
      if (0xffff < uVar17) {
        memset(param_1,0,-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
        lVar18 = *(long *)(lVar18 + 0x28);
        goto LAB_00e93674;
      }
      lVar13 = (lVar13 >> 0x20 & 0x1fffffffe00U) * 0x800000;
      piVar19[lVar15] =
           *(int *)(&DAT_01995098 + (lVar13 >> 0x1e)) -
           ((int)((*(int *)(&DAT_01995098 + (lVar13 >> 0x1e)) -
                  *(int *)(&DAT_01995098 + (lVar13 + 0x100000000 >> 0x1e))) * (uVar17 & 0x1ff)) >> 9
           );
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_5);
  }
  iVar9 = (int)param_2;
  local_a8 = lVar18;
  if (0 < iVar9) {
    local_80 = *piVar19;
    local_84 = *(int *)((long)aiStack_b0 + lVar30 + 4);
    uVar21 = local_78 >> 1 & 0x7fffffff;
    iVar16 = (int)local_70;
    uVar26 = lVar22 * uVar21;
    local_90 = param_5 * -7;
    local_88 = iVar16 + -1;
    uVar17 = (uint)(uVar26 >> 0x2d) & 0x3ffff;
    local_94 = ((int)(param_5 + 1) >> 1) * -0xe;
    local_8c = param_7 * -0x1000;
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = param_8 / iVar9;
    }
    iVar31 = (uint)(ushort)(&DAT_01994fa2)[uVar17] +
             (((uint)(ushort)(&DAT_01994fa2)[uVar17 + 1] - (uint)(ushort)(&DAT_01994fa2)[uVar17]) *
              ((uint)(uVar26 >> 0x1f) & 0x3ffe) >> 0xe);
    uVar26 = 0;
    iVar27 = 0;
    iVar23 = 0;
    iVar11 = 0;
    local_a0 = (ulong)(param_5 - 4 & 0xfffffffe) + 5;
    do {
      uVar10 = iVar27 * (int)local_78;
      uVar17 = uVar10 >> 0x18;
      iVar25 = (int)(*(int *)(&DAT_01995098 + (ulong)uVar17 * 4) * 0x200 -
                    (*(int *)(&DAT_01995098 + (ulong)uVar17 * 4) -
                    *(int *)(&DAT_01995098 + (((ulong)uVar17 << 0x20) + 0x100000000 >> 0x1e))) *
                    (uVar10 >> 0xf & 0x1ff)) >> 9;
      iVar4 = local_80 - iVar25;
      iVar12 = -iVar4;
      if (-1 < iVar4) {
        iVar12 = iVar4;
      }
      iVar4 = local_84 - iVar25;
      uVar17 = iVar12 * 0xb505;
      iVar12 = -iVar4;
      if (-1 < iVar4) {
        iVar12 = iVar4;
      }
      uVar10 = iVar12 * 0xb505;
      uVar28 = (ulong)(uVar17 | uVar10);
      uVar2 = (uVar17 | uVar10) >> 0x19;
      uVar24 = (uint)(byte)(&DAT_0199500e)[uVar2];
      bVar8 = uVar2 != 0;
      if ((int)param_5 < 4) {
        iVar12 = 0;
        lVar30 = 3;
        if (!bVar8) goto LAB_00e933c8;
joined_r0x00e933d8:
        if ((param_5 & 1) != 0) goto LAB_00e933dc;
LAB_00e9337c:
        uVar10 = uVar10 >> (ulong)(uVar24 & 0x1f);
        uVar17 = uVar17 >> (ulong)(uVar24 & 0x1f);
        iVar12 = uVar24 + iVar12 + param_5 * -7;
        uVar17 = (uVar10 * uVar10 >> 0x10) * (0x4000 - iVar25) +
                 (uVar17 * uVar17 >> 0x10) * (iVar25 + 0x4000) >> 0xe;
      }
      else {
        lVar30 = 0;
        iVar12 = 0;
        do {
          if (!bVar8) {
            if ((int)(uVar28 >> 0x13) == 0) {
              uVar24 = (uint)(byte)(&DAT_0199508e)[uVar28 >> 0x10];
            }
            else {
              uVar24 = (uint)(byte)(&DAT_0199504e)[uVar28 >> 0x13];
            }
          }
          iVar12 = uVar24 + iVar12;
          lVar13 = lVar30 + 2;
          lVar7 = lVar30 + 3;
          lVar15 = lVar30 + 5;
          lVar30 = lVar30 + 2;
          iVar5 = piVar19[lVar13] - iVar25;
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          iVar6 = piVar19[lVar7] - iVar25;
          iVar5 = -iVar6;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          uVar17 = iVar4 * (uVar17 >> (ulong)(uVar24 & 0x1f));
          uVar10 = iVar5 * (uVar10 >> (ulong)(uVar24 & 0x1f));
          uVar28 = (ulong)(uVar17 | uVar10);
          uVar2 = (uVar17 | uVar10) >> 0x19;
          uVar24 = (uint)(byte)(&DAT_0199500e)[uVar2];
          bVar8 = uVar2 != 0;
        } while (lVar15 < (int)param_5);
        lVar30 = local_a0;
        if (bVar8) goto joined_r0x00e933d8;
LAB_00e933c8:
        if ((int)(uVar28 >> 0x13) != 0) {
          uVar24 = (uint)(byte)(&DAT_0199504e)[uVar28 >> 0x13];
          goto joined_r0x00e933d8;
        }
        uVar24 = (uint)(byte)(&DAT_0199508e)[uVar28 >> 0x10];
        if ((param_5 & 1) == 0) goto LAB_00e9337c;
LAB_00e933dc:
        iVar5 = *(int *)((long)piVar19 + ((lVar30 << 0x20) + -0x100000000 >> 0x1e)) - iVar25;
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        uVar2 = iVar4 * (uVar17 >> (ulong)(uVar24 & 0x1f));
        uVar17 = (uVar10 >> (ulong)(uVar24 & 0x1f)) << 0xe;
        uVar10 = uVar2 | uVar17;
        if (uVar10 >> 0x19 == 0) {
          if (uVar10 >> 0x13 == 0) {
            pbVar29 = &DAT_0199508e + (uVar10 >> 0x10);
          }
          else {
            pbVar29 = &DAT_0199504e + (uVar10 >> 0x13);
          }
        }
        else {
          pbVar29 = &DAT_0199500e + (uVar10 >> 0x19);
        }
        bVar1 = *pbVar29;
        uVar2 = uVar2 >> (ulong)(bVar1 & 0x1f);
        uVar17 = uVar17 >> (ulong)(bVar1 & 0x1f);
        iVar12 = uVar24 + iVar12 + local_94 + (uint)bVar1;
        uVar17 = ((uVar17 * uVar17 >> 0x10) * (0x4000 - ((uint)(iVar25 * iVar25) >> 0xe)) >> 0xe) +
                 (uVar2 * uVar2 >> 0x10);
      }
      uVar10 = param_5 + iVar12 * 2;
      if (uVar17 >> 0x10 == 0) {
        for (; (uVar17 != 0 && ((uVar17 >> 0xf & 1) == 0)); uVar17 = uVar17 << 1) {
          uVar10 = uVar10 - 1;
        }
      }
      else {
        uVar17 = uVar17 >> 1;
        uVar10 = uVar10 + 1;
      }
      lVar30 = ((ulong)(uVar17 >> 9) & 0x3f) * 8;
      iVar25 = param_7 * -0x1000 +
               (int)((*(long *)(&DAT_019952a0 + lVar30) -
                     ((long)(*(long *)(&DAT_019954a8 + lVar30) * ((ulong)uVar17 & 0x3ff)) >> 10)) *
                     *(long *)(&DAT_019956a8 + ((long)(int)uVar10 & 1U) * 8) >>
                    (((long)((ulong)uVar10 << 0x20) >> 0x21) + 0x15U & 0x3f)) * local_7c;
      if (iVar25 < 1) {
        if (iVar25 < -0x8c000) {
          iVar25 = 0;
        }
        else {
          iVar25 = *(int *)(FLOOR_fromdB_LOOKUP + ((long)iVar25 * 0x1d3 + 0xff64000 >> 0x14) * 4);
        }
      }
      else {
        iVar25 = 0x7fffffff;
      }
      uVar28 = -(uVar26 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar26 & 0xffffffff) << 2;
      uVar17 = (int)uVar26 + 1;
      uVar26 = (ulong)uVar17;
      uVar14 = (long)*(int *)((long)param_1 + uVar28) * (long)iVar25;
      *(uint *)((long)param_1 + uVar28) = (uint)(uVar14 >> 0xf) & 0xfffe0000 | (uint)uVar14 >> 0xf;
      if ((int)uVar17 < iVar9) {
        uVar26 = (ulong)(int)uVar17;
        do {
          iVar11 = iVar11 + (param_8 - iVar3 * iVar9);
          iVar23 = iVar23 + iVar3;
          iVar12 = 0;
          if (iVar9 <= iVar11) {
            iVar23 = iVar23 + 1;
            iVar12 = iVar9;
          }
          iVar11 = iVar11 - iVar12;
          if (iVar31 <= iVar23) break;
          lVar30 = uVar26 * 4;
          uVar26 = uVar26 + 1;
          uVar28 = (long)*(int *)((long)param_1 + lVar30) * (long)iVar25;
          *(uint *)((long)param_1 + lVar30) =
               (uint)(uVar28 >> 0xf) & 0xfffe0000 | (uint)uVar28 >> 0xf;
        } while ((long)uVar26 < (long)iVar9);
      }
      lVar15 = (long)iVar27;
      lVar30 = lVar15 + 2;
      iVar25 = iVar27;
      do {
        iVar25 = iVar25 + 1;
        if ((long)uVar20 <= lVar30) {
          iVar31 = 9999999;
          break;
        }
        uVar28 = lVar22 * ((int)uVar21 * ((int)lVar15 + 2));
        uVar14 = uVar28 >> 0x2d & 0x3ffff;
        lVar15 = lVar15 + 1;
        iVar31 = (uint)(ushort)(&DAT_01994fa2)[uVar14] +
                 (((uint)(ushort)(&DAT_01994fa2)[(int)uVar14 + 1] -
                  (uint)(ushort)(&DAT_01994fa2)[uVar14]) * ((uint)(uVar28 >> 0x1f) & 0x3ffe) >> 0xe)
        ;
        lVar30 = lVar30 + 1;
      } while (iVar31 < iVar23);
      iVar27 = iVar25;
      if (iVar16 <= iVar25) {
        iVar27 = iVar16 + -1;
      }
      if (iVar16 <= iVar25) {
        iVar31 = 9999999;
      }
    } while ((int)uVar26 < iVar9);
  }
  lVar18 = *(long *)(lVar18 + 0x28);
LAB_00e93674:
  if (lVar18 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

