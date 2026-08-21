
/* cocos2d::experimental::AudioMixer::volumeRampStereo(cocos2d::experimental::AudioMixer::track_t*,
   int*, unsigned long, int*, int*) */

void cocos2d::experimental::AudioMixer::volumeRampStereo
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
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
  
  iVar17 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  if (param_5 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar21 = *(int *)(param_1 + 0x1c);
    if (param_3 < 4) {
LAB_00e75774:
      do {
        iVar9 = *param_4;
        iVar14 = param_4[1];
        iVar10 = iVar17 >> 0x10;
        iVar17 = iVar17 + iVar1;
        *param_2 = *param_2 + (iVar9 >> 0xc) * iVar10;
        param_2[1] = param_2[1] + (iVar14 >> 0xc) * (iVar13 >> 0x10);
        iVar10 = iVar21 >> 0x11;
        iVar13 = iVar13 + iVar2;
        iVar21 = iVar21 + iVar3;
        param_3 = param_3 - 1;
        *param_5 = *param_5 + ((iVar14 >> 0xc) + (iVar9 >> 0xc)) * iVar10;
        param_5 = param_5 + 1;
        param_4 = param_4 + 2;
        param_2 = param_2 + 2;
        iVar10 = iVar17;
        iVar9 = iVar13;
        iVar18 = iVar21;
      } while (param_3 != 0);
    }
    else {
      if (((param_2 < param_5 + param_3 && param_5 < param_2 + param_3 * 2) ||
          (param_2 < param_4 + param_3 * 2 && param_4 < param_2 + param_3 * 2)) ||
         (param_5 < param_4 + param_3 * 2 && param_4 < param_5 + param_3)) goto LAB_00e75774;
      uVar8 = param_3 & 0xfffffffffffffffc;
      iVar14 = iVar2 * 4;
      iVar15 = iVar1 * 4;
      iVar16 = iVar3 * 4;
      iVar18 = (int)uVar8;
      iVar9 = iVar13 + iVar2 * iVar18;
      iVar10 = iVar17 + iVar1 * iVar18;
      iVar18 = iVar21 + iVar3 * iVar18;
      iVar19 = iVar13 + iVar2;
      iVar20 = iVar13 + iVar2 * 2;
      iVar22 = iVar13 + iVar2 * 3;
      iVar23 = iVar17 + iVar1;
      iVar24 = iVar17 + iVar1 * 2;
      iVar25 = iVar17 + iVar1 * 3;
      piVar6 = param_4 + uVar8 * 2;
      piVar5 = param_2 + uVar8 * 2;
      iVar26 = iVar21 + iVar3;
      iVar27 = iVar21 + iVar3 * 2;
      iVar28 = iVar21 + iVar3 * 3;
      piVar7 = param_5;
      uVar12 = uVar8;
      do {
        iVar29 = *param_4;
        iVar35 = param_4[1];
        iVar30 = param_4[2];
        iVar32 = param_4[3];
        iVar31 = param_4[4];
        iVar34 = param_4[5];
        iVar33 = param_4[6];
        iVar36 = param_4[7];
        param_4 = param_4 + 8;
        *param_2 = *param_2 + (iVar29 >> 0xc) * (iVar17 >> 0x10);
        param_2[1] = param_2[1] + (iVar35 >> 0xc) * (iVar13 >> 0x10);
        param_2[2] = param_2[2] + (iVar30 >> 0xc) * (iVar23 >> 0x10);
        param_2[3] = param_2[3] + (iVar32 >> 0xc) * (iVar19 >> 0x10);
        param_2[4] = param_2[4] + (iVar31 >> 0xc) * (iVar24 >> 0x10);
        param_2[5] = param_2[5] + (iVar34 >> 0xc) * (iVar20 >> 0x10);
        param_2[6] = param_2[6] + (iVar33 >> 0xc) * (iVar25 >> 0x10);
        param_2[7] = param_2[7] + (iVar36 >> 0xc) * (iVar22 >> 0x10);
        param_2 = param_2 + 8;
        iVar13 = iVar13 + iVar14;
        iVar19 = iVar19 + iVar14;
        iVar20 = iVar20 + iVar14;
        iVar22 = iVar22 + iVar14;
        iVar17 = iVar17 + iVar15;
        iVar23 = iVar23 + iVar15;
        iVar24 = iVar24 + iVar15;
        iVar25 = iVar25 + iVar15;
        uVar12 = uVar12 - 4;
        *(ulong *)(piVar7 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) +
                      ((iVar36 >> 0xc) + (iVar33 >> 0xc)) * (iVar28 >> 0x11),
                      (int)*(undefined8 *)(piVar7 + 2) +
                      ((iVar34 >> 0xc) + (iVar31 >> 0xc)) * (iVar27 >> 0x11));
        *(ulong *)piVar7 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar7 >> 0x20) +
                      ((iVar32 >> 0xc) + (iVar30 >> 0xc)) * (iVar26 >> 0x11),
                      (int)*(undefined8 *)piVar7 +
                      ((iVar35 >> 0xc) + (iVar29 >> 0xc)) * (iVar21 >> 0x11));
        iVar21 = iVar21 + iVar16;
        iVar26 = iVar26 + iVar16;
        iVar27 = iVar27 + iVar16;
        iVar28 = iVar28 + iVar16;
        piVar7 = piVar7 + 4;
      } while (uVar12 != 0);
      bVar4 = uVar8 != param_3;
      param_5 = param_5 + uVar8;
      param_4 = piVar6;
      param_3 = param_3 - uVar8;
      param_2 = piVar5;
      iVar17 = iVar10;
      iVar13 = iVar9;
      iVar21 = iVar18;
      if (bVar4) goto LAB_00e75774;
    }
    bVar4 = true;
    *(int *)(param_1 + 0x1c) = iVar18;
    goto LAB_00e7562c;
  }
  piVar5 = param_2;
  uVar12 = param_3;
  piVar6 = param_4;
  iVar10 = iVar17;
  iVar9 = iVar13;
  if ((param_3 < 4) || ((param_2 < param_4 + param_3 * 2 && (param_4 < param_2 + param_3 * 2)))) {
LAB_00e755e4:
    do {
      iVar17 = iVar10 >> 0x10;
      iVar10 = iVar10 + iVar1;
      *piVar5 = *piVar5 + (*piVar6 >> 0xc) * iVar17;
      piVar7 = piVar6 + 1;
      iVar17 = iVar9 >> 0x10;
      iVar9 = iVar9 + iVar2;
      uVar12 = uVar12 - 1;
      piVar6 = piVar6 + 2;
      piVar5[1] = piVar5[1] + (*piVar7 >> 0xc) * iVar17;
      piVar5 = piVar5 + 2;
    } while (uVar12 != 0);
  }
  else {
    uVar11 = param_3 & 0xfffffffffffffffc;
    iVar21 = iVar2 * 4;
    iVar3 = iVar1 * 4;
    iVar9 = iVar13 + iVar2 * (int)uVar11;
    iVar10 = iVar17 + iVar1 * (int)uVar11;
    uVar12 = param_3 - uVar11;
    iVar14 = iVar13 + iVar2;
    iVar15 = iVar13 + iVar2 * 2;
    iVar16 = iVar13 + iVar2 * 3;
    piVar6 = param_4 + uVar11 * 2;
    piVar5 = param_2 + uVar11 * 2;
    iVar18 = iVar17 + iVar1;
    iVar19 = iVar17 + iVar1 * 2;
    iVar20 = iVar17 + iVar1 * 3;
    uVar8 = uVar11;
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
      iVar30 = iVar13 >> 0x10;
      iVar31 = iVar14 >> 0x10;
      iVar33 = iVar15 >> 0x10;
      iVar35 = iVar16 >> 0x10;
      iVar13 = iVar13 + iVar21;
      iVar14 = iVar14 + iVar21;
      iVar15 = iVar15 + iVar21;
      iVar16 = iVar16 + iVar21;
      uVar8 = uVar8 - 4;
      *param_2 = *param_2 + (iVar22 >> 0xc) * (iVar17 >> 0x10);
      param_2[1] = param_2[1] + (iVar26 >> 0xc) * iVar30;
      param_2[2] = param_2[2] + (iVar23 >> 0xc) * (iVar18 >> 0x10);
      param_2[3] = param_2[3] + (iVar27 >> 0xc) * iVar31;
      param_2[4] = param_2[4] + (iVar24 >> 0xc) * (iVar19 >> 0x10);
      param_2[5] = param_2[5] + (iVar28 >> 0xc) * iVar33;
      param_2[6] = param_2[6] + (iVar25 >> 0xc) * (iVar20 >> 0x10);
      param_2[7] = param_2[7] + (iVar29 >> 0xc) * iVar35;
      param_2 = param_2 + 8;
      iVar17 = iVar17 + iVar3;
      iVar18 = iVar18 + iVar3;
      iVar19 = iVar19 + iVar3;
      iVar20 = iVar20 + iVar3;
    } while (uVar8 != 0);
    if (uVar11 != param_3) goto LAB_00e755e4;
  }
  bVar4 = false;
LAB_00e7562c:
  *(int *)(param_1 + 8) = iVar10;
  *(int *)(param_1 + 0xc) = iVar9;
  track_t::adjustVolumeRamp(param_1,bVar4,false);
  return;
}

