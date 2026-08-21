
/* void cocos2d::experimental::AudioMixer::volumeMix<0, false, true, int, short, int>(int*, unsigned
   long, short const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<0,false,true,int,short,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,track_t *param_6
               )

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  bool bVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  short sVar19;
  short sVar20;
  undefined8 uVar18;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  uint uVar34;
  
  uVar34 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar34 < 8) {
      iVar7 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 8;
      ptVar2 = param_6 + 0x10;
      ptVar3 = param_6 + 0x1c;
      switch(uVar34) {
      case 0:
        piVar5 = param_4;
        if (param_4 == (int *)0x0) {
          iVar7 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar7 >> 0x10) * (int)*param_3;
            iVar7 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar7;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar17 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar17;
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar5 = *piVar5 + (*(int *)ptVar3 >> 0x10) * (int)sVar17;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar7;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar5 = piVar5 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        piVar5 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)*param_3;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            psVar6 = param_3 + 1;
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)*psVar6;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
          } while (param_2 != 0);
        }
        else {
          do {
            sVar17 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)(param_6 + 8) >> 0x10) * (int)sVar17;
            *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + *(int *)(param_6 + 0x10);
            sVar19 = param_3[1];
            param_3 = param_3 + 2;
            param_1[1] = param_1[1] + (*(int *)(param_6 + 0xc) >> 0x10) * (int)sVar19;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0xc) = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14);
            *piVar5 = *piVar5 + (*(int *)(param_6 + 0x1c) >> 0x10) *
                                ((int)sVar19 + (int)sVar17 >> 1);
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar7;
            piVar5 = piVar5 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        piVar5 = param_4;
        if (param_4 == (int *)0x0) {
          iVar7 = *(int *)ptVar1;
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (iVar7 >> 0x10) * (int)*param_3;
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (int)param_3[1];
            psVar6 = param_3 + 2;
            param_3 = param_3 + 3;
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (int)*psVar6;
            param_1 = param_1 + 3;
            iVar7 = *(int *)ptVar1 + *(int *)ptVar2;
            *(int *)ptVar1 = iVar7;
          } while (param_2 != 0);
        }
        else {
          do {
            sVar17 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = *param_1 + (*(int *)ptVar1 >> 0x10) * (int)sVar17;
            sVar19 = param_3[1];
            param_1[1] = param_1[1] + (*(int *)ptVar1 >> 0x10) * (int)sVar19;
            sVar20 = param_3[2];
            param_1[2] = param_1[2] + (*(int *)ptVar1 >> 0x10) * (int)sVar20;
            *(int *)ptVar1 = *(int *)ptVar1 + *(int *)ptVar2;
            *piVar5 = *piVar5 + (*(int *)ptVar3 >> 0x10) *
                                ((((int)sVar19 + (int)sVar17 + (int)sVar20) * 0x1000) / 3 >> 0xc);
            param_3 = param_3 + 3;
            param_1 = param_1 + 3;
            *(int *)ptVar3 = *(int *)ptVar3 + iVar7;
            piVar5 = piVar5 + 1;
          } while (param_2 != 0);
        }
        break;
      case 3:
        volumeRampMulti<3,4,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar7);
        break;
      case 4:
        volumeRampMulti<3,5,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar7);
        break;
      case 5:
        volumeRampMulti<3,6,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar7);
        break;
      case 6:
        volumeRampMulti<3,7,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar7);
        break;
      case 7:
        volumeRampMulti<3,8,int,short,int,int,int>
                  (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar7);
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,false);
    return;
  }
  if (uVar34 < 8) {
    sVar17 = *(short *)(param_6 + 0x20);
    iVar7 = (int)sVar17;
    ptVar1 = param_6 + 4;
    switch(uVar34) {
    case 0:
      if (param_4 == (int *)0x0) {
        iVar7 = (int)*(short *)ptVar1;
        if (7 < param_2) {
          uVar11 = param_2 & 0xfffffffffffffff8;
          iVar9 = (int)*(short *)ptVar1;
          piVar5 = param_1 + 4;
          param_1 = param_1 + uVar11;
          psVar6 = param_3 + 4;
          uVar10 = uVar11;
          do {
            uVar13 = *(undefined8 *)(psVar6 + -4);
            uVar18 = *(undefined8 *)psVar6;
            uVar10 = uVar10 - 8;
            psVar6 = psVar6 + 8;
            iVar8 = (int)((ulong)*(undefined8 *)(piVar5 + -4) >> 0x20) +
                    iVar9 * (short)((ulong)uVar13 >> 0x10);
            iVar14 = (int)((ulong)*(undefined8 *)piVar5 >> 0x20) +
                     iVar9 * (short)((ulong)uVar18 >> 0x10);
            *(ulong *)(piVar5 + -2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + -2) >> 0x20) +
                          iVar7 * (short)((ulong)uVar13 >> 0x30),
                          (int)*(undefined8 *)(piVar5 + -2) + iVar7 * (short)((ulong)uVar13 >> 0x20)
                         );
            *(ulong *)(piVar5 + -4) =
                 CONCAT26((short)((uint)iVar8 >> 0x10),
                          CONCAT24((short)iVar8,
                                   (int)*(undefined8 *)(piVar5 + -4) + iVar9 * (short)uVar13));
            *(ulong *)(piVar5 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) +
                          iVar7 * (short)((ulong)uVar18 >> 0x30),
                          (int)*(undefined8 *)(piVar5 + 2) + iVar7 * (short)((ulong)uVar18 >> 0x20))
            ;
            *(ulong *)piVar5 =
                 CONCAT26((short)((uint)iVar14 >> 0x10),
                          CONCAT24((short)iVar14,(int)*(undefined8 *)piVar5 + iVar9 * (short)uVar18)
                         );
            piVar5 = piVar5 + 8;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = param_3 + uVar11;
          param_2 = param_2 - uVar11;
          if (bVar4) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * iVar7;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        sVar19 = *(short *)ptVar1;
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 <= param_4)))) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          iVar9 = (int)sVar19;
          piVar5 = param_1;
          psVar6 = param_3;
          uVar10 = uVar11;
          piVar12 = param_4;
          do {
            uVar13 = *(undefined8 *)psVar6;
            uVar10 = uVar10 - 4;
            iVar14 = (int)(short)((ulong)uVar13 >> 0x10);
            iVar15 = (int)(short)((ulong)uVar13 >> 0x20);
            iVar16 = (int)(short)((ulong)uVar13 >> 0x30);
            iVar8 = (int)((ulong)*(undefined8 *)piVar5 >> 0x20) + iVar9 * iVar14;
            *(ulong *)(piVar5 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) + iVar9 * iVar16,
                          (int)*(undefined8 *)(piVar5 + 2) + iVar9 * iVar15);
            *(ulong *)piVar5 =
                 CONCAT26((short)((uint)iVar8 >> 0x10),
                          CONCAT24((short)iVar8,(int)*(undefined8 *)piVar5 + iVar9 * (short)uVar13))
            ;
            iVar8 = (int)((ulong)*(undefined8 *)piVar12 >> 0x20) + iVar7 * iVar14;
            *(ulong *)(piVar12 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) + iVar7 * iVar16,
                          (int)*(undefined8 *)(piVar12 + 2) + iVar7 * iVar15);
            *(ulong *)piVar12 =
                 CONCAT26((short)((uint)iVar8 >> 0x10),
                          CONCAT24((short)iVar8,(int)*(undefined8 *)piVar12 + iVar7 * (short)uVar13)
                         );
            piVar5 = piVar5 + 4;
            psVar6 = psVar6 + 4;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = param_3 + uVar11;
          param_4 = param_4 + uVar11;
          param_2 = param_2 - uVar11;
          param_1 = param_1 + uVar11;
          if (bVar4) {
            return;
          }
        }
        do {
          sVar20 = *param_3;
          param_2 = param_2 - 1;
          *param_1 = *param_1 + (int)sVar20 * (int)sVar19;
          *param_4 = *param_4 + (int)sVar20 * (int)sVar17;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        iVar7 = (int)*(short *)ptVar1;
        iVar9 = (int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          psVar6 = param_3 + uVar11 * 2;
          piVar5 = param_1 + uVar11 * 2;
          uVar10 = uVar11;
          do {
            sVar17 = *param_3;
            sVar22 = param_3[1];
            sVar19 = param_3[2];
            sVar23 = param_3[3];
            sVar20 = param_3[4];
            sVar24 = param_3[5];
            sVar21 = param_3[6];
            sVar25 = param_3[7];
            param_3 = param_3 + 8;
            uVar10 = uVar10 - 4;
            *param_1 = *param_1 + iVar7 * sVar17;
            param_1[1] = param_1[1] + iVar9 * sVar22;
            param_1[2] = param_1[2] + iVar7 * sVar19;
            param_1[3] = param_1[3] + iVar9 * sVar23;
            param_1[4] = param_1[4] + iVar7 * sVar20;
            param_1[5] = param_1[5] + iVar9 * sVar24;
            param_1[6] = param_1[6] + iVar7 * sVar21;
            param_1[7] = param_1[7] + iVar9 * sVar25;
            param_1 = param_1 + 8;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          param_3 = psVar6;
          if (bVar4) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + param_3[1] * iVar9,
                        (int)*(undefined8 *)param_1 + *param_3 * iVar7);
          param_1 = param_1 + 2;
          param_3 = param_3 + 2;
        } while (param_2 != 0);
      }
      else {
        iVar9 = (int)*(short *)ptVar1;
        iVar8 = (int)*(short *)(param_6 + 6);
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 2 <= param_4))))
        {
          uVar11 = param_2 & 0xfffffffffffffffc;
          piVar5 = param_1 + uVar11 * 2;
          psVar6 = param_3 + uVar11 * 2;
          uVar10 = uVar11;
          piVar12 = param_4;
          do {
            sVar19 = *param_3;
            sVar23 = param_3[1];
            sVar20 = param_3[2];
            sVar24 = param_3[3];
            sVar21 = param_3[4];
            sVar25 = param_3[5];
            sVar22 = param_3[6];
            sVar26 = param_3[7];
            param_3 = param_3 + 8;
            uVar10 = uVar10 - 4;
            *param_1 = *param_1 + iVar9 * sVar19;
            param_1[1] = param_1[1] + iVar8 * sVar23;
            param_1[2] = param_1[2] + iVar9 * sVar20;
            param_1[3] = param_1[3] + iVar8 * sVar24;
            param_1[4] = param_1[4] + iVar9 * sVar21;
            param_1[5] = param_1[5] + iVar8 * sVar25;
            param_1[6] = param_1[6] + iVar9 * sVar22;
            param_1[7] = param_1[7] + iVar8 * sVar26;
            param_1 = param_1 + 8;
            iVar14 = (int)sVar23 + (int)sVar19;
            iVar15 = (int)sVar24 + (int)sVar20;
            *(ulong *)(piVar12 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) +
                          ((int)sVar26 + (int)sVar22 >> 1) * iVar7,
                          (int)*(undefined8 *)(piVar12 + 2) +
                          ((int)sVar25 + (int)sVar21 >> 1) * iVar7);
            *(ulong *)piVar12 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) +
                          CONCAT22((short)(iVar15 >> 0x11),(short)(iVar15 >> 1)) * (int)sVar17,
                          (int)*(undefined8 *)piVar12 +
                          CONCAT22((short)(iVar14 >> 0x11),(short)(iVar14 >> 1)) * (int)sVar17);
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_4 = param_4 + uVar11;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          param_3 = psVar6;
          if (bVar4) {
            return;
          }
        }
        do {
          sVar17 = *param_3;
          sVar19 = param_3[1];
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + sVar19 * iVar8,
                        (int)*(undefined8 *)param_1 + sVar17 * iVar9);
          param_2 = param_2 - 1;
          *param_4 = *param_4 + ((int)sVar19 + (int)sVar17 >> 1) * iVar7;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
          param_3 = param_3 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      iVar9 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          psVar6 = param_3 + uVar11 * 3;
          piVar5 = param_1 + uVar11 * 3;
          uVar10 = uVar11;
          do {
            sVar17 = *param_3;
            sVar22 = param_3[1];
            sVar26 = param_3[2];
            sVar19 = param_3[3];
            sVar23 = param_3[4];
            sVar27 = param_3[5];
            sVar20 = param_3[6];
            sVar24 = param_3[7];
            sVar28 = param_3[8];
            sVar21 = param_3[9];
            sVar25 = param_3[10];
            sVar29 = param_3[0xb];
            param_3 = param_3 + 0xc;
            uVar10 = uVar10 - 4;
            *param_1 = *param_1 + iVar9 * sVar17;
            param_1[1] = param_1[1] + iVar9 * sVar22;
            param_1[2] = param_1[2] + iVar9 * sVar26;
            param_1[3] = param_1[3] + iVar9 * sVar19;
            param_1[4] = param_1[4] + iVar9 * sVar23;
            param_1[5] = param_1[5] + iVar9 * sVar27;
            param_1[6] = param_1[6] + iVar9 * sVar20;
            param_1[7] = param_1[7] + iVar9 * sVar24;
            param_1[8] = param_1[8] + iVar9 * sVar28;
            param_1[9] = param_1[9] + iVar9 * sVar21;
            param_1[10] = param_1[10] + iVar9 * sVar25;
            param_1[0xb] = param_1[0xb] + iVar9 * sVar29;
            param_1 = param_1 + 0xc;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = psVar6;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          if (bVar4) {
            return;
          }
        }
        do {
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar9 * param_3[1],
                        (int)*(undefined8 *)param_1 + iVar9 * *param_3);
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + param_3[2] * iVar9;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 3 <= param_4))))
        {
          uVar11 = param_2 & 0xfffffffffffffffc;
          psVar6 = param_3 + uVar11 * 3;
          piVar5 = param_1 + uVar11 * 3;
          uVar10 = uVar11;
          piVar12 = param_4;
          do {
            sVar17 = *param_3;
            sVar22 = param_3[1];
            sVar26 = param_3[2];
            sVar19 = param_3[3];
            sVar23 = param_3[4];
            sVar27 = param_3[5];
            sVar20 = param_3[6];
            sVar24 = param_3[7];
            sVar28 = param_3[8];
            sVar21 = param_3[9];
            sVar25 = param_3[10];
            sVar29 = param_3[0xb];
            param_3 = param_3 + 0xc;
            uVar10 = uVar10 - 4;
            uVar34 = (int)sVar22 + (int)sVar17 + (int)sVar26;
            iVar8 = uVar34 * 0x1000;
            *param_1 = *param_1 + iVar9 * sVar17;
            param_1[1] = param_1[1] + iVar9 * sVar22;
            param_1[2] = param_1[2] + iVar9 * sVar26;
            param_1[3] = param_1[3] + iVar9 * sVar19;
            param_1[4] = param_1[4] + iVar9 * sVar23;
            param_1[5] = param_1[5] + iVar9 * sVar27;
            param_1[6] = param_1[6] + iVar9 * sVar20;
            param_1[7] = param_1[7] + iVar9 * sVar24;
            param_1[8] = param_1[8] + iVar9 * sVar28;
            param_1[9] = param_1[9] + iVar9 * sVar21;
            param_1[10] = param_1[10] + iVar9 * sVar25;
            param_1[0xb] = param_1[0xb] + iVar9 * sVar29;
            param_1 = param_1 + 0xc;
            iVar14 = (((int)sVar23 + (int)sVar19 + (int)sVar27) * 0x1000) / 3;
            iVar8 = iVar8 / 3 + (iVar8 >> 0x1f) + ((uVar34 & 0xfffff) >> 0x13);
            *(ulong *)(piVar12 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) +
                          ((((int)sVar25 + (int)sVar21 + (int)sVar29) * 0x1000) / 3 >> 0xc) * iVar7,
                          (int)*(undefined8 *)(piVar12 + 2) +
                          ((((int)sVar24 + (int)sVar20 + (int)sVar28) * 0x1000) / 3 >> 0xc) * iVar7)
            ;
            *(ulong *)piVar12 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) +
                          CONCAT22((short)(iVar14 >> 0x1c),(short)(iVar14 >> 0xc)) * iVar7,
                          (int)*(undefined8 *)piVar12 +
                          CONCAT22((short)(iVar8 >> 0x1c),(short)(iVar8 >> 0xc)) * iVar7);
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = psVar6;
          param_4 = param_4 + uVar11;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          if (bVar4) {
            return;
          }
        }
        do {
          sVar17 = *param_3;
          sVar19 = param_3[1];
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar9 * sVar19,
                        (int)*(undefined8 *)param_1 + iVar9 * sVar17);
          sVar20 = param_3[2];
          param_2 = param_2 - 1;
          param_1[2] = param_1[2] + sVar20 * iVar9;
          *param_4 = *param_4 +
                     ((((int)sVar19 + (int)sVar17 + (int)sVar20) * 0x1000) / 3 >> 0xc) * iVar7;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      sVar17 = *(short *)ptVar1;
      iVar9 = (int)sVar17;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar11 = param_2 & 0xfffffffffffffffc;
          psVar6 = param_3 + uVar11 * 4;
          piVar5 = param_1 + uVar11 * 4;
          uVar10 = uVar11;
          do {
            sVar17 = *param_3;
            sVar22 = param_3[1];
            sVar26 = param_3[2];
            sVar30 = param_3[3];
            sVar19 = param_3[4];
            sVar23 = param_3[5];
            sVar27 = param_3[6];
            sVar31 = param_3[7];
            sVar20 = param_3[8];
            sVar24 = param_3[9];
            sVar28 = param_3[10];
            sVar32 = param_3[0xb];
            sVar21 = param_3[0xc];
            sVar25 = param_3[0xd];
            sVar29 = param_3[0xe];
            sVar33 = param_3[0xf];
            param_3 = param_3 + 0x10;
            uVar10 = uVar10 - 4;
            *param_1 = *param_1 + iVar9 * sVar17;
            param_1[1] = param_1[1] + iVar9 * sVar22;
            param_1[2] = param_1[2] + iVar9 * sVar26;
            param_1[3] = param_1[3] + iVar9 * sVar30;
            param_1[4] = param_1[4] + iVar9 * sVar19;
            param_1[5] = param_1[5] + iVar9 * sVar23;
            param_1[6] = param_1[6] + iVar9 * sVar27;
            param_1[7] = param_1[7] + iVar9 * sVar31;
            param_1[8] = param_1[8] + iVar9 * sVar20;
            param_1[9] = param_1[9] + iVar9 * sVar24;
            param_1[10] = param_1[10] + iVar9 * sVar28;
            param_1[0xb] = param_1[0xb] + iVar9 * sVar32;
            param_1[0xc] = param_1[0xc] + iVar9 * sVar21;
            param_1[0xd] = param_1[0xd] + iVar9 * sVar25;
            param_1[0xe] = param_1[0xe] + iVar9 * sVar29;
            param_1[0xf] = param_1[0xf] + iVar9 * sVar33;
            param_1 = param_1 + 0x10;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = psVar6;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          if (bVar4) {
            return;
          }
        }
        do {
          uVar13 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar9 * (short)((ulong)uVar13 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar9 * (short)((ulong)uVar13 >> 0x20));
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        iVar9 * (short)((ulong)uVar13 >> 0x10),
                        (int)*(undefined8 *)param_1 + iVar9 * (short)uVar13);
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      else {
        iVar8 = (int)sVar17;
        iVar9 = (int)sVar17;
        if ((3 < param_2) && ((param_4 + param_2 <= param_1 || (param_1 + param_2 * 4 <= param_4))))
        {
          uVar11 = param_2 & 0xfffffffffffffffc;
          psVar6 = param_3 + uVar11 * 4;
          piVar5 = param_1 + uVar11 * 4;
          uVar10 = uVar11;
          piVar12 = param_4;
          do {
            sVar17 = *param_3;
            sVar22 = param_3[1];
            sVar26 = param_3[2];
            sVar30 = param_3[3];
            sVar19 = param_3[4];
            sVar23 = param_3[5];
            sVar27 = param_3[6];
            sVar31 = param_3[7];
            sVar20 = param_3[8];
            sVar24 = param_3[9];
            sVar28 = param_3[10];
            sVar32 = param_3[0xb];
            sVar21 = param_3[0xc];
            sVar25 = param_3[0xd];
            sVar29 = param_3[0xe];
            sVar33 = param_3[0xf];
            param_3 = param_3 + 0x10;
            uVar10 = uVar10 - 4;
            *param_1 = *param_1 + iVar8 * sVar17;
            param_1[1] = param_1[1] + iVar8 * sVar22;
            param_1[2] = param_1[2] + iVar8 * sVar26;
            param_1[3] = param_1[3] + iVar8 * sVar30;
            param_1[4] = param_1[4] + iVar8 * sVar19;
            param_1[5] = param_1[5] + iVar8 * sVar23;
            param_1[6] = param_1[6] + iVar8 * sVar27;
            param_1[7] = param_1[7] + iVar8 * sVar31;
            param_1[8] = param_1[8] + iVar9 * sVar20;
            param_1[9] = param_1[9] + iVar9 * sVar24;
            param_1[10] = param_1[10] + iVar9 * sVar28;
            param_1[0xb] = param_1[0xb] + iVar9 * sVar32;
            param_1[0xc] = param_1[0xc] + iVar9 * sVar21;
            param_1[0xd] = param_1[0xd] + iVar9 * sVar25;
            param_1[0xe] = param_1[0xe] + iVar9 * sVar29;
            param_1[0xf] = param_1[0xf] + iVar9 * sVar33;
            param_1 = param_1 + 0x10;
            *(ulong *)(piVar12 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) +
                          ((int)sVar25 + (int)sVar21 + (int)sVar29 + (int)sVar33 >> 2) * iVar7,
                          (int)*(undefined8 *)(piVar12 + 2) +
                          ((int)sVar24 + (int)sVar20 + (int)sVar28 + (int)sVar32 >> 2) * iVar7);
            *(ulong *)piVar12 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) +
                          ((int)sVar23 + (int)sVar19 + (int)sVar27 + (int)sVar31 >> 2) * iVar7,
                          (int)*(undefined8 *)piVar12 +
                          ((int)sVar22 + (int)sVar17 + (int)sVar26 + (int)sVar30 >> 2) * iVar7);
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
          bVar4 = uVar11 == param_2;
          param_3 = psVar6;
          param_4 = param_4 + uVar11;
          param_2 = param_2 - uVar11;
          param_1 = piVar5;
          if (bVar4) {
            return;
          }
        }
        do {
          uVar13 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          iVar14 = (int)(short)((ulong)uVar13 >> 0x10);
          iVar15 = (int)(short)((ulong)uVar13 >> 0x20);
          iVar16 = (int)(short)((ulong)uVar13 >> 0x30);
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar9 * iVar16,
                        (int)*(undefined8 *)(param_1 + 2) + iVar9 * iVar15);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar8 * iVar14,
                        (int)*(undefined8 *)param_1 + iVar8 * (short)uVar13);
          *param_4 = *param_4 + (iVar14 + (short)uVar13 + iVar15 + iVar16 >> 2) * iVar7;
          param_3 = param_3 + 4;
          param_4 = param_4 + 1;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
      }
      break;
    case 4:
      iVar8 = (int)*(short *)ptVar1;
      iVar9 = (int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        do {
          uVar13 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        iVar9 * (short)((ulong)uVar13 >> 0x30),
                        (int)*(undefined8 *)(param_1 + 2) + iVar9 * (short)((ulong)uVar13 >> 0x20));
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        iVar8 * (short)((ulong)uVar13 >> 0x10),
                        (int)*(undefined8 *)param_1 + iVar8 * (short)uVar13);
          psVar6 = param_3 + 4;
          param_3 = param_3 + 5;
          param_1[4] = param_1[4] + *psVar6 * iVar9;
          param_1 = param_1 + 5;
        } while (param_2 != 0);
      }
      else {
        do {
          uVar13 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          iVar14 = (int)(short)((ulong)uVar13 >> 0x10);
          iVar15 = (int)(short)((ulong)uVar13 >> 0x20);
          iVar16 = (int)(short)((ulong)uVar13 >> 0x30);
          *(ulong *)(param_1 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar9 * iVar16,
                        (int)*(undefined8 *)(param_1 + 2) + iVar9 * iVar15);
          *(ulong *)param_1 =
               CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar8 * iVar14,
                        (int)*(undefined8 *)param_1 + iVar8 * (short)uVar13);
          sVar17 = param_3[4];
          param_3 = param_3 + 5;
          param_1[4] = param_1[4] + sVar17 * iVar9;
          *param_4 = *param_4 +
                     (((iVar14 + (short)uVar13 + iVar15 + iVar16 + (int)sVar17) * 0x1000) / 5 >> 0xc
                     ) * iVar7;
          param_1 = param_1 + 5;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      volumeMulti<3,6,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar17);
      return;
    case 6:
      volumeMulti<3,7,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar17);
      return;
    case 7:
      volumeMulti<3,8,int,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar17);
      return;
    }
  }
  return;
}

