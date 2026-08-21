
void FUN_00a22010(long param_1,uint param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  int local_74 [3];
  long local_68;
  
  lVar4 = tpidr_el0;
                    /* try { // try from 00a22034 to 00b22037 has its CatchHandler @ 00a22070 */
  local_68 = *(long *)(lVar4 + 0x28);
  iVar15 = (int)param_3;
  if ((*(byte *)(param_1 + 0x40) >> 2 & 1) != 0) {
    if (param_2 - 0x3131 < 0x33) {
      uVar2 = *(ushort *)(&DAT_013a5df8 + (ulong)(param_2 - 0x3131) * 2);
      uVar8 = (ulong)uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a22034 with catch @ 00a22070
                        */
      uVar17 = (ulong)(uVar2 >> 8);
      if (-1 < (short)uVar2) {
LAB_00a2278c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      uVar7 = param_2 - 0xac00;
                    /* try { // try from 00a22084 to 00b220cf has its CatchHandler @ 00a22084
                       catch() { ... } // from try @ 00a22084 with catch @ 00a22084
                       catch() { ... } // from try @ 00a220ec with catch @ 00a22084 */
      if (0xae8 < uVar7 >> 2) goto LAB_00a22260;
      uVar11 = uVar7 >> 2 & 0x3fff;
      uVar13 = uVar11 / 7;
      iVar6 = (int)(((ulong)uVar11 / 7) * 0x86186187 >> 0x20);
                    /* try { // try from 00a220d0 to 00b220d7 has its CatchHandler @ 00a2210c */
                    /* try { // try from 00a220e8 to 00b220eb has its CatchHandler @ 00a22110 */
                    /* try { // try from 00a220ec to 00b22133 has its CatchHandler @ 00a22084 */
                    /* catch() { ... } // from try @ 00a220d0 with catch @ 00a2210c */
                    /* catch() { ... } // from try @ 00a220e8 with catch @ 00a22110 */
      uVar17 = (ulong)(((uint)(byte)(&DAT_013a5e71)
                                    [uVar13 + (iVar6 + (uVar13 - iVar6 >> 1) >> 4) * -0x15] |
                       (uint)(byte)(&DAT_013a5e5e)[(ulong)(uVar7 & 0xffff) / 0x24c] << 5) >> 3);
      uVar8 = (ulong)((uint)(byte)(&DAT_013a5e86)[(ulong)(uVar7 + uVar13 * -0x1c) & 0xffff] |
                     (uint)(byte)(&DAT_013a5e71)
                                 [uVar13 + (iVar6 + (uVar13 - iVar6 >> 1) >> 4) * -0x15] << 5);
    }
    uVar14 = uVar17 >> 2 & 0x1f;
    if (uVar14 - 1 < 0x14) {
                    /* catch() { ... } // from try @ 00a22190 with catch @ 00a22134 */
      uVar7 = ((uint)uVar8 & 0xff | ((uint)uVar17 & 3) << 8) >> 5;
      if (((0x3cfcfcfcU >> (ulong)uVar7 & 1) != 0) &&
         (uVar8 = uVar8 & 0x1f, (0x3ffbfffeU >> uVar8 & 1) != 0)) {
        piVar20 = local_74;
        if ((int)uVar14 != 1) {
          piVar20 = local_74 + 1;
          local_74[0] = (byte)(&DAT_012fcef4)[uVar14] + 0x3130;
        }
        if (uVar7 != 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a221f8 with catch @ 00a2223c
                        */
          *piVar20 = (byte)(&DAT_012fced4)[uVar7] + 0x3130;
          piVar20 = piVar20 + 1;
        }
        piVar9 = piVar20;
        if ((int)uVar8 != 1) {
                    /* try { // try from 00a2218c to 00b2218f has its CatchHandler @ 00a221b0 */
          piVar9 = piVar20 + 1;
                    /* try { // try from 00a22190 to 00b221cb has its CatchHandler @ 00a22134 */
          *piVar20 = (byte)(&DAT_012fcf54)[uVar8] + 0x3130;
        }
        iVar6 = (int)((ulong)((long)piVar9 - (long)local_74) >> 2);
        if (iVar6 != -1) {
                    /* catch() { ... } // from try @ 00a22174 with catch @ 00a221ac */
                    /* catch() { ... } // from try @ 00a2218c with catch @ 00a221b0 */
          lVar10 = param_3;
          if (0 < iVar6) {
            uVar16 = *(undefined4 *)(param_1 + 0x44);
            uVar17 = (ulong)((long)piVar9 - (long)local_74) >> 2 & 0xffffffff;
            piVar20 = local_74;
            uVar8 = param_4;
            do {
              if (uVar8 == 0) goto LAB_00a224c4;
              iVar6 = (**(code **)(param_1 + 0x30))(param_1,lVar10,*piVar20,uVar8);
              if (iVar6 < 0) {
                *(undefined4 *)(param_1 + 0x44) = uVar16;
                if (iVar6 != -1) goto LAB_00a224c8;
                goto LAB_00a22260;
              }
              uVar14 = (ulong)iVar6;
              bVar5 = uVar8 < uVar14;
              uVar8 = uVar8 - uVar14;
              if (bVar5) goto LAB_00a2278c;
              lVar10 = lVar10 + uVar14;
                    /* try { // try from 00a221f8 to 00b221fb has its CatchHandler @ 00a2223c */
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 1;
            } while (uVar17 != 0);
          }
          uVar17 = (ulong)(uint)((int)lVar10 - iVar15);
          goto LAB_00a224cc;
        }
      }
    }
  }
LAB_00a22260:
  if (param_2 == 0x3006) {
    lVar10 = 0;
LAB_00a222ac:
    uVar16 = *(undefined4 *)(param_1 + 0x44);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a2227c with catch @ 00a222b8
                        */
    puVar18 = &DAT_013b02a2 + lVar10;
    do {
      if (param_4 == 0) goto LAB_00a224c4;
      uVar2 = *puVar18;
                    /* try { // try from 00a222cc to 00b22323 has its CatchHandler @ 00a222cc
                       catch() { ... } // from try @ 00a222cc with catch @ 00a222cc
                       catch() { ... } // from try @ 00a22364 with catch @ 00a222cc */
      iVar6 = (**(code **)(param_1 + 0x30))(param_1,param_3,(uVar2 & 0x7fff) + 0x3000,param_4);
      if (-1 < iVar6) {
        uVar17 = (ulong)iVar6;
        if (param_4 < uVar17) goto LAB_00a2278c;
        uVar8 = param_4 - uVar17;
        if (uVar8 == 0) goto LAB_00a224c4;
        iVar6 = (**(code **)(param_1 + 0x30))(param_1,param_3 + uVar17,0x303e,uVar8);
        if (-1 < iVar6) {
          if (uVar8 < (ulong)(long)iVar6) goto LAB_00a2278c;
          uVar17 = (ulong)(uint)(((int)(param_3 + uVar17) + iVar6) - iVar15);
          goto LAB_00a224cc;
        }
      }
      *(undefined4 *)(param_1 + 0x44) = uVar16;
      if (iVar6 != -1) goto LAB_00a224c8;
                    /* try { // try from 00a22324 to 00b2232b has its CatchHandler @ 00a223b0 */
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar2);
LAB_00a22330:
    if (param_2 - 0x2018 < 3) {
      if ((*(uint *)(param_1 + 0x40) >> 1 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
                    /* try { // try from 00a2234c to 00b22363 has its CatchHandler @ 00a223c0 */
          uVar7 = 0x27;
        }
        else {
          uVar7 = 0xb4;
          if (param_2 != 0x2019) {
            uVar7 = 0x60;
          }
        }
      }
      else {
        uVar7 = 0x2018;
        if (param_2 != 0x201a) {
          uVar7 = param_2;
        }
      }
                    /* catch() { ... } // from try @ 00a22324 with catch @ 00a223b0 */
      uVar17 = (**(code **)(param_1 + 0x30))(param_1,param_3,uVar7,param_4);
                    /* catch() { ... } // from try @ 00a2234c with catch @ 00a223c0 */
      if ((int)uVar17 != -1) goto LAB_00a224cc;
      goto LAB_00a223c8;
    }
    uVar7 = param_2 - 0xa0;
    if (0x157 < uVar7) goto LAB_00a223c8;
                    /* try { // try from 00a22364 to 00b223fb has its CatchHandler @ 00a222cc */
    puVar12 = &DAT_013b60ae;
LAB_00a223e0:
    sVar3 = *(short *)(puVar12 + (ulong)uVar7 * 2);
joined_r0x00a22424:
    uVar17 = (ulong)sVar3;
                    /* try { // try from 00a22424 to 00b224bf has its CatchHandler @ 00a22424
                       catch() { ... } // from try @ 00a22424 with catch @ 00a22424
                       catch() { ... } // from try @ 00a224c8 with catch @ 00a22424
                       catch() { ... } // from try @ 00a22558 with catch @ 00a22424
                       catch() { ... } // from try @ 00a225d0 with catch @ 00a22424
                       catch() { ... } // from try @ 00a22638 with catch @ 00a22424 */
    if (-1 < (long)uVar17) {
LAB_00a22438:
      uVar8 = (ulong)*(uint *)(&DAT_013b8600 +
                              (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (uVar17 & 0xffffffff) << 2));
      if (*(uint *)(&DAT_013b8600 +
                   (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2)) != 0)
      {
        uVar16 = *(undefined4 *)(param_1 + 0x44);
        puVar19 = (undefined4 *)(&DAT_013b8604 + uVar17 * 4);
        do {
          if (param_4 == 0) goto LAB_00a224c4;
          uVar1 = *puVar19;
          iVar6 = (**(code **)(param_1 + 0x30))(param_1,param_3,uVar1,param_4);
          if (iVar6 == -1) {
            iVar6 = FUN_00a22010(param_1,uVar1,param_3,param_4);
          }
          if (iVar6 < 0) {
            *(undefined4 *)(param_1 + 0x44) = uVar16;
            if (iVar6 != -1) goto LAB_00a224c8;
            goto LAB_00a22508;
          }
          uVar17 = (ulong)iVar6;
          bVar5 = param_4 < uVar17;
          param_4 = param_4 - uVar17;
          if (bVar5) goto LAB_00a2278c;
          param_3 = param_3 + uVar17;
          uVar8 = uVar8 - 1;
          puVar19 = puVar19 + 1;
        } while (uVar8 != 0);
      }
      uVar17 = (ulong)(uint)((int)param_3 - iVar15);
                    /* try { // try from 00a224c0 to 00b224c7 has its CatchHandler @ 00a226b0 */
      goto LAB_00a224cc;
    }
  }
  else {
    if (param_2 == 0x30f6) {
      lVar10 = 1;
                    /* try { // try from 00a2227c to 00b2227f has its CatchHandler @ 00a222b8 */
      goto LAB_00a222ac;
    }
    if (0x28 < param_2 - 0x4e00 >> 9) goto LAB_00a22330;
    lVar10 = (long)*(short *)(&DAT_013a5ea2 + (ulong)(param_2 - 0x4e00) * 2);
    if (-1 < lVar10) goto LAB_00a222ac;
LAB_00a223c8:
    uVar7 = param_2 & 0xfffffff8;
    if (uVar7 == 0x218) {
      uVar7 = param_2 - 0x218;
      puVar12 = &DAT_012fc6c4;
      goto LAB_00a223e0;
    }
    uVar11 = param_2 - 0x2b8;
    if (uVar11 < 0x28) {
      puVar12 = &DAT_013b635e;
LAB_00a2241c:
      sVar3 = *(short *)(puVar12 + (ulong)uVar11 * 2);
      goto joined_r0x00a22424;
    }
    uVar11 = param_2 - 0x3d0;
    if (uVar11 < 0x30) {
      puVar12 = &DAT_013b63ae;
      goto LAB_00a2241c;
    }
    if (param_2 == 0x587) {
      uVar17 = 0x28e;
      goto LAB_00a22438;
    }
    if (uVar7 == 0x5f0) {
      uVar7 = param_2 - 0x5f0;
      puVar12 = &DAT_012fc6d4;
      goto LAB_00a223e0;
    }
    if ((param_2 & 0xfffffff0) == 0x670) {
      uVar7 = param_2 - 0x670;
      puVar12 = &DAT_012fcf14;
      goto LAB_00a223e0;
    }
    if (param_2 == 0xe33) {
      uVar17 = 0x2a6;
                    /* try { // try from 00a22550 to 00b22557 has its CatchHandler @ 00a2269c */
      goto LAB_00a22438;
    }
                    /* try { // try from 00a22558 to 00b225b7 has its CatchHandler @ 00a22424 */
    if (param_2 - 0xeb0 < 0x30) {
      sVar3 = *(short *)(&DAT_013b640e + (ulong)(param_2 - 0xeb0) * 2);
      goto joined_r0x00a22424;
    }
    if ((param_2 & 0xfffffff0) == 0xf70) {
      uVar7 = param_2 - 0xf70;
      puVar12 = &DAT_012fcf34;
      goto LAB_00a223e0;
    }
    uVar11 = param_2 - 0x1e00;
    if (uVar11 < 0xa0) {
      puVar12 = &DAT_013b646e;
      goto LAB_00a2241c;
    }
    if (uVar7 == 0x1ef0) {
                    /* try { // try from 00a225b8 to 00b225cf has its CatchHandler @ 00a22718 */
      uVar7 = param_2 - 0x1ef0;
      puVar12 = &DAT_012fc6e4;
      goto LAB_00a223e0;
    }
    uVar11 = param_2 - 0x2000;
                    /* try { // try from 00a225d0 to 00b225ff has its CatchHandler @ 00a22424 */
    if (uVar11 < 0x58) {
      puVar12 = &DAT_013b65ae;
      goto LAB_00a2241c;
    }
    if (uVar7 == 0x20a8) {
      uVar7 = param_2 - 0x20a8;
      puVar12 = &DAT_012fc6f4;
                    /* try { // try from 00a22600 to 00b2260b has its CatchHandler @ 00a22704 */
      goto LAB_00a223e0;
    }
    uVar11 = param_2 - 0x2100;
                    /* try { // try from 00a2260c to 00b22617 has its CatchHandler @ 00a226ec */
    if (uVar11 < 0xd8) {
                    /* try { // try from 00a22618 to 00b22637 has its CatchHandler @ 00a226cc */
      puVar12 = &DAT_013b665e;
      goto LAB_00a2241c;
    }
    uVar11 = param_2 - 0x2210;
    if (uVar11 < 0x60) {
      puVar12 = &DAT_013b680e;
                    /* try { // try from 00a22638 to 00b22733 has its CatchHandler @ 00a22424 */
      goto LAB_00a2241c;
    }
    uVar11 = param_2 - 0x22c0;
    if (uVar11 < 0x30) {
      puVar12 = &DAT_013b68ce;
      goto LAB_00a2241c;
    }
    uVar11 = param_2 - 0x2400;
    if (uVar11 < 0xf0) {
      puVar12 = &DAT_013b692e;
      goto LAB_00a2241c;
    }
    if (param_2 >> 6 == 0x94) {
      uVar7 = param_2 - 0x2500;
      puVar12 = &DAT_013b6b0e;
      goto LAB_00a223e0;
    }
                    /* catch() { ... } // from try @ 00a22550 with catch @ 00a2269c */
    if (param_2 == 0x25e6) {
      uVar17 = 0x7e9;
      goto LAB_00a22438;
    }
    if (param_2 == 0x2a0c) {
      uVar17 = 0x7eb;
                    /* catch() { ... } // from try @ 00a224c0 with catch @ 00a226b0 */
      goto LAB_00a22438;
    }
    if (uVar7 == 0x2a70) {
                    /* catch() { ... } // from try @ 00a22618 with catch @ 00a226cc */
      uVar7 = param_2 - 0x2a70;
      puVar12 = &DAT_012fc704;
      goto LAB_00a223e0;
    }
    if (param_2 == 0x2e9f) {
      uVar17 = 0x7fb;
      goto LAB_00a22438;
    }
                    /* catch() { ... } // from try @ 00a2260c with catch @ 00a226ec */
    if (param_2 == 0x2ef3) {
      uVar17 = 0x7fd;
      goto LAB_00a22438;
    }
                    /* catch() { ... } // from try @ 00a22600 with catch @ 00a22704 */
    uVar7 = param_2 - 0x2f00;
    if (uVar7 < 0xd8) {
                    /* catch() { ... } // from try @ 00a225b8 with catch @ 00a22718 */
      puVar12 = &DAT_013b6b8e;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0x3000;
    if (uVar7 < 0xf8) {
      puVar12 = &DAT_013b6d3e;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0x3130;
    if (uVar7 < 0x60) {
      puVar12 = &DAT_013b6f2e;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0x31f0;
    if (uVar7 < 0x210) {
      puVar12 = &DAT_013b6fee;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0xf900;
    if (uVar7 < 0x170) {
      puVar12 = &DAT_013b740e;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0xfb00;
    if (uVar7 < 0x50) {
      puVar12 = &DAT_013b76ee;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0xfe48;
    if (uVar7 < 0x28) {
      puVar12 = &DAT_013b778e;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0xff00;
    if (uVar7 < 0xf0) {
      puVar12 = &DAT_013b77de;
      goto LAB_00a223e0;
    }
    if (param_2 >> 10 == 0x75) {
      uVar7 = param_2 - 0x1d400;
      puVar12 = &DAT_013b79be;
      goto LAB_00a223e0;
    }
    uVar7 = param_2 - 0x2f800;
    if (uVar7 < 0x220) {
      puVar12 = &DAT_013b81be;
      goto LAB_00a223e0;
    }
  }
LAB_00a22508:
  uVar17 = 0xffffffff;
LAB_00a224cc:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar17);
  }
  return;
LAB_00a224c4:
  *(undefined4 *)(param_1 + 0x44) = uVar16;
LAB_00a224c8:
                    /* try { // try from 00a224c8 to 00b2254f has its CatchHandler @ 00a22424 */
  uVar17 = 0xfffffffe;
  goto LAB_00a224cc;
}

