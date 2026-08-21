
/* cocos2d::AudioMixer::track__16BitsMono(cocos2d::AudioMixer::track_t*, int*, unsigned long, int*,
   int*) */

void cocos2d::AudioMixer::track__16BitsMono
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  ulong uVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  
  psVar9 = *(short **)(param_1 + 0x50);
  iVar10 = *(int *)(param_1 + 0x10);
  iVar11 = *(int *)(param_1 + 0x14);
  iVar23 = (int)param_3;
  if (param_5 != (int *)0x0) {
    iVar24 = *(int *)(param_1 + 0x18);
    if (iVar24 == 0 && (iVar11 == 0 && iVar10 == 0)) {
      sVar5 = *(short *)(param_1 + 0x20);
      iVar10 = (int)*(short *)(param_1 + 4);
      iVar11 = (int)*(short *)(param_1 + 6);
      psVar6 = psVar9;
      uVar7 = param_3;
      if ((3 < param_3) && ((param_5 + param_3 <= param_2 || (param_2 + param_3 * 2 <= param_5)))) {
        uVar12 = param_3 & 0xfffffffffffffffc;
        piVar3 = param_2 + uVar12 * 2;
        iVar23 = (int)sVar5;
        piVar8 = param_5;
        uVar7 = uVar12;
        do {
          uVar22 = *(undefined8 *)psVar6;
          uVar7 = uVar7 - 4;
          iVar24 = (int)(short)uVar22;
          iVar25 = (int)(short)((ulong)uVar22 >> 0x10);
          iVar28 = (int)(short)((ulong)uVar22 >> 0x20);
          iVar30 = (int)(short)((ulong)uVar22 >> 0x30);
          *param_2 = *param_2 + iVar10 * iVar24;
          param_2[1] = param_2[1] + iVar11 * iVar24;
          param_2[2] = param_2[2] + iVar10 * iVar25;
          param_2[3] = param_2[3] + iVar11 * iVar25;
          param_2[4] = param_2[4] + iVar10 * iVar28;
          param_2[5] = param_2[5] + iVar11 * iVar28;
          param_2[6] = param_2[6] + iVar10 * iVar30;
          param_2[7] = param_2[7] + iVar11 * iVar30;
          param_2 = param_2 + 8;
          *(ulong *)(piVar8 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + 2) >> 0x20) + iVar23 * iVar30,
                        (int)*(undefined8 *)(piVar8 + 2) + iVar23 * iVar28);
          *(ulong *)piVar8 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar8 >> 0x20) + iVar23 * iVar25,
                        (int)*(undefined8 *)piVar8 + iVar23 * iVar24);
          piVar8 = piVar8 + 4;
          psVar6 = psVar6 + 4;
                    /* try { // try from 00a7e244 to 00b7e24b has its CatchHandler @ 00a7e250 */
        } while (uVar7 != 0);
        psVar6 = psVar9 + uVar12;
        param_5 = param_5 + uVar12;
        uVar7 = param_3 - uVar12;
        param_2 = piVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7e130 with catch @ 00a7e24c
                       try { // try from 00a7e24c to 00b7e367 has its CatchHandler @ 00a7df1c */
        if (uVar12 == param_3) goto LAB_00a7dfac;
      }
      do {
        sVar4 = *psVar6;
        uVar7 = uVar7 - 1;
        *(ulong *)param_2 =
             CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + sVar4 * iVar11,
                      (int)*(undefined8 *)param_2 + sVar4 * iVar10);
        *param_5 = *param_5 + (int)sVar4 * (int)sVar5;
        psVar6 = psVar6 + 1;
        param_5 = param_5 + 1;
        param_2 = param_2 + 2;
      } while (uVar7 != 0);
      goto LAB_00a7dfac;
    }
    iVar25 = *(int *)(param_1 + 8);
    iVar28 = *(int *)(param_1 + 0xc);
    iVar30 = *(int *)(param_1 + 0x1c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7e094 with catch @ 00a7e25c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7e140 with catch @ 00a7e26c
                        */
    psVar6 = psVar9;
    uVar7 = param_3;
    iVar13 = iVar30;
    iVar17 = iVar28;
    iVar14 = iVar25;
    if ((param_3 < 4) || ((param_2 < param_5 + param_3 && (param_5 < param_2 + param_3 * 2)))) {
LAB_00a7e2a8:
      do {
        sVar5 = *psVar6;
        uVar7 = uVar7 - 1;
        *param_2 = *param_2 + (iVar14 >> 0x10) * (int)sVar5;
        param_2[1] = param_2[1] + (iVar17 >> 0x10) * (int)sVar5;
        *param_5 = *param_5 + (iVar13 >> 0x10) * (int)sVar5;
        psVar6 = psVar6 + 1;
        param_5 = param_5 + 1;
        param_2 = param_2 + 2;
        iVar13 = iVar13 + iVar24;
        iVar17 = iVar17 + iVar11;
        iVar14 = iVar14 + iVar10;
      } while (uVar7 != 0);
    }
    else {
      uVar12 = param_3 & 0xfffffffffffffffc;
      iVar13 = iVar24 * 4;
      iVar17 = iVar11 * 4;
      iVar14 = iVar10 * 4;
      iVar19 = (int)uVar12;
      iVar20 = iVar30 + iVar24;
      iVar26 = iVar30 + iVar24 * 2;
      iVar27 = iVar30 + iVar24 * 3;
      iVar29 = iVar28 + iVar11;
      iVar31 = iVar28 + iVar11 * 2;
      iVar32 = iVar28 + iVar11 * 3;
      piVar3 = param_2 + uVar12 * 2;
      iVar33 = iVar25 + iVar10;
      iVar34 = iVar25 + iVar10 * 2;
      iVar21 = iVar25 + iVar10 * 3;
      piVar8 = param_5;
      uVar7 = uVar12;
      iVar15 = iVar30;
      iVar16 = iVar25;
      iVar18 = iVar28;
      do {
        uVar22 = *(undefined8 *)psVar6;
        uVar7 = uVar7 - 4;
        iVar35 = (int)(short)uVar22;
        iVar36 = (int)(short)((ulong)uVar22 >> 0x10);
        iVar37 = (int)(short)((ulong)uVar22 >> 0x20);
        iVar38 = (int)(short)((ulong)uVar22 >> 0x30);
        *param_2 = *param_2 + (iVar16 >> 0x10) * iVar35;
        param_2[1] = param_2[1] + (iVar18 >> 0x10) * iVar35;
        param_2[2] = param_2[2] + (iVar33 >> 0x10) * iVar36;
        param_2[3] = param_2[3] + (iVar29 >> 0x10) * iVar36;
        param_2[4] = param_2[4] + (iVar34 >> 0x10) * iVar37;
        param_2[5] = param_2[5] + (iVar31 >> 0x10) * iVar37;
        param_2[6] = param_2[6] + (iVar21 >> 0x10) * iVar38;
        param_2[7] = param_2[7] + (iVar32 >> 0x10) * iVar38;
        param_2 = param_2 + 8;
        iVar39 = iVar15 >> 0x10;
        iVar40 = iVar20 >> 0x10;
        iVar41 = iVar26 >> 0x10;
        iVar42 = iVar27 >> 0x10;
        iVar15 = iVar15 + iVar13;
        iVar20 = iVar20 + iVar13;
        iVar26 = iVar26 + iVar13;
        iVar27 = iVar27 + iVar13;
        iVar18 = iVar18 + iVar17;
        iVar29 = iVar29 + iVar17;
        iVar31 = iVar31 + iVar17;
        iVar32 = iVar32 + iVar17;
        *(ulong *)(piVar8 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + 2) >> 0x20) + iVar42 * iVar38,
                      (int)*(undefined8 *)(piVar8 + 2) + iVar41 * iVar37);
        *(ulong *)piVar8 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar8 >> 0x20) + iVar40 * iVar36,
                      (int)*(undefined8 *)piVar8 + iVar39 * iVar35);
        iVar16 = iVar16 + iVar14;
        iVar33 = iVar33 + iVar14;
        iVar34 = iVar34 + iVar14;
        iVar21 = iVar21 + iVar14;
        piVar8 = piVar8 + 4;
        psVar6 = psVar6 + 4;
      } while (uVar7 != 0);
      psVar6 = psVar9 + uVar12;
      param_5 = param_5 + uVar12;
      uVar7 = param_3 - uVar12;
      param_2 = piVar3;
      iVar13 = iVar30 + iVar24 * iVar19;
      iVar17 = iVar28 + iVar11 * iVar19;
      iVar14 = iVar25 + iVar10 * iVar19;
      if (uVar12 != param_3) goto LAB_00a7e2a8;
    }
    *(int *)(param_1 + 8) = iVar25 + iVar10 * iVar23;
    *(int *)(param_1 + 0xc) = iVar28 + iVar11 * iVar23;
    *(int *)(param_1 + 0x1c) = iVar30 + iVar24 * iVar23;
    track_t::adjustVolumeRamp(param_1,true,false);
    goto LAB_00a7dfac;
  }
                    /* try { // try from 00a7df1c to 00b7e043 has its CatchHandler @ 00a7df1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7df1c with catch @ 00a7df1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7e04c with catch @ 00a7df1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7e150 with catch @ 00a7df1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7e24c with catch @ 00a7df1c
                        */
  if (iVar11 == 0 && iVar10 == 0) {
    iVar10 = (int)*(short *)(param_1 + 4);
    iVar11 = (int)*(short *)(param_1 + 6);
    psVar6 = psVar9;
    uVar7 = param_3;
    if (3 < param_3) {
      uVar12 = param_3 & 0xfffffffffffffffc;
      piVar3 = param_2 + uVar12 * 2;
      uVar7 = uVar12;
      do {
        uVar22 = *(undefined8 *)psVar6;
        uVar7 = uVar7 - 4;
        iVar23 = (int)(short)((ulong)uVar22 >> 0x10);
        iVar24 = (int)(short)((ulong)uVar22 >> 0x20);
        iVar25 = (int)(short)((ulong)uVar22 >> 0x30);
        *param_2 = *param_2 + iVar10 * (short)uVar22;
        param_2[1] = param_2[1] + iVar11 * (short)uVar22;
        param_2[2] = param_2[2] + iVar10 * iVar23;
        param_2[3] = param_2[3] + iVar11 * iVar23;
        param_2[4] = param_2[4] + iVar10 * iVar24;
        param_2[5] = param_2[5] + iVar11 * iVar24;
        param_2[6] = param_2[6] + iVar10 * iVar25;
        param_2[7] = param_2[7] + iVar11 * iVar25;
        param_2 = param_2 + 8;
        psVar6 = psVar6 + 4;
      } while (uVar7 != 0);
      psVar6 = psVar9 + uVar12;
      uVar7 = param_3 - uVar12;
      param_2 = piVar3;
      if (uVar12 == param_3) goto LAB_00a7dfac;
    }
    do {
      uVar7 = uVar7 - 1;
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + *psVar6 * iVar11,
                    (int)*(undefined8 *)param_2 + *psVar6 * iVar10);
      psVar6 = psVar6 + 1;
      param_2 = param_2 + 2;
    } while (uVar7 != 0);
    goto LAB_00a7dfac;
  }
  iVar24 = *(int *)(param_1 + 8);
  iVar25 = *(int *)(param_1 + 0xc);
                    /* try { // try from 00a7e044 to 00b7e04b has its CatchHandler @ 00a7e250 */
                    /* try { // try from 00a7e04c to 00b7e093 has its CatchHandler @ 00a7df1c */
  psVar6 = psVar9;
  uVar7 = param_3;
  iVar28 = iVar24;
  iVar30 = iVar25;
  if (param_3 < 4) {
LAB_00a7e0f0:
    do {
      sVar5 = *psVar6;
      uVar7 = uVar7 - 1;
      *param_2 = *param_2 + (iVar28 >> 0x10) * (int)sVar5;
      param_2[1] = param_2[1] + (iVar30 >> 0x10) * (int)sVar5;
      psVar6 = psVar6 + 1;
      param_2 = param_2 + 2;
      iVar28 = iVar28 + iVar10;
      iVar30 = iVar30 + iVar11;
    } while (uVar7 != 0);
  }
  else {
    uVar12 = param_3 & 0xfffffffffffffffc;
    iVar28 = iVar10 * 4;
    iVar30 = iVar11 * 4;
                    /* try { // try from 00a7e094 to 00b7e0bb has its CatchHandler @ 00a7e25c */
    iVar14 = iVar24 + iVar10;
    iVar15 = iVar24 + iVar10 * 2;
    iVar16 = iVar24 + iVar10 * 3;
    piVar3 = param_2 + uVar12 * 2;
    iVar18 = iVar25 + iVar11;
    iVar19 = iVar25 + iVar11 * 2;
    iVar20 = iVar25 + iVar11 * 3;
    uVar7 = uVar12;
    iVar13 = iVar24;
    iVar17 = iVar25;
    do {
      uVar22 = *(undefined8 *)psVar6;
      iVar31 = iVar13 >> 0x10;
      iVar32 = iVar14 >> 0x10;
      iVar33 = iVar15 >> 0x10;
      iVar34 = iVar16 >> 0x10;
                    /* try { // try from 00a7e0c4 to 00b7e0cb has its CatchHandler @ 00a7e2a0 */
      iVar26 = (int)(short)((ulong)uVar22 >> 0x10);
      iVar27 = (int)(short)((ulong)uVar22 >> 0x20);
      iVar29 = (int)(short)((ulong)uVar22 >> 0x30);
      iVar13 = iVar13 + iVar28;
      iVar14 = iVar14 + iVar28;
      iVar15 = iVar15 + iVar28;
      iVar16 = iVar16 + iVar28;
      uVar7 = uVar7 - 4;
      *param_2 = *param_2 + iVar31 * (short)uVar22;
      param_2[1] = param_2[1] + (iVar17 >> 0x10) * (int)(short)uVar22;
      param_2[2] = param_2[2] + iVar32 * iVar26;
      param_2[3] = param_2[3] + (iVar18 >> 0x10) * iVar26;
      param_2[4] = param_2[4] + iVar33 * iVar27;
      param_2[5] = param_2[5] + (iVar19 >> 0x10) * iVar27;
      param_2[6] = param_2[6] + iVar34 * iVar29;
      param_2[7] = param_2[7] + (iVar20 >> 0x10) * iVar29;
      param_2 = param_2 + 8;
      iVar17 = iVar17 + iVar30;
      iVar18 = iVar18 + iVar30;
      iVar19 = iVar19 + iVar30;
      iVar20 = iVar20 + iVar30;
      psVar6 = psVar6 + 4;
    } while (uVar7 != 0);
    psVar6 = psVar9 + uVar12;
    uVar7 = param_3 - uVar12;
    param_2 = piVar3;
    iVar28 = iVar24 + iVar10 * (int)uVar12;
    iVar30 = iVar25 + iVar11 * (int)uVar12;
    if (uVar12 != param_3) goto LAB_00a7e0f0;
  }
  iVar28 = *(int *)(param_1 + 0x10);
  uVar1 = iVar24 + iVar10 * iVar23;
  uVar2 = iVar25 + iVar11 * iVar23;
                    /* try { // try from 00a7e130 to 00b7e133 has its CatchHandler @ 00a7e24c */
  *(uint *)(param_1 + 8) = uVar1;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (iVar28 < 1) {
    if ((-1 < iVar28) ||
       (iVar10 = (int)*(short *)(param_1 + 4), iVar10 < (int)(iVar28 + uVar1) >> 0x10))
    goto LAB_00a7e17c;
LAB_00a7e148:
                    /* try { // try from 00a7e150 to 00b7e243 has its CatchHandler @ 00a7df1c */
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar10 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    iVar10 = (int)*(short *)(param_1 + 4);
                    /* try { // try from 00a7e140 to 00b7e14f has its CatchHandler @ 00a7e26c */
    if ((int)*(short *)(param_1 + 4) <= (int)(iVar28 + uVar1) >> 0x10) goto LAB_00a7e148;
LAB_00a7e17c:
    *(float *)(param_1 + 0x9c) = (float)uVar1 * 3.7252903e-09;
  }
  iVar10 = *(int *)(param_1 + 0x14);
  if (iVar10 < 1) {
    if ((-1 < iVar10) ||
       (iVar11 = (int)*(short *)(param_1 + 6), iVar11 < (int)(iVar10 + uVar2) >> 0x10))
    goto LAB_00a7e1e0;
  }
  else {
    iVar11 = (int)*(short *)(param_1 + 6);
    if ((int)(iVar10 + uVar2) >> 0x10 < (int)*(short *)(param_1 + 6)) {
LAB_00a7e1e0:
      *(float *)(param_1 + 0xa0) = (float)uVar2 * 3.7252903e-09;
      goto LAB_00a7dfac;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xc) = iVar11 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
LAB_00a7dfac:
  *(short **)(param_1 + 0x50) = psVar9 + param_3;
  return;
}

