
/* cocos2d::experimental::AudioMixer::track__genericResample(cocos2d::experimental::AudioMixer::track_t*,
   int*, unsigned long, int*, int*) */

void cocos2d::experimental::AudioMixer::track__genericResample
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
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
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
            (*(long **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (param_5 != (int *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(0x3f800000,0x3f800000);
    memset(param_4,0,param_3 * *(uint *)(param_1 + 0xbc) * 4);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
              (*(long **)(param_1 + 0x58),param_4,param_3,*(undefined8 *)(param_1 + 0x30));
    iVar14 = *(int *)(param_1 + 0x10);
    iVar16 = *(int *)(param_1 + 0x14);
    iVar17 = *(int *)(param_1 + 0x18);
    if ((iVar16 == 0 && iVar14 == 0) && iVar17 == 0) {
      sVar3 = *(short *)(param_1 + 0x20);
      iVar16 = (int)*(short *)(param_1 + 4);
      iVar17 = (int)*(short *)(param_1 + 6);
      iVar14 = (int)sVar3;
      if (3 < param_3) {
        if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
            (param_4 + param_3 * 2 <= param_2 || param_2 + param_3 * 2 <= param_4)) &&
           (param_4 + param_3 * 2 <= param_5 || param_5 + param_3 <= param_4)) {
          uVar19 = param_3 & 0xfffffffffffffffc;
          piVar1 = param_4 + uVar19 * 2;
          piVar2 = param_2 + uVar19 * 2;
          uVar13 = uVar19;
          piVar20 = param_5;
          do {
            uVar31 = *param_4;
            puVar6 = (uint *)(param_4 + 1);
            puVar7 = (uint *)(param_4 + 2);
            puVar8 = (uint *)(param_4 + 3);
            puVar9 = (uint *)(param_4 + 4);
            puVar10 = (uint *)(param_4 + 5);
            puVar11 = (uint *)(param_4 + 6);
            puVar12 = (uint *)(param_4 + 7);
            param_4 = param_4 + 8;
            uVar13 = uVar13 - 4;
            iVar45 = (int)(short)(uVar31 >> 0xc);
            iVar46 = (int)(short)(*puVar7 >> 0xc);
            iVar47 = (int)(short)(*puVar9 >> 0xc);
            iVar48 = (int)(short)(*puVar11 >> 0xc);
            iVar32 = (int)(short)(*puVar6 >> 0xc);
            iVar33 = (int)(short)(*puVar8 >> 0xc);
            iVar34 = (int)(short)(*puVar10 >> 0xc);
            iVar35 = (int)(short)(*puVar12 >> 0xc);
            *param_2 = *param_2 + iVar45 * iVar16;
            param_2[1] = param_2[1] + iVar32 * iVar17;
            param_2[2] = param_2[2] + iVar46 * iVar16;
            param_2[3] = param_2[3] + iVar33 * iVar17;
            param_2[4] = param_2[4] + iVar47 * iVar16;
            param_2[5] = param_2[5] + iVar34 * iVar17;
            param_2[6] = param_2[6] + iVar48 * iVar16;
            param_2[7] = param_2[7] + iVar35 * iVar17;
            param_2 = param_2 + 8;
            *(ulong *)(piVar20 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar20 + 2) >> 0x20) +
                          (iVar35 + iVar48 >> 1) * iVar14,
                          (int)*(undefined8 *)(piVar20 + 2) + (iVar34 + iVar47 >> 1) * iVar14);
            *(ulong *)piVar20 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar20 >> 0x20) +
                          (iVar33 + iVar46 >> 1) * (int)sVar3,
                          (int)*(undefined8 *)piVar20 + (iVar32 + iVar45 >> 1) * (int)sVar3);
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
          bVar5 = uVar19 == param_3;
          param_5 = param_5 + uVar19;
          param_4 = piVar1;
          param_3 = param_3 - uVar19;
          param_2 = piVar2;
          if (bVar5) {
            return;
          }
        }
      }
      do {
        param_3 = param_3 - 1;
        iVar32 = (int)(short)((uint)*(undefined8 *)param_4 >> 0xc);
        iVar33 = (int)(short)(uint)((ulong)*(undefined8 *)param_4 >> 0x2c);
        *(ulong *)param_2 =
             CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + iVar33 * iVar17,
                      (int)*(undefined8 *)param_2 + iVar32 * iVar16);
        *param_5 = *param_5 + (iVar33 + iVar32 >> 1) * iVar14;
        param_5 = param_5 + 1;
        param_4 = param_4 + 2;
        param_2 = param_2 + 2;
      } while (param_3 != 0);
      return;
    }
    iVar32 = *(int *)(param_1 + 8);
    iVar33 = *(int *)(param_1 + 0xc);
    iVar34 = *(int *)(param_1 + 0x1c);
    if (3 < param_3) {
      if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
          (param_4 + param_3 * 2 <= param_2 || param_2 + param_3 * 2 <= param_4)) &&
         (param_4 + param_3 * 2 <= param_5 || param_5 + param_3 <= param_4)) {
        uVar19 = param_3 & 0xfffffffffffffffc;
        iVar47 = iVar16 * 4;
        iVar48 = iVar14 * 4;
        iVar36 = iVar17 * 4;
        iVar46 = (int)uVar19;
        iVar45 = iVar33 + iVar16 * iVar46;
        iVar35 = iVar32 + iVar14 * iVar46;
        iVar46 = iVar34 + iVar17 * iVar46;
        iVar22 = iVar33 + iVar16;
        iVar23 = iVar33 + iVar16 * 2;
        iVar24 = iVar33 + iVar16 * 3;
        iVar25 = iVar32 + iVar14;
        iVar26 = iVar32 + iVar14 * 2;
        iVar27 = iVar32 + iVar14 * 3;
        piVar1 = param_4 + uVar19 * 2;
        piVar2 = param_2 + uVar19 * 2;
        iVar28 = iVar34 + iVar17;
        iVar29 = iVar34 + iVar17 * 2;
        iVar30 = iVar34 + iVar17 * 3;
        uVar13 = uVar19;
        piVar20 = param_5;
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
          *param_2 = *param_2 + (iVar37 >> 0xc) * (iVar32 >> 0x10);
          param_2[1] = param_2[1] + (iVar41 >> 0xc) * (iVar33 >> 0x10);
          param_2[2] = param_2[2] + (iVar38 >> 0xc) * (iVar25 >> 0x10);
          param_2[3] = param_2[3] + (iVar42 >> 0xc) * (iVar22 >> 0x10);
          param_2[4] = param_2[4] + (iVar39 >> 0xc) * (iVar26 >> 0x10);
          param_2[5] = param_2[5] + (iVar43 >> 0xc) * (iVar23 >> 0x10);
          param_2[6] = param_2[6] + (iVar40 >> 0xc) * (iVar27 >> 0x10);
          param_2[7] = param_2[7] + (iVar44 >> 0xc) * (iVar24 >> 0x10);
          param_2 = param_2 + 8;
          iVar33 = iVar33 + iVar47;
          iVar22 = iVar22 + iVar47;
          iVar23 = iVar23 + iVar47;
          iVar24 = iVar24 + iVar47;
          iVar32 = iVar32 + iVar48;
          iVar25 = iVar25 + iVar48;
          iVar26 = iVar26 + iVar48;
          iVar27 = iVar27 + iVar48;
          uVar13 = uVar13 - 4;
          *(ulong *)(piVar20 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar20 + 2) >> 0x20) +
                        ((iVar44 >> 0xc) + (iVar40 >> 0xc)) * (iVar30 >> 0x11),
                        (int)*(undefined8 *)(piVar20 + 2) +
                        ((iVar43 >> 0xc) + (iVar39 >> 0xc)) * (iVar29 >> 0x11));
          *(ulong *)piVar20 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar20 >> 0x20) +
                        ((iVar42 >> 0xc) + (iVar38 >> 0xc)) * (iVar28 >> 0x11),
                        (int)*(undefined8 *)piVar20 +
                        ((iVar41 >> 0xc) + (iVar37 >> 0xc)) * (iVar34 >> 0x11));
          iVar34 = iVar34 + iVar36;
          iVar28 = iVar28 + iVar36;
          iVar29 = iVar29 + iVar36;
          iVar30 = iVar30 + iVar36;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
        bVar5 = uVar19 == param_3;
        param_5 = param_5 + uVar19;
        param_4 = piVar1;
        param_3 = param_3 - uVar19;
        param_2 = piVar2;
        iVar32 = iVar35;
        iVar33 = iVar45;
        iVar34 = iVar46;
        if (bVar5) goto LAB_00e751b0;
      }
    }
    do {
      iVar47 = *param_4;
      iVar48 = param_4[1];
      iVar35 = iVar32 + iVar14;
      *param_2 = *param_2 + (iVar47 >> 0xc) * (iVar32 >> 0x10);
      param_2[1] = param_2[1] + (iVar48 >> 0xc) * (iVar33 >> 0x10);
      iVar45 = iVar33 + iVar16;
      iVar46 = iVar34 + iVar17;
      param_3 = param_3 - 1;
      *param_5 = *param_5 + ((iVar48 >> 0xc) + (iVar47 >> 0xc)) * (iVar34 >> 0x11);
      param_5 = param_5 + 1;
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
      iVar32 = iVar35;
      iVar33 = iVar45;
      iVar34 = iVar46;
    } while (param_3 != 0);
