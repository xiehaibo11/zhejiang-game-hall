
/* void cocos2d::experimental::AudioMixer::volumeMix<1, false, true, int, short, int>(int*, unsigned
   long, short const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<1,false,true,int,short,int>
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
  bool bVar8;
  int *piVar9;
  short *psVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  uVar7 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar7 < 8) {
      iVar11 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
      switch(uVar7) {
      case 0:
        piVar9 = param_4;
        if (param_4 == (int *)0x0) {
          iVar11 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar11 >> 0x10) * (int)*param_3;
            iVar11 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar11;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar4 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar4;
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar9 = *piVar9 + (*(int *)ptVar3 >> 0x10) * (int)sVar4;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar11;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar9 = piVar9 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        piVar9 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            sVar4 = *param_3;
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
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)sVar4;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)sVar4;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            *piVar9 = *piVar9 + (*(int *)(param_6 + 0x1c) >> 0x10) * (int)sVar4;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar11;
            param_3 = param_3 + 1;
            piVar9 = piVar9 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        volumeRampMulti<1,3,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
        break;
      case 3:
        volumeRampMulti<1,4,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
        break;
      case 4:
        volumeRampMulti<1,5,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
        break;
      case 5:
        volumeRampMulti<1,6,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
        break;
      case 6:
        volumeRampMulti<1,7,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
        break;
      case 7:
        volumeRampMulti<1,8,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar11)
        ;
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar7 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar11 = (int)sVar4;
    ptVar1 = param_6 + 4;
    switch(uVar7) {
    case 0:
      if (param_4 == (int *)0x0) {
        iVar11 = (int)*(short *)ptVar1;
        if (7 < param_2) {
          uVar13 = param_2 & 0xfffffffffffffff8;
          iVar15 = (int)*(short *)ptVar1;
          piVar9 = param_1 + 4;
          param_1 = param_1 + uVar13;
          psVar10 = param_3 + 4;
          uVar12 = uVar13;
          do {
            uVar16 = *(undefined8 *)(psVar10 + -4);
            uVar20 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 8;
            psVar10 = psVar10 + 8;
            *(ulong *)(piVar9 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + -2) >> 0x20) +
                          iVar11 * (short)((ulong)uVar16 >> 0x30),
                          (int)*(undefined8 *)(piVar9 + -2) +
                          iVar11 * (short)((ulong)uVar16 >> 0x20));
            *(ulong *)(piVar9 + -4) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + -4) >> 0x20) +
                          iVar15 * (short)((ulong)uVar16 >> 0x10),
                          (int)*(undefined8 *)(piVar9 + -4) + iVar15 * (short)uVar16);
            *(ulong *)(piVar9 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20) +
                          iVar11 * (short)((ulong)uVar20 >> 0x30),
                          (int)*(undefined8 *)(piVar9 + 2) + iVar11 * (short)((ulong)uVar20 >> 0x20)
                         );
            *(ulong *)piVar9 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar9 >> 0x20) +
                          iVar15 * (short)((ulong)uVar20 >> 0x10),
                          (int)*(undefined8 *)piVar9 + iVar15 * (short)uVar20);
            piVar9 = piVar9 + 8;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_2 = param_2 - uVar13;
          if (bVar8) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * iVar11;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        sVar4 = *(short *)ptVar1;
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 <= param_4)))) {
          uVar13 = param_2 & 0xfffffffffffffffc;
          iVar15 = (int)sVar4;
          piVar9 = param_1;
          psVar10 = param_3;
          uVar12 = uVar13;
          piVar14 = param_4;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar17 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar18 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar19 = (int)(short)((ulong)uVar16 >> 0x30);
            *(ulong *)(piVar9 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20) + iVar15 * iVar19,
                          (int)*(undefined8 *)(piVar9 + 2) + iVar15 * iVar18);
            *(ulong *)piVar9 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar9 >> 0x20) + iVar15 * iVar17,
                          (int)*(undefined8 *)piVar9 + iVar15 * (short)uVar16);
            *(ulong *)(piVar14 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) + iVar11 * iVar19,
                          (int)*(undefined8 *)(piVar14 + 2) + iVar11 * iVar18);
            *(ulong *)piVar14 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) + iVar11 * iVar17,
                          (int)*(undefined8 *)piVar14 + iVar11 * (short)uVar16);
            piVar9 = piVar9 + 4;
            psVar10 = psVar10 + 4;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_4 = param_4 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = param_1 + uVar13;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (int)sVar5 * (int)sVar4;
          *param_4 = *param_4 + sVar5 * iVar11;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        iVar11 = (int)*(short *)ptVar1;
        iVar15 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar13 = param_2 & 0xfffffffffffffffc;
          piVar9 = param_1 + uVar13 * 2;
          psVar10 = param_3;
          uVar12 = uVar13;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar17 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar18 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar19 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar11 * (short)uVar16;
            param_1[1] = param_1[1] + iVar15 * (short)uVar16;
            param_1[2] = param_1[2] + iVar11 * iVar17;
            param_1[3] = param_1[3] + iVar15 * iVar17;
            param_1[4] = param_1[4] + iVar11 * iVar18;
            param_1[5] = param_1[5] + iVar15 * iVar18;
            param_1[6] = param_1[6] + iVar11 * iVar19;
            param_1[7] = param_1[7] + iVar15 * iVar19;
            param_1 = param_1 + 8;
            psVar10 = psVar10 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar9;
          if (bVar8) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + *param_3 * iVar15,
                        (int)*(undefined8 *)param_1 + *param_3 * iVar11);
          param_3 = param_3 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        iVar15 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 2 <= param_4))))
        {
          uVar13 = param_2 & 0xfffffffffffffffc;
          piVar9 = param_1 + uVar13 * 2;
          psVar10 = param_3;
          uVar12 = uVar13;
          piVar14 = param_4;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar18 = (int)(short)uVar16;
            iVar19 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar21 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar22 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar15 * iVar18;
            param_1[1] = param_1[1] + iVar17 * iVar18;
            param_1[2] = param_1[2] + iVar15 * iVar19;
            param_1[3] = param_1[3] + iVar17 * iVar19;
            param_1[4] = param_1[4] + iVar15 * iVar21;
            param_1[5] = param_1[5] + iVar17 * iVar21;
            param_1[6] = param_1[6] + iVar15 * iVar22;
            param_1[7] = param_1[7] + iVar17 * iVar22;
            param_1 = param_1 + 8;
            *(ulong *)(piVar14 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) + iVar11 * iVar22,
                          (int)*(undefined8 *)(piVar14 + 2) + iVar11 * iVar21);
            *(ulong *)piVar14 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) + iVar11 * iVar19,
                          (int)*(undefined8 *)piVar14 + iVar11 * iVar18);
            psVar10 = psVar10 + 4;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_4 = param_4 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar9;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar15);
          *param_4 = *param_4 + sVar4 * iVar11;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      if (param_4 == (int *)0x0) {
        sVar4 = *(short *)(param_6 + 8);
        iVar11 = (int)sVar4;
        iVar15 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar13 = param_2 & 0xfffffffffffffffc;
          piVar9 = param_1 + uVar13 * 3;
          psVar10 = param_3;
          uVar12 = uVar13;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar18 = (int)(short)uVar16;
            iVar19 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar21 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar22 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar15 * iVar18;
            param_1[1] = param_1[1] + iVar17 * iVar18;
            param_1[2] = param_1[2] + sVar4 * iVar18;
            param_1[3] = param_1[3] + iVar15 * iVar19;
            param_1[4] = param_1[4] + iVar17 * iVar19;
            param_1[5] = param_1[5] + sVar4 * iVar19;
            param_1[6] = param_1[6] + iVar15 * iVar21;
            param_1[7] = param_1[7] + iVar17 * iVar21;
            param_1[8] = param_1[8] + iVar11 * iVar21;
            param_1[9] = param_1[9] + iVar15 * iVar22;
            param_1[10] = param_1[10] + iVar17 * iVar22;
            param_1[0xb] = param_1[0xb] + iVar11 * iVar22;
            param_1 = param_1 + 0xc;
            psVar10 = psVar10 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar9;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + sVar4 * iVar11;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar15);
          param_3 = param_3 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        sVar4 = *(short *)(param_6 + 8);
        iVar15 = (int)*(short *)ptVar1;
        iVar17 = (int)*(short *)(param_6 + 6);
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 3 <= param_4))))
        {
          uVar13 = param_2 & 0xfffffffffffffffc;
          iVar18 = (int)sVar4;
          piVar14 = param_1 + uVar13 * 3;
          psVar10 = param_3;
          uVar12 = uVar13;
          piVar9 = param_4;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar19 = (int)(short)uVar16;
            iVar21 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar22 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar23 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar15 * iVar19;
            param_1[1] = param_1[1] + iVar17 * iVar19;
            param_1[2] = param_1[2] + iVar18 * iVar19;
            param_1[3] = param_1[3] + iVar15 * iVar21;
            param_1[4] = param_1[4] + iVar17 * iVar21;
            param_1[5] = param_1[5] + iVar18 * iVar21;
            param_1[6] = param_1[6] + iVar15 * iVar22;
            param_1[7] = param_1[7] + iVar17 * iVar22;
            param_1[8] = param_1[8] + iVar18 * iVar22;
            param_1[9] = param_1[9] + iVar15 * iVar23;
            param_1[10] = param_1[10] + iVar17 * iVar23;
            param_1[0xb] = param_1[0xb] + iVar18 * iVar23;
            param_1 = param_1 + 0xc;
            *(ulong *)(piVar9 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20) + iVar11 * iVar23,
                          (int)*(undefined8 *)(piVar9 + 2) + iVar11 * iVar22);
            *(ulong *)piVar9 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar9 >> 0x20) + iVar11 * iVar21,
                          (int)*(undefined8 *)piVar9 + iVar11 * iVar19);
            psVar10 = psVar10 + 4;
            piVar9 = piVar9 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_4 = param_4 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar14;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + (int)sVar5 * (int)sVar4;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar5 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar5 * iVar15);
          *param_4 = *param_4 + sVar5 * iVar11;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      if (param_4 == (int *)0x0) {
        uVar16 = *(undefined8 *)ptVar1;
        iVar11 = (int)(short)uVar16;
        iVar15 = (int)(short)((ulong)uVar16 >> 0x10);
        iVar17 = (int)(short)((ulong)uVar16 >> 0x20);
        iVar18 = (int)(short)((ulong)uVar16 >> 0x30);
        if (3 < param_2) {
          uVar13 = param_2 & 0xfffffffffffffffc;
          piVar9 = param_1 + uVar13 * 4;
          psVar10 = param_3;
          uVar12 = uVar13;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar19 = (int)(short)uVar16;
            iVar21 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar22 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar23 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar11 * iVar19;
            param_1[1] = param_1[1] + iVar15 * iVar19;
            param_1[2] = param_1[2] + iVar17 * iVar19;
            param_1[3] = param_1[3] + iVar18 * iVar19;
            param_1[4] = param_1[4] + iVar11 * iVar21;
            param_1[5] = param_1[5] + iVar15 * iVar21;
            param_1[6] = param_1[6] + iVar17 * iVar21;
            param_1[7] = param_1[7] + iVar18 * iVar21;
            param_1[8] = param_1[8] + iVar11 * iVar22;
            param_1[9] = param_1[9] + iVar15 * iVar22;
            param_1[10] = param_1[10] + iVar17 * iVar22;
            param_1[0xb] = param_1[0xb] + iVar18 * iVar22;
            param_1[0xc] = param_1[0xc] + iVar11 * iVar23;
            param_1[0xd] = param_1[0xd] + iVar15 * iVar23;
            param_1[0xe] = param_1[0xe] + iVar17 * iVar23;
            param_1[0xf] = param_1[0xf] + iVar18 * iVar23;
            param_1 = param_1 + 0x10;
            psVar10 = psVar10 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar9;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + sVar4 * iVar18,
                        (int)*(undefined8 *)(param_1 + 2) + sVar4 * iVar17);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar15,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar11);
          param_3 = param_3 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      else {
        uVar16 = *(undefined8 *)ptVar1;
        iVar15 = (int)(short)uVar16;
        iVar17 = (int)(short)((ulong)uVar16 >> 0x10);
        iVar18 = (int)(short)((ulong)uVar16 >> 0x20);
        iVar19 = (int)(short)((ulong)uVar16 >> 0x30);
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 4 <= param_4))))
        {
          uVar13 = param_2 & 0xfffffffffffffffc;
          piVar9 = param_1 + uVar13 * 4;
          psVar10 = param_3;
          uVar12 = uVar13;
          piVar14 = param_4;
          do {
            uVar16 = *(undefined8 *)psVar10;
            uVar12 = uVar12 - 4;
            iVar21 = (int)(short)uVar16;
            iVar22 = (int)(short)((ulong)uVar16 >> 0x10);
            iVar23 = (int)(short)((ulong)uVar16 >> 0x20);
            iVar24 = (int)(short)((ulong)uVar16 >> 0x30);
            *param_1 = *param_1 + iVar15 * iVar21;
            param_1[1] = param_1[1] + iVar17 * iVar21;
            param_1[2] = param_1[2] + iVar18 * iVar21;
            param_1[3] = param_1[3] + iVar19 * iVar21;
            param_1[4] = param_1[4] + iVar15 * iVar22;
            param_1[5] = param_1[5] + iVar17 * iVar22;
            param_1[6] = param_1[6] + iVar18 * iVar22;
            param_1[7] = param_1[7] + iVar19 * iVar22;
            param_1[8] = param_1[8] + iVar15 * iVar23;
            param_1[9] = param_1[9] + iVar17 * iVar23;
            param_1[10] = param_1[10] + iVar18 * iVar23;
            param_1[0xb] = param_1[0xb] + iVar19 * iVar23;
            param_1[0xc] = param_1[0xc] + iVar15 * iVar24;
            param_1[0xd] = param_1[0xd] + iVar17 * iVar24;
            param_1[0xe] = param_1[0xe] + iVar18 * iVar24;
            param_1[0xf] = param_1[0xf] + iVar19 * iVar24;
            param_1 = param_1 + 0x10;
            *(ulong *)(piVar14 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar14 + 2) >> 0x20) + iVar11 * iVar24,
                          (int)*(undefined8 *)(piVar14 + 2) + iVar11 * iVar23);
            *(ulong *)piVar14 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar14 >> 0x20) + iVar11 * iVar22,
                          (int)*(undefined8 *)piVar14 + iVar11 * iVar21);
            psVar10 = psVar10 + 4;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
          bVar8 = uVar13 == param_2;
          param_3 = param_3 + uVar13;
          param_4 = param_4 + uVar13;
          param_2 = param_2 - uVar13;
          param_1 = piVar9;
          if (bVar8) {
            return;
          }
        }
        do {
          sVar4 = *param_3;
          param_2 = param_2 - 1;
          iVar21 = (int)sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar21 * iVar19,
                        (int)*(undefined8 *)(param_1 + 2) + iVar21 * iVar18);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar4 * iVar17,
                        (int)*(undefined8 *)param_1 + sVar4 * iVar15);
          *param_4 = *param_4 + iVar21 * iVar11;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      break;
    case 4:
      if (param_4 == (int *)0x0) {
        uVar16 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          iVar11 = (int)sVar5;
          param_1[4] = param_1[4] + iVar11 * sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar11 * (short)((ulong)uVar16 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar11 * (short)((ulong)uVar16 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar5 * (int)(short)((ulong)uVar16 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar5 * (int)(short)uVar16);
          param_1 = param_1 + 5;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        uVar16 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        do {
          sVar5 = *param_3;
          param_2 = param_2 - 1;
          iVar15 = (int)sVar5;
          param_1[4] = param_1[4] + iVar15 * sVar4;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar15 * (short)((ulong)uVar16 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar15 * (short)((ulong)uVar16 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar5 * (int)(short)((ulong)uVar16 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar5 * (int)(short)uVar16);
          *param_4 = *param_4 + iVar15 * iVar11;
          param_1 = param_1 + 5;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      if (param_4 == (int *)0x0) {
        uVar16 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        sVar5 = *(short *)(param_6 + 0xe);
        do {
          sVar6 = *param_3;
          param_2 = param_2 - 1;
          iVar11 = (int)sVar6;
          param_1[4] = param_1[4] + iVar11 * sVar4;
          param_1[5] = param_1[5] + iVar11 * sVar5;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar11 * (short)((ulong)uVar16 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar11 * (short)((ulong)uVar16 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar6 * (int)(short)((ulong)uVar16 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar6 * (int)(short)uVar16);
          param_1 = param_1 + 6;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        uVar16 = *(undefined8 *)ptVar1;
        sVar4 = *(short *)(param_6 + 0xc);
        sVar5 = *(short *)(param_6 + 0xe);
        do {
          sVar6 = *param_3;
          param_2 = param_2 - 1;
          iVar15 = (int)sVar6;
          param_1[4] = param_1[4] + iVar15 * sVar4;
          param_1[5] = param_1[5] + iVar15 * sVar5;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar15 * (short)((ulong)uVar16 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar15 * (short)((ulong)uVar16 >> 0x20))
          ;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (int)sVar6 * (int)(short)((ulong)uVar16 >> 0x10),
                        (int)*(undefined8 *)param_1 + (int)sVar6 * (int)(short)uVar16);
          *param_4 = *param_4 + sVar6 * iVar11;
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

