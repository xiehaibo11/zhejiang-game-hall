
/* cocos2d::experimental::AudioMixer::track__16BitsStereo(cocos2d::experimental::AudioMixer::track_t*,
   int*, unsigned long, int*, int*) */

void cocos2d::experimental::AudioMixer::track__16BitsStereo
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  int iVar35;
  int iVar36;
  short sVar38;
  int iVar37;
  int iVar39;
  int iVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar15 = *(int *)(param_1 + 0x14);
  piVar12 = *(int **)(param_1 + 0x50);
  if (param_5 != (int *)0x0) {
    iVar14 = *(int *)(param_1 + 0x18);
    if (iVar14 == 0 && (iVar15 == 0 && iVar1 == 0)) {
      sVar41 = *(short *)(param_1 + 0x20);
      iVar14 = (int)sVar41;
      iVar15 = (int)(short)*(int *)(param_1 + 4);
      iVar1 = *(int *)(param_1 + 4) >> 0x10;
      piVar9 = param_2;
      uVar10 = param_3;
      piVar11 = param_5;
      piVar20 = piVar12;
      if (4 < param_3) {
        if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
            (piVar12 + param_3 <= param_2 || param_2 + param_3 * 2 <= piVar12)) &&
           (piVar12 + param_3 <= param_5 || param_5 + param_3 <= piVar12)) {
          uVar10 = 4;
          if ((param_3 & 3) != 0) {
            uVar10 = param_3 & 3;
          }
          lVar18 = param_3 - uVar10;
          piVar9 = param_2 + lVar18 * 2;
          piVar20 = piVar12 + lVar18;
          piVar11 = param_5 + lVar18;
          psVar13 = (short *)((long)piVar12 + 2);
          do {
            uVar34 = *(undefined8 *)(psVar13 + 3);
            uVar31 = *(undefined8 *)(psVar13 + -1);
            sVar42 = *psVar13;
            sVar43 = psVar13[2];
            sVar44 = psVar13[4];
            sVar38 = psVar13[6];
            psVar13 = psVar13 + 8;
            param_3 = param_3 - 4;
            iVar45 = (int)(short)((ulong)uVar31 >> 0x20);
            iVar22 = (int)(short)((ulong)uVar34 >> 0x20);
            *param_2 = *param_2 + (short)uVar31 * iVar15;
            param_2[1] = param_2[1] + ((int)uVar31 >> 0x10) * iVar1;
            param_2[2] = param_2[2] + iVar45 * iVar15;
            param_2[3] = param_2[3] + (int)((long)uVar31 >> 0x30) * iVar1;
            param_2[4] = param_2[4] + (short)uVar34 * iVar15;
            param_2[5] = param_2[5] + ((int)uVar34 >> 0x10) * iVar1;
            param_2[6] = param_2[6] + iVar22 * iVar15;
            param_2[7] = param_2[7] + (int)((long)uVar34 >> 0x30) * iVar1;
            param_2 = param_2 + 8;
            *(ulong *)(param_5 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) +
                          (sVar38 + iVar22 >> 1) * iVar14,
                          (int)*(undefined8 *)(param_5 + 2) +
                          ((int)sVar44 + (int)(short)uVar34 >> 1) * iVar14);
            *(ulong *)param_5 =
                 CONCAT44((int)((ulong)*(undefined8 *)param_5 >> 0x20) +
                          (sVar43 + iVar45 >> 1) * (int)sVar41,
                          (int)*(undefined8 *)param_5 +
                          ((int)sVar42 + (int)(short)uVar31 >> 1) * (int)sVar41);
            param_5 = param_5 + 4;
          } while (uVar10 != param_3);
        }
      }
      do {
        iVar45 = *piVar20;
        uVar10 = uVar10 - 1;
        iVar22 = (int)(short)iVar45;
        sVar41 = *(short *)((long)piVar20 + 2);
        *piVar9 = *piVar9 + iVar22 * iVar15;
        piVar9[1] = piVar9[1] + (iVar45 >> 0x10) * iVar1;
        piVar20 = piVar20 + 1;
        *piVar11 = *piVar11 + (iVar22 + sVar41 >> 1) * iVar14;
        piVar9 = piVar9 + 2;
        piVar11 = piVar11 + 1;
      } while (uVar10 != 0);
      goto LAB_00e75cd4;
    }
    iVar45 = *(int *)(param_1 + 8);
    iVar22 = *(int *)(param_1 + 0xc);
    iVar24 = *(int *)(param_1 + 0x1c);
    if ((param_3 < 4) || ((param_2 < param_5 + param_3 && (param_5 < param_2 + param_3 * 2)))) {
LAB_00e76078:
      do {
        iVar30 = *piVar12;
        sVar41 = *(short *)((long)piVar12 + 2);
        iVar26 = iVar45 + iVar1;
        *param_2 = *param_2 + (iVar45 >> 0x10) * (int)(short)iVar30;
        param_2[1] = param_2[1] + (iVar22 >> 0x10) * (int)sVar41;
        piVar20 = piVar12 + 1;
        iVar28 = iVar22 + iVar15;
        iVar29 = iVar24 + iVar14;
        param_3 = param_3 - 1;
        *param_5 = *param_5 + ((int)sVar41 + (int)(short)iVar30) * (iVar24 >> 0x11);
        param_5 = param_5 + 1;
        param_2 = param_2 + 2;
        piVar12 = piVar20;
        iVar45 = iVar26;
        iVar22 = iVar28;
        iVar24 = iVar29;
      } while (param_3 != 0);
    }
    else {
      uVar19 = param_3 & 0xfffffffffffffffc;
      iVar30 = iVar14 * 4;
      iVar2 = iVar15 * 4;
      iVar3 = iVar1 * 4;
      iVar26 = (int)uVar19;
      iVar29 = iVar24 + iVar14 * iVar26;
      iVar28 = iVar22 + iVar15 * iVar26;
      iVar26 = iVar45 + iVar1 * iVar26;
      piVar9 = param_2 + uVar19 * 2;
      iVar23 = iVar24 + iVar14;
      iVar25 = iVar24 + iVar14 * 2;
      iVar36 = iVar24 + iVar14 * 3;
      iVar37 = iVar22 + iVar15;
      iVar39 = iVar22 + iVar15 * 2;
      iVar40 = iVar22 + iVar15 * 3;
      piVar20 = piVar12 + uVar19;
      iVar32 = iVar45 + iVar1;
      iVar33 = iVar45 + iVar1 * 2;
      iVar35 = iVar45 + iVar1 * 3;
      piVar11 = param_5;
      uVar10 = uVar19;
      do {
        iVar4 = *piVar12;
        sVar41 = *(short *)((long)piVar12 + 2);
        iVar5 = piVar12[1];
        sVar42 = *(short *)((long)piVar12 + 6);
        iVar6 = piVar12[2];
        sVar43 = *(short *)((long)piVar12 + 10);
        iVar7 = piVar12[3];
        sVar44 = *(short *)((long)piVar12 + 0xe);
        piVar12 = piVar12 + 4;
        *param_2 = *param_2 + (iVar45 >> 0x10) * (int)(short)iVar4;
        param_2[1] = param_2[1] + (iVar22 >> 0x10) * (int)sVar41;
        param_2[2] = param_2[2] + (iVar32 >> 0x10) * (int)(short)iVar5;
        param_2[3] = param_2[3] + (iVar37 >> 0x10) * (int)sVar42;
        param_2[4] = param_2[4] + (iVar33 >> 0x10) * (int)(short)iVar6;
        param_2[5] = param_2[5] + (iVar39 >> 0x10) * (int)sVar43;
        param_2[6] = param_2[6] + (iVar35 >> 0x10) * (int)(short)iVar7;
        param_2[7] = param_2[7] + (iVar40 >> 0x10) * (int)sVar44;
        param_2 = param_2 + 8;
        iVar46 = iVar24 >> 0x11;
        iVar47 = iVar23 >> 0x11;
        iVar48 = iVar25 >> 0x11;
        iVar49 = iVar36 >> 0x11;
        iVar24 = iVar24 + iVar30;
        iVar23 = iVar23 + iVar30;
        iVar25 = iVar25 + iVar30;
        iVar36 = iVar36 + iVar30;
        iVar22 = iVar22 + iVar2;
        iVar37 = iVar37 + iVar2;
        iVar39 = iVar39 + iVar2;
        iVar40 = iVar40 + iVar2;
        uVar10 = uVar10 - 4;
        *(ulong *)(piVar11 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20) +
                      ((int)sVar44 + (int)(short)iVar7) * iVar49,
                      (int)*(undefined8 *)(piVar11 + 2) + ((int)sVar43 + (int)(short)iVar6) * iVar48
                     );
        *(ulong *)piVar11 =
             CONCAT44((int)((ulong)*(undefined8 *)piVar11 >> 0x20) +
                      ((int)sVar42 + (int)(short)iVar5) * iVar47,
                      (int)*(undefined8 *)piVar11 + ((int)sVar41 + (int)(short)iVar4) * iVar46);
        iVar45 = iVar45 + iVar3;
        iVar32 = iVar32 + iVar3;
        iVar33 = iVar33 + iVar3;
        iVar35 = iVar35 + iVar3;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
      bVar8 = uVar19 != param_3;
      param_3 = param_3 - uVar19;
      param_5 = param_5 + uVar19;
      param_2 = piVar9;
      piVar12 = piVar20;
      iVar45 = iVar26;
      iVar22 = iVar28;
      iVar24 = iVar29;
      if (bVar8) goto LAB_00e76078;
    }
    *(int *)(param_1 + 8) = iVar26;
    *(int *)(param_1 + 0xc) = iVar28;
    *(int *)(param_1 + 0x1c) = iVar29;
    track_t::adjustVolumeRamp(param_1,true,false);
    goto LAB_00e75cd4;
  }
  if (iVar15 == 0 && iVar1 == 0) {
    iVar15 = (int)(short)*(int *)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 4) >> 0x10;
    if ((3 < param_3) && ((piVar12 + param_3 <= param_2 || (param_2 + param_3 * 2 <= piVar12)))) {
      uVar19 = param_3 & 0xfffffffffffffffc;
      piVar20 = piVar12 + uVar19;
      piVar9 = param_2 + uVar19 * 2;
      uVar10 = uVar19;
      do {
        uVar34 = *(undefined8 *)(piVar12 + 2);
        uVar31 = *(undefined8 *)piVar12;
        uVar10 = uVar10 - 4;
        *param_2 = *param_2 + (short)uVar31 * iVar15;
        param_2[1] = param_2[1] + ((int)uVar31 >> 0x10) * iVar1;
        param_2[2] = param_2[2] + (short)((ulong)uVar31 >> 0x20) * iVar15;
        param_2[3] = param_2[3] + (int)((long)uVar31 >> 0x30) * iVar1;
        param_2[4] = param_2[4] + (short)uVar34 * iVar15;
        param_2[5] = param_2[5] + ((int)uVar34 >> 0x10) * iVar1;
        param_2[6] = param_2[6] + (short)((ulong)uVar34 >> 0x20) * iVar15;
        param_2[7] = param_2[7] + (int)((long)uVar34 >> 0x30) * iVar1;
        param_2 = param_2 + 8;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
      bVar8 = uVar19 == param_3;
      param_3 = param_3 - uVar19;
      param_2 = piVar9;
      piVar12 = piVar20;
      if (bVar8) goto LAB_00e75cd4;
    }
    do {
      piVar20 = piVar12 + 1;
      iVar14 = *piVar12;
      param_3 = param_3 - 1;
      *param_2 = *param_2 + (short)iVar14 * iVar15;
      param_2[1] = param_2[1] + (iVar14 >> 0x10) * iVar1;
      param_2 = param_2 + 2;
      piVar12 = piVar20;
    } while (param_3 != 0);
    goto LAB_00e75cd4;
  }
  uVar21 = *(uint *)(param_1 + 8);
  uVar27 = *(uint *)(param_1 + 0xc);
  if (param_3 < 4) {
LAB_00e75f28:
    do {
      uVar17 = uVar21 + iVar1;
      param_3 = param_3 - 1;
      *param_2 = *param_2 + ((int)uVar21 >> 0x10) * (int)(short)*piVar12;
      piVar20 = piVar12 + 1;
      uVar16 = uVar27 + iVar15;
      param_2[1] = param_2[1] + ((int)uVar27 >> 0x10) * (int)*(short *)((long)piVar12 + 2);
      param_2 = param_2 + 2;
      piVar12 = piVar20;
      uVar21 = uVar17;
      uVar27 = uVar16;
    } while (param_3 != 0);
  }
  else {
    uVar19 = param_3 & 0xfffffffffffffffc;
    iVar14 = iVar1 * 4;
    iVar45 = iVar15 * 4;
    uVar17 = uVar21 + iVar1 * (int)uVar19;
    uVar16 = uVar27 + iVar15 * (int)uVar19;
    piVar20 = piVar12 + uVar19;
    piVar9 = param_2 + uVar19 * 2;
    iVar22 = uVar21 + iVar1;
    iVar24 = uVar21 + iVar1 * 2;
    iVar26 = uVar21 + iVar1 * 3;
    iVar28 = uVar27 + iVar15;
    iVar29 = uVar27 + iVar15 * 2;
    iVar30 = uVar27 + iVar15 * 3;
    uVar10 = uVar19;
    do {
      iVar2 = *piVar12;
      sVar41 = *(short *)((long)piVar12 + 2);
      iVar3 = piVar12[1];
      sVar42 = *(short *)((long)piVar12 + 6);
      iVar23 = piVar12[2];
      sVar43 = *(short *)((long)piVar12 + 10);
      iVar25 = piVar12[3];
      sVar44 = *(short *)((long)piVar12 + 0xe);
      piVar12 = piVar12 + 4;
      iVar36 = (int)uVar21 >> 0x10;
      iVar37 = iVar22 >> 0x10;
      iVar39 = iVar24 >> 0x10;
      iVar40 = iVar26 >> 0x10;
      uVar21 = uVar21 + iVar14;
      iVar22 = iVar22 + iVar14;
      iVar24 = iVar24 + iVar14;
      iVar26 = iVar26 + iVar14;
      uVar10 = uVar10 - 4;
      *param_2 = *param_2 + iVar36 * (short)iVar2;
      param_2[1] = param_2[1] + (int)(short)(uVar27 >> 0x10) * (int)sVar41;
      param_2[2] = param_2[2] + iVar37 * (short)iVar3;
      param_2[3] = param_2[3] + (int)(short)((uint)iVar28 >> 0x10) * (int)sVar42;
      param_2[4] = param_2[4] + iVar39 * (short)iVar23;
      param_2[5] = param_2[5] + (iVar29 >> 0x10) * (int)sVar43;
      param_2[6] = param_2[6] + iVar40 * (short)iVar25;
      param_2[7] = param_2[7] + (iVar30 >> 0x10) * (int)sVar44;
      param_2 = param_2 + 8;
      uVar27 = uVar27 + iVar45;
      iVar28 = iVar28 + iVar45;
      iVar29 = iVar29 + iVar45;
      iVar30 = iVar30 + iVar45;
    } while (uVar10 != 0);
    bVar8 = uVar19 != param_3;
    param_3 = param_3 - uVar19;
    param_2 = piVar9;
    piVar12 = piVar20;
    uVar21 = uVar17;
    uVar27 = uVar16;
    if (bVar8) goto LAB_00e75f28;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 8) = uVar17;
  *(uint *)(param_1 + 0xc) = uVar16;
  if (iVar1 < 1) {
    if ((iVar1 < 0) &&
       (iVar15 = (int)*(short *)(param_1 + 4), (int)(iVar1 + uVar17) >> 0x10 <= iVar15))
    goto LAB_00e75f8c;
LAB_00e75fc0:
    *(float *)(param_1 + 0x9c) = (float)uVar17 * 3.7252903e-09;
  }
  else {
    iVar15 = (int)*(short *)(param_1 + 4);
    if ((int)(iVar1 + uVar17) >> 0x10 < (int)*(short *)(param_1 + 4)) goto LAB_00e75fc0;
LAB_00e75f8c:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = iVar15 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 1) {
    if ((-1 < iVar1) ||
       (iVar15 = (int)*(short *)(param_1 + 6), iVar15 < (int)(iVar1 + uVar16) >> 0x10))
    goto LAB_00e76024;
  }
  else {
    iVar15 = (int)*(short *)(param_1 + 6);
    if ((int)(iVar1 + uVar16) >> 0x10 < (int)*(short *)(param_1 + 6)) {
LAB_00e76024:
      *(float *)(param_1 + 0xa0) = (float)uVar16 * 3.7252903e-09;
      goto LAB_00e75cd4;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xc) = iVar15 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
LAB_00e75cd4:
  *(int **)(param_1 + 0x50) = piVar20;
  return;
}

