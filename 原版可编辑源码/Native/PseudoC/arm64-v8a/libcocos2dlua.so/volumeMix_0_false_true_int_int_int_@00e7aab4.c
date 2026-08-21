
/* void cocos2d::experimental::AudioMixer::volumeMix<0, false, true, int, int, int>(int*, unsigned
   long, int const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<0,false,true,int,int,int>
               (int *param_1,ulong param_2,int *param_3,int *param_4,bool param_5,track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar18;
  undefined8 uVar17;
  int iVar19;
  int iVar21;
  undefined8 uVar20;
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
  
  uVar6 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar6 < 8) {
      iVar10 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
      switch(uVar6) {
      case 0:
        piVar8 = param_4;
        if (param_4 == (int *)0x0) {
          iVar10 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*param_3 >> 0xc) * (iVar10 >> 0x10);
            iVar10 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar10;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            iVar11 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (iVar11 >> 0xc);
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar8 = *piVar8 + (*(int *)ptVar3 >> 0x10) * (iVar11 >> 0xc);
            *(int *)ptVar3 = *(int *)ptVar3 + iVar10;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar8 = piVar8 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        piVar8 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (*param_3 >> 0xc);
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            piVar8 = param_3 + 1;
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (*piVar8 >> 0xc);
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
          } while (param_2 != 0);
        }
        else {
          do {
            iVar16 = *param_3;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (iVar16 >> 0xc);
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            iVar11 = param_3[1];
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (iVar11 >> 0xc);
            iVar11 = iVar11 + iVar16;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
            }
            *piVar8 = *piVar8 + (*(int *)(param_6 + 0x1c) >> 0x10) * (iVar11 >> 0xd);
            param_2 = param_2 - 1;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar10;
            piVar8 = piVar8 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        piVar8 = param_4;
        if (param_4 == (int *)0x0) {
          iVar10 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*param_3 >> 0xc) * (iVar10 >> 0x10);
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (param_3[1] >> 0xc);
            piVar8 = param_3 + 2;
            param_3 = param_3 + 3;
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (*piVar8 >> 0xc);
            param_1 = param_1 + 3;
            iVar10 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar10;
          } while (param_2 != 0);
        }
        else {
          do {
            iVar11 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (iVar11 >> 0xc);
            iVar16 = param_3[1];
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (iVar16 >> 0xc);
            iVar18 = param_3[2];
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (iVar18 >> 0xc);
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar8 = *piVar8 + (*(int *)ptVar3 >> 0x10) * ((iVar16 + iVar11 + iVar18) / 3 >> 0xc);
            param_3 = param_3 + 3;
            param_1 = param_1 + 3;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar10;
            piVar8 = piVar8 + 1;
          } while (param_2 != 0);
        }
        break;
      case 3:
        volumeRampMulti<3,4,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar10)
        ;
        break;
      case 4:
        volumeRampMulti<3,5,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar10)
        ;
        break;
      case 5:
        volumeRampMulti<3,6,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar10)
        ;
        break;
      case 6:
        volumeRampMulti<3,7,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar10)
        ;
        break;
      case 7:
        volumeRampMulti<3,8,int,int,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar10)
        ;
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar6 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar10 = (int)sVar4;
    ptVar1 = param_6 + 4;
    switch(uVar6) {
    case 0:
      if (param_4 == (int *)0x0) {
        sVar4 = *(short *)ptVar1;
        if ((7 < param_2) && ((param_3 + param_2 <= param_1 || (param_1 + param_2 <= param_3)))) {
          uVar12 = param_2 & 0xfffffffffffffff8;
          iVar10 = (int)sVar4;
          piVar8 = param_1 + 4;
          param_1 = param_1 + uVar12;
          piVar9 = param_3 + 4;
          uVar13 = uVar12;
          do {
            piVar14 = piVar9 + -2;
            uVar15 = *(undefined8 *)(piVar9 + -4);
            uVar20 = *(undefined8 *)(piVar9 + 2);
            uVar17 = *(undefined8 *)piVar9;
            uVar13 = uVar13 - 8;
            piVar9 = piVar9 + 8;
            *(ulong *)(piVar8 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + -2) >> 0x20) +
                          (int)((long)*(undefined8 *)piVar14 >> 0x2c) * iVar10,
                          (int)*(undefined8 *)(piVar8 + -2) +
                          ((int)*(undefined8 *)piVar14 >> 0xc) * iVar10);
            *(ulong *)(piVar8 + -4) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + -4) >> 0x20) +
                          (int)((long)uVar15 >> 0x2c) * iVar10,
                          (int)*(undefined8 *)(piVar8 + -4) + ((int)uVar15 >> 0xc) * iVar10);
            *(ulong *)(piVar8 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + 2) >> 0x20) +
                          (int)((long)uVar20 >> 0x2c) * iVar10,
                          (int)*(undefined8 *)(piVar8 + 2) + ((int)uVar20 >> 0xc) * iVar10);
            *(ulong *)piVar8 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar8 >> 0x20) +
                          (int)((long)uVar17 >> 0x2c) * iVar10,
                          (int)*(undefined8 *)piVar8 + ((int)uVar17 >> 0xc) * iVar10);
            piVar8 = piVar8 + 8;
          } while (uVar13 != 0);
          bVar7 = uVar12 == param_2;
          param_3 = param_3 + uVar12;
          param_2 = param_2 - uVar12;
          if (bVar7) {
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
        if (3 < param_2) {
          if (((param_4 + param_2 <= param_1 || param_1 + param_2 <= param_4) &&
              (param_3 + param_2 <= param_1 || param_1 + param_2 <= param_3)) &&
             (param_3 + param_2 <= param_4 || param_4 + param_2 <= param_3)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            iVar11 = (int)sVar4;
            piVar8 = param_1;
            piVar9 = param_3;
            uVar13 = uVar12;
            piVar14 = param_4;
            do {
              uVar13 = uVar13 - 4;
              iVar16 = (int)*(undefined8 *)piVar9 >> 0xc;
              iVar18 = (int)((long)*(undefined8 *)piVar9 >> 0x2c);
              iVar19 = (int)*(undefined8 *)(piVar9 + 2) >> 0xc;
              iVar21 = (int)((long)*(undefined8 *)(piVar9 + 2) >> 0x2c);
              *(ulong *)(piVar8 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar8 + 2) >> 0x20) + iVar21 * iVar11,
                            (int)*(undefined8 *)(piVar8 + 2) + iVar19 * iVar11);
              *(ulong *)piVar8 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar8 >> 0x20) + iVar18 * iVar11,
                            (int)*(undefined8 *)piVar8 + iVar16 * iVar11);
              *(ulong *)(piVar14 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) + iVar21 * iVar10,
                            (int)*(undefined8 *)(piVar14 + 2) + iVar19 * iVar10);
              *(ulong *)piVar14 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) + iVar18 * iVar10,
                            (int)*(undefined8 *)piVar14 + iVar16 * iVar10);
              piVar8 = piVar8 + 4;
              piVar9 = piVar9 + 4;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
            bVar7 = uVar12 == param_2;
            param_3 = param_3 + uVar12;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = param_1 + uVar12;
            if (bVar7) {
              return;
            }
          }
        }
        do {
          iVar11 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (iVar11 >> 0xc) * (int)sVar4;
          *param_4 = *param_4 + (iVar11 >> 0xc) * iVar10;
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
        if ((3 < param_2) &&
           ((param_3 + param_2 * 2 <= param_1 || (param_1 + param_2 * 2 <= param_3)))) {
          uVar12 = param_2 & 0xfffffffffffffffc;
          iVar10 = (int)sVar4;
          piVar8 = param_3 + uVar12 * 2;
          piVar9 = param_1 + uVar12 * 2;
          iVar11 = (int)sVar5;
          uVar13 = uVar12;
          do {
            iVar16 = *param_3;
            iVar22 = param_3[1];
            iVar18 = param_3[2];
            iVar23 = param_3[3];
            iVar19 = param_3[4];
            iVar24 = param_3[5];
            iVar21 = param_3[6];
            iVar25 = param_3[7];
            param_3 = param_3 + 8;
            uVar13 = uVar13 - 4;
            *param_1 = *param_1 + (iVar16 >> 0xc) * iVar10;
            param_1[1] = param_1[1] + (iVar22 >> 0xc) * iVar11;
            param_1[2] = param_1[2] + (iVar18 >> 0xc) * iVar10;
            param_1[3] = param_1[3] + (iVar23 >> 0xc) * iVar11;
            param_1[4] = param_1[4] + (iVar19 >> 0xc) * iVar10;
            param_1[5] = param_1[5] + (iVar24 >> 0xc) * iVar11;
            param_1[6] = param_1[6] + (iVar21 >> 0xc) * iVar10;
            param_1[7] = param_1[7] + (iVar25 >> 0xc) * iVar11;
            param_1 = param_1 + 8;
          } while (uVar13 != 0);
          bVar7 = uVar12 == param_2;
          param_3 = piVar8;
          param_2 = param_2 - uVar12;
          param_1 = piVar9;
          if (bVar7) {
            return;
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
          if (((param_4 + param_2 <= param_1 || param_1 + param_2 * 2 <= param_4) &&
              (param_3 + param_2 * 2 <= param_1 || param_1 + param_2 * 2 <= param_3)) &&
             (param_3 + param_2 * 2 <= param_4 || param_4 + param_2 <= param_3)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            iVar11 = (int)sVar4;
            iVar16 = (int)sVar5;
            piVar8 = param_3 + uVar12 * 2;
            piVar9 = param_1 + uVar12 * 2;
            uVar13 = uVar12;
            piVar14 = param_4;
            do {
              iVar18 = *param_3;
              iVar19 = param_3[1];
              iVar21 = param_3[2];
              iVar22 = param_3[3];
              iVar23 = param_3[4];
              iVar24 = param_3[5];
              iVar25 = param_3[6];
              iVar26 = param_3[7];
              param_3 = param_3 + 8;
              uVar13 = uVar13 - 4;
              *param_1 = *param_1 + (iVar18 >> 0xc) * iVar11;
              param_1[1] = param_1[1] + (iVar19 >> 0xc) * iVar16;
              param_1[2] = param_1[2] + (iVar21 >> 0xc) * iVar11;
              param_1[3] = param_1[3] + (iVar22 >> 0xc) * iVar16;
              param_1[4] = param_1[4] + (iVar23 >> 0xc) * iVar11;
              param_1[5] = param_1[5] + (iVar24 >> 0xc) * iVar16;
              param_1[6] = param_1[6] + (iVar25 >> 0xc) * iVar11;
              param_1[7] = param_1[7] + (iVar26 >> 0xc) * iVar16;
              param_1 = param_1 + 8;
              iVar19 = iVar19 + iVar18;
              iVar22 = iVar22 + iVar21;
              iVar24 = iVar24 + iVar23;
              iVar26 = iVar26 + iVar25;
              *(ulong *)(piVar14 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) +
                            (iVar26 - (iVar26 >> 0x1f) >> 0xd) * iVar10,
                            (int)*(undefined8 *)(piVar14 + 2) +
                            (iVar24 - (iVar24 >> 0x1f) >> 0xd) * iVar10);
              *(ulong *)piVar14 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) +
                            (iVar22 - (iVar22 >> 0x1f) >> 0xd) * iVar10,
                            (int)*(undefined8 *)piVar14 +
                            (iVar19 - (iVar19 >> 0x1f) >> 0xd) * iVar10);
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
            bVar7 = uVar12 == param_2;
            param_3 = piVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar9;
            if (bVar7) {
              return;
            }
          }
        }
        do {
          iVar11 = *param_3;
          *param_1 = *param_1 + (iVar11 >> 0xc) * (int)sVar4;
          iVar11 = param_3[1] + iVar11;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * (int)sVar5;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar11 >> 0xd) * iVar10;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      iVar11 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if ((3 < param_2) &&
           ((param_3 + param_2 * 3 <= param_1 || (param_1 + param_2 * 3 <= param_3)))) {
          uVar12 = param_2 & 0xfffffffffffffffc;
          piVar8 = param_3 + uVar12 * 3;
          piVar9 = param_1 + uVar12 * 3;
          uVar13 = uVar12;
          do {
            iVar10 = *param_3;
            iVar21 = param_3[1];
            iVar25 = param_3[2];
            iVar16 = param_3[3];
            iVar22 = param_3[4];
            iVar26 = param_3[5];
            iVar18 = param_3[6];
            iVar23 = param_3[7];
            iVar27 = param_3[8];
            iVar19 = param_3[9];
            iVar24 = param_3[10];
            iVar28 = param_3[0xb];
            param_3 = param_3 + 0xc;
            uVar13 = uVar13 - 4;
            *param_1 = *param_1 + (iVar10 >> 0xc) * iVar11;
            param_1[1] = param_1[1] + (iVar21 >> 0xc) * iVar11;
            param_1[2] = param_1[2] + (iVar25 >> 0xc) * iVar11;
            param_1[3] = param_1[3] + (iVar16 >> 0xc) * iVar11;
            param_1[4] = param_1[4] + (iVar22 >> 0xc) * iVar11;
            param_1[5] = param_1[5] + (iVar26 >> 0xc) * iVar11;
            param_1[6] = param_1[6] + (iVar18 >> 0xc) * iVar11;
            param_1[7] = param_1[7] + (iVar23 >> 0xc) * iVar11;
            param_1[8] = param_1[8] + (iVar27 >> 0xc) * iVar11;
            param_1[9] = param_1[9] + (iVar19 >> 0xc) * iVar11;
            param_1[10] = param_1[10] + (iVar24 >> 0xc) * iVar11;
            param_1[0xb] = param_1[0xb] + (iVar28 >> 0xc) * iVar11;
            param_1 = param_1 + 0xc;
          } while (uVar13 != 0);
          bVar7 = uVar12 == param_2;
          param_3 = piVar8;
          param_2 = param_2 - uVar12;
          param_1 = piVar9;
          if (bVar7) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * iVar11;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar11;
          param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar11;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if (((param_4 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_4) &&
              (param_3 + param_2 * 3 <= param_1 || param_1 + param_2 * 3 <= param_3)) &&
             (param_3 + param_2 * 3 <= param_4 || param_4 + param_2 <= param_3)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            piVar8 = param_3 + uVar12 * 3;
            piVar9 = param_1 + uVar12 * 3;
            uVar13 = uVar12;
            piVar14 = param_4;
            do {
              iVar16 = *param_3;
              iVar22 = param_3[1];
              iVar26 = param_3[2];
              iVar18 = param_3[3];
              iVar23 = param_3[4];
              iVar27 = param_3[5];
              iVar19 = param_3[6];
              iVar24 = param_3[7];
              iVar28 = param_3[8];
              iVar21 = param_3[9];
              iVar25 = param_3[10];
              iVar29 = param_3[0xb];
              param_3 = param_3 + 0xc;
              uVar13 = uVar13 - 4;
              *param_1 = *param_1 + (iVar16 >> 0xc) * iVar11;
              param_1[1] = param_1[1] + (iVar22 >> 0xc) * iVar11;
              param_1[2] = param_1[2] + (iVar26 >> 0xc) * iVar11;
              param_1[3] = param_1[3] + (iVar18 >> 0xc) * iVar11;
              param_1[4] = param_1[4] + (iVar23 >> 0xc) * iVar11;
              param_1[5] = param_1[5] + (iVar27 >> 0xc) * iVar11;
              param_1[6] = param_1[6] + (iVar19 >> 0xc) * iVar11;
              param_1[7] = param_1[7] + (iVar24 >> 0xc) * iVar11;
              param_1[8] = param_1[8] + (iVar28 >> 0xc) * iVar11;
              param_1[9] = param_1[9] + (iVar21 >> 0xc) * iVar11;
              param_1[10] = param_1[10] + (iVar25 >> 0xc) * iVar11;
              param_1[0xb] = param_1[0xb] + (iVar29 >> 0xc) * iVar11;
              param_1 = param_1 + 0xc;
              *(ulong *)(piVar14 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) +
                            ((iVar25 + iVar21 + iVar29) / 3 >> 0xc) * iVar10,
                            (int)*(undefined8 *)(piVar14 + 2) +
                            ((iVar24 + iVar19 + iVar28) / 3 >> 0xc) * iVar10);
              *(ulong *)piVar14 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) +
                            ((iVar23 + iVar18 + iVar27) / 3 >> 0xc) * iVar10,
                            (int)*(undefined8 *)piVar14 +
                            ((iVar22 + iVar16 + iVar26) / 3 >> 0xc) * iVar10);
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
            bVar7 = uVar12 == param_2;
            param_3 = piVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar9;
            if (bVar7) {
              return;
            }
          }
        }
        do {
          iVar16 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (iVar16 >> 0xc) * iVar11;
          iVar18 = param_3[1];
          param_1[1] = param_1[1] + (iVar18 >> 0xc) * iVar11;
          iVar19 = param_3[2];
          param_1[2] = param_1[2] + (iVar19 >> 0xc) * iVar11;
          *param_4 = *param_4 + ((iVar18 + iVar16 + iVar19) / 3 >> 0xc) * iVar10;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      sVar4 = *(short *)ptVar1;
      iVar11 = (int)sVar4;
      if (param_4 == (int *)0x0) {
        if ((3 < param_2) &&
           ((param_3 + param_2 * 4 <= param_1 || (param_1 + param_2 * 4 <= param_3)))) {
          uVar12 = param_2 & 0xfffffffffffffffc;
          piVar8 = param_3 + uVar12 * 4;
          piVar9 = param_1 + uVar12 * 4;
          uVar13 = uVar12;
          do {
            iVar10 = *param_3;
            iVar21 = param_3[1];
            iVar25 = param_3[2];
            iVar29 = param_3[3];
            iVar16 = param_3[4];
            iVar22 = param_3[5];
            iVar26 = param_3[6];
            iVar30 = param_3[7];
            iVar18 = param_3[8];
            iVar23 = param_3[9];
            iVar27 = param_3[10];
            iVar31 = param_3[0xb];
            iVar19 = param_3[0xc];
            iVar24 = param_3[0xd];
            iVar28 = param_3[0xe];
            iVar32 = param_3[0xf];
            param_3 = param_3 + 0x10;
            uVar13 = uVar13 - 4;
            *param_1 = *param_1 + (iVar10 >> 0xc) * iVar11;
            param_1[1] = param_1[1] + (iVar21 >> 0xc) * iVar11;
            param_1[2] = param_1[2] + (iVar25 >> 0xc) * iVar11;
            param_1[3] = param_1[3] + (iVar29 >> 0xc) * iVar11;
            param_1[4] = param_1[4] + (iVar16 >> 0xc) * iVar11;
            param_1[5] = param_1[5] + (iVar22 >> 0xc) * iVar11;
            param_1[6] = param_1[6] + (iVar26 >> 0xc) * iVar11;
            param_1[7] = param_1[7] + (iVar30 >> 0xc) * iVar11;
            param_1[8] = param_1[8] + (iVar18 >> 0xc) * iVar11;
            param_1[9] = param_1[9] + (iVar23 >> 0xc) * iVar11;
            param_1[10] = param_1[10] + (iVar27 >> 0xc) * iVar11;
            param_1[0xb] = param_1[0xb] + (iVar31 >> 0xc) * iVar11;
            param_1[0xc] = param_1[0xc] + (iVar19 >> 0xc) * iVar11;
            param_1[0xd] = param_1[0xd] + (iVar24 >> 0xc) * iVar11;
            param_1[0xe] = param_1[0xe] + (iVar28 >> 0xc) * iVar11;
            param_1[0xf] = param_1[0xf] + (iVar32 >> 0xc) * iVar11;
            param_1 = param_1 + 0x10;
          } while (uVar13 != 0);
          bVar7 = uVar12 == param_2;
          param_3 = piVar8;
          param_2 = param_2 - uVar12;
          param_1 = piVar9;
          if (bVar7) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (*param_3 >> 0xc) * iVar11;
          param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar11;
          param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar11;
          param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar11;
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if (((param_4 + param_2 <= param_1 || param_1 + param_2 * 4 <= param_4) &&
              (param_3 + param_2 * 4 <= param_1 || param_1 + param_2 * 4 <= param_3)) &&
             (param_3 + param_2 * 4 <= param_4 || param_4 + param_2 <= param_3)) {
            uVar12 = param_2 & 0xfffffffffffffffc;
            piVar8 = param_3 + uVar12 * 4;
            piVar9 = param_1 + uVar12 * 4;
            uVar13 = uVar12;
            piVar14 = param_4;
            do {
              iVar16 = *param_3;
              iVar22 = param_3[1];
              iVar26 = param_3[2];
              iVar30 = param_3[3];
              iVar18 = param_3[4];
              iVar23 = param_3[5];
              iVar27 = param_3[6];
              iVar31 = param_3[7];
              iVar19 = param_3[8];
              iVar24 = param_3[9];
              iVar28 = param_3[10];
              iVar32 = param_3[0xb];
              iVar21 = param_3[0xc];
              iVar25 = param_3[0xd];
              iVar29 = param_3[0xe];
              iVar33 = param_3[0xf];
              param_3 = param_3 + 0x10;
              uVar13 = uVar13 - 4;
              *param_1 = *param_1 + (iVar16 >> 0xc) * iVar11;
              param_1[1] = param_1[1] + (iVar22 >> 0xc) * iVar11;
              param_1[2] = param_1[2] + (iVar26 >> 0xc) * iVar11;
              param_1[3] = param_1[3] + (iVar30 >> 0xc) * iVar11;
              param_1[4] = param_1[4] + (iVar18 >> 0xc) * iVar11;
              param_1[5] = param_1[5] + (iVar23 >> 0xc) * iVar11;
              param_1[6] = param_1[6] + (iVar27 >> 0xc) * iVar11;
              param_1[7] = param_1[7] + (iVar31 >> 0xc) * iVar11;
              param_1[8] = param_1[8] + (iVar19 >> 0xc) * iVar11;
              param_1[9] = param_1[9] + (iVar24 >> 0xc) * iVar11;
              param_1[10] = param_1[10] + (iVar28 >> 0xc) * iVar11;
              param_1[0xb] = param_1[0xb] + (iVar32 >> 0xc) * iVar11;
              param_1[0xc] = param_1[0xc] + (iVar21 >> 0xc) * iVar11;
              param_1[0xd] = param_1[0xd] + (iVar25 >> 0xc) * iVar11;
              param_1[0xe] = param_1[0xe] + (iVar29 >> 0xc) * iVar11;
              param_1[0xf] = param_1[0xf] + (iVar33 >> 0xc) * iVar11;
              param_1 = param_1 + 0x10;
              iVar30 = iVar22 + iVar16 + iVar26 + iVar30;
              iVar31 = iVar23 + iVar18 + iVar27 + iVar31;
              iVar32 = iVar24 + iVar19 + iVar28 + iVar32;
              iVar33 = iVar25 + iVar21 + iVar29 + iVar33;
              *(ulong *)(piVar14 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) +
                            ((int)(iVar33 + ((uint)(iVar33 >> 0x1f) >> 0x1e)) >> 0xe) * iVar10,
                            (int)*(undefined8 *)(piVar14 + 2) +
                            ((int)(iVar32 + ((uint)(iVar32 >> 0x1f) >> 0x1e)) >> 0xe) * iVar10);
              *(ulong *)piVar14 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) +
                            ((int)(iVar31 + ((uint)(iVar31 >> 0x1f) >> 0x1e)) >> 0xe) * iVar10,
                            (int)*(undefined8 *)piVar14 +
                            ((int)(iVar30 + ((uint)(iVar30 >> 0x1f) >> 0x1e)) >> 0xe) * iVar10);
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
            bVar7 = uVar12 == param_2;
            param_3 = piVar8;
            param_4 = param_4 + uVar12;
            param_2 = param_2 - uVar12;
            param_1 = piVar9;
            if (bVar7) {
              return;
            }
          }
        }
        do {
          iVar16 = *param_3;
          *param_1 = *param_1 + (iVar16 >> 0xc) * (int)sVar4;
          iVar18 = param_3[1];
          param_1[1] = param_1[1] + (iVar18 >> 0xc) * (int)sVar4;
          iVar19 = param_3[2];
          param_1[2] = param_1[2] + (iVar19 >> 0xc) * (int)sVar4;
          iVar11 = param_3[3];
          param_1[3] = param_1[3] + (iVar11 >> 0xc) * (int)sVar4;
          iVar11 = iVar18 + iVar16 + iVar19 + iVar11;
          iVar16 = iVar11 + 3;
          if (-1 < iVar11) {
            iVar16 = iVar11;
          }
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar16 >> 0xe) * iVar10;
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

