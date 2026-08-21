
/* cocos2d::AudioMixer::volumeRampStereo(cocos2d::AudioMixer::track_t*, int*, unsigned long, int*,
   int*) */

void cocos2d::AudioMixer::volumeRampStereo
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
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
  
                    /* try { // try from 00a7d1b4 to 00b7d1eb has its CatchHandler @ 00a7d2d4 */
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar7 = (int)param_3;
  if (param_5 != (int *)0x0) {
    iVar9 = *(int *)(param_1 + 0x18);
    iVar10 = *(int *)(param_1 + 0x1c);
    uVar8 = param_3;
    piVar12 = param_5;
    iVar14 = iVar4;
    iVar18 = iVar2;
    iVar15 = iVar10;
    if (param_3 < 4) {
LAB_00a7d440:
      do {
        iVar16 = *param_4;
        iVar17 = param_4[1];
                    /* try { // try from 00a7d444 to 00b7d463 has its CatchHandler @ 00a7d34c */
                    /* try { // try from 00a7d464 to 00b7d46f has its CatchHandler @ 00a7d4ac */
        *param_2 = *param_2 + (iVar16 >> 0xc) * (iVar18 >> 0x10);
        param_2[1] = param_2[1] + (iVar17 >> 0xc) * (iVar14 >> 0x10);
                    /* try { // try from 00a7d470 to 00b7d4b3 has its CatchHandler @ 00a7d34c */
        uVar8 = uVar8 - 1;
        *piVar12 = *piVar12 + ((iVar17 >> 0xc) + (iVar16 >> 0xc)) * (iVar15 >> 0x11);
        param_2 = param_2 + 2;
        param_4 = param_4 + 2;
        piVar12 = piVar12 + 1;
        iVar14 = iVar14 + iVar5;
        iVar18 = iVar18 + iVar3;
        iVar15 = iVar15 + iVar9;
      } while (uVar8 != 0);
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d3bc with catch @ 00a7d34c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d3ec with catch @ 00a7d34c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d41c with catch @ 00a7d34c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d444 with catch @ 00a7d34c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d470 with catch @ 00a7d34c
                        */
      if (((param_2 < param_5 + param_3 && param_5 < param_2 + param_3 * 2) ||
          (param_2 < param_4 + param_3 * 2 && param_4 < param_2 + param_3 * 2)) ||
         (param_5 < param_4 + param_3 * 2 && param_4 < param_5 + param_3)) goto LAB_00a7d440;
      uVar11 = param_3 & 0xfffffffffffffffc;
      iVar14 = iVar3 * 4;
      iVar18 = iVar5 * 4;
      iVar15 = iVar9 * 4;
      iVar24 = iVar2 + iVar3;
      iVar25 = iVar2 + iVar3 * 2;
      iVar26 = iVar2 + iVar3 * 3;
      piVar12 = param_2 + uVar11 * 2;
      iVar20 = (int)uVar11;
      iVar21 = iVar4 + iVar5;
      iVar22 = iVar4 + iVar5 * 2;
      iVar23 = iVar4 + iVar5 * 3;
                    /* try { // try from 00a7d3b4 to 00b7d3bb has its CatchHandler @ 00a7d4b0 */
      piVar1 = param_4 + uVar11 * 2;
                    /* try { // try from 00a7d3bc to 00b7d3df has its CatchHandler @ 00a7d34c */
      iVar27 = iVar10 + iVar9;
      iVar28 = iVar10 + iVar9 * 2;
      iVar29 = iVar10 + iVar9 * 3;
      uVar8 = uVar11;
      piVar13 = param_5;
      iVar16 = iVar4;
      iVar17 = iVar2;
      iVar19 = iVar10;
      do {
        iVar30 = *param_4;
        iVar31 = param_4[1];
        iVar32 = param_4[2];
        iVar33 = param_4[3];
        iVar34 = param_4[4];
        iVar35 = param_4[5];
        iVar36 = param_4[6];
        iVar37 = param_4[7];
        param_4 = param_4 + 8;
                    /* try { // try from 00a7d3e0 to 00b7d3eb has its CatchHandler @ 00a7d4b0 */
                    /* try { // try from 00a7d3ec to 00b7d413 has its CatchHandler @ 00a7d34c */
        *param_2 = *param_2 + (iVar30 >> 0xc) * (iVar17 >> 0x10);
        param_2[1] = param_2[1] + (iVar31 >> 0xc) * (iVar16 >> 0x10);
        param_2[2] = param_2[2] + (iVar32 >> 0xc) * (iVar24 >> 0x10);
        param_2[3] = param_2[3] + (iVar33 >> 0xc) * (iVar21 >> 0x10);
        param_2[4] = param_2[4] + (iVar34 >> 0xc) * (iVar25 >> 0x10);
        param_2[5] = param_2[5] + (iVar35 >> 0xc) * (iVar22 >> 0x10);
        param_2[6] = param_2[6] + (iVar36 >> 0xc) * (iVar26 >> 0x10);
        param_2[7] = param_2[7] + (iVar37 >> 0xc) * (iVar23 >> 0x10);
        param_2 = param_2 + 8;
        iVar16 = iVar16 + iVar18;
        iVar21 = iVar21 + iVar18;
        iVar22 = iVar22 + iVar18;
        iVar23 = iVar23 + iVar18;
        iVar17 = iVar17 + iVar14;
        iVar24 = iVar24 + iVar14;
        iVar25 = iVar25 + iVar14;
        iVar26 = iVar26 + iVar14;
        uVar8 = uVar8 - 4;
        *(ulong *)(piVar13 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar13 + 2) >> 0x20) +
                      ((iVar37 >> 0xc) + (iVar36 >> 0xc)) * (iVar29 >> 0x11),
                      (int)*(undefined8 *)(piVar13 + 2) +
                      ((iVar35 >> 0xc) + (iVar34 >> 0xc)) * (iVar28 >> 0x11));
        *(ulong *)piVar13 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar13 >> 0x20) +
                      ((iVar33 >> 0xc) + (iVar32 >> 0xc)) * (iVar27 >> 0x11),
                      (int)*(undefined8 *)piVar13 +
                      ((iVar31 >> 0xc) + (iVar30 >> 0xc)) * (iVar19 >> 0x11));
        iVar19 = iVar19 + iVar15;
        iVar27 = iVar27 + iVar15;
        iVar28 = iVar28 + iVar15;
        iVar29 = iVar29 + iVar15;
        piVar13 = piVar13 + 4;
                    /* try { // try from 00a7d414 to 00b7d41b has its CatchHandler @ 00a7d4ac */
      } while (uVar8 != 0);
                    /* try { // try from 00a7d41c to 00b7d43b has its CatchHandler @ 00a7d34c */
      param_2 = piVar12;
      param_4 = piVar1;
      uVar8 = param_3 - uVar11;
      piVar12 = param_5 + uVar11;
      iVar14 = iVar4 + iVar5 * iVar20;
      iVar18 = iVar2 + iVar3 * iVar20;
      iVar15 = iVar10 + iVar9 * iVar20;
      if (uVar11 != param_3) goto LAB_00a7d440;
    }
    *(int *)(param_1 + 0x1c) = iVar10 + iVar9 * iVar7;
    bVar6 = param_5 + param_3 != (int *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d414 with catch @ 00a7d4ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d43c with catch @ 00a7d4ac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d464 with catch @ 00a7d4ac
                        */
    goto LAB_00a7d240;
  }
  iVar9 = iVar4;
  iVar10 = iVar2;
  if ((param_3 < 4) || ((param_2 < param_4 + param_3 * 2 && (param_4 < param_2 + param_3 * 2)))) {
LAB_00a7d1f8:
    do {
                    /* try { // try from 00a7d204 to 00b7d207 has its CatchHandler @ 00a7d2b0 */
      *param_2 = *param_2 + (*param_4 >> 0xc) * (iVar10 >> 0x10);
                    /* try { // try from 00a7d218 to 00b7d21b has its CatchHandler @ 00a7d2b4 */
                    /* try { // try from 00a7d21c to 00b7d237 has its CatchHandler @ 00a7d2bc */
      param_3 = param_3 - 1;
      param_2[1] = param_2[1] + (param_4[1] >> 0xc) * (iVar9 >> 0x10);
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
      iVar9 = iVar9 + iVar5;
      iVar10 = iVar10 + iVar3;
                    /* try { // try from 00a7d238 to 00b7d323 has its CatchHandler @ 00a7d160 */
    } while (param_3 != 0);
  }
  else {
    uVar11 = param_3 & 0xfffffffffffffffc;
    iVar9 = iVar5 * 4;
    iVar10 = iVar3 * 4;
    iVar15 = iVar4 + iVar5;
    iVar16 = iVar4 + iVar5 * 2;
    iVar17 = iVar4 + iVar5 * 3;
    piVar12 = param_4 + uVar11 * 2;
    piVar1 = param_2 + uVar11 * 2;
    iVar19 = iVar2 + iVar3;
    iVar20 = iVar2 + iVar3 * 2;
    iVar21 = iVar2 + iVar3 * 3;
    uVar8 = uVar11;
    iVar14 = iVar4;
    iVar18 = iVar2;
    do {
      iVar22 = *param_4;
      iVar26 = param_4[1];
      iVar23 = param_4[2];
      iVar27 = param_4[3];
      iVar24 = param_4[4];
      iVar28 = param_4[5];
      iVar25 = param_4[6];
      iVar29 = param_4[7];
      param_4 = param_4 + 8;
                    /* catch() { ... } // from try @ 00a7d204 with catch @ 00a7d2b0 */
      iVar30 = iVar14 >> 0x10;
      iVar32 = iVar15 >> 0x10;
      iVar34 = iVar16 >> 0x10;
      iVar36 = iVar17 >> 0x10;
                    /* catch() { ... } // from try @ 00a7d218 with catch @ 00a7d2b4 */
                    /* catch() { ... } // from try @ 00a7d1ec with catch @ 00a7d2b8 */
                    /* catch() { ... } // from try @ 00a7d21c with catch @ 00a7d2bc */
      iVar14 = iVar14 + iVar9;
      iVar15 = iVar15 + iVar9;
      iVar16 = iVar16 + iVar9;
      iVar17 = iVar17 + iVar9;
      uVar8 = uVar8 - 4;
      *param_2 = *param_2 + (iVar22 >> 0xc) * (iVar18 >> 0x10);
      param_2[1] = param_2[1] + (iVar26 >> 0xc) * iVar30;
      param_2[2] = param_2[2] + (iVar23 >> 0xc) * (iVar19 >> 0x10);
      param_2[3] = param_2[3] + (iVar27 >> 0xc) * iVar32;
      param_2[4] = param_2[4] + (iVar24 >> 0xc) * (iVar20 >> 0x10);
      param_2[5] = param_2[5] + (iVar28 >> 0xc) * iVar34;
      param_2[6] = param_2[6] + (iVar25 >> 0xc) * (iVar21 >> 0x10);
      param_2[7] = param_2[7] + (iVar29 >> 0xc) * iVar36;
      param_2 = param_2 + 8;
      iVar18 = iVar18 + iVar10;
      iVar19 = iVar19 + iVar10;
      iVar20 = iVar20 + iVar10;
      iVar21 = iVar21 + iVar10;
                    /* catch() { ... } // from try @ 00a7d1b4 with catch @ 00a7d2d4 */
    } while (uVar8 != 0);
    bVar6 = uVar11 != param_3;
    param_4 = piVar12;
    param_3 = param_3 - uVar11;
    param_2 = piVar1;
    iVar9 = iVar4 + iVar5 * (int)uVar11;
    iVar10 = iVar2 + iVar3 * (int)uVar11;
    if (bVar6) goto LAB_00a7d1f8;
  }
  bVar6 = false;
LAB_00a7d240:
  *(int *)(param_1 + 8) = iVar2 + iVar3 * iVar7;
  *(int *)(param_1 + 0xc) = iVar4 + iVar5 * iVar7;
  track_t::adjustVolumeRamp(param_1,bVar6,false);
  return;
}

