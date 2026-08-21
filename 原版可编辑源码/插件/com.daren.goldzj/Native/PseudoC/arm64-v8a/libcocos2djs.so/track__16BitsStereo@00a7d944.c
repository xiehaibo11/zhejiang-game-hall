
/* cocos2d::AudioMixer::track__16BitsStereo(cocos2d::AudioMixer::track_t*, int*, unsigned long,
   int*, int*) */

void cocos2d::AudioMixer::track__16BitsStereo
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  short *psVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  short sVar30;
  int iVar29;
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
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  
  piVar10 = *(int **)(param_1 + 0x50);
  iVar16 = (int)*(undefined8 *)(param_1 + 0x10);
  iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  iVar15 = (int)param_3;
  if (param_5 != (int *)0x0) {
    iVar46 = *(int *)(param_1 + 0x18);
                    /* try { // try from 00a7da24 to 00b7da2b has its CatchHandler @ 00a7da5c */
    if (iVar46 == 0 && (iVar14 == 0 && iVar16 == 0)) {
      sVar42 = *(short *)(param_1 + 0x20);
      iVar14 = (int)sVar42;
                    /* try { // try from 00a7da34 to 00b7da37 has its CatchHandler @ 00a7da4c */
                    /* try { // try from 00a7da38 to 00b7da6f has its CatchHandler @ 00a7d9f0 */
      iVar16 = (int)(short)*(int *)(param_1 + 4);
      iVar15 = *(int *)(param_1 + 4) >> 0x10;
      piVar7 = param_2;
      piVar12 = piVar10;
      uVar9 = param_3;
      if (4 < param_3) {
                    /* try { // try from 00a7daa8 to 00b7daaf has its CatchHandler @ 00a7dac0 */
                    /* try { // try from 00a7dab0 to 00b7dad3 has its CatchHandler @ 00a7da70 */
                    /* catch() { ... } // from try @ 00a7daa8 with catch @ 00a7dac0 */
        if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
            (piVar10 + param_3 <= param_2 || param_2 + param_3 * 2 <= piVar10)) &&
           (piVar10 + param_3 <= param_5 || param_5 + param_3 <= piVar10)) {
          uVar9 = 4;
          if ((param_3 & 3) != 0) {
            uVar9 = param_3 & 3;
          }
          lVar11 = param_3 - uVar9;
          piVar7 = param_2 + lVar11 * 2;
          piVar13 = param_5 + lVar11;
          psVar18 = (short *)((long)piVar10 + 2);
          piVar8 = param_5;
          uVar17 = param_3;
          do {
            uVar23 = *(undefined8 *)(psVar18 + 3);
            uVar20 = *(undefined8 *)(psVar18 + -1);
            sVar43 = *psVar18;
            sVar44 = psVar18[2];
            sVar45 = psVar18[4];
            sVar30 = psVar18[6];
            psVar18 = psVar18 + 8;
            uVar17 = uVar17 - 4;
            sVar41 = (short)((ulong)uVar20 >> 0x20);
            iVar46 = (int)(short)((ulong)uVar23 >> 0x20);
            *param_2 = *param_2 + (short)uVar20 * iVar16;
            param_2[1] = param_2[1] + ((int)uVar20 >> 0x10) * iVar15;
            param_2[2] = param_2[2] + sVar41 * iVar16;
            param_2[3] = param_2[3] + (int)((long)uVar20 >> 0x30) * iVar15;
            param_2[4] = param_2[4] + (short)uVar23 * iVar16;
            param_2[5] = param_2[5] + ((int)uVar23 >> 0x10) * iVar15;
            param_2[6] = param_2[6] + iVar46 * iVar16;
            param_2[7] = param_2[7] + (int)((long)uVar23 >> 0x30) * iVar15;
            param_2 = param_2 + 8;
                    /* try { // try from 00a7db30 to 00b7db7b has its CatchHandler @ 00a7db30
                       catch() { ... } // from try @ 00a7db30 with catch @ 00a7db30
                       catch() { ... } // from try @ 00a7dbf0 with catch @ 00a7db30 */
            *(ulong *)(piVar8 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + 2) >> 0x20) +
                          (sVar30 + iVar46 >> 1) * iVar14,
                          (int)*(undefined8 *)(piVar8 + 2) +
                          ((int)sVar45 + (int)(short)uVar23 >> 1) * iVar14);
            *(ulong *)piVar8 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar8 >> 0x20) +
                          ((int)sVar44 + (int)sVar41 >> 1) * (int)sVar42,
                          (int)*(undefined8 *)piVar8 +
                          ((int)sVar43 + (int)(short)uVar20 >> 1) * (int)sVar42);
            piVar8 = piVar8 + 4;
            param_5 = piVar13;
            piVar12 = piVar10 + lVar11;
          } while (uVar9 != uVar17);
        }
      }
      do {
        iVar46 = *piVar12;
        uVar9 = uVar9 - 1;
        iVar21 = (int)(short)iVar46;
        sVar42 = *(short *)((long)piVar12 + 2);
                    /* try { // try from 00a7db7c to 00b7dba3 has its CatchHandler @ 00a7dc88 */
        *piVar7 = *piVar7 + iVar21 * iVar16;
        piVar7[1] = piVar7[1] + (iVar46 >> 0x10) * iVar15;
        *param_5 = *param_5 + (iVar21 + sVar42 >> 1) * iVar14;
        piVar7 = piVar7 + 2;
        param_5 = param_5 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar9 != 0);
      *(int **)(param_1 + 0x50) = piVar10 + param_3;
                    /* try { // try from 00a7dba4 to 00b7dbab has its CatchHandler @ 00a7dc6c */
      return;
    }
    uVar20 = *(undefined8 *)(param_1 + 8);
    iVar21 = *(int *)(param_1 + 0x1c);
    iVar19 = (int)uVar20;
    iVar24 = (int)((ulong)uVar20 >> 0x20);
    piVar7 = piVar10;
    uVar9 = param_3;
    iVar22 = iVar21;
    if ((3 < param_3) && ((param_5 + param_3 <= param_2 || (param_2 + param_3 * 2 <= param_5)))) {
      uVar17 = param_3 & 0xfffffffffffffffc;
      iVar22 = iVar46 * 4;
      iVar28 = iVar14 * 4;
      iVar25 = iVar16 * 4;
      iVar31 = (int)uVar17;
      piVar12 = param_2 + uVar17 * 2;
      uVar20 = CONCAT44(iVar24 + iVar14 * iVar31,iVar19 + iVar16 * iVar31);
      iVar33 = iVar21 + iVar46;
      iVar32 = iVar21 + iVar46 * 2;
      iVar34 = iVar21 + iVar46 * 3;
      iVar35 = iVar24 + iVar14;
      iVar36 = iVar24 + iVar14 * 2;
      iVar37 = iVar24 + iVar14 * 3;
      iVar38 = iVar19 + iVar16;
      iVar39 = iVar19 + iVar16 * 2;
      iVar40 = iVar19 + iVar16 * 3;
      piVar7 = param_5;
      uVar9 = uVar17;
      piVar13 = piVar10;
      iVar26 = iVar24;
      iVar27 = iVar19;
      iVar29 = iVar21;
      do {
        iVar3 = *piVar13;
        sVar42 = *(short *)((long)piVar13 + 2);
        iVar4 = piVar13[1];
        sVar43 = *(short *)((long)piVar13 + 6);
        iVar5 = piVar13[2];
        sVar44 = *(short *)((long)piVar13 + 10);
        iVar6 = piVar13[3];
        sVar45 = *(short *)((long)piVar13 + 0xe);
        piVar13 = piVar13 + 4;
        *param_2 = *param_2 + (iVar27 >> 0x10) * (int)(short)iVar3;
        param_2[1] = param_2[1] + (iVar26 >> 0x10) * (int)sVar42;
        param_2[2] = param_2[2] + (iVar38 >> 0x10) * (int)(short)iVar4;
        param_2[3] = param_2[3] + (iVar35 >> 0x10) * (int)sVar43;
        param_2[4] = param_2[4] + (iVar39 >> 0x10) * (int)(short)iVar5;
        param_2[5] = param_2[5] + (iVar36 >> 0x10) * (int)sVar44;
        param_2[6] = param_2[6] + (iVar40 >> 0x10) * (int)(short)iVar6;
        param_2[7] = param_2[7] + (iVar37 >> 0x10) * (int)sVar45;
        param_2 = param_2 + 8;
        iVar47 = iVar29 >> 0x11;
        iVar48 = iVar33 >> 0x11;
        iVar49 = iVar32 >> 0x11;
        iVar50 = iVar34 >> 0x11;
        iVar29 = iVar29 + iVar22;
        iVar33 = iVar33 + iVar22;
        iVar32 = iVar32 + iVar22;
        iVar34 = iVar34 + iVar22;
        iVar26 = iVar26 + iVar28;
        iVar35 = iVar35 + iVar28;
        iVar36 = iVar36 + iVar28;
        iVar37 = iVar37 + iVar28;
        uVar9 = uVar9 - 4;
        *(ulong *)(piVar7 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                      ((int)sVar45 + (int)(short)iVar6) * iVar50,
                      (int)*(undefined8 *)(piVar7 + 2) + ((int)sVar44 + (int)(short)iVar5) * iVar49)
        ;
        *(ulong *)piVar7 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                      ((int)sVar43 + (int)(short)iVar4) * iVar48,
                      (int)*(undefined8 *)piVar7 + ((int)sVar42 + (int)(short)iVar3) * iVar47);
        iVar27 = iVar27 + iVar25;
        iVar38 = iVar38 + iVar25;
        iVar39 = iVar39 + iVar25;
        iVar40 = iVar40 + iVar25;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
      piVar7 = piVar10 + uVar17;
      uVar9 = param_3 - uVar17;
      param_5 = param_5 + uVar17;
      param_2 = piVar12;
      iVar22 = iVar21 + iVar46 * iVar31;
      if (uVar17 == param_3) goto LAB_00a7ddf8;
    }
    do {
      iVar28 = *piVar7;
      sVar42 = *(short *)((long)piVar7 + 2);
      iVar25 = (int)((ulong)uVar20 >> 0x20);
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + (iVar25 >> 0x10) * (int)sVar42,
                    (int)*(undefined8 *)param_2 + ((int)uVar20 >> 0x10) * (int)(short)iVar28);
                    /* try { // try from 00a7dde0 to 00b7de03 has its CatchHandler @ 00a7de14 */
      uVar20 = CONCAT44(iVar25 + iVar14,(int)uVar20 + iVar16);
      uVar9 = uVar9 - 1;
      *param_5 = *param_5 + ((int)sVar42 + (int)(short)iVar28) * (iVar22 >> 0x11);
      piVar7 = piVar7 + 1;
      param_5 = param_5 + 1;
      param_2 = param_2 + 2;
      iVar22 = iVar22 + iVar46;
    } while (uVar9 != 0);
