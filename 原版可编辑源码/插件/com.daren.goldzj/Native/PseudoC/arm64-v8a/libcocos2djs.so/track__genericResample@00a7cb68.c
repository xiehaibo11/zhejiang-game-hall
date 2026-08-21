
/* cocos2d::AudioMixer::track__genericResample(cocos2d::AudioMixer::track_t*, int*, unsigned long,
   int*, int*) */

void cocos2d::AudioMixer::track__genericResample
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
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
  uint uVar32;
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
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
                    /* catch() { ... } // from try @ 00a7caf4 with catch @ 00a7cb9c */
                    /* catch() { ... } // from try @ 00a7cb08 with catch @ 00a7cba0 */
                    /* catch() { ... } // from try @ 00a7cadc with catch @ 00a7cba4 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
            (*(long **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
                    /* catch() { ... } // from try @ 00a7cb0c with catch @ 00a7cba8 */
  iVar15 = (int)param_3;
  if (param_5 != (int *)0x0) {
                    /* catch() { ... } // from try @ 00a7cab4 with catch @ 00a7cbc0 */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(0x3f800000,0x3f800000);
    memset(param_4,0,param_3 * *(uint *)(param_1 + 0xbc) * 4);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
              (*(long **)(param_1 + 0x58),param_4,param_3,*(undefined8 *)(param_1 + 0x30));
    iVar16 = *(int *)(param_1 + 0x10);
    iVar17 = *(int *)(param_1 + 0x14);
    iVar33 = *(int *)(param_1 + 0x18);
    if ((iVar17 == 0 && iVar16 == 0) && iVar33 == 0) {
      sVar2 = *(short *)(param_1 + 0x20);
      iVar16 = (int)*(short *)(param_1 + 4);
      iVar17 = (int)*(short *)(param_1 + 6);
      iVar15 = (int)sVar2;
      if (3 < param_3) {
        if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
            (param_4 + param_3 * 2 <= param_2 || param_2 + param_3 * 2 <= param_4)) &&
           (param_4 + param_3 * 2 <= param_5 || param_5 + param_3 <= param_4)) {
          uVar18 = param_3 & 0xfffffffffffffffc;
          piVar19 = param_4 + uVar18 * 2;
          piVar1 = param_2 + uVar18 * 2;
                    /* try { // try from 00a7cca4 to 00b7ccd7 has its CatchHandler @ 00a7cca4
                       catch() { ... } // from try @ 00a7cca4 with catch @ 00a7cca4
                       catch() { ... } // from try @ 00a7ccec with catch @ 00a7cca4 */
          uVar13 = uVar18;
          piVar14 = param_5;
          do {
            uVar32 = *param_4;
            puVar6 = (uint *)(param_4 + 1);
            puVar7 = (uint *)(param_4 + 2);
            puVar8 = (uint *)(param_4 + 3);
            puVar9 = (uint *)(param_4 + 4);
            puVar10 = (uint *)(param_4 + 5);
            puVar11 = (uint *)(param_4 + 6);
            puVar12 = (uint *)(param_4 + 7);
            param_4 = param_4 + 8;
            uVar13 = uVar13 - 4;
            iVar45 = (int)(short)(uVar32 >> 0xc);
            iVar46 = (int)(short)(*puVar7 >> 0xc);
            iVar47 = (int)(short)(*puVar9 >> 0xc);
            iVar48 = (int)(short)(*puVar11 >> 0xc);
            iVar33 = (int)(short)(*puVar6 >> 0xc);
            iVar34 = (int)(short)(*puVar8 >> 0xc);
            iVar35 = (int)(short)(*puVar10 >> 0xc);
            iVar36 = (int)(short)(*puVar12 >> 0xc);
            *param_2 = *param_2 + iVar45 * iVar16;
            param_2[1] = param_2[1] + iVar33 * iVar17;
            param_2[2] = param_2[2] + iVar46 * iVar16;
            param_2[3] = param_2[3] + iVar34 * iVar17;
            param_2[4] = param_2[4] + iVar47 * iVar16;
            param_2[5] = param_2[5] + iVar35 * iVar17;
            param_2[6] = param_2[6] + iVar48 * iVar16;
            param_2[7] = param_2[7] + iVar36 * iVar17;
            param_2 = param_2 + 8;
                    /* try { // try from 00a7ccd8 to 00b7ccdf has its CatchHandler @ 00a7cd10 */
                    /* try { // try from 00a7cce8 to 00b7cceb has its CatchHandler @ 00a7cd00 */
            *(ulong *)(piVar14 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) +
                          (iVar36 + iVar48 >> 1) * iVar15,
                          (int)*(undefined8 *)(piVar14 + 2) + (iVar35 + iVar47 >> 1) * iVar15);
            *(ulong *)piVar14 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) +
                          (iVar34 + iVar46 >> 1) * (int)sVar2,
                          (int)*(undefined8 *)piVar14 + (iVar33 + iVar45 >> 1) * (int)sVar2);
            piVar14 = piVar14 + 4;
                    /* try { // try from 00a7ccec to 00b7cd23 has its CatchHandler @ 00a7cca4 */
          } while (uVar13 != 0);
          bVar5 = uVar18 == param_3;
          param_5 = param_5 + uVar18;
          param_4 = piVar19;
          param_3 = param_3 - uVar18;
          param_2 = piVar1;
          if (bVar5) {
            return;
          }
        }
      }
      do {
                    /* catch() { ... } // from try @ 00a7ccd8 with catch @ 00a7cd10 */
        param_3 = param_3 - 1;
        iVar33 = (int)(short)((uint)*(undefined8 *)param_4 >> 0xc);
        iVar34 = (int)(short)(uint)((ulong)*(undefined8 *)param_4 >> 0x2c);
                    /* try { // try from 00a7cd24 to 00b7cd5b has its CatchHandler @ 00a7cd24
                       catch() { ... } // from try @ 00a7cd24 with catch @ 00a7cd24
                       catch() { ... } // from try @ 00a7cd64 with catch @ 00a7cd24 */
        *(ulong *)param_2 =
             CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + iVar34 * iVar17,
                      (int)*(undefined8 *)param_2 + iVar33 * iVar16);
        *param_5 = *param_5 + (iVar34 + iVar33 >> 1) * iVar15;
        param_5 = param_5 + 1;
        param_4 = param_4 + 2;
        param_2 = param_2 + 2;
      } while (param_3 != 0);
      return;
    }
    iVar34 = *(int *)(param_1 + 8);
    iVar35 = *(int *)(param_1 + 0xc);
    iVar36 = *(int *)(param_1 + 0x1c);
    uVar13 = param_3;
    piVar19 = param_5;
    iVar45 = iVar35;
    iVar46 = iVar34;
    iVar47 = iVar36;
    if (3 < param_3) {
      if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
          (param_4 + param_3 * 2 <= param_2 || param_2 + param_3 * 2 <= param_4)) &&
         (param_4 + param_3 * 2 <= param_5 || param_5 + param_3 <= param_4)) {
        uVar18 = param_3 & 0xfffffffffffffffc;
        iVar45 = iVar17 * 4;
        iVar46 = iVar16 * 4;
        iVar47 = iVar33 * 4;
        iVar26 = (int)uVar18;
        iVar20 = iVar35 + iVar17;
        iVar21 = iVar35 + iVar17 * 2;
        iVar22 = iVar35 + iVar17 * 3;
        iVar24 = iVar34 + iVar16;
        iVar25 = iVar34 + iVar16 * 2;
        iVar27 = iVar34 + iVar16 * 3;
        piVar19 = param_4 + uVar18 * 2;
        piVar1 = param_2 + uVar18 * 2;
        iVar29 = iVar36 + iVar33;
        iVar30 = iVar36 + iVar33 * 2;
        iVar31 = iVar36 + iVar33 * 3;
        uVar13 = uVar18;
        piVar14 = param_5;
        iVar48 = iVar35;
        iVar23 = iVar34;
        iVar28 = iVar36;
        do {
          iVar37 = *param_4;
          iVar41 = param_4[1];
          iVar38 = param_4[2];
          iVar42 = param_4[3];
          iVar39 = param_4[4];
          iVar43 = param_4[5];
          iVar40 = param_4[6];
          iVar44 = param_4[7];
          param_4 = param_4 + 8;
                    /* try { // try from 00a7d020 to 00b7d053 has its CatchHandler @ 00a7d020
                       catch() { ... } // from try @ 00a7d020 with catch @ 00a7d020
                       catch() { ... } // from try @ 00a7d068 with catch @ 00a7d020 */
          *param_2 = *param_2 + (iVar37 >> 0xc) * (iVar23 >> 0x10);
          param_2[1] = param_2[1] + (iVar41 >> 0xc) * (iVar48 >> 0x10);
          param_2[2] = param_2[2] + (iVar38 >> 0xc) * (iVar24 >> 0x10);
          param_2[3] = param_2[3] + (iVar42 >> 0xc) * (iVar20 >> 0x10);
          param_2[4] = param_2[4] + (iVar39 >> 0xc) * (iVar25 >> 0x10);
          param_2[5] = param_2[5] + (iVar43 >> 0xc) * (iVar21 >> 0x10);
          param_2[6] = param_2[6] + (iVar40 >> 0xc) * (iVar27 >> 0x10);
          param_2[7] = param_2[7] + (iVar44 >> 0xc) * (iVar22 >> 0x10);
          param_2 = param_2 + 8;
          iVar48 = iVar48 + iVar45;
          iVar20 = iVar20 + iVar45;
          iVar21 = iVar21 + iVar45;
          iVar22 = iVar22 + iVar45;
          iVar23 = iVar23 + iVar46;
          iVar24 = iVar24 + iVar46;
          iVar25 = iVar25 + iVar46;
          iVar27 = iVar27 + iVar46;
                    /* try { // try from 00a7d054 to 00b7d05b has its CatchHandler @ 00a7d08c */
          uVar13 = uVar13 - 4;
          *(ulong *)(piVar14 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) +
                        ((iVar44 >> 0xc) + (iVar40 >> 0xc)) * (iVar31 >> 0x11),
                        (int)*(undefined8 *)(piVar14 + 2) +
                        ((iVar43 >> 0xc) + (iVar39 >> 0xc)) * (iVar30 >> 0x11));
          *(ulong *)piVar14 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) +
                        ((iVar42 >> 0xc) + (iVar38 >> 0xc)) * (iVar29 >> 0x11),
                        (int)*(undefined8 *)piVar14 +
                        ((iVar41 >> 0xc) + (iVar37 >> 0xc)) * (iVar28 >> 0x11));
          iVar28 = iVar28 + iVar47;
          iVar29 = iVar29 + iVar47;
          iVar30 = iVar30 + iVar47;
          iVar31 = iVar31 + iVar47;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
                    /* try { // try from 00a7d064 to 00b7d067 has its CatchHandler @ 00a7d07c */
        param_4 = piVar19;
        uVar13 = param_3 - uVar18;
        param_2 = piVar1;
        piVar19 = param_5 + uVar18;
        iVar45 = iVar35 + iVar17 * iVar26;
        iVar46 = iVar34 + iVar16 * iVar26;
        iVar47 = iVar36 + iVar33 * iVar26;
                    /* try { // try from 00a7d068 to 00b7d09f has its CatchHandler @ 00a7d020 */
        if (uVar18 == param_3) goto LAB_00a7ce24;
      }
    }
    do {
      iVar48 = *param_4;
      iVar23 = param_4[1];
                    /* try { // try from 00a7cde4 to 00b7ce2f has its CatchHandler @ 00a7cde4
                       catch() { ... } // from try @ 00a7cde4 with catch @ 00a7cde4
                       catch() { ... } // from try @ 00a7cea4 with catch @ 00a7cde4 */
      *param_2 = *param_2 + (iVar48 >> 0xc) * (iVar46 >> 0x10);
      param_2[1] = param_2[1] + (iVar23 >> 0xc) * (iVar45 >> 0x10);
      uVar13 = uVar13 - 1;
      *piVar19 = *piVar19 + ((iVar23 >> 0xc) + (iVar48 >> 0xc)) * (iVar47 >> 0x11);
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
      piVar19 = piVar19 + 1;
      iVar45 = iVar45 + iVar17;
      iVar46 = iVar46 + iVar16;
      iVar47 = iVar47 + iVar33;
    } while (uVar13 != 0);
