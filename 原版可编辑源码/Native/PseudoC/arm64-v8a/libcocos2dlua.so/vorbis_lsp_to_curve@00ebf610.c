
void vorbis_lsp_to_curve(void *param_1,ulong param_2,undefined8 param_3,int *param_4,uint param_5,
                        int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  byte *pbVar31;
  long lVar32;
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
  lVar13 = tpidr_el0;
                    /* catch() { ... } // from try @ 00ebf6dc with catch @ 00ebf638 */
  local_68 = *(long *)(lVar13 + 0x28);
  lVar32 = -((-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2) + 0xf &
            0xfffffffffffffff0);
  piVar14 = (int *)((long)aiStack_b0 + lVar32);
  uVar15 = (ulong)(int)param_3;
                    /* try { // try from 00ebf668 to 00fbf66f has its CatchHandler @ 00ebf724 */
  local_78 = 0;
  if (uVar15 != 0) {
    local_78 = 0x80000000 / uVar15;
  }
  lVar23 = 0;
  iVar20 = 0;
  iVar6 = (int)param_2;
  local_70 = param_3;
  lVar18 = 0x1b0000;
  do {
    if ((int)(uint)*(ushort *)((long)&DAT_0143503a + lVar23) <= param_8) {
      if (param_8 < (int)(uint)*(ushort *)((long)&DAT_0143503c + lVar23)) {
                    /* try { // try from 00ebf6bc to 00fbf6db has its CatchHandler @ 00ebf72c */
        uVar19 = (ulong)*(ushort *)((long)&DAT_0143503c + lVar23) -
                 (ulong)*(ushort *)((long)&DAT_0143503a + lVar23);
        uVar24 = 0;
        if (uVar19 != 0) {
          uVar24 = 0x80000000 / uVar19;
        }
                    /* try { // try from 00ebf6dc to 00fbf74f has its CatchHandler @ 00ebf638 */
        lVar18 = (long)(((int)(uVar24 * ((long)param_8 -
                                        (ulong)*(ushort *)((long)&DAT_0143503a + lVar23)) >> 0x11) +
                        iVar20 * 0x4000) * 2);
        break;
      }
    }
    lVar23 = lVar23 + 2;
    iVar20 = iVar20 + 1;
  } while (lVar23 != 0x6c);
  if (0 < (int)param_5) {
    uVar24 = (ulong)param_5;
    piVar12 = piVar14;
    do {
      uVar29 = (uint)((ulong)((long)*param_4 * 0x517cc2) >> 0x20);
      if (0xffff < uVar29) {
        memset(param_1,0,-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
        lVar13 = *(long *)(lVar13 + 0x28);
        goto LAB_00ebfc0c;
      }
                    /* catch() { ... } // from try @ 00ebf668 with catch @ 00ebf724 */
      lVar23 = ((long)*param_4 * 0x517cc2 >> 0x20 & 0x1fffffffe00U) * 0x800000;
                    /* catch() { ... } // from try @ 00ebf6bc with catch @ 00ebf72c */
      uVar24 = uVar24 - 1;
      param_4 = param_4 + 1;
      *piVar12 = *(int *)(&DAT_01435130 + (lVar23 >> 0x1e)) -
                 ((int)((*(int *)(&DAT_01435130 + (lVar23 >> 0x1e)) -
                        *(int *)(&DAT_01435130 + (lVar23 + 0x100000000 >> 0x1e))) * (uVar29 & 0x1ff)
                       ) >> 9);
      piVar12 = piVar12 + 1;
    } while (uVar24 != 0);
  }
  local_a8 = lVar13;
  if (0 < iVar6) {
    uVar24 = local_78 >> 1 & 0x7fffffff;
    local_80 = *piVar14;
    iVar20 = 0;
    if (iVar6 != 0) {
      iVar20 = param_8 / iVar6;
    }
    local_84 = *(int *)((long)aiStack_b0 + lVar32 + 4);
    local_90 = param_5 * -7;
    uVar19 = 0;
    iVar26 = 0;
    iVar10 = 0;
    iVar21 = (int)local_70;
    local_8c = param_7 * -0x1000;
    local_88 = iVar21 + -1;
    uVar17 = lVar18 * uVar24;
    uVar29 = (uint)(uVar17 >> 0x2d) & 0x3ffff;
    local_94 = ((int)(param_5 + 1) >> 1) * -0xe;
    iVar25 = 0;
    local_a0 = (ulong)(param_5 - 4 & 0xfffffffe) + 5;
    iVar30 = (uint)(ushort)(&DAT_0143503a)[uVar29] +
             (((uint)(ushort)(&DAT_0143503a)[uVar29 + 1] - (uint)(ushort)(&DAT_0143503a)[uVar29]) *
              ((uint)(uVar17 >> 0x1f) & 0x3ffe) >> 0xe);
    do {
      uVar16 = iVar26 * (int)local_78;
      uVar29 = uVar16 >> 0x18;
      iVar27 = (int)(*(int *)(&DAT_01435130 + (ulong)uVar29 * 4) * 0x200 -
                    (*(int *)(&DAT_01435130 + (ulong)uVar29 * 4) -
                    *(int *)(&DAT_01435130 + (((ulong)uVar29 << 0x20) + 0x100000000 >> 0x1e))) *
                    (uVar16 >> 0xf & 0x1ff)) >> 9;
      iVar3 = local_80 - iVar27;
      iVar11 = -iVar3;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      iVar3 = local_84 - iVar27;
      uVar29 = iVar11 * 0xb505;
      iVar11 = -iVar3;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      uVar16 = iVar11 * 0xb505;
      uVar17 = (ulong)(uVar29 | uVar16);
      uVar2 = (uVar29 | uVar16) >> 0x19;
      uVar28 = (uint)(byte)(&DAT_014350a6)[uVar2];
      bVar9 = uVar2 != 0;
      if ((int)param_5 < 4) {
        iVar11 = 0;
        lVar7 = 3;
      }
      else {
        lVar32 = 0;
        iVar11 = 0;
        do {
          if (!bVar9) {
            if ((int)(uVar17 >> 0x13) == 0) {
              uVar28 = (uint)(byte)(&DAT_01435126)[uVar17 >> 0x10];
            }
            else {
              uVar28 = (uint)(byte)(&DAT_014350e6)[uVar17 >> 0x13];
            }
          }
          iVar11 = uVar28 + iVar11;
          lVar7 = lVar32 + 2;
          lVar8 = lVar32 + 3;
          lVar23 = lVar32 + 5;
          lVar32 = lVar32 + 2;
          iVar4 = piVar14[lVar7] - iVar27;
          iVar3 = -iVar4;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          iVar5 = piVar14[lVar8] - iVar27;
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          uVar29 = iVar3 * (uVar29 >> (ulong)(uVar28 & 0x1f));
          uVar16 = iVar4 * (uVar16 >> (ulong)(uVar28 & 0x1f));
          uVar17 = (ulong)(uVar29 | uVar16);
          uVar2 = (uVar29 | uVar16) >> 0x19;
          uVar28 = (uint)(byte)(&DAT_014350a6)[uVar2];
          bVar9 = uVar2 != 0;
          lVar7 = local_a0;
        } while (lVar23 < (int)param_5);
      }
      if (!bVar9) {
        if ((int)(uVar17 >> 0x13) == 0) {
          uVar28 = (uint)(byte)(&DAT_01435126)[uVar17 >> 0x10];
        }
        else {
          uVar28 = (uint)(byte)(&DAT_014350e6)[uVar17 >> 0x13];
        }
      }
      uVar16 = uVar16 >> (ulong)(uVar28 & 0x1f);
      uVar29 = uVar29 >> (ulong)(uVar28 & 0x1f);
      if ((param_5 & 1) == 0) {
        iVar11 = uVar28 + iVar11 + param_5 * -7;
        uVar29 = (uVar16 * uVar16 >> 0x10) * (0x4000 - iVar27) +
                 (uVar29 * uVar29 >> 0x10) * (iVar27 + 0x4000) >> 0xe;
      }
      else {
        iVar4 = *(int *)((long)piVar14 + ((lVar7 << 0x20) + -0x100000000 >> 0x1e)) - iVar27;
        iVar3 = -iVar4;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        uVar2 = iVar3 * uVar29 | uVar16 << 0xe;
        if (uVar2 >> 0x19 == 0) {
          if (uVar2 >> 0x13 == 0) {
            pbVar31 = &DAT_01435126 + (uVar2 >> 0x10);
          }
          else {
            pbVar31 = &DAT_014350e6 + (uVar2 >> 0x13);
          }
        }
        else {
          pbVar31 = &DAT_014350a6 + (uVar2 >> 0x19);
        }
        bVar1 = *pbVar31;
        uVar29 = iVar3 * uVar29 >> (ulong)(bVar1 & 0x1f);
        uVar16 = (uVar16 << 0xe) >> (ulong)(bVar1 & 0x1f);
        iVar11 = uVar28 + iVar11 + local_94 + (uint)bVar1;
        uVar29 = ((uVar16 * uVar16 >> 0x10) * (0x4000 - ((uint)(iVar27 * iVar27) >> 0xe)) >> 0xe) +
                 (uVar29 * uVar29 >> 0x10);
      }
      uVar16 = param_5 + iVar11 * 2;
      if (uVar29 >> 0x10 == 0) {
        for (; (uVar29 != 0 && ((uVar29 >> 0xf & 1) == 0)); uVar29 = uVar29 << 1) {
          uVar16 = uVar16 - 1;
        }
      }
      else {
        uVar29 = uVar29 >> 1;
        uVar16 = uVar16 + 1;
      }
      lVar32 = ((ulong)(uVar29 >> 9) & 0x3f) * 8;
      iVar27 = param_7 * -0x1000 +
               (int)((*(long *)(&DAT_01435338 + lVar32) -
                     ((long)(*(long *)(&DAT_01435540 + lVar32) * ((ulong)uVar29 & 0x3ff)) >> 10)) *
                     *(long *)(&DAT_01435740 + ((long)(int)uVar16 & 1U) * 8) >>
                    (((long)((ulong)uVar16 << 0x20) >> 0x21) + 0x15U & 0x3f)) * local_7c;
      if (iVar27 < 1) {
        if (iVar27 < -0x8c000) {
          iVar27 = 0;
        }
        else {
          iVar27 = *(int *)(FLOOR_fromdB_LOOKUP + ((long)iVar27 * 0x1d3 + 0xff64000 >> 0x14) * 4);
        }
      }
      else {
        iVar27 = 0x7fffffff;
      }
      uVar22 = -(uVar19 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar19 & 0xffffffff) << 2;
      uVar29 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar29;
      uVar17 = (long)*(int *)((long)param_1 + uVar22) * (long)iVar27;
      *(uint *)((long)param_1 + uVar22) = (uint)(uVar17 >> 0xf) & 0xfffe0000 | (uint)uVar17 >> 0xf;
      if ((int)uVar29 < iVar6) {
        uVar19 = (ulong)(int)uVar29;
        do {
          iVar25 = iVar25 + (param_8 - iVar20 * iVar6);
          iVar10 = iVar10 + iVar20;
          iVar11 = 0;
          if (iVar6 <= iVar25) {
            iVar10 = iVar10 + 1;
            iVar11 = iVar6;
          }
          iVar25 = iVar25 - iVar11;
          if (iVar30 <= iVar10) break;
          lVar32 = uVar19 * 4;
          uVar19 = uVar19 + 1;
          uVar17 = (long)*(int *)((long)param_1 + lVar32) * (long)iVar27;
          *(uint *)((long)param_1 + lVar32) =
               (uint)(uVar17 >> 0xf) & 0xfffe0000 | (uint)uVar17 >> 0xf;
        } while (iVar6 != (int)uVar19);
      }
      lVar23 = (long)iVar26;
      lVar32 = lVar23 + 2;
      iVar27 = iVar26;
      do {
        iVar27 = iVar27 + 1;
        if ((long)uVar15 <= lVar32) {
          iVar30 = 9999999;
          break;
        }
        uVar17 = lVar18 * ((int)uVar24 * ((int)lVar23 + 2));
        uVar22 = uVar17 >> 0x2d & 0x3ffff;
        lVar23 = lVar23 + 1;
        iVar30 = (uint)(ushort)(&DAT_0143503a)[uVar22] +
                 (((uint)(ushort)(&DAT_0143503a)[(int)uVar22 + 1] -
                  (uint)(ushort)(&DAT_0143503a)[uVar22]) * ((uint)(uVar17 >> 0x1f) & 0x3ffe) >> 0xe)
        ;
        lVar32 = lVar32 + 1;
      } while (iVar30 < iVar10);
      iVar26 = iVar27;
      if (iVar21 <= iVar27) {
        iVar26 = iVar21 + -1;
      }
      if (iVar21 <= iVar27) {
        iVar30 = 9999999;
      }
    } while ((int)uVar19 < iVar6);
  }
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_00ebfc0c:
  if (lVar13 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

