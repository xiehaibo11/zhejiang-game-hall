
void multicomb(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4,
              uint param_5,int param_6,int param_7,undefined4 param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 (*pauVar17) [16];
  bool bVar18;
  ushort uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  short *psVar31;
  uint uVar32;
  ulong uVar33;
  undefined1 (*pauVar34) [16];
  short sVar35;
  ulong uVar36;
  short *psVar37;
  int iVar38;
  long lVar39;
  short *psVar40;
  short *psVar41;
  undefined8 *puVar42;
  uint uVar43;
  long lVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  long local_90;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  uint local_7c;
  undefined1 (*local_78) [16];
  long local_70;
  long local_68;
  
  lVar25 = tpidr_el0;
  local_68 = *(long *)(lVar25 + 0x28);
  lVar39 = -((ulong)(param_5 << 1) * 2 + 0xf & 0x3fffffff0);
  puVar30 = (undefined8 *)((long)&local_90 + lVar39);
  interp_pitch(param_1,puVar30,param_6,0x50);
  local_90 = (long)puVar30 + (long)(int)param_5 * 2;
  if (param_7 < param_6) {
    iVar20 = param_6 << 1;
  }
  else {
    iVar20 = -param_6;
  }
  interp_pitch(param_1,local_90,iVar20,0x50);
  lVar44 = (long)(int)param_5;
  local_78 = param_2;
  local_70 = lVar25;
  local_84 = param_6;
  iStack_80 = param_7;
  local_88 = param_8;
  if (0 < (int)param_5) {
    lVar25 = 0;
LAB_0010c160:
    sVar35 = *(short *)((long)param_1 + lVar25 * 2);
    iVar20 = -(int)sVar35;
    if (-1 < sVar35) {
      iVar20 = (int)sVar35;
    }
    if (iVar20 < 0x4000) goto code_r0x0010c174;
    uVar26 = (ulong)param_5;
    if (0xf < param_5) {
      uVar33 = uVar26 & 0xfffffff0;
      puVar28 = param_1 + 2;
      uVar29 = uVar33;
      do {
        uVar47 = puVar28[-1];
        uVar46 = puVar28[-2];
        uVar49 = puVar28[1];
        uVar48 = *puVar28;
        uVar29 = uVar29 - 0x10;
        puVar28[-1] = CONCAT26((short)((long)uVar47 >> 0x31),
                               CONCAT24((short)((ulong)uVar47 >> 0x20) >> 1,
                                        CONCAT22((short)((ulong)uVar47 >> 0x10) >> 1,
                                                 (short)uVar47 >> 1)));
        puVar28[-2] = CONCAT26((short)((long)uVar46 >> 0x31),
                               CONCAT24((short)((ulong)uVar46 >> 0x20) >> 1,
                                        CONCAT22((short)((ulong)uVar46 >> 0x10) >> 1,
                                                 (short)uVar46 >> 1)));
        puVar28[1] = CONCAT26((short)((long)uVar49 >> 0x31),
                              CONCAT24((short)((ulong)uVar49 >> 0x20) >> 1,
                                       CONCAT22((short)((ulong)uVar49 >> 0x10) >> 1,
                                                (short)uVar49 >> 1)));
        *puVar28 = CONCAT26((short)((long)uVar48 >> 0x31),
                            CONCAT24((short)((ulong)uVar48 >> 0x20) >> 1,
                                     CONCAT22((short)((ulong)uVar48 >> 0x10) >> 1,(short)uVar48 >> 1
                                             )));
        puVar28 = puVar28 + 4;
      } while (uVar29 != 0);
      if (uVar33 != uVar26) {
LAB_0010c1d0:
        lVar25 = uVar26 - uVar33;
        psVar31 = (short *)((long)param_1 + uVar33 * 2);
        do {
          lVar25 = lVar25 + -1;
          *psVar31 = (short)((ulong)(long)*psVar31 >> 1);
          psVar31 = psVar31 + 1;
        } while (lVar25 != 0);
      }
      uVar33 = (ulong)(int)(param_5 << 1);
      uVar26 = uVar33;
      if ((long)uVar33 < 2) {
        uVar26 = 1;
      }
      if (uVar26 < 0x10) {
        uVar29 = 0;
LAB_0010c238:
        do {
          lVar25 = uVar29 * 2;
          uVar29 = uVar29 + 1;
          *(short *)((long)puVar30 + lVar25) =
               (short)((ulong)(long)*(short *)((long)puVar30 + lVar25) >> 1);
        } while ((long)uVar29 < (long)uVar33);
      }
      else {
        uVar29 = uVar26 & 0x7ffffffffffffff0;
        puVar28 = (undefined8 *)((long)&iStack_80 + lVar39);
        uVar36 = uVar29;
        do {
          uVar47 = puVar28[-1];
          uVar46 = puVar28[-2];
          uVar49 = puVar28[1];
          uVar48 = *puVar28;
          uVar36 = uVar36 - 0x10;
          puVar28[-1] = CONCAT26((short)((long)uVar47 >> 0x31),
                                 CONCAT24((short)((ulong)uVar47 >> 0x20) >> 1,
                                          CONCAT22((short)((ulong)uVar47 >> 0x10) >> 1,
                                                   (short)uVar47 >> 1)));
          puVar28[-2] = CONCAT26((short)((long)uVar46 >> 0x31),
                                 CONCAT24((short)((ulong)uVar46 >> 0x20) >> 1,
                                          CONCAT22((short)((ulong)uVar46 >> 0x10) >> 1,
                                                   (short)uVar46 >> 1)));
          puVar28[1] = CONCAT26((short)((long)uVar49 >> 0x31),
                                CONCAT24((short)((ulong)uVar49 >> 0x20) >> 1,
                                         CONCAT22((short)((ulong)uVar49 >> 0x10) >> 1,
                                                  (short)uVar49 >> 1)));
          *puVar28 = CONCAT26((short)((long)uVar48 >> 0x31),
                              CONCAT24((short)((ulong)uVar48 >> 0x20) >> 1,
                                       CONCAT22((short)((ulong)uVar48 >> 0x10) >> 1,
                                                (short)uVar48 >> 1)));
          puVar28 = puVar28 + 4;
        } while (uVar36 != 0);
        if (uVar26 != uVar29) goto LAB_0010c238;
      }
      local_7c = 0;
      goto LAB_0010c258;
    }
    uVar33 = 0;
    goto LAB_0010c1d0;
  }
LAB_0010c180:
  local_7c = 1;
LAB_0010c258:
  iVar20 = inner_prod(puVar30,puVar30,param_5);
  lVar25 = local_90;
  uVar23 = iVar20 + 1000;
  bVar18 = uVar23 >> 0x10 != 0;
  uVar43 = uVar23 >> 0x10;
  if (!bVar18) {
    uVar43 = uVar23;
  }
  uVar21 = uVar43 >> 8;
  if (uVar43 < 0x100) {
    uVar21 = uVar43;
  }
  uVar22 = (uint)bVar18 << 3 | 4;
  if (uVar43 < 0x100) {
    uVar22 = (uint)bVar18 << 3;
  }
  uVar43 = uVar21 >> 4;
  if (uVar21 < 0x10) {
    uVar43 = uVar21;
  }
  uVar4 = uVar22 | 2;
  if (uVar21 < 0x10) {
    uVar4 = uVar22;
  }
  uVar4 = uVar4 | 3 < uVar43;
  sVar35 = (short)((int)uVar23 >> (uVar4 * 2 - 0xc & 0x1f));
  if ((ushort)uVar4 < 7) {
    sVar35 = (short)(uVar23 << (ulong)(uVar4 * -2 + 0xc & 0x1f));
  }
  iVar20 = (int)sVar35;
  uVar4 = 0xd - uVar4;
  iVar20 = (int)((((int)(((iVar20 * 0x41b0 + -0x31530000 >> 0x10) * iVar20 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar20 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  uVar23 = iVar20 >> (uVar4 & 0x1f);
  if ((int)uVar4 < 1) {
    uVar23 = iVar20 << (ulong)(-uVar4 & 0x1f);
  }
  iVar20 = inner_prod(local_90,local_90,param_5);
  uVar43 = iVar20 + 1000;
  uVar22 = uVar43 >> 0x10;
  uVar21 = uVar22;
  if (uVar22 == 0) {
    uVar21 = uVar43;
  }
  uVar32 = (uint)(uVar22 != 0);
  uVar22 = uVar32 << 3 | 4;
  uVar4 = uVar21 >> 8;
  if (uVar21 < 0x100) {
    uVar22 = uVar32 << 3;
    uVar4 = uVar21;
  }
  uVar21 = uVar22 | 2;
  uVar32 = uVar4 >> 4;
  if (uVar4 < 0x10) {
    uVar21 = uVar22;
    uVar32 = uVar4;
  }
  uVar21 = uVar21 | 3 < uVar32;
  sVar35 = (short)((int)uVar43 >> (uVar21 * 2 - 0xc & 0x1f));
  if ((ushort)uVar21 < 7) {
    sVar35 = (short)(uVar43 << (ulong)(uVar21 * -2 + 0xc & 0x1f));
  }
  iVar20 = (int)sVar35;
  uVar21 = 0xd - uVar21;
  iVar20 = (int)((((int)(((iVar20 * 0x41b0 + -0x31530000 >> 0x10) * iVar20 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar20 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  uVar43 = iVar20 >> (uVar21 & 0x1f);
  if ((int)uVar21 < 1) {
    uVar43 = iVar20 << (ulong)(-uVar21 & 0x1f);
  }
  iVar20 = inner_prod(param_1,param_1,param_5);
  uVar21 = iVar20 + 1;
  uVar22 = uVar21 >> 0x10;
  bVar18 = uVar22 != 0;
  if (!bVar18) {
    uVar22 = iVar20 + 1;
  }
  uVar27 = (uint)bVar18;
  uVar4 = uVar27 << 3 | 4;
  uVar32 = uVar22 >> 8;
  if (uVar22 < 0x100) {
    uVar4 = uVar27 << 3;
    uVar32 = uVar22;
  }
  uVar22 = uVar4 | 2;
  uVar27 = uVar32 >> 4;
  if (uVar32 < 0x10) {
    uVar22 = uVar4;
    uVar27 = uVar32;
  }
  uVar22 = uVar22 | 3 < uVar27;
  sVar35 = (short)((int)uVar21 >> (uVar22 * 2 - 0xc & 0x1f));
  if ((ushort)uVar22 < 7) {
    sVar35 = (short)(uVar21 << (ulong)(uVar22 * -2 + 0xc & 0x1f));
  }
  iVar20 = (int)sVar35;
  uVar22 = 0xd - uVar22;
  iVar20 = (int)((((int)(((iVar20 * 0x41b0 + -0x31530000 >> 0x10) * iVar20 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar20 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  iVar3 = iVar20 >> (uVar22 & 0x1f);
  if ((int)uVar22 < 1) {
    iVar3 = iVar20 << (ulong)(-uVar22 & 0x1f);
  }
  uVar21 = inner_prod(puVar30,param_1,param_5);
  uVar22 = inner_prod(lVar25,param_1,param_5);
  pauVar17 = local_78;
  iVar20 = (int)(short)iVar3;
  if ((int)(-(uVar23 >> 0xf & 1) & 0xffc00000 | (uVar23 & 0xffff) << 6) < iVar20) {
    uVar23 = (iVar20 + 0x20 >> 6) + 1;
  }
  uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  if ((int)(-(uVar43 >> 0xf & 1) & 0xffc00000 | (uVar43 & 0xffff) << 6) < iVar20) {
    uVar43 = (iVar20 + 0x20 >> 6) + 1;
  }
  iVar8 = (int)(short)uVar23;
  uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
  iVar10 = (iVar3 << 0x10) >> 0x11;
  iVar38 = (int)(uVar23 << 0x10) >> 0x11;
  if (iVar8 * iVar20 < (int)uVar21) {
    iVar24 = 0x4000;
  }
  else {
    iVar24 = 0;
    if (iVar20 != 0) {
      iVar24 = (int)(uVar21 + iVar10) / iVar20;
    }
    sVar35 = 0;
    if (iVar8 != 0) {
      sVar35 = (short)((iVar24 * 0x4000 + iVar38) / iVar8);
    }
    iVar24 = (int)sVar35;
  }
  iVar9 = (int)(short)uVar43;
  iVar2 = (int)(uVar43 << 0x10) >> 0x11;
  if (iVar9 * iVar20 < (int)uVar22) {
    iVar20 = 0x4000;
  }
  else {
    iVar5 = 0;
    if (iVar20 != 0) {
      iVar5 = (int)(uVar22 + iVar10) / iVar20;
    }
    sVar35 = 0;
    if (iVar9 != 0) {
      sVar35 = (short)((iVar2 + iVar5 * 0x4000) / iVar9);
    }
    iVar20 = (int)sVar35;
  }
  iVar3 = (iVar3 << 0x10) >> 8;
  iVar10 = (int)(short)local_88;
  uVar23 = 0;
  if (iVar8 != 0) {
    uVar23 = (iVar3 + iVar38) / iVar8;
  }
  if (iVar10 < 1) {
    uVar43 = 0;
    iVar38 = 0;
  }
  else {
    uVar43 = ((uint)(iVar10 * 0x3333) >> 0xf) + 0x8f6;
    iVar38 = (int)(((iVar10 * 0x6666 >> 0x10) * 0x1b850 & 0xffff0000U) + 0x40000000) >> 0x10;
  }
  sVar35 = (short)uVar43;
  uVar21 = 0;
  if (iVar9 != 0) {
    uVar21 = (iVar2 + iVar3) / iVar9;
  }
  sVar6 = 0x7fff - (short)((uint)((iVar24 * iVar38 * 2 >> 0x10) * iVar24) >> 0xd);
  sVar7 = 0x7fff - (short)((uint)((iVar20 * iVar38 * 2 >> 0x10) * iVar20) >> 0xd);
  sVar1 = sVar35;
  if (sVar35 <= sVar6) {
    sVar1 = sVar6;
  }
  uVar43 = -(uVar43 >> 0xf & 1) & 0xc0000000 | (uVar43 & 0xffff) << 0xe;
  if (sVar35 <= sVar7) {
    sVar35 = sVar7;
  }
  iVar20 = (int)sVar1;
  iVar3 = (int)sVar35;
  sVar35 = 0;
  if (iVar20 != 0) {
    sVar35 = (short)((int)(uVar43 + (iVar20 >> 1)) / iVar20);
  }
  sVar1 = 0;
  if (iVar3 != 0) {
    sVar1 = (short)((int)(uVar43 + (iVar3 >> 1)) / iVar3);
  }
  iVar20 = (int)((-(uVar23 >> 0xf & 1) & 0xfffc0000 | (uVar23 & 0xffff) << 2) * (int)sVar35) >> 0x10
  ;
  if (iStack_80 < local_84) {
    sVar35 = (short)(iVar20 * 0x599a >> 0xf);
    sVar1 = (short)(((int)((-(uVar21 >> 0xf & 1) & 0xfffc0000 | (uVar21 & 0xffff) << 2) * (int)sVar1
                          ) >> 0x10) * 0x2666 >> 0xf);
  }
  else {
    sVar35 = (short)((uint)(iVar20 * 0x4ccd) >> 0xf);
    sVar1 = (short)((uint)(((int)((-(uVar21 >> 0xf & 1) & 0xfffc0000 | (uVar21 & 0xffff) << 2) *
                                 (int)sVar1) >> 0x10) * 0x4ccd) >> 0xf);
  }
  if (0 < (int)param_5) {
    iVar20 = (int)sVar35;
    iVar3 = (int)sVar1;
    uVar26 = (ulong)param_5;
    if ((param_5 < 8) ||
       ((local_78 < (undefined1 (*) [16])((long)param_1 + uVar26 * 2) &&
        (param_1 < *local_78 + uVar26 * 2)))) {
      uVar33 = 0;
    }
    else {
      uVar33 = uVar26 & 0xfffffff8;
      uVar29 = uVar33;
      pauVar34 = local_78;
      puVar28 = puVar30;
      puVar42 = param_1;
      do {
        uVar47 = puVar42[1];
        uVar46 = *puVar42;
        uVar49 = puVar28[1];
        uVar48 = *puVar28;
        puVar11 = (undefined8 *)((long)puVar28 + lVar44 * 2);
        uVar51 = puVar11[1];
        uVar50 = *puVar11;
        uVar29 = uVar29 - 8;
        puVar28 = puVar28 + 2;
        *(ulong *)(*pauVar34 + 8) =
             CONCAT26((short)((ulong)uVar47 >> 0x30) +
                      (short)((uint)(iVar20 * (short)((ulong)uVar49 >> 0x30) +
                                     iVar3 * (short)((ulong)uVar51 >> 0x30) + 0x80) >> 8),
                      CONCAT24((short)((ulong)uVar47 >> 0x20) +
                               (short)((uint)(iVar20 * (short)((ulong)uVar49 >> 0x20) +
                                              iVar3 * (short)((ulong)uVar51 >> 0x20) + 0x80) >> 8),
                               CONCAT22((short)((ulong)uVar47 >> 0x10) +
                                        (short)((uint)(iVar20 * (short)((ulong)uVar49 >> 0x10) +
                                                       iVar3 * (short)((ulong)uVar51 >> 0x10) + 0x80
                                                      ) >> 8),
                                        (short)uVar47 +
                                        (short)((uint)(iVar20 * (short)uVar49 +
                                                       iVar3 * (short)uVar51 + 0x80) >> 8))));
        *(ulong *)*pauVar34 =
             CONCAT26((short)((ulong)uVar46 >> 0x30) +
                      (short)((uint)(iVar20 * (short)((ulong)uVar48 >> 0x30) +
                                     iVar3 * (short)((ulong)uVar50 >> 0x30) + 0x80) >> 8),
                      CONCAT24((short)((ulong)uVar46 >> 0x20) +
                               (short)((uint)(iVar20 * (short)((ulong)uVar48 >> 0x20) +
                                              iVar3 * (short)((ulong)uVar50 >> 0x20) + 0x80) >> 8),
                               CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                        (short)((uint)(iVar20 * (short)((ulong)uVar48 >> 0x10) +
                                                       iVar3 * (short)((ulong)uVar50 >> 0x10) + 0x80
                                                      ) >> 8),
                                        (short)uVar46 +
                                        (short)((uint)(iVar20 * (short)uVar48 +
                                                       iVar3 * (short)uVar50 + 0x80) >> 8))));
        pauVar34 = pauVar34 + 1;
        puVar42 = puVar42 + 2;
      } while (uVar29 != 0);
      if (uVar33 == uVar26) goto LAB_0010c784;
    }
    lVar39 = uVar33 * 2;
    lVar25 = uVar26 - uVar33;
    psVar31 = (short *)(*local_78 + lVar39);
    psVar37 = (short *)((long)puVar30 + lVar39);
    psVar40 = (short *)((long)param_1 + lVar39);
    psVar41 = (short *)((long)puVar30 + (uVar33 + lVar44) * 2);
    do {
      lVar25 = lVar25 + -1;
      *psVar31 = *psVar40 + (short)((uint)(iVar3 * *psVar41 + iVar20 * *psVar37 + 0x80) >> 8);
      psVar31 = psVar31 + 1;
      psVar37 = psVar37 + 1;
      psVar40 = psVar40 + 1;
      psVar41 = psVar41 + 1;
    } while (lVar25 != 0);
  }
LAB_0010c784:
  uVar19 = compute_rms16(local_78,param_5);
  uVar23 = compute_rms16(param_1,param_5);
  if ((short)uVar23 < 2) {
    uVar23 = 1;
  }
  if ((short)uVar19 < 2) {
    uVar19 = 1;
  }
  if (0 < (int)param_5) {
    uVar43 = (uint)uVar19;
    uVar21 = uVar43;
    if ((uVar23 & 0xffff) <= uVar43) {
      uVar21 = uVar23;
    }
    sVar35 = 0;
    if (uVar43 != 0) {
      sVar35 = (short)(((uVar21 & 0xffff) << 0xe | (uint)(uVar19 >> 1)) / uVar43);
    }
    iVar20 = (int)sVar35;
    uVar26 = (ulong)param_5;
    if (param_5 < 0x10) {
      uVar29 = 0;
    }
    else {
      uVar29 = uVar26 & 0xfffffff0;
      pauVar34 = pauVar17 + 1;
      uVar33 = uVar29;
      do {
        uVar47 = *(undefined8 *)(pauVar34[-1] + 8);
        uVar46 = *(undefined8 *)pauVar34[-1];
        sVar35 = *(short *)*pauVar34;
        sVar1 = *(short *)(*pauVar34 + 2);
        sVar6 = *(short *)(*pauVar34 + 4);
        sVar7 = *(short *)(*pauVar34 + 6);
        sVar13 = *(short *)(*pauVar34 + 8);
        sVar14 = *(short *)(*pauVar34 + 10);
        sVar15 = *(short *)(*pauVar34 + 0xc);
        sVar16 = *(short *)(*pauVar34 + 0xe);
        uVar33 = uVar33 - 0x10;
        *(ulong *)(pauVar34[-1] + 8) =
             CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar47 >> 0x30)) >> 0xe),
                      CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar47 >> 0x20)) >> 0xe),
                               CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar47 >> 0x10)) >>
                                               0xe),(short)((uint)(iVar20 * (short)uVar47) >> 0xe)))
                     );
        *(ulong *)pauVar34[-1] =
             CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar46 >> 0x30)) >> 0xe),
                      CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar46 >> 0x20)) >> 0xe),
                               CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar46 >> 0x10)) >>
                                               0xe),(short)((uint)(iVar20 * (short)uVar46) >> 0xe)))
                     );
        *(ulong *)(*pauVar34 + 8) =
             CONCAT26((short)((uint)(iVar20 * sVar16) >> 0xe),
                      CONCAT24((short)((uint)(iVar20 * sVar15) >> 0xe),
                               CONCAT22((short)((uint)(iVar20 * sVar14) >> 0xe),
                                        (short)((uint)(iVar20 * sVar13) >> 0xe))));
        *(ulong *)*pauVar34 =
             CONCAT26((short)((uint)(iVar20 * sVar7) >> 0xe),
                      CONCAT24((short)((uint)(iVar20 * sVar6) >> 0xe),
                               CONCAT22((short)((uint)(iVar20 * sVar1) >> 0xe),
                                        (short)((uint)(iVar20 * sVar35) >> 0xe))));
        pauVar34 = pauVar34 + 2;
      } while (uVar33 != 0);
      if (uVar29 == uVar26) goto LAB_0010c878;
    }
    lVar25 = uVar26 - uVar29;
    psVar31 = (short *)(*pauVar17 + uVar29 * 2);
    do {
      lVar25 = lVar25 + -1;
      *psVar31 = (short)((uint)(iVar20 * *psVar31) >> 0xe);
      psVar31 = psVar31 + 1;
    } while (lVar25 != 0);
  }