LAB_00a7ce24:
                    /* try { // try from 00a7ce30 to 00b7ce57 has its CatchHandler @ 00a7cf3c */
    *(int *)(param_1 + 0x1c) = iVar36 + iVar33 * iVar15;
    *(int *)(param_1 + 8) = iVar34 + iVar16 * iVar15;
    *(int *)(param_1 + 0xc) = iVar35 + iVar17 * iVar15;
                    /* try { // try from 00a7ce58 to 00b7ce5f has its CatchHandler @ 00a7cf20 */
    track_t::adjustVolumeRamp(param_1,param_5 + param_3 != (int *)0x0,false);
    return;
  }
                    /* try { // try from 00a7cd64 to 00b7cd87 has its CatchHandler @ 00a7cd24 */
  if (*(int *)(param_1 + 0x14) == 0 && *(int *)(param_1 + 0x10) == 0) {
                    /* catch() { ... } // from try @ 00a7cd5c with catch @ 00a7cd74 */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))
              (*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00a7cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
              (*(long **)(param_1 + 0x58),param_2,param_3,*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* try { // try from 00a7ce70 to 00b7ce73 has its CatchHandler @ 00a7cf18 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(0x3f800000,0x3f800000);
  memset(param_4,0,param_3 << 5);
                    /* try { // try from 00a7ce84 to 00b7ce87 has its CatchHandler @ 00a7cf1c */
                    /* try { // try from 00a7ce88 to 00b7cea3 has its CatchHandler @ 00a7cf24 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
            (*(long **)(param_1 + 0x58),param_4,param_3,*(undefined8 *)(param_1 + 0x30));
  iVar16 = *(int *)(param_1 + 8);
  iVar33 = *(int *)(param_1 + 0xc);
                    /* try { // try from 00a7cea4 to 00b7cf8b has its CatchHandler @ 00a7cde4 */
  iVar17 = *(int *)(param_1 + 0x10);
  iVar34 = *(int *)(param_1 + 0x14);
  iVar35 = iVar33;
  iVar36 = iVar16;
  if ((param_3 < 4) || ((param_2 < param_4 + param_3 * 2 && (param_4 < param_2 + param_3 * 2)))) {
LAB_00a7cee0:
    do {
      *param_2 = *param_2 + (*param_4 >> 0xc) * (iVar36 >> 0x10);
      param_3 = param_3 - 1;
                    /* catch() { ... } // from try @ 00a7ce70 with catch @ 00a7cf18 */
      param_2[1] = param_2[1] + (param_4[1] >> 0xc) * (iVar35 >> 0x10);
                    /* catch() { ... } // from try @ 00a7ce84 with catch @ 00a7cf1c */
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
      iVar35 = iVar35 + iVar34;
      iVar36 = iVar36 + iVar17;
                    /* catch() { ... } // from try @ 00a7ce58 with catch @ 00a7cf20 */
    } while (param_3 != 0);
  }
  else {
    uVar18 = param_3 & 0xfffffffffffffffc;
    iVar35 = iVar34 * 4;
    iVar36 = iVar17 * 4;
    iVar47 = iVar33 + iVar34;
    iVar48 = iVar33 + iVar34 * 2;
    iVar23 = iVar33 + iVar34 * 3;
                    /* try { // try from 00a7d160 to 00b7d1b3 has its CatchHandler @ 00a7d160
                       catch() { ... } // from try @ 00a7d160 with catch @ 00a7d160
                       catch() { ... } // from try @ 00a7d238 with catch @ 00a7d160 */
    piVar19 = param_4 + uVar18 * 2;
    piVar1 = param_2 + uVar18 * 2;
    iVar28 = iVar16 + iVar17;
    iVar26 = iVar16 + iVar17 * 2;
    iVar20 = iVar16 + iVar17 * 3;
    uVar13 = uVar18;
    iVar45 = iVar33;
    iVar46 = iVar16;
    do {
      iVar21 = *param_4;
      iVar27 = param_4[1];
      iVar22 = param_4[2];
      iVar29 = param_4[3];
      iVar24 = param_4[4];
      iVar30 = param_4[5];
      iVar25 = param_4[6];
      iVar31 = param_4[7];
      param_4 = param_4 + 8;
      iVar37 = iVar45 >> 0x10;
      iVar38 = iVar47 >> 0x10;
      iVar39 = iVar48 >> 0x10;
      iVar40 = iVar23 >> 0x10;
      iVar45 = iVar45 + iVar35;
      iVar47 = iVar47 + iVar35;
      iVar48 = iVar48 + iVar35;
      iVar23 = iVar23 + iVar35;
      uVar13 = uVar13 - 4;
      *param_2 = *param_2 + (iVar21 >> 0xc) * (iVar46 >> 0x10);
      param_2[1] = param_2[1] + (iVar27 >> 0xc) * iVar37;
      param_2[2] = param_2[2] + (iVar22 >> 0xc) * (iVar28 >> 0x10);
      param_2[3] = param_2[3] + (iVar29 >> 0xc) * iVar38;
      param_2[4] = param_2[4] + (iVar24 >> 0xc) * (iVar26 >> 0x10);
      param_2[5] = param_2[5] + (iVar30 >> 0xc) * iVar39;
      param_2[6] = param_2[6] + (iVar25 >> 0xc) * (iVar20 >> 0x10);
      param_2[7] = param_2[7] + (iVar31 >> 0xc) * iVar40;
      param_2 = param_2 + 8;
      iVar46 = iVar46 + iVar36;
      iVar28 = iVar28 + iVar36;
      iVar26 = iVar26 + iVar36;
      iVar20 = iVar20 + iVar36;
    } while (uVar13 != 0);
    bVar5 = uVar18 != param_3;
    param_4 = piVar19;
    param_3 = param_3 - uVar18;
    param_2 = piVar1;
    iVar35 = iVar33 + iVar34 * (int)uVar18;
    iVar36 = iVar16 + iVar17 * (int)uVar18;
    if (bVar5) goto LAB_00a7cee0;
  }
                    /* catch() { ... } // from try @ 00a7ce88 with catch @ 00a7cf24 */
  iVar35 = *(int *)(param_1 + 0x10);
  uVar32 = iVar16 + iVar17 * iVar15;
  uVar4 = iVar33 + iVar34 * iVar15;
  *(uint *)(param_1 + 8) = uVar32;
  *(uint *)(param_1 + 0xc) = uVar4;
  if (iVar35 < 1) {
                    /* catch() { ... } // from try @ 00a7d064 with catch @ 00a7d07c */
    if ((-1 < iVar35) ||
       (uVar3 = *(ushort *)(param_1 + 4), (int)(short)uVar3 < (int)(iVar35 + uVar32) >> 0x10))
    goto LAB_00a7d084;
LAB_00a7d09c:
                    /* try { // try from 00a7d0a0 to 00b7d0d7 has its CatchHandler @ 00a7d0a0
                       catch() { ... } // from try @ 00a7d0a0 with catch @ 00a7d0a0
                       catch() { ... } // from try @ 00a7d0e0 with catch @ 00a7d0a0 */
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(uint *)(param_1 + 8) = (uint)uVar3 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  else {
                    /* catch() { ... } // from try @ 00a7ce30 with catch @ 00a7cf3c */
    uVar3 = *(ushort *)(param_1 + 4);
    if ((int)(short)uVar3 <= (int)(iVar35 + uVar32) >> 0x10) goto LAB_00a7d09c;
LAB_00a7d084:
                    /* catch() { ... } // from try @ 00a7d054 with catch @ 00a7d08c */
    *(float *)(param_1 + 0x9c) = (float)uVar32 * 3.7252903e-09;
  }
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar15 < 1) {
                    /* try { // try from 00a7d0d8 to 00b7d0df has its CatchHandler @ 00a7d0f0 */
                    /* try { // try from 00a7d0e0 to 00b7d103 has its CatchHandler @ 00a7d0a0 */
    if ((-1 < iVar15) ||
       (uVar3 = *(ushort *)(param_1 + 6), (int)(short)uVar3 < (int)(iVar15 + uVar4) >> 0x10))
    goto LAB_00a7d0ec;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 6);
    if ((int)(iVar15 + uVar4) >> 0x10 < (int)(short)uVar3) {
LAB_00a7d0ec:
                    /* catch() { ... } // from try @ 00a7d0d8 with catch @ 00a7d0f0 */
      *(float *)(param_1 + 0xa0) = (float)uVar4 * 3.7252903e-09;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0xc) = (uint)uVar3 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
                    /* try { // try from 00a7cd5c to 00b7cd63 has its CatchHandler @ 00a7cd74 */
  return;
}

