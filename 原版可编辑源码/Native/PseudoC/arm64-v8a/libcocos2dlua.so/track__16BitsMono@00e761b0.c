
/* cocos2d::experimental::AudioMixer::track__16BitsMono(cocos2d::experimental::AudioMixer::track_t*,
   int*, unsigned long, int*, int*) */

void cocos2d::experimental::AudioMixer::track__16BitsMono
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
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
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14);
  psVar9 = *(short **)(param_1 + 0x50);
  if (param_5 != (int *)0x0) {
    iVar26 = *(int *)(param_1 + 0x18);
    if (iVar26 == 0 && (iVar8 == 0 && iVar7 == 0)) {
      sVar3 = *(short *)(param_1 + 0x20);
      iVar7 = (int)*(short *)(param_1 + 4);
      iVar8 = (int)*(short *)(param_1 + 6);
      if ((3 < param_3) && ((param_5 + param_3 <= param_2 || (param_2 + param_3 * 2 <= param_5)))) {
        uVar11 = param_3 & 0xfffffffffffffffc;
        psVar13 = psVar9 + uVar11;
        piVar1 = param_2 + uVar11 * 2;
        iVar26 = (int)sVar3;
        piVar5 = param_5;
        uVar6 = uVar11;
        do {
          uVar25 = *(undefined8 *)psVar9;
          uVar6 = uVar6 - 4;
          iVar27 = (int)(short)uVar25;
          iVar28 = (int)(short)((ulong)uVar25 >> 0x10);
          iVar15 = (int)(short)((ulong)uVar25 >> 0x20);
          iVar16 = (int)(short)((ulong)uVar25 >> 0x30);
          *param_2 = *param_2 + iVar7 * iVar27;
          param_2[1] = param_2[1] + iVar8 * iVar27;
          param_2[2] = param_2[2] + iVar7 * iVar28;
          param_2[3] = param_2[3] + iVar8 * iVar28;
          param_2[4] = param_2[4] + iVar7 * iVar15;
          param_2[5] = param_2[5] + iVar8 * iVar15;
          param_2[6] = param_2[6] + iVar7 * iVar16;
          param_2[7] = param_2[7] + iVar8 * iVar16;
          param_2 = param_2 + 8;
          *(ulong *)(piVar5 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) + iVar26 * iVar16,
                        (int)*(undefined8 *)(piVar5 + 2) + iVar26 * iVar15);
          *(ulong *)piVar5 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar5 >> 0x20) + iVar26 * iVar28,
                        (int)*(undefined8 *)piVar5 + iVar26 * iVar27);
          piVar5 = piVar5 + 4;
          psVar9 = psVar9 + 4;
        } while (uVar6 != 0);
        bVar4 = uVar11 == param_3;
        param_5 = param_5 + uVar11;
        param_3 = param_3 - uVar11;
        param_2 = piVar1;
        psVar9 = psVar13;
        if (bVar4) goto LAB_00e76258;
      }
      do {
        psVar13 = psVar9 + 1;
        sVar2 = *psVar9;
        param_3 = param_3 - 1;
        *(ulong *)param_2 =
             CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + sVar2 * iVar8,
                      (int)*(undefined8 *)param_2 + sVar2 * iVar7);
        *param_5 = *param_5 + (int)sVar2 * (int)sVar3;
        param_5 = param_5 + 1;
        param_2 = param_2 + 2;
        psVar9 = psVar13;
      } while (param_3 != 0);
      goto LAB_00e76258;
    }
    iVar27 = *(int *)(param_1 + 8);
    iVar28 = *(int *)(param_1 + 0xc);
    iVar15 = *(int *)(param_1 + 0x1c);
    if ((param_3 < 4) || ((param_2 < param_5 + param_3 && (param_5 < param_2 + param_3 * 2)))) {
LAB_00e76518:
      do {
        psVar13 = psVar9 + 1;
        sVar3 = *psVar9;
        iVar16 = iVar27 + iVar7;
        param_3 = param_3 - 1;
        *param_2 = *param_2 + (iVar27 >> 0x10) * (int)sVar3;
        param_2[1] = param_2[1] + (iVar28 >> 0x10) * (int)sVar3;
        iVar18 = iVar28 + iVar8;
        iVar19 = iVar15 + iVar26;
        *param_5 = *param_5 + (iVar15 >> 0x10) * (int)sVar3;
        param_2 = param_2 + 2;
        param_5 = param_5 + 1;
        psVar9 = psVar13;
        iVar27 = iVar16;
        iVar28 = iVar18;
        iVar15 = iVar19;
      } while (param_3 != 0);
    }
    else {
      uVar11 = param_3 & 0xfffffffffffffffc;
      iVar20 = iVar26 * 4;
      iVar29 = iVar8 * 4;
      iVar30 = iVar7 * 4;
      iVar16 = (int)uVar11;
      iVar19 = iVar15 + iVar26 * iVar16;
      iVar18 = iVar28 + iVar8 * iVar16;
      iVar16 = iVar27 + iVar7 * iVar16;
      psVar13 = psVar9 + uVar11;
      piVar1 = param_2 + uVar11 * 2;
      iVar31 = iVar15 + iVar26;
      iVar32 = iVar15 + iVar26 * 2;
      iVar33 = iVar15 + iVar26 * 3;
      iVar34 = iVar28 + iVar8;
      iVar35 = iVar28 + iVar8 * 2;
      iVar21 = iVar28 + iVar8 * 3;
      iVar22 = iVar27 + iVar7;
      iVar23 = iVar27 + iVar7 * 2;
      iVar24 = iVar27 + iVar7 * 3;
      piVar5 = param_5;
      uVar6 = uVar11;
      do {
        uVar25 = *(undefined8 *)psVar9;
        uVar6 = uVar6 - 4;
        iVar36 = (int)(short)uVar25;
        iVar37 = (int)(short)((ulong)uVar25 >> 0x10);
        iVar38 = (int)(short)((ulong)uVar25 >> 0x20);
        iVar39 = (int)(short)((ulong)uVar25 >> 0x30);
        *param_2 = *param_2 + (iVar27 >> 0x10) * iVar36;
        param_2[1] = param_2[1] + (iVar28 >> 0x10) * iVar36;
        param_2[2] = param_2[2] + (iVar22 >> 0x10) * iVar37;
        param_2[3] = param_2[3] + (iVar34 >> 0x10) * iVar37;
        param_2[4] = param_2[4] + (iVar23 >> 0x10) * iVar38;
        param_2[5] = param_2[5] + (iVar35 >> 0x10) * iVar38;
        param_2[6] = param_2[6] + (iVar24 >> 0x10) * iVar39;
        param_2[7] = param_2[7] + (iVar21 >> 0x10) * iVar39;
        param_2 = param_2 + 8;
        iVar40 = iVar15 >> 0x10;
        iVar41 = iVar31 >> 0x10;
        iVar42 = iVar32 >> 0x10;
        iVar43 = iVar33 >> 0x10;
        iVar15 = iVar15 + iVar20;
        iVar31 = iVar31 + iVar20;
        iVar32 = iVar32 + iVar20;
        iVar33 = iVar33 + iVar20;
        iVar28 = iVar28 + iVar29;
        iVar34 = iVar34 + iVar29;
        iVar35 = iVar35 + iVar29;
        iVar21 = iVar21 + iVar29;
        *(ulong *)(piVar5 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) + iVar43 * iVar39,
                      (int)*(undefined8 *)(piVar5 + 2) + iVar42 * iVar38);
        *(ulong *)piVar5 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar5 >> 0x20) + iVar41 * iVar37,
                      (int)*(undefined8 *)piVar5 + iVar40 * iVar36);
        iVar27 = iVar27 + iVar30;
        iVar22 = iVar22 + iVar30;
        iVar23 = iVar23 + iVar30;
        iVar24 = iVar24 + iVar30;
        piVar5 = piVar5 + 4;
        psVar9 = psVar9 + 4;
      } while (uVar6 != 0);
      bVar4 = uVar11 != param_3;
      param_2 = piVar1;
      param_5 = param_5 + uVar11;
      param_3 = param_3 - uVar11;
      psVar9 = psVar13;
      iVar27 = iVar16;
      iVar28 = iVar18;
      iVar15 = iVar19;
      if (bVar4) goto LAB_00e76518;
    }
    *(int *)(param_1 + 8) = iVar16;
    *(int *)(param_1 + 0xc) = iVar18;
    *(int *)(param_1 + 0x1c) = iVar19;
    track_t::adjustVolumeRamp(param_1,true,false);
    goto LAB_00e76258;
  }
  if (iVar8 == 0 && iVar7 == 0) {
    iVar7 = (int)*(short *)(param_1 + 4);
    iVar8 = (int)*(short *)(param_1 + 6);
    if (3 < param_3) {
      uVar11 = param_3 & 0xfffffffffffffffc;
      psVar13 = psVar9 + uVar11;
      piVar1 = param_2 + uVar11 * 2;
      uVar6 = uVar11;
      do {
        uVar25 = *(undefined8 *)psVar9;
        uVar6 = uVar6 - 4;
        iVar26 = (int)(short)((ulong)uVar25 >> 0x10);
        iVar27 = (int)(short)((ulong)uVar25 >> 0x20);
        iVar28 = (int)(short)((ulong)uVar25 >> 0x30);
        *param_2 = *param_2 + iVar7 * (short)uVar25;
        param_2[1] = param_2[1] + iVar8 * (short)uVar25;
        param_2[2] = param_2[2] + iVar7 * iVar26;
        param_2[3] = param_2[3] + iVar8 * iVar26;
        param_2[4] = param_2[4] + iVar7 * iVar27;
        param_2[5] = param_2[5] + iVar8 * iVar27;
        param_2[6] = param_2[6] + iVar7 * iVar28;
        param_2[7] = param_2[7] + iVar8 * iVar28;
        param_2 = param_2 + 8;
        psVar9 = psVar9 + 4;
      } while (uVar6 != 0);
      bVar4 = uVar11 == param_3;
      param_3 = param_3 - uVar11;
      param_2 = piVar1;
      psVar9 = psVar13;
      if (bVar4) goto LAB_00e76258;
    }
    do {
      psVar13 = psVar9 + 1;
      param_3 = param_3 - 1;
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + *psVar9 * iVar8,
                    (int)*(undefined8 *)param_2 + *psVar9 * iVar7);
      param_2 = param_2 + 2;
      psVar9 = psVar13;
    } while (param_3 != 0);
    goto LAB_00e76258;
  }
  uVar14 = *(uint *)(param_1 + 8);
  uVar17 = *(uint *)(param_1 + 0xc);
  if (param_3 < 4) {
LAB_00e76384:
    do {
      psVar13 = psVar9 + 1;
      sVar3 = *psVar9;
      uVar12 = uVar14 + iVar7;
      uVar10 = uVar17 + iVar8;
      param_3 = param_3 - 1;
      *param_2 = *param_2 + ((int)uVar14 >> 0x10) * (int)sVar3;
      param_2[1] = param_2[1] + ((int)uVar17 >> 0x10) * (int)sVar3;
      param_2 = param_2 + 2;
      psVar9 = psVar13;
      uVar14 = uVar12;
      uVar17 = uVar10;
    } while (param_3 != 0);
  }
  else {
    uVar11 = param_3 & 0xfffffffffffffffc;
    iVar26 = iVar7 * 4;
    iVar27 = iVar8 * 4;
    uVar12 = uVar14 + iVar7 * (int)uVar11;
    uVar10 = uVar17 + iVar8 * (int)uVar11;
    psVar13 = psVar9 + uVar11;
    piVar1 = param_2 + uVar11 * 2;
    iVar28 = uVar14 + iVar7;
    iVar15 = uVar14 + iVar7 * 2;
    iVar16 = uVar14 + iVar7 * 3;
    iVar18 = uVar17 + iVar8;
    iVar19 = uVar17 + iVar8 * 2;
    iVar20 = uVar17 + iVar8 * 3;
    uVar6 = uVar11;
    do {
      uVar25 = *(undefined8 *)psVar9;
      iVar32 = (int)uVar14 >> 0x10;
      iVar33 = iVar28 >> 0x10;
      iVar34 = iVar15 >> 0x10;
      iVar35 = iVar16 >> 0x10;
      iVar29 = (int)(short)((ulong)uVar25 >> 0x10);
      iVar30 = (int)(short)((ulong)uVar25 >> 0x20);
      iVar31 = (int)(short)((ulong)uVar25 >> 0x30);
      uVar14 = uVar14 + iVar26;
      iVar28 = iVar28 + iVar26;
      iVar15 = iVar15 + iVar26;
      iVar16 = iVar16 + iVar26;
      uVar6 = uVar6 - 4;
      *param_2 = *param_2 + iVar32 * (short)uVar25;
      param_2[1] = param_2[1] + ((int)uVar17 >> 0x10) * (int)(short)uVar25;
      param_2[2] = param_2[2] + iVar33 * iVar29;
      param_2[3] = param_2[3] + (iVar18 >> 0x10) * iVar29;
      param_2[4] = param_2[4] + iVar34 * iVar30;
      param_2[5] = param_2[5] + (iVar19 >> 0x10) * iVar30;
      param_2[6] = param_2[6] + iVar35 * iVar31;
      param_2[7] = param_2[7] + (iVar20 >> 0x10) * iVar31;
      param_2 = param_2 + 8;
      uVar17 = uVar17 + iVar27;
      iVar18 = iVar18 + iVar27;
      iVar19 = iVar19 + iVar27;
      iVar20 = iVar20 + iVar27;
      psVar9 = psVar9 + 4;
    } while (uVar6 != 0);
    bVar4 = uVar11 != param_3;
    param_3 = param_3 - uVar11;
    param_2 = piVar1;
    psVar9 = psVar13;
    uVar14 = uVar12;
    uVar17 = uVar10;
    if (bVar4) goto LAB_00e76384;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 8) = uVar12;
  *(uint *)(param_1 + 0xc) = uVar10;
  if (iVar7 < 1) {
    if ((iVar7 < 0) &&
       (iVar8 = (int)*(short *)(param_1 + 4), (int)(iVar7 + uVar12) >> 0x10 <= iVar8))
    goto LAB_00e763d0;
LAB_00e76404:
    *(float *)(param_1 + 0x9c) = (float)uVar12 * 3.7252903e-09;
  }
  else {
    iVar8 = (int)*(short *)(param_1 + 4);
    if ((int)(iVar7 + uVar12) >> 0x10 < (int)*(short *)(param_1 + 4)) goto LAB_00e76404;
LAB_00e763d0:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar8 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 < 1) {
    if ((-1 < iVar7) ||
       (iVar8 = (int)*(short *)(param_1 + 6), iVar8 < (int)(iVar7 + uVar10) >> 0x10))
    goto LAB_00e76468;
  }
  else {
    iVar8 = (int)*(short *)(param_1 + 6);
    if ((int)(iVar7 + uVar10) >> 0x10 < (int)*(short *)(param_1 + 6)) {
LAB_00e76468:
      *(float *)(param_1 + 0xa0) = (float)uVar10 * 3.7252903e-09;
      goto LAB_00e76258;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xc) = iVar8 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
LAB_00e76258:
  *(short **)(param_1 + 0x50) = psVar13;
  return;
}

