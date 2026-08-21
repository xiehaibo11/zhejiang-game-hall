
/* void cocos2d::AudioMixer::volumeMix<1, false, true, int, short, int>(int*, unsigned long, short
   const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<1,false,true,int,short,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,track_t *param_6
               )

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  int *piVar11;
  short *psVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int iVar19;
  undefined8 uVar18;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
                    /* try { // try from 00a88064 to 00b8806b has its CatchHandler @ 00a880d4 */
                    /* try { // try from 00a8806c to 00b8808b has its CatchHandler @ 00a87f74 */
  uVar7 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar7 < 8) {
      iVar13 = *(int *)(param_6 + 0x18);
                    /* try { // try from 00a8808c to 00b88097 has its CatchHandler @ 00a880d4 */
                    /* try { // try from 00a88098 to 00b880db has its CatchHandler @ 00a87f74 */
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
      switch(uVar7) {
      case 0:
        piVar11 = param_4;
        if (param_4 == (int *)0x0) {
          iVar13 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar13 >> 0x10) * (int)*param_3;
            iVar13 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar13;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar4 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a8803c with catch @ 00a880d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a88064 with catch @ 00a880d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8808c with catch @ 00a880d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a87fdc with catch @ 00a880d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a88008 with catch @ 00a880d8
                        */
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar11 = *piVar11 + (*(int *)ptVar3 >> 0x10) * (int)sVar4;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar13;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar11 = piVar11 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        piVar11 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            sVar4 = *param_3;
                    /* catch() { ... } // from try @ 00a88200 with catch @ 00a88218 */
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)sVar4;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)sVar4;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar4 = *param_3;
                    /* catch() { ... } // from try @ 00a8818c with catch @ 00a881a4 */
            param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8817c with catch @ 00a881b4 */
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)sVar4;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
                    /* try { // try from 00a881c8 to 00b881ff has its CatchHandler @ 00a881c8
                       catch() { ... } // from try @ 00a881c8 with catch @ 00a881c8
                       catch() { ... } // from try @ 00a88208 with catch @ 00a881c8 */
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)sVar4;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            *piVar11 = *piVar11 + (*(int *)(param_6 + 0x1c) >> 0x10) * (int)sVar4;
                    /* try { // try from 00a88200 to 00b88207 has its CatchHandler @ 00a88218 */
                    /* try { // try from 00a88208 to 00b8822b has its CatchHandler @ 00a881c8 */
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar13;
            param_3 = param_3 + 1;
            piVar11 = piVar11 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        volumeRampMulti<1,3,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
        break;
      case 3:
        volumeRampMulti<1,4,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
        break;
      case 4:
                    /* try { // try from 00a88288 to 00b882d3 has its CatchHandler @ 00a88288
                       catch() { ... } // from try @ 00a88288 with catch @ 00a88288
                       catch() { ... } // from try @ 00a8834c with catch @ 00a88288 */
        volumeRampMulti<1,5,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
        break;
      case 5:
        volumeRampMulti<1,6,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
        break;
      case 6:
        volumeRampMulti<1,7,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
        break;
      case 7:
        volumeRampMulti<1,8,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar13)
        ;
      }
    }
                    /* try { // try from 00a884c8 to 00b884fb has its CatchHandler @ 00a884c8
                       catch() { ... } // from try @ 00a884c8 with catch @ 00a884c8
                       catch() { ... } // from try @ 00a88510 with catch @ 00a884c8 */
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar7 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar13 = (int)sVar4;
    ptVar1 = param_6 + 4;
    switch(uVar7) {
    case 0:
      if (param_4 == (int *)0x0) {
        iVar13 = (int)*(short *)ptVar1;
        if (7 < param_2) {
          uVar15 = param_2 & 0xfffffffffffffff8;
          iVar17 = (int)*(short *)ptVar1;
          piVar11 = param_1 + 4;
          param_1 = param_1 + uVar15;
          psVar12 = param_3 + 4;
          uVar14 = uVar15;
          do {
            uVar18 = *(undefined8 *)(psVar12 + -4);
            uVar22 = *(undefined8 *)psVar12;
            uVar14 = uVar14 - 8;
            psVar12 = psVar12 + 8;
            *(ulong *)(piVar11 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + -2) >> 0x20) +
                          iVar13 * (short)((ulong)uVar18 >> 0x30),
                          (int)*(undefined8 *)(piVar11 + -2) +
                          iVar13 * (short)((ulong)uVar18 >> 0x20));
            *(ulong *)(piVar11 + -4) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + -4) >> 0x20) +
                          iVar17 * (short)((ulong)uVar18 >> 0x10),
                          (int)*(undefined8 *)(piVar11 + -4) + iVar17 * (short)uVar18);
            *(ulong *)(piVar11 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20) +
                          iVar13 * (short)((ulong)uVar22 >> 0x30),
                          (int)*(undefined8 *)(piVar11 + 2) +
                          iVar13 * (short)((ulong)uVar22 >> 0x20));
            *(ulong *)piVar11 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar11 >> 0x20) +
                          iVar17 * (short)((ulong)uVar22 >> 0x10),
                          (int)*(undefined8 *)piVar11 + iVar17 * (short)uVar22);
            piVar11 = piVar11 + 8;
          } while (uVar14 != 0);
          bVar10 = uVar15 == param_2;
          param_3 = param_3 + uVar15;
          param_2 = param_2 - uVar15;
          if (bVar10) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * iVar13;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        sVar4 = *(short *)ptVar1;
                    /* try { // try from 00a88148 to 00b8817b has its CatchHandler @ 00a88148
                       catch() { ... } // from try @ 00a88148 with catch @ 00a88148
                       catch() { ... } // from try @ 00a88190 with catch @ 00a88148 */
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 <= param_4)))) {
          uVar15 = param_2 & 0xfffffffffffffffc;
          iVar17 = (int)sVar4;
          piVar11 = param_1;
          psVar12 = param_3;
          uVar14 = uVar15;
          piVar16 = param_4;
          do {
            uVar18 = *(undefined8 *)psVar12;
            uVar14 = uVar14 - 4;
            iVar19 = (int)(short)((ulong)uVar18 >> 0x10);
            iVar20 = (int)(short)((ulong)uVar18 >> 0x20);
            iVar21 = (int)(short)((ulong)uVar18 >> 0x30);
            *(ulong *)(piVar11 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20) + iVar17 * iVar21,
                          (int)*(undefined8 *)(piVar11 + 2) + iVar17 * iVar20);
            *(ulong *)piVar11 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar11 >> 0x20) + iVar17 * iVar19,
                          (int)*(undefined8 *)piVar11 + iVar17 * (short)uVar18);
            *(ulong *)(piVar16 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) + iVar13 * iVar21,
                          (int)*(undefined8 *)(piVar16 + 2) + iVar13 * iVar20);
            *(ulong *)piVar16 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) + iVar13 * iVar19,
                          (int)*(undefined8 *)piVar16 + iVar13 * (short)uVar18);
            piVar11 = piVar11 + 4;
            psVar12 = psVar12 + 4;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
          bVar10 = uVar15 == param_2;
          param_3 = param_3 + uVar15;
          param_4 = param_4 + uVar15;
          param_2 = param_2 - uVar15;
          param_1 = param_1 + uVar15;
          if (bVar10) {
            return;
          }
        }
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
                    /* try { // try from 00a8817c to 00b88183 has its CatchHandler @ 00a881b4 */
          *param_1 = *param_1 + (int)sVar5 * (int)sVar4;
          *param_4 = *param_4 + sVar5 * iVar13;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
                    /* try { // try from 00a8818c to 00b8818f has its CatchHandler @ 00a881a4 */
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        iVar13 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
                    /* try { // try from 00a88904 to 00b88973 has its CatchHandler @ 00a887dc */
          uVar14 = (param_2 - 1) * 8;
          if (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)) {
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a8883c with catch @ 00a8893c */
                    /* catch() { ... } // from try @ 00a88830 with catch @ 00a88940 */
            piVar11 = param_1 + uVar15 * 2;
                    /* catch() { ... } // from try @ 00a8885c with catch @ 00a88948 */
            psVar12 = param_3;
            uVar14 = uVar15;
            do {
              uVar18 = *(undefined8 *)psVar12;
                    /* catch() { ... } // from try @ 00a88844 with catch @ 00a88958
                       catch() { ... } // from try @ 00a88884 with catch @ 00a88958 */
              uVar14 = uVar14 - 4;
              iVar19 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar20 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar21 = (int)(short)((ulong)uVar18 >> 0x30);
              *param_1 = *param_1 + iVar13 * (short)uVar18;
              param_1[1] = param_1[1] + iVar17 * (short)uVar18;
              param_1[2] = param_1[2] + iVar13 * iVar19;
              param_1[3] = param_1[3] + iVar17 * iVar19;
              param_1[4] = param_1[4] + iVar13 * iVar20;
              param_1[5] = param_1[5] + iVar17 * iVar20;
              param_1[6] = param_1[6] + iVar13 * iVar21;
              param_1[7] = param_1[7] + iVar17 * iVar21;
              param_1 = param_1 + 8;
              psVar12 = psVar12 + 4;
            } while (uVar14 != 0);
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
                    /* try { // try from 00a88974 to 00b889cb has its CatchHandler @ 00a88974
                       catch() { ... } // from try @ 00a88974 with catch @ 00a88974
                       catch() { ... } // from try @ 00a88bb0 with catch @ 00a88974 */
            if (bVar10) {
              return;
            }
          }
        }
        do {
                    /* try { // try from 00a8850c to 00b8850f has its CatchHandler @ 00a88524 */
                    /* try { // try from 00a88510 to 00b88547 has its CatchHandler @ 00a884c8 */
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + *param_3 * iVar17,
                        (int)*(undefined8 *)param_1 + *param_3 * iVar13);
          param_3 = param_3 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        iVar17 = (int)*(short *)ptVar1;
        iVar19 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar14 = (param_2 - 1) * 8;
                    /* try { // try from 00a88654 to 00b8867f has its CatchHandler @ 00a88764 */
          if (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             ((uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0 &&
              ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 2 <= param_4)))))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a88680 to 00b88687 has its CatchHandler @ 00a88748 */
            piVar11 = param_1 + uVar15 * 2;
                    /* try { // try from 00a88698 to 00b8869b has its CatchHandler @ 00a88740 */
            psVar12 = param_3;
            uVar14 = uVar15;
            piVar16 = param_4;
            do {
              uVar18 = *(undefined8 *)psVar12;
              uVar14 = uVar14 - 4;
                    /* try { // try from 00a886ac to 00b886af has its CatchHandler @ 00a88744 */
              iVar20 = (int)(short)uVar18;
              iVar21 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar23 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar24 = (int)(short)((ulong)uVar18 >> 0x30);
                    /* try { // try from 00a886b0 to 00b886cb has its CatchHandler @ 00a8874c */
              *param_1 = *param_1 + iVar17 * iVar20;
              param_1[1] = param_1[1] + iVar19 * iVar20;
              param_1[2] = param_1[2] + iVar17 * iVar21;
              param_1[3] = param_1[3] + iVar19 * iVar21;
              param_1[4] = param_1[4] + iVar17 * iVar23;
              param_1[5] = param_1[5] + iVar19 * iVar23;
              param_1[6] = param_1[6] + iVar17 * iVar24;
              param_1[7] = param_1[7] + iVar19 * iVar24;
              param_1 = param_1 + 8;
              *(ulong *)(piVar16 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) + iVar13 * iVar24,
                            (int)*(undefined8 *)(piVar16 + 2) + iVar13 * iVar23);
              *(ulong *)piVar16 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) + iVar13 * iVar21,
                            (int)*(undefined8 *)piVar16 + iVar13 * iVar20);
              psVar12 = psVar12 + 4;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
                    /* try { // try from 00a886cc to 00b887b3 has its CatchHandler @ 00a88608 */
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_4 = param_4 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar10) {
              return;
            }
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar19,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar17);
                    /* try { // try from 00a88300 to 00b88307 has its CatchHandler @ 00a883c8 */
          *param_4 = *param_4 + sVar4 * iVar13;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      if (param_4 == (int *)0x0) {
        sVar4 = *(short *)(param_6 + 8);
                    /* catch() { ... } // from try @ 00a884fc with catch @ 00a88534 */
        iVar13 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_2 - 1;
          uVar14 = (param_2 - 1) * 0xc;
          if ((((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0) &&
               (SUB168(auVar9 * ZEXT816(0xc),8) == 0)) &&
              (uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0)) &&
             (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)) {
                    /* try { // try from 00a889cc to 00b889d3 has its CatchHandler @ 00a88c18 */
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a889d8 to 00b889df has its CatchHandler @ 00a88c10 */
                    /* try { // try from 00a889e0 to 00b889ef has its CatchHandler @ 00a88c08 */
            piVar11 = param_1 + uVar15 * 3;
            iVar19 = (int)sVar4;
            psVar12 = param_3;
            uVar14 = uVar15;
            do {
              uVar18 = *(undefined8 *)psVar12;
                    /* try { // try from 00a889f8 to 00b88a33 has its CatchHandler @ 00a88c38 */
              uVar14 = uVar14 - 4;
              iVar20 = (int)(short)uVar18;
              iVar21 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar23 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar24 = (int)(short)((ulong)uVar18 >> 0x30);
              *param_1 = *param_1 + iVar13 * iVar20;
              param_1[1] = param_1[1] + iVar17 * iVar20;
              param_1[2] = param_1[2] + iVar19 * iVar20;
              param_1[3] = param_1[3] + iVar13 * iVar21;
              param_1[4] = param_1[4] + iVar17 * iVar21;
              param_1[5] = param_1[5] + iVar19 * iVar21;
              param_1[6] = param_1[6] + iVar13 * iVar23;
              param_1[7] = param_1[7] + iVar17 * iVar23;
              param_1[8] = param_1[8] + iVar19 * iVar23;
              param_1[9] = param_1[9] + iVar13 * iVar24;
              param_1[10] = param_1[10] + iVar17 * iVar24;
              param_1[0xb] = param_1[0xb] + iVar19 * iVar24;
              param_1 = param_1 + 0xc;
              psVar12 = psVar12 + 4;
            } while (uVar14 != 0);
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar10) {
              return;
            }
          }
        }
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + (int)sVar5 * (int)sVar4;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar5 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar5 * iVar13);
          param_3 = param_3 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
                    /* try { // try from 00a88318 to 00b8831b has its CatchHandler @ 00a883c0 */
        sVar4 = *(short *)(param_6 + 8);
        iVar17 = (int)*(short *)ptVar1;
        iVar19 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_2 - 1;
          uVar14 = (param_2 - 1) * 0xc;
                    /* catch() { ... } // from try @ 00a88698 with catch @ 00a88740 */
                    /* catch() { ... } // from try @ 00a886ac with catch @ 00a88744 */
          if (((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0) &&
              (SUB168(auVar8 * ZEXT816(0xc),8) == 0)) &&
             (((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
               (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)) &&
              ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 3 <= param_4)))))) {
                    /* catch() { ... } // from try @ 00a88680 with catch @ 00a88748 */
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a886b0 with catch @ 00a8874c */
            iVar20 = (int)sVar4;
                    /* catch() { ... } // from try @ 00a88654 with catch @ 00a88764 */
            piVar16 = param_1 + uVar15 * 3;
            psVar12 = param_3;
            uVar14 = uVar15;
            piVar11 = param_4;
            do {
              uVar18 = *(undefined8 *)psVar12;
              uVar14 = uVar14 - 4;
              iVar21 = (int)(short)uVar18;
              iVar23 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar24 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar25 = (int)(short)((ulong)uVar18 >> 0x30);
              *param_1 = *param_1 + iVar17 * iVar21;
              param_1[1] = param_1[1] + iVar19 * iVar21;
              param_1[2] = param_1[2] + iVar20 * iVar21;
              param_1[3] = param_1[3] + iVar17 * iVar23;
              param_1[4] = param_1[4] + iVar19 * iVar23;
              param_1[5] = param_1[5] + iVar20 * iVar23;
              param_1[6] = param_1[6] + iVar17 * iVar24;
              param_1[7] = param_1[7] + iVar19 * iVar24;
              param_1[8] = param_1[8] + iVar20 * iVar24;
              param_1[9] = param_1[9] + iVar17 * iVar25;
              param_1[10] = param_1[10] + iVar19 * iVar25;
              param_1[0xb] = param_1[0xb] + iVar20 * iVar25;
              param_1 = param_1 + 0xc;
              *(ulong *)(piVar11 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20) + iVar13 * iVar25,
                            (int)*(undefined8 *)(piVar11 + 2) + iVar13 * iVar24);
              *(ulong *)piVar11 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar11 >> 0x20) + iVar13 * iVar23,
                            (int)*(undefined8 *)piVar11 + iVar13 * iVar21);
              psVar12 = psVar12 + 4;
              piVar11 = piVar11 + 4;
            } while (uVar14 != 0);
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_4 = param_4 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar16;
            if (bVar10) {
              return;
            }
          }
        }
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
                    /* try { // try from 00a8834c to 00b88433 has its CatchHandler @ 00a88288 */
          param_1[2] = param_1[2] + (int)sVar5 * (int)sVar4;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar5 * iVar19,
                        (int)*(undefined8 *)param_1 + sVar5 * iVar17);
          *param_4 = *param_4 + sVar5 * iVar13;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      if (param_4 == (int *)0x0) {
        uVar18 = *(undefined8 *)ptVar1;
                    /* try { // try from 00a88580 to 00b88587 has its CatchHandler @ 00a88598 */
        iVar13 = (int)(short)uVar18;
        iVar17 = (int)(short)((ulong)uVar18 >> 0x10);
        iVar19 = (int)(short)((ulong)uVar18 >> 0x20);
        iVar20 = (int)(short)((ulong)uVar18 >> 0x30);
                    /* try { // try from 00a88588 to 00b885ab has its CatchHandler @ 00a88548 */
        if (3 < param_2) {
          uVar14 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a88a34 to 00b88a43 has its CatchHandler @ 00a88c04 */
                    /* try { // try from 00a88a44 to 00b88a57 has its CatchHandler @ 00a88c48 */
                    /* try { // try from 00a88a6c to 00b88aa7 has its CatchHandler @ 00a88c20 */
          if ((((uVar14 < ~(ulong)(param_1 + 3) || uVar14 - ~(ulong)(param_1 + 3) == 0) &&
               (param_2 - 1 >> 0x3c == 0)) &&
              (uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0)) &&
             ((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
              (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
            piVar11 = param_1 + uVar15 * 4;
            psVar12 = param_3;
            uVar14 = uVar15;
            do {
              uVar18 = *(undefined8 *)psVar12;
              uVar14 = uVar14 - 4;
              iVar21 = (int)(short)uVar18;
              iVar23 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar24 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar25 = (int)(short)((ulong)uVar18 >> 0x30);
                    /* try { // try from 00a88ac4 to 00b88b33 has its CatchHandler @ 00a88c48 */
              *param_1 = *param_1 + iVar13 * iVar21;
              param_1[1] = param_1[1] + iVar17 * iVar21;
              param_1[2] = param_1[2] + iVar19 * iVar21;
              param_1[3] = param_1[3] + iVar20 * iVar21;
              param_1[4] = param_1[4] + iVar13 * iVar23;
              param_1[5] = param_1[5] + iVar17 * iVar23;
              param_1[6] = param_1[6] + iVar19 * iVar23;
              param_1[7] = param_1[7] + iVar20 * iVar23;
              param_1[8] = param_1[8] + iVar13 * iVar24;
              param_1[9] = param_1[9] + iVar17 * iVar24;
              param_1[10] = param_1[10] + iVar19 * iVar24;
              param_1[0xb] = param_1[0xb] + iVar20 * iVar24;
              param_1[0xc] = param_1[0xc] + iVar13 * iVar25;
              param_1[0xd] = param_1[0xd] + iVar17 * iVar25;
              param_1[0xe] = param_1[0xe] + iVar19 * iVar25;
              param_1[0xf] = param_1[0xf] + iVar20 * iVar25;
              param_1 = param_1 + 0x10;
              psVar12 = psVar12 + 4;
            } while (uVar14 != 0);
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar10) {
              return;
            }
          }
        }
        do {
                    /* catch() { ... } // from try @ 00a88580 with catch @ 00a88598 */
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + sVar4 * iVar20,
                        (int)*(undefined8 *)(param_1 + 2) + sVar4 * iVar19);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar13);
          param_3 = param_3 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      else {
        uVar18 = *(undefined8 *)ptVar1;
        iVar17 = (int)(short)uVar18;
        iVar19 = (int)(short)((ulong)uVar18 >> 0x10);
        iVar20 = (int)(short)((ulong)uVar18 >> 0x20);
        iVar21 = (int)(short)((ulong)uVar18 >> 0x30);
        if (3 < param_2) {
          uVar14 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a887dc to 00b8882f has its CatchHandler @ 00a887dc
                       catch() { ... } // from try @ 00a887dc with catch @ 00a887dc
                       catch() { ... } // from try @ 00a88904 with catch @ 00a887dc */
          if ((((uVar14 < ~(ulong)(param_1 + 3) || uVar14 - ~(ulong)(param_1 + 3) == 0) &&
               (param_2 - 1 >> 0x3c == 0)) &&
              ((uVar14 < ~(ulong)(param_1 + 2) || uVar14 - ~(ulong)(param_1 + 2) == 0 &&
               ((uVar14 < ~(ulong)(param_1 + 1) || uVar14 - ~(ulong)(param_1 + 1) == 0 &&
                (uVar14 < ~(ulong)param_1 || uVar14 - ~(ulong)param_1 == 0)))))) &&
             ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 4 <= param_4)))) {
            uVar15 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a88830 to 00b8883b has its CatchHandler @ 00a88940 */
                    /* try { // try from 00a8883c to 00b88843 has its CatchHandler @ 00a8893c */
                    /* try { // try from 00a88844 to 00b8885b has its CatchHandler @ 00a88958 */
            piVar11 = param_1 + uVar15 * 4;
            psVar12 = param_3;
            uVar14 = uVar15;
            piVar16 = param_4;
            do {
              uVar18 = *(undefined8 *)psVar12;
              uVar14 = uVar14 - 4;
                    /* try { // try from 00a8885c to 00b88877 has its CatchHandler @ 00a88948 */
              iVar23 = (int)(short)uVar18;
              iVar24 = (int)(short)((ulong)uVar18 >> 0x10);
              iVar25 = (int)(short)((ulong)uVar18 >> 0x20);
              iVar26 = (int)(short)((ulong)uVar18 >> 0x30);
              *param_1 = *param_1 + iVar17 * iVar23;
              param_1[1] = param_1[1] + iVar19 * iVar23;
              param_1[2] = param_1[2] + iVar20 * iVar23;
              param_1[3] = param_1[3] + iVar21 * iVar23;
              param_1[4] = param_1[4] + iVar17 * iVar24;
              param_1[5] = param_1[5] + iVar19 * iVar24;
              param_1[6] = param_1[6] + iVar20 * iVar24;
              param_1[7] = param_1[7] + iVar21 * iVar24;
              param_1[8] = param_1[8] + iVar17 * iVar25;
              param_1[9] = param_1[9] + iVar19 * iVar25;
              param_1[10] = param_1[10] + iVar20 * iVar25;
              param_1[0xb] = param_1[0xb] + iVar21 * iVar25;
              param_1[0xc] = param_1[0xc] + iVar17 * iVar26;
              param_1[0xd] = param_1[0xd] + iVar19 * iVar26;
              param_1[0xe] = param_1[0xe] + iVar20 * iVar26;
              param_1[0xf] = param_1[0xf] + iVar21 * iVar26;
              param_1 = param_1 + 0x10;
              *(ulong *)(piVar16 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar16 + 2) >> 0x20) + iVar13 * iVar26,
                            (int)*(undefined8 *)(piVar16 + 2) + iVar13 * iVar25);
              *(ulong *)piVar16 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar16 >> 0x20) + iVar13 * iVar24,
                            (int)*(undefined8 *)piVar16 + iVar13 * iVar23);
              psVar12 = psVar12 + 4;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
                    /* try { // try from 00a88884 to 00b88903 has its CatchHandler @ 00a88958 */
            bVar10 = uVar15 == param_2;
            param_3 = param_3 + uVar15;
            param_4 = param_4 + uVar15;
            param_2 = param_2 - uVar15;
            param_1 = piVar11;
            if (bVar10) {
              return;
            }
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          iVar23 = (int)sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar23 * iVar21,
                        (int)*(undefined8 *)(param_1 + 2) + iVar23 * iVar20);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar19,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar17);
          *param_4 = *param_4 + iVar23 * iVar13;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      break;
    case 4:
                    /* catch() { ... } // from try @ 00a8832c with catch @ 00a883c4 */
      if (param_4 == (int *)0x0) {
        uVar18 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          iVar13 = (int)sVar5;
          param_1[4] = param_1[4] + iVar13 * sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar13 * (short)((ulong)uVar18 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar13 * (short)((ulong)uVar18 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar5 * (int)(short)((ulong)uVar18 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar5 * (int)(short)uVar18);
          param_1 = param_1 + 5;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
                    /* catch() { ... } // from try @ 00a88300 with catch @ 00a883c8 */
        uVar18 = *(undefined8 *)ptVar1;
                    /* catch() { ... } // from try @ 00a88330 with catch @ 00a883cc */
        sVar4 = *(short *)(param_6 + 0xc);
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a882d4 with catch @ 00a883e4 */
          iVar17 = (int)sVar5;
          param_1[4] = param_1[4] + iVar17 * sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar17 * (short)((ulong)uVar18 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar17 * (short)((ulong)uVar18 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar5 * (int)(short)((ulong)uVar18 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar5 * (int)(short)uVar18);
          *param_4 = *param_4 + iVar17 * iVar13;
          param_1 = param_1 + 5;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      if (param_4 == (int *)0x0) {
        uVar18 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        sVar5 = *(short *)(param_6 + 0xe);
        do {
          sVar6 = *param_3;
                    /* try { // try from 00a88608 to 00b88653 has its CatchHandler @ 00a88608
                       catch() { ... } // from try @ 00a88608 with catch @ 00a88608
                       catch() { ... } // from try @ 00a886cc with catch @ 00a88608 */
          param_2 = param_2 - 1;
          iVar13 = (int)sVar6;
          param_1[4] = param_1[4] + iVar13 * sVar4;
          param_1[5] = param_1[5] + iVar13 * sVar5;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar13 * (short)((ulong)uVar18 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar13 * (short)((ulong)uVar18 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar6 * (int)(short)((ulong)uVar18 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar6 * (int)(short)uVar18);
          param_1 = param_1 + 6;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        uVar18 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        sVar5 = *(short *)(param_6 + 0xe);
        do {
          sVar6 = *param_3;
          param_2 = param_2 - 1;
          iVar17 = (int)sVar6;
          param_1[4] = param_1[4] + iVar17 * sVar4;
          param_1[5] = param_1[5] + iVar17 * sVar5;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar17 * (short)((ulong)uVar18 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar17 * (short)((ulong)uVar18 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar6 * (int)(short)((ulong)uVar18 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar6 * (int)(short)uVar18);
          *param_4 = *param_4 + sVar6 * iVar13;
          param_1 = param_1 + 6;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 6:
      volumeMulti<1,7,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    case 7:
      volumeMulti<1,8,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar4);
      return;
    }
  }
  return;
}

