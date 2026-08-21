
/* void cocos2d::AudioMixer::volumeMix<0, false, true, int, int, int>(int*, unsigned long, int
   const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<0,false,true,int,int,int>
               (int *param_1,ulong param_2,int *param_3,int *param_4,bool param_5,track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar20;
  undefined8 uVar19;
  int iVar21;
  int iVar23;
  undefined8 uVar22;
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
  
  uVar6 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar6 < 8) {
      iVar12 = *(int *)(param_6 + 0x18);
                    /* try { // try from 00a82938 to 00b8294f has its CatchHandler @ 00a82c80 */
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
                    /* try { // try from 00a82958 to 00b82963 has its CatchHandler @ 00a82c7c */
      switch(uVar6) {
      case 0:
        piVar10 = param_4;
        if (param_4 == (int *)0x0) {
          iVar12 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*param_3 >> 0xc) * (iVar12 >> 0x10);
            iVar12 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar12;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
                    /* try { // try from 00a82964 to 00b8296f has its CatchHandler @ 00a82c78 */
            iVar13 = *param_3;
                    /* try { // try from 00a82970 to 00b82987 has its CatchHandler @ 00a82c90 */
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (iVar13 >> 0xc);
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar10 = *piVar10 + (*(int *)ptVar3 >> 0x10) * (iVar13 >> 0xc);
            *(int *)ptVar3 = *(int *)ptVar3 + iVar12;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar10 = piVar10 + 1;
                    /* try { // try from 00a829b4 to 00b829bb has its CatchHandler @ 00a82c40 */
          } while (param_2 != 0);
        }
        break;
      case 1:
        piVar10 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (*param_3 >> 0xc);
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            piVar10 = param_3 + 1;
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (*piVar10 >> 0xc);
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
          } while (param_2 != 0);
        }
        else {
          do {
            iVar18 = *param_3;
                    /* try { // try from 00a82ab8 to 00b82ad3 has its CatchHandler @ 00a82c90 */
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (iVar18 >> 0xc);
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
                    /* try { // try from 00a82ad8 to 00b82b1b has its CatchHandler @ 00a82c40 */
            iVar13 = param_3[1];
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (iVar13 >> 0xc);
            iVar13 = iVar13 + iVar18;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            if (iVar13 < 0) {
              iVar13 = iVar13 + 1;
            }
            *piVar10 = *piVar10 + (*(int *)(param_6 + 0x1c) >> 0x10) * (iVar13 >> 0xd);
            param_2 = param_2 - 1;
            param_1 = param_1 + 2;
                    /* try { // try from 00a82b34 to 00b82b6f has its CatchHandler @ 00a82c90 */
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar12;
            piVar10 = piVar10 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        piVar10 = param_4;
        if (param_4 == (int *)0x0) {
          iVar12 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*param_3 >> 0xc) * (iVar12 >> 0x10);
                    /* try { // try from 00a82f80 to 00b82f97 has its CatchHandler @ 00a83108 */
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (param_3[1] >> 0xc);
            piVar10 = param_3 + 2;
                    /* try { // try from 00a82fa0 to 00b82fab has its CatchHandler @ 00a83104 */
            param_3 = param_3 + 3;
                    /* try { // try from 00a82fac to 00b82fb7 has its CatchHandler @ 00a83100 */
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (*piVar10 >> 0xc);
                    /* try { // try from 00a82fb8 to 00b8308b has its CatchHandler @ 00a83118 */
            param_1 = param_1 + 3;
            iVar12 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar12;
          } while (param_2 != 0);
        }
        else {
          do {
            iVar13 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (iVar13 >> 0xc);
            iVar18 = param_3[1];
                    /* try { // try from 00a82be4 to 00b82c27 has its CatchHandler @ 00a82c50 */
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (iVar18 >> 0xc);
            iVar20 = param_3[2];
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (iVar20 >> 0xc);
                    /* try { // try from 00a82c28 to 00b82ce7 has its CatchHandler @ 00a828e0 */
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
                    /* catch() { ... } // from try @ 00a829c8 with catch @ 00a82c3c */
                    /* catch() { ... } // from try @ 00a829b4 with catch @ 00a82c40
                       catch() { ... } // from try @ 00a82ad8 with catch @ 00a82c40 */
            *piVar10 = *piVar10 + (*(int *)ptVar3 >> 0x10) * ((iVar18 + iVar13 + iVar20) / 3 >> 0xc)
            ;
                    /* catch() { ... } // from try @ 00a82a54 with catch @ 00a82c50
                       catch() { ... } // from try @ 00a82be4 with catch @ 00a82c50 */
            param_3 = param_3 + 3;
            param_1 = param_1 + 3;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar12;
            piVar10 = piVar10 + 1;
          } while (param_2 != 0);
        }
        break;
      case 3:
        volumeRampMulti<3,4,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar12)
        ;
        break;
      case 4:
                    /* catch() { ... } // from try @ 00a82964 with catch @ 00a82c78 */
        volumeRampMulti<3,5,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar12)
        ;
                    /* catch() { ... } // from try @ 00a82958 with catch @ 00a82c7c */
        break;
      case 5:
                    /* catch() { ... } // from try @ 00a82938 with catch @ 00a82c80 */
        volumeRampMulti<3,6,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar12)
        ;
        break;
      case 6:
                    /* catch() { ... } // from try @ 00a82970 with catch @ 00a82c90
                       catch() { ... } // from try @ 00a829f8 with catch @ 00a82c90
                       catch() { ... } // from try @ 00a82ab8 with catch @ 00a82c90
                       catch() { ... } // from try @ 00a82b34 with catch @ 00a82c90 */
        volumeRampMulti<3,7,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar12)
        ;
        break;
      case 7:
        volumeRampMulti<3,8,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar12)
        ;
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar6 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar12 = (int)sVar4;
                    /* try { // try from 00a829c8 to 00b829d7 has its CatchHandler @ 00a82c3c */
    ptVar1 = param_6 + 4;
    switch(uVar6) {
    case 0:
      if (param_4 == (int *)0x0) {
        sVar4 = *(short *)ptVar1;
                    /* try { // try from 00a82f2c to 00b82f7f has its CatchHandler @ 00a82f2c
                       catch() { ... } // from try @ 00a82f2c with catch @ 00a82f2c
                       catch() { ... } // from try @ 00a8308c with catch @ 00a82f2c */
        if ((7 < param_2) && ((param_3 + param_2 <= param_1 || (param_1 + param_2 <= param_3)))) {
          uVar15 = param_2 & 0xfffffffffffffff8;
          iVar12 = (int)sVar4;
          piVar10 = param_1 + 4;
                    /* try { // try from 00a836e4 to 00b836fb has its CatchHandler @ 00a83910 */
          param_1 = param_1 + uVar15;
          piVar11 = param_3 + 4;
          uVar14 = uVar15;
          do {
            piVar16 = piVar11 + -2;
            uVar17 = *(undefined8 *)(piVar11 + -4);
            uVar22 = *(undefined8 *)(piVar11 + 2);
            uVar19 = *(undefined8 *)piVar11;
            uVar14 = uVar14 - 8;
                    /* try { // try from 00a83704 to 00b8370f has its CatchHandler @ 00a8390c */
            piVar11 = piVar11 + 8;
                    /* try { // try from 00a83710 to 00b8371b has its CatchHandler @ 00a83908 */
            *(ulong *)(piVar10 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar10 + -2) >> 0x20) +
                          (int)((long)*(undefined8 *)piVar16 >> 0x2c) * iVar12,
                          (int)*(undefined8 *)(piVar10 + -2) +
                          ((int)*(undefined8 *)piVar16 >> 0xc) * iVar12);
            *(ulong *)(piVar10 + -4) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar10 + -4) >> 0x20) +
                          (int)((long)uVar17 >> 0x2c) * iVar12,
                          (int)*(undefined8 *)(piVar10 + -4) + ((int)uVar17 >> 0xc) * iVar12);
            *(ulong *)(piVar10 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar10 + 2) >> 0x20) +
                          (int)((long)uVar22 >> 0x2c) * iVar12,
                          (int)*(undefined8 *)(piVar10 + 2) + ((int)uVar22 >> 0xc) * iVar12);
            *(ulong *)piVar10 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar10 >> 0x20) +
                          (int)((long)uVar19 >> 0x2c) * iVar12,
                          (int)*(undefined8 *)piVar10 + ((int)uVar19 >> 0xc) * iVar12);
                    /* try { // try from 00a8371c to 00b83733 has its CatchHandler @ 00a83920 */
            piVar10 = piVar10 + 8;
          } while (uVar14 != 0);
          bVar9 = uVar15 == param_2;
          param_3 = param_3 + uVar15;
          param_2 = param_2 - uVar15;
          if (bVar9) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * (int)sVar4;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        sVar4 = *(short *)ptVar1;
        iVar13 = (int)sVar4;
        if (3 < param_2) {
                    /* try { // try from 00a829f8 to 00b82a3b has its CatchHandler @ 00a82c90 */
          if (((param_4 + param_2 <= param_1 || param_1 + param_2 <= param_4) &&
              (param_3 + param_2 <= param_1 || param_1 + param_2 <= param_3)) &&
             (param_3 + param_2 <= param_4 || param_4 + param_2 <= param_3)) {
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a82a54 to 00b82a87 has its CatchHandler @ 00a82c50 */
            piVar10 = param_1;
            piVar11 = param_3;
            uVar14 = uVar15;
            piVar16 = param_4;
            do {
              uVar14 = uVar14 - 4;
              iVar18 = (int)*(undefined8 *)piVar11 >> 0xc;
              iVar20 = (int)((long)*(undefined8 *)piVar11 >> 0x2c);
              iVar21 = (int)*(undefined8 *)(piVar11 + 2) >> 0xc;
              iVar23 = (int)((long)*(undefined8 *)(piVar11 + 2) >> 0x2c);
              *(ulong *)(piVar10 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar10 + 2) >> 0x20) + iVar23 * iVar13,
                            (int)*(undefined8 *)(piVar10 + 2) + iVar21 * iVar13);
              *(ulong *)piVar10 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar10 >> 0x20) + iVar20 * sVar4,
                            (int)*(undefined8 *)piVar10 + iVar18 * sVar4);
              *(ulong *)(piVar16 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) + iVar23 * iVar12,
                            (int)*(undefined8 *)(piVar16 + 2) + iVar21 * iVar12);
              *(ulong *)piVar16 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) + iVar20 * iVar12,
                            (int)*(undefined8 *)piVar16 + iVar18 * iVar12);
              piVar10 = piVar10 + 4;
              piVar11 = piVar11 + 4;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
            bVar9 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_4 = param_4 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = param_1 + uVar15;
            if (bVar9) {
              return;
            }
          }
        }
        do {
          iVar18 = *param_3;
          param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a82d68 with catch @ 00a82ebc */
                    /* catch() { ... } // from try @ 00a82d5c with catch @ 00a82ec0 */
          *param_1 = *param_1 + (iVar18 >> 0xc) * iVar13;
                    /* catch() { ... } // from try @ 00a82d3c with catch @ 00a82ec4 */
          *param_4 = *param_4 + (iVar18 >> 0xc) * iVar12;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        sVar4 = *(short *)ptVar1;
        sVar5 = *(short *)(param_6 + 6);
        if (3 < param_2) {
                    /* try { // try from 00a83498 to 00b834a3 has its CatchHandler @ 00a83620 */
          uVar14 = (param_2 - 1) * 8;
                    /* try { // try from 00a834a4 to 00b835b3 has its CatchHandler @ 00a83638 */
          if (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             ((uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0 &&
              ((param_3 + param_2 * 2 <= param_1 || (param_1 + param_2 * 2 <= param_3)))))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
            iVar12 = (int)sVar4;
            piVar10 = param_3 + uVar15 * 2;
            piVar11 = param_1 + uVar15 * 2;
            iVar13 = (int)sVar5;
            uVar14 = uVar15;
            do {
              iVar18 = *param_3;
              iVar24 = param_3[1];
              iVar20 = param_3[2];
              iVar25 = param_3[3];
              iVar21 = param_3[4];
              iVar26 = param_3[5];
              iVar23 = param_3[6];
              iVar27 = param_3[7];
              param_3 = param_3 + 8;
              uVar14 = uVar14 - 4;
              *param_1 = *param_1 + (iVar18 >> 0xc) * iVar12;
              param_1[1] = param_1[1] + (iVar24 >> 0xc) * iVar13;
              param_1[2] = param_1[2] + (iVar20 >> 0xc) * iVar12;
              param_1[3] = param_1[3] + (iVar25 >> 0xc) * iVar13;
              param_1[4] = param_1[4] + (iVar21 >> 0xc) * iVar12;
              param_1[5] = param_1[5] + (iVar26 >> 0xc) * iVar13;
              param_1[6] = param_1[6] + (iVar23 >> 0xc) * iVar12;
              param_1[7] = param_1[7] + (iVar27 >> 0xc) * iVar13;
              param_1 = param_1 + 8;
            } while (uVar14 != 0);
            bVar9 = uVar15 == param_2;
            param_3 = piVar10;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar9) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * (int)sVar4;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * (int)sVar5;
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        sVar4 = *(short *)ptVar1;
        sVar5 = *(short *)(param_6 + 6);
        if (3 < param_2) {
                    /* catch() { ... } // from try @ 00a82fb8 with catch @ 00a83118 */
          uVar14 = (param_2 - 1) * 8;
          if (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)) {
                    /* try { // try from 00a83170 to 00b831c3 has its CatchHandler @ 00a83170
                       catch() { ... } // from try @ 00a83170 with catch @ 00a83170
                       catch() { ... } // from try @ 00a83334 with catch @ 00a83170 */
            if (((param_4 + param_2 <= param_1 || param_1 + param_2 * 2 <= param_4) &&
                (param_3 + param_2 * 2 <= param_1 || param_1 + param_2 * 2 <= param_3)) &&
               (param_3 + param_2 * 2 <= param_4 || param_4 + param_2 <= param_3)) {
              uVar15 = param_2 & 0xfffffffffffffffc;
              iVar13 = (int)sVar4;
              iVar18 = (int)sVar5;
              piVar10 = param_3 + uVar15 * 2;
              piVar11 = param_1 + uVar15 * 2;
                    /* try { // try from 00a831c4 to 00b831db has its CatchHandler @ 00a833b0 */
              uVar14 = uVar15;
              piVar16 = param_4;
              do {
                iVar20 = *param_3;
                iVar21 = param_3[1];
                iVar23 = param_3[2];
                iVar24 = param_3[3];
                iVar25 = param_3[4];
                iVar26 = param_3[5];
                iVar27 = param_3[6];
                iVar28 = param_3[7];
                param_3 = param_3 + 8;
                uVar14 = uVar14 - 4;
                    /* try { // try from 00a831e4 to 00b831ef has its CatchHandler @ 00a833ac */
                *param_1 = *param_1 + (iVar20 >> 0xc) * iVar13;
                param_1[1] = param_1[1] + (iVar21 >> 0xc) * iVar18;
                param_1[2] = param_1[2] + (iVar23 >> 0xc) * iVar13;
                param_1[3] = param_1[3] + (iVar24 >> 0xc) * iVar18;
                param_1[4] = param_1[4] + (iVar25 >> 0xc) * iVar13;
                param_1[5] = param_1[5] + (iVar26 >> 0xc) * iVar18;
                param_1[6] = param_1[6] + (iVar27 >> 0xc) * iVar13;
                param_1[7] = param_1[7] + (iVar28 >> 0xc) * iVar18;
                param_1 = param_1 + 8;
                    /* try { // try from 00a831f0 to 00b831fb has its CatchHandler @ 00a833a8 */
                iVar21 = iVar21 + iVar20;
                iVar24 = iVar24 + iVar23;
                iVar26 = iVar26 + iVar25;
                iVar28 = iVar28 + iVar27;
                    /* try { // try from 00a831fc to 00b83333 has its CatchHandler @ 00a833c0 */
                *(ulong *)(piVar16 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) +
                              (iVar28 - (iVar28 >> 0x1f) >> 0xd) * iVar12,
                              (int)*(undefined8 *)(piVar16 + 2) +
                              (iVar26 - (iVar26 >> 0x1f) >> 0xd) * iVar12);
                *(ulong *)piVar16 =
                     CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) +
                              (iVar24 - (iVar24 >> 0x1f) >> 0xd) * iVar12,
                              (int)*(undefined8 *)piVar16 +
                              (iVar21 - (iVar21 >> 0x1f) >> 0xd) * iVar12);
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
              bVar9 = uVar15 == param_2;
              param_3 = piVar10;
              param_4 = param_4 + uVar15;
              param_2 = param_2 - uVar15;
              param_1 = piVar11;
              if (bVar9) {
                return;
              }
            }
          }
        }
        do {
          iVar13 = *param_3;
          *param_1 = *param_1 + (iVar13 >> 0xc) * (int)sVar4;
          iVar13 = param_3[1] + iVar13;
                    /* try { // try from 00a82ce8 to 00b82d3b has its CatchHandler @ 00a82ce8
                       catch() { ... } // from try @ 00a82ce8 with catch @ 00a82ce8
                       catch() { ... } // from try @ 00a82e48 with catch @ 00a82ce8 */
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * (int)sVar5;
          if (iVar13 < 0) {
            iVar13 = iVar13 + 1;
          }
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar13 >> 0xd) * iVar12;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      iVar13 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_2 - 1;
          uVar14 = (param_2 - 1) * 0xc;
          if ((((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0) &&
               (SUB168(auVar8 * ZEXT816(0xc),8) == 0)) &&
              (uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0)) &&
             ((uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0 &&
              ((param_3 + param_2 * 3 <= param_1 || (param_1 + param_2 * 3 <= param_3)))))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a835b4 to 00b8368f has its CatchHandler @ 00a83418 */
            piVar10 = param_3 + uVar15 * 3;
            piVar11 = param_1 + uVar15 * 3;
            uVar14 = uVar15;
            do {
              iVar12 = *param_3;
              iVar23 = param_3[1];
              iVar27 = param_3[2];
              iVar18 = param_3[3];
              iVar24 = param_3[4];
              iVar28 = param_3[5];
              iVar20 = param_3[6];
              iVar25 = param_3[7];
              iVar29 = param_3[8];
              iVar21 = param_3[9];
              iVar26 = param_3[10];
              iVar30 = param_3[0xb];
              param_3 = param_3 + 0xc;
              uVar14 = uVar14 - 4;
              *param_1 = *param_1 + (iVar12 >> 0xc) * iVar13;
              param_1[1] = param_1[1] + (iVar23 >> 0xc) * iVar13;
              param_1[2] = param_1[2] + (iVar27 >> 0xc) * iVar13;
              param_1[3] = param_1[3] + (iVar18 >> 0xc) * iVar13;
              param_1[4] = param_1[4] + (iVar24 >> 0xc) * iVar13;
              param_1[5] = param_1[5] + (iVar28 >> 0xc) * iVar13;
              param_1[6] = param_1[6] + (iVar20 >> 0xc) * iVar13;
              param_1[7] = param_1[7] + (iVar25 >> 0xc) * iVar13;
              param_1[8] = param_1[8] + (iVar29 >> 0xc) * iVar13;
              param_1[9] = param_1[9] + (iVar21 >> 0xc) * iVar13;
              param_1[10] = param_1[10] + (iVar26 >> 0xc) * iVar13;
              param_1[0xb] = param_1[0xb] + (iVar30 >> 0xc) * iVar13;
              param_1 = param_1 + 0xc;
            } while (uVar14 != 0);
            bVar9 = uVar15 == param_2;
            param_3 = piVar10;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar9) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * iVar13;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar13;
                    /* try { // try from 00a8308c to 00b8316f has its CatchHandler @ 00a82f2c */
          param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar13;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = param_2 - 1;
          uVar14 = (param_2 - 1) * 0xc;
          if (((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0) &&
              (SUB168(auVar7 * ZEXT816(0xc),8) == 0)) &&
             ((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
              (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)))) {
            if (((param_4 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_4) &&
                (param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3)) &&
               (param_3 + param_2 * 3 <= param_4 || param_4 + param_2 <= param_3)) {
              uVar15 = param_2 & 0xfffffffffffffffc;
              piVar10 = param_3 + uVar15 * 3;
              piVar11 = param_1 + uVar15 * 3;
              uVar14 = uVar15;
              piVar16 = param_4;
              do {
                iVar18 = *param_3;
                iVar24 = param_3[1];
                iVar28 = param_3[2];
                iVar20 = param_3[3];
                iVar25 = param_3[4];
                iVar29 = param_3[5];
                iVar21 = param_3[6];
                iVar26 = param_3[7];
                iVar30 = param_3[8];
                iVar23 = param_3[9];
                iVar27 = param_3[10];
                iVar31 = param_3[0xb];
                param_3 = param_3 + 0xc;
                uVar14 = uVar14 - 4;
                *param_1 = *param_1 + (iVar18 >> 0xc) * iVar13;
                param_1[1] = param_1[1] + (iVar24 >> 0xc) * iVar13;
                param_1[2] = param_1[2] + (iVar28 >> 0xc) * iVar13;
                param_1[3] = param_1[3] + (iVar20 >> 0xc) * iVar13;
                param_1[4] = param_1[4] + (iVar25 >> 0xc) * iVar13;
                param_1[5] = param_1[5] + (iVar29 >> 0xc) * iVar13;
                param_1[6] = param_1[6] + (iVar21 >> 0xc) * iVar13;
                param_1[7] = param_1[7] + (iVar26 >> 0xc) * iVar13;
                param_1[8] = param_1[8] + (iVar30 >> 0xc) * iVar13;
                param_1[9] = param_1[9] + (iVar23 >> 0xc) * iVar13;
                param_1[10] = param_1[10] + (iVar27 >> 0xc) * iVar13;
                param_1[0xb] = param_1[0xb] + (iVar31 >> 0xc) * iVar13;
                param_1 = param_1 + 0xc;
                    /* try { // try from 00a83334 to 00b83417 has its CatchHandler @ 00a83170 */
                *(ulong *)(piVar16 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) +
                              ((iVar27 + iVar23 + iVar31) / 3 >> 0xc) * iVar12,
                              (int)*(undefined8 *)(piVar16 + 2) +
                              ((iVar26 + iVar21 + iVar30) / 3 >> 0xc) * iVar12);
                *(ulong *)piVar16 =
                     CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) +
                              ((iVar25 + iVar20 + iVar29) / 3 >> 0xc) * iVar12,
                              (int)*(undefined8 *)piVar16 +
                              ((iVar24 + iVar18 + iVar28) / 3 >> 0xc) * iVar12);
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
              bVar9 = uVar15 == param_2;
              param_3 = piVar10;
              param_4 = param_4 + uVar15;
              param_2 = param_2 - uVar15;
              param_1 = piVar11;
              if (bVar9) {
                return;
              }
            }
          }
        }
        do {
          iVar18 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (iVar18 >> 0xc) * iVar13;
                    /* try { // try from 00a82d5c to 00b82d67 has its CatchHandler @ 00a82ec0 */
          iVar20 = param_3[1];
                    /* try { // try from 00a82d68 to 00b82d73 has its CatchHandler @ 00a82ebc */
          param_1[1] = param_1[1] + (iVar20 >> 0xc) * iVar13;
          iVar21 = param_3[2];
                    /* try { // try from 00a82d74 to 00b82e47 has its CatchHandler @ 00a82ed4 */
          param_1[2] = param_1[2] + (iVar21 >> 0xc) * iVar13;
          *param_4 = *param_4 + ((iVar20 + iVar18 + iVar21) / 3 >> 0xc) * iVar12;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      sVar4 = *(short *)ptVar1;
      iVar13 = (int)sVar4;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar14 = (param_2 - 1) * 0x10;
                    /* catch() { ... } // from try @ 00a83498 with catch @ 00a83620 */
                    /* catch() { ... } // from try @ 00a8348c with catch @ 00a83624 */
                    /* catch() { ... } // from try @ 00a8346c with catch @ 00a83628 */
                    /* catch() { ... } // from try @ 00a834a4 with catch @ 00a83638 */
          if ((((uVar14 < ~(ulong)(param_1 + 3) || uVar14 - ~(ulong)(param_1 + 3) == 0) &&
               (param_2 - 1 >> 0x3c == 0)) &&
              (uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0)) &&
             (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
               (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)) &&
              ((param_3 + param_2 * 4 <= param_1 || (param_1 + param_2 * 4 <= param_3)))))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
            piVar10 = param_3 + uVar15 * 4;
            piVar11 = param_1 + uVar15 * 4;
                    /* try { // try from 00a83690 to 00b836e3 has its CatchHandler @ 00a83690
                       catch() { ... } // from try @ 00a83690 with catch @ 00a83690
                       catch() { ... } // from try @ 00a838dc with catch @ 00a83690 */
            uVar14 = uVar15;
            do {
              iVar12 = *param_3;
              iVar23 = param_3[1];
              iVar27 = param_3[2];
              iVar31 = param_3[3];
              iVar18 = param_3[4];
              iVar24 = param_3[5];
              iVar28 = param_3[6];
              iVar32 = param_3[7];
              iVar20 = param_3[8];
              iVar25 = param_3[9];
              iVar29 = param_3[10];
              iVar33 = param_3[0xb];
              iVar21 = param_3[0xc];
              iVar26 = param_3[0xd];
              iVar30 = param_3[0xe];
              iVar34 = param_3[0xf];
              param_3 = param_3 + 0x10;
              uVar14 = uVar14 - 4;
              *param_1 = *param_1 + (iVar12 >> 0xc) * iVar13;
              param_1[1] = param_1[1] + (iVar23 >> 0xc) * iVar13;
              param_1[2] = param_1[2] + (iVar27 >> 0xc) * iVar13;
              param_1[3] = param_1[3] + (iVar31 >> 0xc) * iVar13;
              param_1[4] = param_1[4] + (iVar18 >> 0xc) * iVar13;
              param_1[5] = param_1[5] + (iVar24 >> 0xc) * iVar13;
              param_1[6] = param_1[6] + (iVar28 >> 0xc) * iVar13;
              param_1[7] = param_1[7] + (iVar32 >> 0xc) * iVar13;
              param_1[8] = param_1[8] + (iVar20 >> 0xc) * iVar13;
              param_1[9] = param_1[9] + (iVar25 >> 0xc) * iVar13;
              param_1[10] = param_1[10] + (iVar29 >> 0xc) * iVar13;
              param_1[0xb] = param_1[0xb] + (iVar33 >> 0xc) * iVar13;
              param_1[0xc] = param_1[0xc] + (iVar21 >> 0xc) * iVar13;
              param_1[0xd] = param_1[0xd] + (iVar26 >> 0xc) * iVar13;
              param_1[0xe] = param_1[0xe] + (iVar30 >> 0xc) * iVar13;
              param_1[0xf] = param_1[0xf] + (iVar34 >> 0xc) * iVar13;
              param_1 = param_1 + 0x10;
            } while (uVar14 != 0);
            bVar9 = uVar15 == param_2;
            param_3 = piVar10;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar9) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * iVar13;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar13;
          param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar13;
                    /* catch() { ... } // from try @ 00a82fac with catch @ 00a83100 */
          param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar13;
                    /* catch() { ... } // from try @ 00a82fa0 with catch @ 00a83104 */
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
                    /* catch() { ... } // from try @ 00a82f80 with catch @ 00a83108 */
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          uVar14 = (param_2 - 1) * 0x10;
                    /* catch() { ... } // from try @ 00a831f0 with catch @ 00a833a8 */
                    /* catch() { ... } // from try @ 00a831e4 with catch @ 00a833ac */
          if (((uVar14 < ~(ulong)(param_1 + 3) || uVar14 - ~(ulong)(param_1 + 3) == 0) &&
              (param_2 - 1 >> 0x3c == 0)) &&
             ((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0 &&
              ((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
               (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)))))) {
                    /* catch() { ... } // from try @ 00a831c4 with catch @ 00a833b0 */
                    /* catch() { ... } // from try @ 00a831fc with catch @ 00a833c0 */
            if ((param_4 + param_2 <= param_1 || param_1 + param_2 * 4 <= param_4) &&
               ((param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3 &&
                (param_3 + param_2 * 4 <= param_4 || param_4 + param_2 <= param_3)))) {
              uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a83418 to 00b8346b has its CatchHandler @ 00a83418
                       catch() { ... } // from try @ 00a83418 with catch @ 00a83418
                       catch() { ... } // from try @ 00a835b4 with catch @ 00a83418 */
              piVar10 = param_3 + uVar15 * 4;
              piVar11 = param_1 + uVar15 * 4;
              uVar14 = uVar15;
              piVar16 = param_4;
              do {
                iVar18 = *param_3;
                iVar24 = param_3[1];
                iVar28 = param_3[2];
                iVar32 = param_3[3];
                iVar20 = param_3[4];
                iVar25 = param_3[5];
                iVar29 = param_3[6];
                iVar33 = param_3[7];
                iVar21 = param_3[8];
                iVar26 = param_3[9];
                iVar30 = param_3[10];
                iVar34 = param_3[0xb];
                iVar23 = param_3[0xc];
                iVar27 = param_3[0xd];
                iVar31 = param_3[0xe];
                iVar35 = param_3[0xf];
                param_3 = param_3 + 0x10;
                uVar14 = uVar14 - 4;
                *param_1 = *param_1 + (iVar18 >> 0xc) * iVar13;
                param_1[1] = param_1[1] + (iVar24 >> 0xc) * iVar13;
                param_1[2] = param_1[2] + (iVar28 >> 0xc) * iVar13;
                param_1[3] = param_1[3] + (iVar32 >> 0xc) * iVar13;
                param_1[4] = param_1[4] + (iVar20 >> 0xc) * iVar13;
                param_1[5] = param_1[5] + (iVar25 >> 0xc) * iVar13;
                param_1[6] = param_1[6] + (iVar29 >> 0xc) * iVar13;
                param_1[7] = param_1[7] + (iVar33 >> 0xc) * iVar13;
                param_1[8] = param_1[8] + (iVar21 >> 0xc) * iVar13;
                param_1[9] = param_1[9] + (iVar26 >> 0xc) * iVar13;
                param_1[10] = param_1[10] + (iVar30 >> 0xc) * iVar13;
                param_1[0xb] = param_1[0xb] + (iVar34 >> 0xc) * iVar13;
                param_1[0xc] = param_1[0xc] + (iVar23 >> 0xc) * iVar13;
                param_1[0xd] = param_1[0xd] + (iVar27 >> 0xc) * iVar13;
                param_1[0xe] = param_1[0xe] + (iVar31 >> 0xc) * iVar13;
                param_1[0xf] = param_1[0xf] + (iVar35 >> 0xc) * iVar13;
                param_1 = param_1 + 0x10;
                iVar32 = iVar24 + iVar18 + iVar28 + iVar32;
                iVar33 = iVar25 + iVar20 + iVar29 + iVar33;
                iVar34 = iVar26 + iVar21 + iVar30 + iVar34;
                iVar35 = iVar27 + iVar23 + iVar31 + iVar35;
                    /* try { // try from 00a8346c to 00b83483 has its CatchHandler @ 00a83628 */
                *(ulong *)(piVar16 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) +
                              ((int)(iVar35 + ((uint)(iVar35 >> 0x1f) >> 0x1e)) >> 0xe) * iVar12,
                              (int)*(undefined8 *)(piVar16 + 2) +
                              ((int)(iVar34 + ((uint)(iVar34 >> 0x1f) >> 0x1e)) >> 0xe) * iVar12);
                *(ulong *)piVar16 =
                     CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) +
                              ((int)(iVar33 + ((uint)(iVar33 >> 0x1f) >> 0x1e)) >> 0xe) * iVar12,
                              (int)*(undefined8 *)piVar16 +
                              ((int)(iVar32 + ((uint)(iVar32 >> 0x1f) >> 0x1e)) >> 0xe) * iVar12);
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
              bVar9 = uVar15 == param_2;
              param_3 = piVar10;
              param_4 = param_4 + uVar15;
              param_2 = param_2 - uVar15;
              param_1 = piVar11;
                    /* try { // try from 00a8348c to 00b83497 has its CatchHandler @ 00a83624 */
              if (bVar9) {
                return;
              }
            }
          }
        }
        do {
          iVar18 = *param_3;
          *param_1 = *param_1 + (iVar18 >> 0xc) * (int)sVar4;
          iVar20 = param_3[1];
          param_1[1] = param_1[1] + (iVar20 >> 0xc) * (int)sVar4;
          iVar21 = param_3[2];
          param_1[2] = param_1[2] + (iVar21 >> 0xc) * (int)sVar4;
          iVar13 = param_3[3];
          param_1[3] = param_1[3] + (iVar13 >> 0xc) * (int)sVar4;
          iVar13 = iVar20 + iVar18 + iVar21 + iVar13;
          iVar18 = iVar13 + 3;
          if (-1 < iVar13) {
            iVar18 = iVar13;
          }
                    /* try { // try from 00a82e48 to 00b82f2b has its CatchHandler @ 00a82ce8 */
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar18 >> 0xe) * iVar12;
          param_3 = param_3 + 4;
          param_4 = param_4 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      break;
    case 4:
      volumeMulti<3,5,int,int,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    case 5:
      volumeMulti<3,6,int,int,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    case 6:
      volumeMulti<3,7,int,int,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    case 7:
      volumeMulti<3,8,int,int,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    }
  }
  return;
}

