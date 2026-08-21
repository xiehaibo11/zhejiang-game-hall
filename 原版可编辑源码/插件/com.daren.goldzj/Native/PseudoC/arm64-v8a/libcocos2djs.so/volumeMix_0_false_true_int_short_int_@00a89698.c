
/* void cocos2d::AudioMixer::volumeMix<0, false, true, int, short, int>(int*, unsigned long, short
   const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<0,false,true,int,short,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,track_t *param_6
               )

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  short sVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  short sVar22;
  short sVar23;
  short sVar24;
  undefined8 uVar21;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  uint uVar37;
  
  uVar37 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar37 < 8) {
      iVar9 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
      switch(uVar37) {
      case 0:
        piVar7 = param_4;
        if (param_4 == (int *)0x0) {
          iVar9 = *(int *)ptVar1;
          do {
                    /* try { // try from 00a89c34 to 00b89c87 has its CatchHandler @ 00a89c34
                       catch() { ... } // from try @ 00a89c34 with catch @ 00a89c34
                       catch() { ... } // from try @ 00a89e20 with catch @ 00a89c34 */
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar9 >> 0x10) * (int)*param_3;
            iVar9 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar9;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar14 = *param_3;
            param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a89650 with catch @ 00a89704 */
                    /* catch() { ... } // from try @ 00a89600 with catch @ 00a89708 */
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar14;
                    /* catch() { ... } // from try @ 00a89658 with catch @ 00a8970c */
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
                    /* catch() { ... } // from try @ 00a895ec with catch @ 00a8971c */
                    /* catch() { ... } // from try @ 00a895c0 with catch @ 00a89720 */
            *piVar7 = *piVar7 + (*(int *)ptVar3 >> 0x10) * (int)sVar14;
                    /* catch() { ... } // from try @ 00a89638 with catch @ 00a89730 */
            *(int *)ptVar3 = *(int *)ptVar3 + iVar9;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar7 = piVar7 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
                    /* try { // try from 00a897cc to 00b89823 has its CatchHandler @ 00a89854 */
        piVar7 = param_4;
        if (param_4 == (int *)0x0) {
          do {
                    /* catch() { ... } // from try @ 00a898cc with catch @ 00a89868 */
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)*param_3;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            psVar8 = param_3 + 1;
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)*psVar8;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
          } while (param_2 != 0);
        }
        else {
          do {
            sVar14 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)sVar14;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            sVar20 = param_3[1];
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)sVar20;
                    /* try { // try from 00a89824 to 00b89867 has its CatchHandler @ 00a89788 */
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            *piVar7 = *piVar7 + (*(int *)(param_6 + 0x1c) >> 0x10) *
                                ((int)sVar20 + (int)sVar14 >> 1);
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar9;
            piVar7 = piVar7 + 1;
                    /* catch() { ... } // from try @ 00a897cc with catch @ 00a89854 */
          } while (param_2 != 0);
        }
        break;
      case 2:
        piVar7 = param_4;
        if (param_4 == (int *)0x0) {
          iVar9 = *(int *)ptVar1;
          do {
                    /* try { // try from 00a89c88 to 00b89c9f has its CatchHandler @ 00a89e9c */
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar9 >> 0x10) * (int)*param_3;
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (int)param_3[1];
                    /* try { // try from 00a89ca8 to 00b89cb3 has its CatchHandler @ 00a89e98 */
            psVar8 = param_3 + 2;
                    /* try { // try from 00a89cb4 to 00b89cbf has its CatchHandler @ 00a89e94 */
            param_3 = param_3 + 3;
                    /* try { // try from 00a89cc0 to 00b89e1f has its CatchHandler @ 00a89eac */
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (int)*psVar8;
            param_1 = param_1 + 3;
            iVar9 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar9;
          } while (param_2 != 0);
        }
        else {
          do {
                    /* try { // try from 00a898cc to 00b899eb has its CatchHandler @ 00a89868 */
            sVar14 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar14;
            sVar20 = param_3[1];
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (int)sVar20;
            sVar22 = param_3[2];
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (int)sVar22;
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar7 = *piVar7 + (*(int *)ptVar3 >> 0x10) *
                                ((((int)sVar20 + (int)sVar14 + (int)sVar22) * 0x1000) / 3 >> 0xc);
            param_3 = param_3 + 3;
            param_1 = param_1 + 3;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar9;
            piVar7 = piVar7 + 1;
          } while (param_2 != 0);
        }
        break;
      case 3:
        volumeRampMulti<3,4,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar9);
        break;
      case 4:
        volumeRampMulti<3,5,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar9);
        break;
      case 5:
        volumeRampMulti<3,6,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar9);
        break;
      case 6:
        volumeRampMulti<3,7,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar9);
        break;
      case 7:
        volumeRampMulti<3,8,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar9);
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar37 < 8) {
    sVar14 = *(short *)(param_6 + 0x20);
    iVar9 = (int)sVar14;
    ptVar1 = param_6 + 4;
    switch(uVar37) {
    case 0:
      if (param_4 == (int *)0x0) {
        iVar9 = (int)*(short *)ptVar1;
        if (7 < param_2) {
          uVar12 = param_2 & 0xfffffffffffffff8;
          iVar10 = (int)*(short *)ptVar1;
          piVar7 = param_1 + 4;
          param_1 = param_1 + uVar12;
          psVar8 = param_3 + 4;
          uVar11 = uVar12;
          do {
            uVar15 = *(undefined8 *)(psVar8 + -4);
            uVar21 = *(undefined8 *)psVar8;
            uVar11 = uVar11 - 8;
            psVar8 = psVar8 + 8;
            iVar17 = (int)((ulong)*(undefined8 *)(piVar7 + -4) >> 0x20) +
                     iVar10 * (short)((ulong)uVar15 >> 0x10);
            iVar16 = (int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                     iVar10 * (short)((ulong)uVar21 >> 0x10);
            *(ulong *)(piVar7 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20) +
                          iVar9 * (short)((ulong)uVar15 >> 0x30),
                          (int)*(undefined8 *)(piVar7 + -2) + iVar9 * (short)((ulong)uVar15 >> 0x20)
                         );
            *(ulong *)(piVar7 + -4) =
                 CONCAT26((short)((uint)iVar17 >> 0x10),
                          CONCAT24((short)iVar17,
                                   (int)*(undefined8 *)(piVar7 + -4) + iVar10 * (short)uVar15));
            *(ulong *)(piVar7 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                          iVar9 * (short)((ulong)uVar21 >> 0x30),
                          (int)*(undefined8 *)(piVar7 + 2) + iVar9 * (short)((ulong)uVar21 >> 0x20))
            ;
            *(ulong *)piVar7 =
                 CONCAT26((short)((uint)iVar16 >> 0x10),
                          CONCAT24((short)iVar16,(int)*(undefined8 *)piVar7 + iVar10 * (short)uVar21
                                  ));
            piVar7 = piVar7 + 8;
          } while (uVar11 != 0);
                    /* try { // try from 00a8a0d0 to 00b8a1b7 has its CatchHandler @ 00a89f04 */
          bVar6 = uVar12 == param_2;
          param_3 = param_3 + uVar12;
          param_2 = param_2 - uVar12;
          if (bVar6) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * iVar9;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        sVar20 = *(short *)ptVar1;
                    /* try { // try from 00a89788 to 00b897cb has its CatchHandler @ 00a89788
                       catch() { ... } // from try @ 00a89788 with catch @ 00a89788
                       catch() { ... } // from try @ 00a89824 with catch @ 00a89788 */
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 <= param_4)))) {
          uVar12 = param_2 & 0xfffffffffffffffc;
          iVar10 = (int)sVar20;
          piVar7 = param_1;
          psVar8 = param_3;
          uVar11 = uVar12;
          piVar13 = param_4;
          do {
            uVar15 = *(undefined8 *)psVar8;
            uVar11 = uVar11 - 4;
            iVar16 = (int)(short)((ulong)uVar15 >> 0x10);
            iVar18 = (int)(short)((ulong)uVar15 >> 0x20);
            iVar19 = (int)(short)((ulong)uVar15 >> 0x30);
            iVar17 = (int)((ulong)*(undefined8 *)piVar7 >> 0x20) + iVar10 * iVar16;
            *(ulong *)(piVar7 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) + iVar10 * iVar19,
                          (int)*(undefined8 *)(piVar7 + 2) + iVar10 * iVar18);
            *(ulong *)piVar7 =
                 CONCAT26((short)((uint)iVar17 >> 0x10),
                          CONCAT24((short)iVar17,(int)*(undefined8 *)piVar7 + iVar10 * (short)uVar15
                                  ));
            iVar17 = (int)((ulong)*(undefined8 *)piVar13 >> 0x20) + iVar9 * iVar16;
            *(ulong *)(piVar13 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar13 + 2) >> 0x20) + iVar9 * iVar19,
                          (int)*(undefined8 *)(piVar13 + 2) + iVar9 * iVar18);
            *(ulong *)piVar13 =
                 CONCAT26((short)((uint)iVar17 >> 0x10),
                          CONCAT24((short)iVar17,(int)*(undefined8 *)piVar13 + iVar9 * (short)uVar15
                                  ));
            piVar7 = piVar7 + 4;
            psVar8 = psVar8 + 4;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
          bVar6 = uVar12 == param_2;
          param_3 = param_3 + uVar12;
          param_4 = param_4 + uVar12;
          param_2 = param_2 - uVar12;
          param_1 = param_1 + uVar12;
          if (bVar6) {
            return;
          }
        }
        do {
          sVar22 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (int)sVar22 * (int)sVar20;
          *param_4 = *param_4 + (int)sVar22 * (int)sVar14;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        iVar9 = (int)*(short *)ptVar1;
        iVar10 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar11 = (param_2 - 1) * 8;
          if (((uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            psVar8 = param_3 + uVar12 * 2;
            piVar7 = param_1 + uVar12 * 2;
            uVar11 = uVar12;
            do {
              sVar14 = *param_3;
              sVar24 = param_3[1];
              sVar20 = param_3[2];
              sVar25 = param_3[3];
              sVar22 = param_3[4];
              sVar26 = param_3[5];
              sVar23 = param_3[6];
              sVar27 = param_3[7];
              param_3 = param_3 + 8;
                    /* catch() { ... } // from try @ 00a89f88 with catch @ 00a8a148 */
                    /* catch() { ... } // from try @ 00a89f7c with catch @ 00a8a14c */
              uVar11 = uVar11 - 4;
                    /* catch() { ... } // from try @ 00a89f5c with catch @ 00a8a150 */
                    /* catch() { ... } // from try @ 00a89f94 with catch @ 00a8a160 */
              *param_1 = *param_1 + iVar9 * sVar14;
              param_1[1] = param_1[1] + iVar10 * sVar24;
              param_1[2] = param_1[2] + iVar9 * sVar20;
              param_1[3] = param_1[3] + iVar10 * sVar25;
              param_1[4] = param_1[4] + iVar9 * sVar22;
              param_1[5] = param_1[5] + iVar10 * sVar26;
              param_1[6] = param_1[6] + iVar9 * sVar23;
              param_1[7] = param_1[7] + iVar10 * sVar27;
              param_1 = param_1 + 8;
            } while (uVar11 != 0);
            bVar6 = uVar12 == param_2;
            param_2 = param_2 - uVar12;
            param_3 = psVar8;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + param_3[1] * iVar10,
                        (int)*(undefined8 *)param_1 + *param_3 * iVar9);
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        iVar10 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar11 = (param_2 - 1) * 8;
                    /* try { // try from 00a89e20 to 00b89f03 has its CatchHandler @ 00a89c34 */
          if (((uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             ((uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0 &&
              ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 2 <= param_4)))))) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            piVar7 = param_1 + uVar12 * 2;
            psVar8 = param_3 + uVar12 * 2;
            uVar11 = uVar12;
            piVar13 = param_4;
            do {
              sVar14 = *param_3;
              sVar24 = param_3[1];
              sVar20 = param_3[2];
              sVar25 = param_3[3];
              sVar22 = param_3[4];
              sVar26 = param_3[5];
              sVar23 = param_3[6];
              sVar27 = param_3[7];
              param_3 = param_3 + 8;
              uVar11 = uVar11 - 4;
              *param_1 = *param_1 + iVar10 * sVar14;
              param_1[1] = param_1[1] + iVar17 * sVar24;
              param_1[2] = param_1[2] + iVar10 * sVar20;
              param_1[3] = param_1[3] + iVar17 * sVar25;
              param_1[4] = param_1[4] + iVar10 * sVar22;
              param_1[5] = param_1[5] + iVar17 * sVar26;
              param_1[6] = param_1[6] + iVar10 * sVar23;
              param_1[7] = param_1[7] + iVar17 * sVar27;
              param_1 = param_1 + 8;
              iVar16 = (int)sVar24 + (int)sVar14;
              iVar18 = (int)sVar25 + (int)sVar20;
              *(ulong *)(piVar13 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar13 + 2) >> 0x20) +
                            ((int)sVar27 + (int)sVar23 >> 1) * iVar9,
                            (int)*(undefined8 *)(piVar13 + 2) +
                            ((int)sVar26 + (int)sVar22 >> 1) * iVar9);
              *(ulong *)piVar13 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar13 >> 0x20) +
                            CONCAT22((short)(iVar18 >> 0x11),(short)(iVar18 >> 1)) * iVar9,
                            (int)*(undefined8 *)piVar13 +
                            CONCAT22((short)(iVar16 >> 0x11),(short)(iVar16 >> 1)) * iVar9);
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
            bVar6 = uVar12 == param_2;
            param_3 = psVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          sVar14 = *param_3;
          sVar20 = param_3[1];
                    /* try { // try from 00a899ec to 00b89a3f has its CatchHandler @ 00a899ec
                       catch() { ... } // from try @ 00a899ec with catch @ 00a899ec
                       catch() { ... } // from try @ 00a89b50 with catch @ 00a899ec */
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar20 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar14 * iVar10);
          param_2 = param_2 - 1;
          *param_4 = *param_4 + ((int)sVar20 + (int)sVar14 >> 1) * iVar9;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      iVar10 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = param_2 - 1;
          uVar11 = (param_2 - 1) * 0xc;
                    /* try { // try from 00a8a1b8 to 00b8a20b has its CatchHandler @ 00a8a1b8
                       catch() { ... } // from try @ 00a8a1b8 with catch @ 00a8a1b8
                       catch() { ... } // from try @ 00a8a370 with catch @ 00a8a1b8 */
          if ((((uVar11 < ~(ulong)(param_1 + 2) || uVar11 - ~(ulong)(param_1 + 2) == 0) &&
               (SUB168(auVar5 * ZEXT816(0xc),8) == 0)) &&
              (uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0)) &&
             (uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            psVar8 = param_3 + uVar12 * 3;
            piVar7 = param_1 + uVar12 * 3;
            uVar11 = uVar12;
            do {
              sVar14 = *param_3;
              sVar24 = param_3[1];
              sVar28 = param_3[2];
              sVar20 = param_3[3];
              sVar25 = param_3[4];
              sVar29 = param_3[5];
              sVar22 = param_3[6];
              sVar26 = param_3[7];
              sVar30 = param_3[8];
              sVar23 = param_3[9];
              sVar27 = param_3[10];
              sVar31 = param_3[0xb];
              param_3 = param_3 + 0xc;
              uVar11 = uVar11 - 4;
              *param_1 = *param_1 + iVar10 * sVar14;
              param_1[1] = param_1[1] + iVar10 * sVar24;
              param_1[2] = param_1[2] + iVar10 * sVar28;
              param_1[3] = param_1[3] + iVar10 * sVar20;
              param_1[4] = param_1[4] + iVar10 * sVar25;
              param_1[5] = param_1[5] + iVar10 * sVar29;
              param_1[6] = param_1[6] + iVar10 * sVar22;
              param_1[7] = param_1[7] + iVar10 * sVar26;
              param_1[8] = param_1[8] + iVar10 * sVar30;
              param_1[9] = param_1[9] + iVar10 * sVar23;
              param_1[10] = param_1[10] + iVar10 * sVar27;
              param_1[0xb] = param_1[0xb] + iVar10 * sVar31;
              param_1 = param_1 + 0xc;
                    /* try { // try from 00a8a20c to 00b8a223 has its CatchHandler @ 00a8a3dc */
            } while (uVar11 != 0);
            bVar6 = uVar12 == param_2;
            param_3 = psVar8;
            param_2 = param_2 - uVar12;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar10 * param_3[1],
                        (int)*(undefined8 *)param_1 + iVar10 * *param_3);
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + param_3[2] * iVar10;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
                    /* catch() { ... } // from try @ 00a89cb4 with catch @ 00a89e94 */
                    /* catch() { ... } // from try @ 00a89ca8 with catch @ 00a89e98 */
          auVar4._8_8_ = 0;
          auVar4._0_8_ = param_2 - 1;
                    /* catch() { ... } // from try @ 00a89c88 with catch @ 00a89e9c */
                    /* catch() { ... } // from try @ 00a89cc0 with catch @ 00a89eac */
          uVar11 = (param_2 - 1) * 0xc;
          if (((uVar11 < ~(ulong)(param_1 + 2) || uVar11 - ~(ulong)(param_1 + 2) == 0) &&
              (SUB168(auVar4 * ZEXT816(0xc),8) == 0)) &&
             (((uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0 &&
               (uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0)) &&
              ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 3 <= param_4)))))) {
            uVar12 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a89f04 to 00b89f5b has its CatchHandler @ 00a89f04
                       catch() { ... } // from try @ 00a89f04 with catch @ 00a89f04
                       catch() { ... } // from try @ 00a8a0d0 with catch @ 00a89f04 */
            psVar8 = param_3 + uVar12 * 3;
            piVar7 = param_1 + uVar12 * 3;
            uVar11 = uVar12;
            piVar13 = param_4;
            do {
              sVar14 = *param_3;
              sVar24 = param_3[1];
              sVar28 = param_3[2];
              sVar20 = param_3[3];
              sVar25 = param_3[4];
              sVar29 = param_3[5];
              sVar22 = param_3[6];
              sVar26 = param_3[7];
              sVar30 = param_3[8];
              sVar23 = param_3[9];
              sVar27 = param_3[10];
              sVar31 = param_3[0xb];
              param_3 = param_3 + 0xc;
              uVar11 = uVar11 - 4;
              uVar37 = (int)sVar24 + (int)sVar14 + (int)sVar28;
                    /* try { // try from 00a89f5c to 00b89f73 has its CatchHandler @ 00a8a150 */
              iVar17 = uVar37 * 0x1000;
              *param_1 = *param_1 + iVar10 * sVar14;
              param_1[1] = param_1[1] + iVar10 * sVar24;
              param_1[2] = param_1[2] + iVar10 * sVar28;
              param_1[3] = param_1[3] + iVar10 * sVar20;
              param_1[4] = param_1[4] + iVar10 * sVar25;
              param_1[5] = param_1[5] + iVar10 * sVar29;
              param_1[6] = param_1[6] + iVar10 * sVar22;
              param_1[7] = param_1[7] + iVar10 * sVar26;
              param_1[8] = param_1[8] + iVar10 * sVar30;
              param_1[9] = param_1[9] + iVar10 * sVar23;
              param_1[10] = param_1[10] + iVar10 * sVar27;
              param_1[0xb] = param_1[0xb] + iVar10 * sVar31;
              param_1 = param_1 + 0xc;
              iVar16 = (((int)sVar25 + (int)sVar20 + (int)sVar29) * 0x1000) / 3;
              iVar17 = iVar17 / 3 + (iVar17 >> 0x1f) + ((uVar37 & 0xfffff) >> 0x13);
                    /* try { // try from 00a89f7c to 00b89f87 has its CatchHandler @ 00a8a14c */
              *(ulong *)(piVar13 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar13 + 2) >> 0x20) +
                            ((((int)sVar27 + (int)sVar23 + (int)sVar31) * 0x1000) / 3 >> 0xc) *
                            iVar9,(int)*(undefined8 *)(piVar13 + 2) +
                                  ((((int)sVar26 + (int)sVar22 + (int)sVar30) * 0x1000) / 3 >> 0xc)
                                  * iVar9);
              *(ulong *)piVar13 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar13 >> 0x20) +
                            CONCAT22((short)(iVar16 >> 0x1c),(short)(iVar16 >> 0xc)) * iVar9,
                            (int)*(undefined8 *)piVar13 +
                            CONCAT22((short)(iVar17 >> 0x1c),(short)(iVar17 >> 0xc)) * iVar9);
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
                    /* try { // try from 00a89f88 to 00b89f93 has its CatchHandler @ 00a8a148 */
            bVar6 = uVar12 == param_2;
            param_3 = psVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          sVar14 = *param_3;
          sVar20 = param_3[1];
                    /* try { // try from 00a89a60 to 00b89a6b has its CatchHandler @ 00a89bc8 */
                    /* try { // try from 00a89a6c to 00b89a77 has its CatchHandler @ 00a89bc4 */
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar10 * sVar20,
                        (int)*(undefined8 *)param_1 + iVar10 * sVar14);
                    /* try { // try from 00a89a78 to 00b89b4f has its CatchHandler @ 00a89bdc */
          sVar22 = param_3[2];
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + sVar22 * iVar10;
          *param_4 = *param_4 +
                     ((((int)sVar20 + (int)sVar14 + (int)sVar22) * 0x1000) / 3 >> 0xc) * iVar9;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      sVar14 = *(short *)ptVar1;
      iVar10 = (int)sVar14;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar11 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a8a22c to 00b8a237 has its CatchHandler @ 00a8a3c0 */
                    /* try { // try from 00a8a238 to 00b8a243 has its CatchHandler @ 00a8a3bc */
                    /* try { // try from 00a8a244 to 00b8a24b has its CatchHandler @ 00a8a3ec */
                    /* try { // try from 00a8a268 to 00b8a27b has its CatchHandler @ 00a8a3c4 */
          if ((((uVar11 < ~(ulong)(param_1 + 3) || uVar11 - ~(ulong)(param_1 + 3) == 0) &&
               (param_2 - 1 >> 0x3c == 0)) &&
              (uVar11 < ~(ulong)(param_1 + 2) || uVar11 - ~(ulong)(param_1 + 2) == 0)) &&
             ((uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0 &&
              (uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0)))) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            psVar8 = param_3 + uVar12 * 4;
            piVar7 = param_1 + uVar12 * 4;
            uVar11 = uVar12;
            do {
              sVar14 = *param_3;
              sVar24 = param_3[1];
              sVar28 = param_3[2];
              sVar32 = param_3[3];
              sVar20 = param_3[4];
              sVar25 = param_3[5];
              sVar29 = param_3[6];
              sVar33 = param_3[7];
              sVar22 = param_3[8];
              sVar26 = param_3[9];
              sVar30 = param_3[10];
              sVar34 = param_3[0xb];
              sVar23 = param_3[0xc];
              sVar27 = param_3[0xd];
              sVar31 = param_3[0xe];
              sVar35 = param_3[0xf];
              param_3 = param_3 + 0x10;
              uVar11 = uVar11 - 4;
                    /* try { // try from 00a8a29c to 00b8a2f3 has its CatchHandler @ 00a8a3ec */
              *param_1 = *param_1 + iVar10 * sVar14;
              param_1[1] = param_1[1] + iVar10 * sVar24;
              param_1[2] = param_1[2] + iVar10 * sVar28;
              param_1[3] = param_1[3] + iVar10 * sVar32;
              param_1[4] = param_1[4] + iVar10 * sVar20;
              param_1[5] = param_1[5] + iVar10 * sVar25;
              param_1[6] = param_1[6] + iVar10 * sVar29;
              param_1[7] = param_1[7] + iVar10 * sVar33;
              param_1[8] = param_1[8] + iVar10 * sVar22;
              param_1[9] = param_1[9] + iVar10 * sVar26;
              param_1[10] = param_1[10] + iVar10 * sVar30;
              param_1[0xb] = param_1[0xb] + iVar10 * sVar34;
              param_1[0xc] = param_1[0xc] + iVar10 * sVar23;
              param_1[0xd] = param_1[0xd] + iVar10 * sVar27;
              param_1[0xe] = param_1[0xe] + iVar10 * sVar31;
              param_1[0xf] = param_1[0xf] + iVar10 * sVar35;
              param_1 = param_1 + 0x10;
            } while (uVar11 != 0);
            bVar6 = uVar12 == param_2;
            param_3 = psVar8;
            param_2 = param_2 - uVar12;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          uVar15 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar10 * (short)((ulong)uVar15 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar10 * (short)((ulong)uVar15 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        iVar10 * (short)((ulong)uVar15 >> 0x10),
                        (int)*(undefined8 *)param_1 + iVar10 * (short)uVar15);
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
                    /* try { // try from 00a89f94 to 00b8a0cf has its CatchHandler @ 00a8a160 */
          uVar11 = (param_2 - 1) * 0x10;
          if ((((uVar11 < ~(ulong)(param_1 + 3) || uVar11 - ~(ulong)(param_1 + 3) == 0) &&
               (param_2 - 1 >> 0x3c == 0)) &&
              ((uVar11 < ~(ulong)(param_1 + 2) || uVar11 - ~(ulong)(param_1 + 2) == 0 &&
               ((uVar11 < ~(ulong)(param_1 + 1) || uVar11 - ~(ulong)(param_1 + 1) == 0 &&
                (uVar11 < ~(ulong)param_1 || uVar11 - ~(ulong)param_1 == 0)))))) &&
             ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 4 <= param_4)))) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            psVar8 = param_3 + uVar12 * 4;
            piVar7 = param_1 + uVar12 * 4;
            uVar11 = uVar12;
            piVar13 = param_4;
            do {
              sVar20 = *param_3;
              sVar25 = param_3[1];
              sVar29 = param_3[2];
              sVar33 = param_3[3];
              sVar22 = param_3[4];
              sVar26 = param_3[5];
              sVar30 = param_3[6];
              sVar34 = param_3[7];
              sVar23 = param_3[8];
              sVar27 = param_3[9];
              sVar31 = param_3[10];
              sVar35 = param_3[0xb];
              sVar24 = param_3[0xc];
              sVar28 = param_3[0xd];
              sVar32 = param_3[0xe];
              sVar36 = param_3[0xf];
              param_3 = param_3 + 0x10;
              uVar11 = uVar11 - 4;
              *param_1 = *param_1 + iVar10 * sVar20;
              param_1[1] = param_1[1] + iVar10 * sVar25;
              param_1[2] = param_1[2] + iVar10 * sVar29;
              param_1[3] = param_1[3] + iVar10 * sVar33;
              param_1[4] = param_1[4] + iVar10 * sVar22;
              param_1[5] = param_1[5] + iVar10 * sVar26;
              param_1[6] = param_1[6] + iVar10 * sVar30;
              param_1[7] = param_1[7] + iVar10 * sVar34;
              param_1[8] = param_1[8] + iVar10 * sVar23;
              param_1[9] = param_1[9] + iVar10 * sVar27;
              param_1[10] = param_1[10] + iVar10 * sVar31;
              param_1[0xb] = param_1[0xb] + iVar10 * sVar35;
              param_1[0xc] = param_1[0xc] + iVar10 * sVar24;
              param_1[0xd] = param_1[0xd] + iVar10 * sVar28;
              param_1[0xe] = param_1[0xe] + iVar10 * sVar32;
              param_1[0xf] = param_1[0xf] + iVar10 * sVar36;
              param_1 = param_1 + 0x10;
              *(ulong *)(piVar13 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar13 + 2) >> 0x20) +
                            ((int)sVar28 + (int)sVar24 + (int)sVar32 + (int)sVar36 >> 2) * iVar9,
                            (int)*(undefined8 *)(piVar13 + 2) +
                            ((int)sVar27 + (int)sVar23 + (int)sVar31 + (int)sVar35 >> 2) * iVar9);
              *(ulong *)piVar13 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar13 >> 0x20) +
                            ((int)sVar26 + (int)sVar22 + (int)sVar30 + (int)sVar34 >> 2) * iVar9,
                            (int)*(undefined8 *)piVar13 +
                            ((int)sVar25 + (int)sVar20 + (int)sVar29 + (int)sVar33 >> 2) * iVar9);
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
            bVar6 = uVar12 == param_2;
            param_3 = psVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar7;
            if (bVar6) {
              return;
            }
          }
        }
        do {
          uVar15 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          iVar10 = (int)(short)((ulong)uVar15 >> 0x10);
          iVar17 = (int)(short)((ulong)uVar15 >> 0x20);
          iVar16 = (int)(short)((ulong)uVar15 >> 0x30);
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + sVar14 * iVar16,
                        (int)*(undefined8 *)(param_1 + 2) + sVar14 * iVar17);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar14 * iVar10,
                        (int)*(undefined8 *)param_1 + (int)sVar14 * (int)(short)uVar15);
          *param_4 = *param_4 + (iVar10 + (short)uVar15 + iVar17 + iVar16 >> 2) * iVar9;
          param_3 = param_3 + 4;
          param_4 = param_4 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      break;
    case 4:
      iVar10 = (int)*(short *)ptVar1;
      iVar17 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        do {
                    /* catch() { ... } // from try @ 00a89a6c with catch @ 00a89bc4 */
          uVar15 = *(undefined8 *)param_3;
                    /* catch() { ... } // from try @ 00a89a60 with catch @ 00a89bc8 */
                    /* catch() { ... } // from try @ 00a89a40 with catch @ 00a89bcc */
          param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a89a78 with catch @ 00a89bdc */
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar17 * (short)((ulong)uVar15 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar17 * (short)((ulong)uVar15 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        iVar10 * (short)((ulong)uVar15 >> 0x10),
                        (int)*(undefined8 *)param_1 + iVar10 * (short)uVar15);
          psVar8 = param_3 + 4;
          param_3 = param_3 + 5;
          param_1[4] = param_1[4] + *psVar8 * iVar17;
          param_1 = param_1 + 5;
        } while (param_2 != 0);
      }
      else {
        do {
          uVar15 = *(undefined8 *)param_3;
                    /* try { // try from 00a89b50 to 00b89c33 has its CatchHandler @ 00a899ec */
          param_2 = param_2 - 1;
          iVar16 = (int)(short)((ulong)uVar15 >> 0x10);
          iVar18 = (int)(short)((ulong)uVar15 >> 0x20);
          iVar19 = (int)(short)((ulong)uVar15 >> 0x30);
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar17 * iVar19,
                        (int)*(undefined8 *)(param_1 + 2) + iVar17 * iVar18);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar10 * iVar16,
                        (int)*(undefined8 *)param_1 + iVar10 * (short)uVar15);
          sVar14 = param_3[4];
          param_3 = param_3 + 5;
          param_1[4] = param_1[4] + sVar14 * iVar17;
          *param_4 = *param_4 +
                     (((iVar16 + (short)uVar15 + iVar18 + iVar19 + (int)sVar14) * 0x1000) / 5 >> 0xc
                     ) * iVar9;
          param_1 = param_1 + 5;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      volumeMulti<3,6,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar14);
      return;
    case 6:
      volumeMulti<3,7,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar14);
      return;
    case 7:
      volumeMulti<3,8,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar14);
      return;
    }
  }
                    /* try { // try from 00a8a32c to 00b8a36f has its CatchHandler @ 00a8a3c4 */
  return;
}