LAB_0010c878:
  if ((local_7c & 1) != 0 || (int)param_5 < 1) goto LAB_0010c9f4;
  uVar26 = (ulong)param_5;
  if (param_5 < 0x10) {
    uVar29 = 0;
LAB_0010c8d0:
    lVar25 = uVar26 - uVar29;
    psVar31 = (short *)((long)param_1 + uVar29 * 2);
    do {
      lVar25 = lVar25 + -1;
      *psVar31 = *psVar31 << 1;
      psVar31 = psVar31 + 1;
    } while (lVar25 != 0);
  }
  else {
    uVar29 = uVar26 & 0xfffffff0;
    puVar30 = param_1 + 2;
    uVar33 = uVar29;
    do {
      uVar47 = puVar30[-1];
      uVar46 = puVar30[-2];
      uVar49 = puVar30[1];
      uVar48 = *puVar30;
      uVar33 = uVar33 - 0x10;
      puVar30[-1] = CONCAT26((short)((ulong)uVar47 >> 0x30) << 1,
                             CONCAT24((short)((ulong)uVar47 >> 0x20) << 1,
                                      CONCAT22((short)((ulong)uVar47 >> 0x10) << 1,
                                               (short)uVar47 << 1)));
      puVar30[-2] = CONCAT26((short)((ulong)uVar46 >> 0x30) << 1,
                             CONCAT24((short)((ulong)uVar46 >> 0x20) << 1,
                                      CONCAT22((short)((ulong)uVar46 >> 0x10) << 1,
                                               (short)uVar46 << 1)));
      puVar30[1] = CONCAT26((short)((ulong)uVar49 >> 0x30) << 1,
                            CONCAT24((short)((ulong)uVar49 >> 0x20) << 1,
                                     CONCAT22((short)((ulong)uVar49 >> 0x10) << 1,(short)uVar49 << 1
                                             )));
      *puVar30 = CONCAT26((short)((ulong)uVar48 >> 0x30) << 1,
                          CONCAT24((short)((ulong)uVar48 >> 0x20) << 1,
                                   CONCAT22((short)((ulong)uVar48 >> 0x10) << 1,(short)uVar48 << 1))
                         );
      puVar30 = puVar30 + 4;
    } while (uVar33 != 0);
    if (uVar29 != uVar26) goto LAB_0010c8d0;
  }
  if (0 < (int)param_5) {
    if (param_5 < 8) {
      uVar29 = 0;
    }
    else {
      uVar29 = uVar26 & 0xfffffff8;
      uVar33 = uVar29;
      pauVar34 = pauVar17;
      do {
        uVar33 = uVar33 - 8;
        auVar45._8_2_ = 0xc001;
        auVar45._0_8_ = 0xc001c001c001c001;
        auVar45._10_2_ = 0xc001;
        auVar45._12_2_ = 0xc001;
        auVar45._14_2_ = 0xc001;
        auVar45 = NEON_smax(*pauVar34,auVar45,2);
        auVar12._8_2_ = 0x3fff;
        auVar12._0_8_ = 0x3fff3fff3fff3fff;
        auVar12._10_2_ = 0x3fff;
        auVar12._12_2_ = 0x3fff;
        auVar12._14_2_ = 0x3fff;
        auVar45 = NEON_smin(auVar45,auVar12,2);
        *(short *)(*pauVar34 + 8) = auVar45._8_2_ << 1;
        *(short *)(*pauVar34 + 10) = auVar45._10_2_ << 1;
        *(short *)(*pauVar34 + 0xc) = auVar45._12_2_ << 1;
        *(short *)(*pauVar34 + 0xe) = auVar45._14_2_ << 1;
        *(short *)*pauVar34 = auVar45._0_2_ << 1;
        *(short *)(*pauVar34 + 2) = auVar45._2_2_ << 1;
        *(short *)(*pauVar34 + 4) = auVar45._4_2_ << 1;
        *(short *)(*pauVar34 + 6) = auVar45._6_2_ << 1;
        pauVar34 = pauVar34 + 1;
      } while (uVar33 != 0);
      if (uVar29 == uVar26) goto LAB_0010c9f4;
    }
    lVar25 = uVar26 - uVar29;
    psVar31 = (short *)(*pauVar17 + uVar29 * 2);
    do {
      iVar20 = (int)*psVar31;
      if (*psVar31 < -0x3ffe) {
        iVar20 = -0x3fff;
      }
      if (0x3ffe < iVar20) {
        iVar20 = 0x3fff;
      }
      lVar25 = lVar25 + -1;
      *psVar31 = (short)(iVar20 << 1);
      psVar31 = psVar31 + 1;
    } while (lVar25 != 0);
  }
LAB_0010c9f4:
  if (*(long *)(local_70 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x0010c174:
  lVar25 = lVar25 + 1;
  if (lVar44 <= lVar25) goto LAB_0010c180;
  goto LAB_0010c160;
}