LAB_00e751b0:
    *(int *)(param_1 + 0x1c) = iVar46;
    *(int *)(param_1 + 8) = iVar35;
    *(int *)(param_1 + 0xc) = iVar45;
    track_t::adjustVolumeRamp(param_1,true,false);
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0 && *(int *)(param_1 + 0x10) == 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))
              (*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00e75140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
              (*(long **)(param_1 + 0x58),param_2,param_3,*(undefined8 *)(param_1 + 0x30));
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(0x3f800000,0x3f800000);
  memset(param_4,0,param_3 << 5);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
            (*(long **)(param_1 + 0x58),param_4,param_3,*(undefined8 *)(param_1 + 0x30));
  uVar31 = *(uint *)(param_1 + 8);
  uVar21 = *(uint *)(param_1 + 0xc);
  iVar14 = *(int *)(param_1 + 0x10);
  iVar16 = *(int *)(param_1 + 0x14);
  if ((param_3 < 4) || ((param_2 < param_4 + param_3 * 2 && (param_4 < param_2 + param_3 * 2)))) {
LAB_00e75250:
    do {
      uVar18 = uVar31 + iVar14;
      *param_2 = *param_2 + (*param_4 >> 0xc) * ((int)uVar31 >> 0x10);
      uVar15 = uVar21 + iVar16;
      param_3 = param_3 - 1;
      param_2[1] = param_2[1] + (param_4[1] >> 0xc) * ((int)uVar21 >> 0x10);
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
      uVar31 = uVar18;
      uVar21 = uVar15;
    } while (param_3 != 0);
  }
  else {
    uVar19 = param_3 & 0xfffffffffffffffc;
    iVar17 = iVar16 * 4;
    iVar32 = iVar14 * 4;
    uVar15 = uVar21 + iVar16 * (int)uVar19;
    uVar18 = uVar31 + iVar14 * (int)uVar19;
    iVar33 = uVar21 + iVar16;
    iVar34 = uVar21 + iVar16 * 2;
    iVar35 = uVar21 + iVar16 * 3;
    piVar1 = param_4 + uVar19 * 2;
    piVar2 = param_2 + uVar19 * 2;
    iVar45 = uVar31 + iVar14;
    iVar46 = uVar31 + iVar14 * 2;
    iVar47 = uVar31 + iVar14 * 3;
    uVar13 = uVar19;
    do {
      iVar48 = *param_4;
      iVar24 = param_4[1];
      iVar36 = param_4[2];
      iVar25 = param_4[3];
      iVar22 = param_4[4];
      iVar26 = param_4[5];
      iVar23 = param_4[6];
      iVar27 = param_4[7];
      param_4 = param_4 + 8;
      iVar28 = (int)uVar21 >> 0x10;
      iVar29 = iVar33 >> 0x10;
      iVar30 = iVar34 >> 0x10;
      iVar37 = iVar35 >> 0x10;
      uVar21 = uVar21 + iVar17;
      iVar33 = iVar33 + iVar17;
      iVar34 = iVar34 + iVar17;
      iVar35 = iVar35 + iVar17;
      uVar13 = uVar13 - 4;
      *param_2 = *param_2 + (iVar48 >> 0xc) * ((int)uVar31 >> 0x10);
      param_2[1] = param_2[1] + (iVar24 >> 0xc) * iVar28;
      param_2[2] = param_2[2] + (iVar36 >> 0xc) * (iVar45 >> 0x10);
      param_2[3] = param_2[3] + (iVar25 >> 0xc) * iVar29;
      param_2[4] = param_2[4] + (iVar22 >> 0xc) * (iVar46 >> 0x10);
      param_2[5] = param_2[5] + (iVar26 >> 0xc) * iVar30;
      param_2[6] = param_2[6] + (iVar23 >> 0xc) * (iVar47 >> 0x10);
      param_2[7] = param_2[7] + (iVar27 >> 0xc) * iVar37;
      param_2 = param_2 + 8;
      uVar31 = uVar31 + iVar32;
      iVar45 = iVar45 + iVar32;
      iVar46 = iVar46 + iVar32;
      iVar47 = iVar47 + iVar32;
    } while (uVar13 != 0);
    bVar5 = uVar19 != param_3;
    param_4 = piVar1;
    param_3 = param_3 - uVar19;
    param_2 = piVar2;
    uVar31 = uVar18;
    uVar21 = uVar15;
    if (bVar5) goto LAB_00e75250;
  }
  iVar14 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 8) = uVar18;
  *(uint *)(param_1 + 0xc) = uVar15;
  if (iVar14 < 1) {
    if ((-1 < iVar14) ||
       (sVar3 = *(short *)(param_1 + 4), (int)sVar3 < (int)(iVar14 + uVar18) >> 0x10))
    goto LAB_00e753e8;
LAB_00e75400:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 8) = (int)sVar3 << 0x10;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    sVar3 = *(short *)(param_1 + 4);
    if ((int)sVar3 <= (int)(iVar14 + uVar18) >> 0x10) goto LAB_00e75400;
LAB_00e753e8:
    *(float *)(param_1 + 0x9c) = (float)uVar18 * 3.7252903e-09;
  }
  iVar14 = *(int *)(param_1 + 0x14);
  if (iVar14 < 1) {
    if ((-1 < iVar14) ||
       (uVar4 = *(ushort *)(param_1 + 6), (int)(short)uVar4 < (int)(iVar14 + uVar15) >> 0x10))
    goto LAB_00e75450;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 6);
    if ((int)(iVar14 + uVar15) >> 0x10 < (int)(short)uVar4) {
LAB_00e75450:
      *(float *)(param_1 + 0xa0) = (float)uVar15 * 3.7252903e-09;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0xc) = (uint)uVar4 << 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
  return;
}