LAB_00a7ddf8:
                    /* try { // try from 00a7de04 to 00b7de27 has its CatchHandler @ 00a7dd98 */
    *(ulong *)(param_1 + 8) = CONCAT44(iVar24 + iVar14 * iVar15,iVar19 + iVar16 * iVar15);
                    /* catch() { ... } // from try @ 00a7dde0 with catch @ 00a7de14 */
    *(int *)(param_1 + 0x1c) = iVar21 + iVar46 * iVar15;
    track_t::adjustVolumeRamp(param_1,true,false);
    *(int **)(param_1 + 0x50) = piVar10 + param_3;
    return;
  }
  if (iVar14 == 0 && iVar16 == 0) {
    iVar16 = (int)(short)*(int *)(param_1 + 4);
    iVar15 = *(int *)(param_1 + 4) >> 0x10;
    piVar7 = piVar10;
    uVar9 = param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d8e4 with catch @ 00a7d97c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d90c with catch @ 00a7d97c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d934 with catch @ 00a7d97c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d884 with catch @ 00a7d980
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d8b0 with catch @ 00a7d980
                        */
    if ((3 < param_3) && ((piVar10 + param_3 <= param_2 || (param_2 + param_3 * 2 <= piVar10)))) {
      uVar17 = param_3 & 0xfffffffffffffffc;
      piVar12 = param_2 + uVar17 * 2;
      uVar9 = uVar17;
      do {
        uVar23 = *(undefined8 *)(piVar7 + 2);
        uVar20 = *(undefined8 *)piVar7;
                    /* try { // try from 00a7d9f0 to 00b7da23 has its CatchHandler @ 00a7d9f0
                       catch() { ... } // from try @ 00a7d9f0 with catch @ 00a7d9f0
                       catch() { ... } // from try @ 00a7da38 with catch @ 00a7d9f0 */
        uVar9 = uVar9 - 4;
        *param_2 = *param_2 + (short)uVar20 * iVar16;
        param_2[1] = param_2[1] + ((int)uVar20 >> 0x10) * iVar15;
        param_2[2] = param_2[2] + (short)((ulong)uVar20 >> 0x20) * iVar16;
        param_2[3] = param_2[3] + (int)((long)uVar20 >> 0x30) * iVar15;
        param_2[4] = param_2[4] + (short)uVar23 * iVar16;
        param_2[5] = param_2[5] + ((int)uVar23 >> 0x10) * iVar15;
        param_2[6] = param_2[6] + (short)((ulong)uVar23 >> 0x20) * iVar16;
        param_2[7] = param_2[7] + (int)((long)uVar23 >> 0x30) * iVar15;
        param_2 = param_2 + 8;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
      piVar7 = piVar10 + uVar17;
      uVar9 = param_3 - uVar17;
      param_2 = piVar12;
      if (uVar17 == param_3) goto LAB_00a7d9c4;
    }
    do {
      iVar14 = *piVar7;
      uVar9 = uVar9 - 1;
      *param_2 = *param_2 + (short)iVar14 * iVar16;
      param_2[1] = param_2[1] + (iVar14 >> 0x10) * iVar15;
      piVar7 = piVar7 + 1;
      param_2 = param_2 + 2;
    } while (uVar9 != 0);
LAB_00a7d9c4:
    *(int **)(param_1 + 0x50) = piVar10 + param_3;
    return;
  }
                    /* catch() { ... } // from try @ 00a7da34 with catch @ 00a7da4c */
  uVar20 = *(undefined8 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 00a7da24 with catch @ 00a7da5c */
  iVar46 = (int)uVar20;
  iVar21 = (int)((ulong)uVar20 >> 0x20);
  uVar9 = param_3;
  piVar7 = piVar10;
  if (param_3 < 4) {
LAB_00a7dc2c:
    do {
      iVar22 = (int)((ulong)uVar20 >> 0x20);
      uVar9 = uVar9 - 1;
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (iVar22 >> 0x10) * (int)*(short *)((long)piVar7 + 2),
                    (int)*(undefined8 *)param_2 + ((int)uVar20 >> 0x10) * (int)(short)*piVar7);
      uVar20 = CONCAT44(iVar22 + iVar14,(int)uVar20 + iVar16);
      param_2 = param_2 + 2;
      piVar7 = piVar7 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar17 = param_3 & 0xfffffffffffffffc;
                    /* try { // try from 00a7dbbc to 00b7dbbf has its CatchHandler @ 00a7dc64 */
    iVar22 = iVar16 * 4;
    iVar19 = iVar14 * 4;
                    /* try { // try from 00a7dbd0 to 00b7dbd3 has its CatchHandler @ 00a7dc68 */
                    /* try { // try from 00a7dbd4 to 00b7dbef has its CatchHandler @ 00a7dc70 */
    piVar7 = param_2 + uVar17 * 2;
    uVar20 = CONCAT44(iVar21 + iVar14 * (int)uVar17,iVar46 + iVar16 * (int)uVar17);
    iVar25 = iVar46 + iVar16;
    iVar26 = iVar46 + iVar16 * 2;
    iVar27 = iVar46 + iVar16 * 3;
    iVar29 = iVar21 + iVar14;
    iVar31 = iVar21 + iVar14 * 2;
    iVar33 = iVar21 + iVar14 * 3;
    piVar12 = piVar10;
    uVar9 = uVar17;
    iVar24 = iVar46;
    iVar28 = iVar21;
    do {
                    /* try { // try from 00a7dbf0 to 00b7dcd7 has its CatchHandler @ 00a7db30 */
      iVar32 = *piVar12;
      sVar42 = *(short *)((long)piVar12 + 2);
      iVar34 = piVar12[1];
      sVar43 = *(short *)((long)piVar12 + 6);
      iVar35 = piVar12[2];
      sVar44 = *(short *)((long)piVar12 + 10);
      iVar36 = piVar12[3];
      sVar45 = *(short *)((long)piVar12 + 0xe);
      piVar12 = piVar12 + 4;
      iVar37 = iVar24 >> 0x10;
      iVar38 = iVar25 >> 0x10;
      iVar39 = iVar26 >> 0x10;
      iVar40 = iVar27 >> 0x10;
      iVar24 = iVar24 + iVar22;
      iVar25 = iVar25 + iVar22;
      iVar26 = iVar26 + iVar22;
      iVar27 = iVar27 + iVar22;
      uVar9 = uVar9 - 4;
      *param_2 = *param_2 + iVar37 * (short)iVar32;
      param_2[1] = param_2[1] + (iVar28 >> 0x10) * (int)sVar42;
      param_2[2] = param_2[2] + iVar38 * (short)iVar34;
      param_2[3] = param_2[3] + (iVar29 >> 0x10) * (int)sVar43;
      param_2[4] = param_2[4] + iVar39 * (short)iVar35;
      param_2[5] = param_2[5] + (iVar31 >> 0x10) * (int)sVar44;
      param_2[6] = param_2[6] + iVar40 * (short)iVar36;
      param_2[7] = param_2[7] + (iVar33 >> 0x10) * (int)sVar45;
      param_2 = param_2 + 8;
      iVar28 = iVar28 + iVar19;
      iVar29 = iVar29 + iVar19;
      iVar31 = iVar31 + iVar19;
      iVar33 = iVar33 + iVar19;
    } while (uVar9 != 0);
    uVar9 = param_3 - uVar17;
    param_2 = piVar7;
    piVar7 = piVar10 + uVar17;
    if (uVar17 != param_3) goto LAB_00a7dc2c;
  }
  iVar22 = *(int *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a7dbbc with catch @ 00a7dc64 */
                    /* catch() { ... } // from try @ 00a7dbd0 with catch @ 00a7dc68 */
  uVar1 = iVar46 + iVar16 * iVar15;
                    /* catch() { ... } // from try @ 00a7dba4 with catch @ 00a7dc6c */
                    /* catch() { ... } // from try @ 00a7dbd4 with catch @ 00a7dc70 */
  uVar2 = iVar21 + iVar14 * iVar15;
  *(uint *)(param_1 + 8) = uVar1;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (iVar22 < 1) {
    if ((iVar22 < 0) &&
       (iVar15 = (int)*(short *)(param_1 + 4), (int)(iVar22 + uVar1) >> 0x10 <= iVar15))
    goto LAB_00a7dc90;
LAB_00a7dcc4:
    *(float *)(param_1 + 0x9c) = (float)uVar1 * 3.7252903e-09;
  }
  else {
    iVar15 = (int)*(short *)(param_1 + 4);
                    /* catch() { ... } // from try @ 00a7db7c with catch @ 00a7dc88 */
    if ((int)(iVar22 + uVar1) >> 0x10 < (int)*(short *)(param_1 + 4)) goto LAB_00a7dcc4;
LAB_00a7dc90:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar15 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar15 < 1) {
    if ((-1 < iVar15) ||
       (iVar16 = (int)*(short *)(param_1 + 6), iVar16 < (int)(iVar15 + uVar2) >> 0x10))
    goto LAB_00a7dd2c;
  }
  else {
    iVar16 = (int)*(short *)(param_1 + 6);
    if ((int)(iVar15 + uVar2) >> 0x10 < (int)*(short *)(param_1 + 6)) {
LAB_00a7dd2c:
      *(int **)(param_1 + 0x50) = piVar10 + param_3;
      *(float *)(param_1 + 0xa0) = (float)uVar2 * 3.7252903e-09;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xc) = iVar16 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
  *(int **)(param_1 + 0x50) = piVar10 + param_3;
  return;
}

