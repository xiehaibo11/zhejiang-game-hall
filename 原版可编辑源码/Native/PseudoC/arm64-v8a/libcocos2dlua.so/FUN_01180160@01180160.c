
/* WARNING: Type propagation algorithm not settling */

void FUN_01180160(long *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  long lVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  long lVar30;
  uint uVar31;
  undefined4 uVar32;
  char *pcVar33;
  ushort uVar34;
  int iVar35;
  long lVar36;
  undefined1 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  int iVar40;
  undefined1 *puVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  undefined1 *puVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  
  puVar25 = (undefined4 *)param_1[7];
  pbVar28 = (byte *)(*param_1 + -1);
  iVar7 = puVar25[0xd];
  uVar9 = puVar25[0xe];
  uVar13 = puVar25[0xf];
  puVar11 = *(undefined1 **)(puVar25 + 0x10);
  uVar27 = *(ulong *)(puVar25 + 0x12);
  uVar8 = puVar25[0x1c];
  uVar10 = puVar25[0x1d];
  uVar31 = puVar25[0x14];
  lVar30 = *(long *)(puVar25 + 0x18);
  lVar12 = *(long *)(puVar25 + 0x1a);
  puVar41 = (undefined1 *)(param_1[3] + -1);
  pbVar4 = pbVar28 + ((int)param_1[1] - 5);
  iVar35 = (int)puVar41 - (param_2 - (int)param_1[4]);
  uVar20 = (ulong)(uVar13 - 1);
  puVar1 = (undefined8 *)(puVar11 + 0x10);
  puVar5 = puVar41 + ((int)param_1[4] - 0x101);
  uVar2 = uVar20 + 1;
  lVar46 = uVar2 - ((ulong)uVar13 & 0x1f);
  puVar47 = puVar11 + -1;
LAB_01180254:
  pcVar33 = "invalid distance code";
  if (uVar31 < 0xf) {
    uVar24 = (ulong)uVar31;
    uVar19 = uVar31 + 8;
    uVar31 = uVar31 + 0x10;
    uVar27 = ((ulong)pbVar28[1] << (uVar24 & 0x3f)) + uVar27 +
             ((ulong)pbVar28[2] << ((ulong)uVar19 & 0x3f));
    pbVar28 = pbVar28 + 2;
  }
  pbVar29 = (byte *)(lVar30 + (uVar27 & (1 << (ulong)(uVar8 & 0x1f)) - 1) * 4);
  uVar19 = (uint)*pbVar29;
  uVar34 = *(ushort *)(pbVar29 + 2);
  uVar27 = uVar27 >> ((ulong)pbVar29[1] & 0x3f);
  uVar31 = uVar31 - pbVar29[1];
  if (*pbVar29 != 0) {
    do {
      if ((uVar19 >> 4 & 1) != 0) {
        uVar19 = uVar19 & 0xf;
        uVar44 = (uint)uVar34;
        if (uVar19 != 0) {
          if (uVar31 < uVar19) {
            pbVar28 = pbVar28 + 1;
            uVar24 = (ulong)uVar31;
            uVar31 = uVar31 + 8;
            uVar27 = ((ulong)*pbVar28 << (uVar24 & 0x3f)) + uVar27;
          }
          uVar26 = (uint)uVar27;
          uVar27 = uVar27 >> uVar19;
          uVar44 = ((1 << uVar19) - 1U & uVar26) + uVar44;
          uVar31 = uVar31 - uVar19;
        }
        pbVar29 = pbVar28;
        if (uVar31 < 0xf) {
          pbVar29 = pbVar28 + 2;
          uVar24 = (ulong)uVar31;
          uVar19 = uVar31 + 8;
          uVar31 = uVar31 + 0x10;
          uVar27 = ((ulong)pbVar28[1] << (uVar24 & 0x3f)) + uVar27 +
                   ((ulong)*pbVar29 << ((ulong)uVar19 & 0x3f));
        }
        pbVar28 = (byte *)(lVar12 + (uVar27 & (1 << (ulong)(uVar10 & 0x1f)) - 1) * 4);
        bVar14 = *pbVar28;
        uVar34 = *(ushort *)(pbVar28 + 2);
        uVar27 = uVar27 >> ((ulong)pbVar28[1] & 0x3f);
        uVar31 = uVar31 - pbVar28[1];
        goto joined_r0x01180378;
      }
      if ((uVar19 >> 6 & 1) != 0) {
        if ((uVar19 >> 5 & 1) == 0) {
          pbVar29 = pbVar28;
          pcVar33 = "invalid literal/length code";
          goto LAB_01180968;
        }
        uVar32 = 0xb;
        goto LAB_01180970;
      }
      pbVar29 = (byte *)(lVar30 + ((uVar27 & (1 << (ulong)(uVar19 & 0x1f)) - 1) + (ulong)uVar34) * 4
                        );
      uVar19 = (uint)*pbVar29;
      uVar34 = *(ushort *)(pbVar29 + 2);
      uVar27 = uVar27 >> ((ulong)pbVar29[1] & 0x3f);
      uVar31 = uVar31 - pbVar29[1];
    } while (uVar19 != 0);
  }
  puVar41[1] = (char)uVar34;
  puVar37 = puVar41 + 1;
  goto joined_r0x01180944;
joined_r0x01180378:
  if ((bVar14 >> 4 & 1) != 0) goto LAB_011803b0;
  if ((bVar14 >> 6 & 1) != 0) goto LAB_01180968;
  pbVar28 = (byte *)(lVar12 + ((uVar27 & (1 << (ulong)(bVar14 & 0x1f)) - 1) + (ulong)uVar34) * 4);
  bVar14 = *pbVar28;
  uVar34 = *(ushort *)(pbVar28 + 2);
  uVar27 = uVar27 >> ((ulong)pbVar28[1] & 0x3f);
  uVar31 = uVar31 - pbVar28[1];
  goto joined_r0x01180378;
LAB_011803b0:
  uVar42 = (uint)uVar34;
  uVar26 = bVar14 & 0xf;
  pbVar28 = pbVar29;
  uVar19 = uVar31;
  if (uVar31 < uVar26) {
    pbVar28 = pbVar29 + 1;
    uVar19 = uVar31 + 8;
    uVar27 = ((ulong)*pbVar28 << ((ulong)uVar31 & 0x3f)) + uVar27;
    if (uVar19 < uVar26) {
      pbVar28 = pbVar29 + 2;
      uVar24 = (ulong)uVar19;
      uVar19 = uVar31 + 0x10;
      uVar27 = ((ulong)*pbVar28 << (uVar24 & 0x3f)) + uVar27;
    }
  }
  uVar6 = (1 << uVar26) - 1U & (uint)uVar27;
  uVar3 = uVar6 + uVar42;
  uVar27 = uVar27 >> uVar26;
  uVar31 = uVar19 - uVar26;
  iVar40 = (int)puVar41;
  uVar26 = iVar40 - iVar35;
  uVar19 = uVar3 - uVar26;
  if (uVar3 < uVar26 || uVar19 == 0) {
    iVar40 = 0;
    lVar45 = 0;
    do {
      lVar36 = lVar45;
      lVar17 = lVar36 - (ulong)uVar3;
      iVar40 = iVar40 + -3;
      lVar45 = lVar36 + 3;
      puVar41[lVar36 + 1] = puVar41[lVar17 + 1];
      puVar41[lVar36 + 2] = puVar41[lVar17 + 2];
      puVar41[lVar36 + 3] = puVar41[lVar17 + 3];
    } while (2 < uVar44 + iVar40);
    puVar37 = puVar41 + lVar45;
    if (uVar44 != (uint)lVar45) {
      lVar17 = lVar45 - (ulong)uVar3;
      puVar37[1] = puVar41[lVar17 + 1];
      puVar37 = puVar37 + 1;
      if (uVar44 - 1 != (uint)lVar45) {
        puVar41[lVar36 + 5] = puVar41[lVar17 + 2];
        puVar37 = puVar41 + lVar36 + 5;
      }
    }
    goto joined_r0x01180944;
  }
  if ((uVar9 < uVar19) &&
     (pbVar29 = pbVar28, pcVar33 = "invalid distance too far back", puVar25[0x6f8] != 0)) {
LAB_01180968:
    uVar32 = 0x1d;
    param_1[6] = (long)pcVar33;
    pbVar28 = pbVar29;
LAB_01180970:
    *puVar25 = uVar32;
LAB_01180974:
    lVar30 = (long)pbVar28 - (ulong)(uVar31 >> 3);
    param_1[3] = (long)(puVar41 + 1);
    *(int *)(param_1 + 4) = ((int)puVar5 + 0x101) - (int)puVar41;
    *param_1 = lVar30 + 1;
    *(int *)(param_1 + 1) = ((int)pbVar4 + 5) - (int)lVar30;
    *(ulong *)(puVar25 + 0x12) = uVar27 & (1 << (ulong)(uVar31 & 7)) - 1;
    puVar25[0x14] = uVar31 & 7;
    return;
  }
  puVar21 = puVar41;
  if (uVar13 == 0) {
    uVar24 = (ulong)(iVar7 - uVar19);
    uVar23 = uVar44 - uVar19;
    puVar22 = puVar47 + uVar24;
    if (uVar19 <= uVar44 && uVar23 != 0) {
      iVar15 = uVar6 + uVar42 + -1;
      uVar44 = iVar15 - uVar26;
      uVar43 = (ulong)uVar44 + 1;
      uVar18 = (ulong)(uint)(iVar15 - (iVar40 - iVar35));
      puVar37 = puVar41;
      if (0x1f < uVar43) {
        uVar44 = uVar44 + 1 & 0x1f;
        lVar45 = uVar43 - uVar44;
        if ((lVar45 != 0) &&
           ((uVar43 = (ulong)((uVar6 + uVar42 + -1) - uVar26),
            puVar11 + uVar24 + uVar43 + 1 <= puVar41 + 1 ||
            (puVar41 + uVar43 + 2 <= puVar11 + uVar24)))) {
          puVar37 = puVar41 + lVar45;
          uVar19 = uVar19 - (int)lVar45;
          puVar22 = puVar22 + lVar45;
          puVar39 = (undefined8 *)((long)puVar1 + uVar24);
          puVar38 = (undefined8 *)(puVar41 + 0x11);
          do {
            puVar16 = puVar39 + -1;
            uVar48 = puVar39[-2];
            uVar50 = puVar39[1];
            uVar49 = *puVar39;
            lVar45 = lVar45 + -0x20;
            puVar39 = puVar39 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar48;
            puVar38[1] = uVar50;
            *puVar38 = uVar49;
            puVar38 = puVar38 + 4;
          } while (lVar45 != 0);
          if (uVar44 == 0) goto LAB_01180884;
        }
      }
      do {
        puVar22 = puVar22 + 1;
        uVar19 = uVar19 - 1;
        puVar37[1] = *puVar22;
        puVar37 = puVar37 + 1;
      } while (uVar19 != 0);
LAB_01180884:
      puVar22 = puVar41 + uVar18 + 1 + -(ulong)uVar3;
      puVar21 = puVar41 + uVar18 + 1;
      uVar44 = uVar23;
    }
  }
  else {
    uVar24 = (ulong)(uVar13 - uVar19);
    if (uVar13 < uVar19) {
      uVar24 = (ulong)((uVar13 + iVar7) - uVar19);
      uVar19 = uVar19 - uVar13;
      uVar26 = uVar44 - uVar19;
      puVar22 = puVar47 + uVar24;
      if (uVar19 <= uVar44 && uVar26 != 0) {
        uVar44 = (uVar6 + ~uVar13 + uVar42) - (iVar40 - iVar35);
        uVar43 = (ulong)uVar44;
        puVar37 = puVar41;
        if (uVar43 + 1 < 0x20) goto LAB_011807c0;
        uVar44 = uVar44 + 1 & 0x1f;
        lVar45 = (uVar43 + 1) - (ulong)uVar44;
        if (lVar45 == 0) goto LAB_011807c0;
        if ((puVar41 + 1 < puVar11 + uVar24 + uVar43 + 1) &&
           (puVar11 + uVar24 < puVar41 + uVar43 + 2)) goto LAB_011807c0;
        puVar37 = puVar41 + lVar45;
        uVar19 = uVar19 - (int)lVar45;
        puVar22 = puVar22 + lVar45;
        puVar39 = (undefined8 *)((long)puVar1 + uVar24);
        puVar38 = (undefined8 *)(puVar41 + 0x11);
        do {
          puVar16 = puVar39 + -1;
          uVar48 = puVar39[-2];
          uVar50 = puVar39[1];
          uVar49 = *puVar39;
          lVar45 = lVar45 + -0x20;
          puVar39 = puVar39 + 4;
          puVar38[-1] = *puVar16;
          puVar38[-2] = uVar48;
          puVar38[1] = uVar50;
          *puVar38 = uVar49;
          puVar38 = puVar38 + 4;
        } while (lVar45 != 0);
        while (uVar44 != 0) {
LAB_011807c0:
          puVar37 = puVar37 + 1;
          puVar22 = puVar22 + 1;
          *puVar37 = *puVar22;
          uVar19 = uVar19 - 1;
          uVar44 = uVar19;
        }
        puVar21 = puVar41 + uVar43 + 1;
        puVar22 = puVar47;
        uVar44 = uVar26;
        if (uVar13 <= uVar26 && uVar26 - uVar13 != 0) {
          uVar19 = uVar13;
          puVar37 = puVar47;
          if (uVar2 < 0x20) goto LAB_011808f8;
          if (lVar46 == 0) goto LAB_011808f8;
          if ((puVar41 + uVar43 + 2 < puVar11 + uVar2) && (puVar11 < puVar41 + uVar43 + uVar20 + 3))
          goto LAB_011808f8;
          puVar38 = (undefined8 *)(puVar41 + uVar43 + 0x12);
          puVar21 = puVar21 + lVar46;
          puVar39 = puVar1;
          lVar45 = lVar46;
          do {
            puVar16 = puVar39 + -1;
            uVar48 = puVar39[-2];
            uVar50 = puVar39[1];
            uVar49 = *puVar39;
            lVar45 = lVar45 + -0x20;
            puVar39 = puVar39 + 4;
            puVar38[-1] = *puVar16;
            puVar38[-2] = uVar48;
            puVar38[1] = uVar50;
            *puVar38 = uVar49;
            puVar38 = puVar38 + 4;
            uVar44 = uVar13 - (int)lVar46;
            puVar37 = puVar47 + lVar46;
            uVar42 = uVar13 & 0x1f;
          } while (lVar45 != 0);
          while (uVar19 = uVar44, uVar42 != 0) {
LAB_011808f8:
            puVar21 = puVar21 + 1;
            *puVar21 = puVar37[1];
            uVar44 = uVar19 - 1;
            puVar37 = puVar37 + 1;
            uVar42 = uVar19 - 1;
          }
          puVar22 = puVar41 + uVar43 + uVar20 + 2 + -(ulong)uVar3;
          puVar21 = puVar41 + uVar43 + uVar20 + 2;
          uVar44 = uVar26 - uVar13;
        }
      }
    }
    else {
      uVar23 = uVar44 - uVar19;
      puVar22 = puVar47 + uVar24;
      if (uVar19 <= uVar44 && uVar23 != 0) {
        iVar15 = uVar6 + uVar42 + -1;
        uVar44 = iVar15 - uVar26;
        uVar43 = (ulong)uVar44 + 1;
        uVar18 = (ulong)(uint)(iVar15 - (iVar40 - iVar35));
        puVar37 = puVar41;
        if (0x1f < uVar43) {
          uVar44 = uVar44 + 1 & 0x1f;
          lVar45 = uVar43 - uVar44;
          if ((lVar45 != 0) &&
             ((uVar43 = (ulong)((uVar6 + uVar42 + -1) - uVar26),
              puVar11 + uVar24 + uVar43 + 1 <= puVar41 + 1 ||
              (puVar41 + uVar43 + 2 <= puVar11 + uVar24)))) {
            puVar37 = puVar41 + lVar45;
            uVar19 = uVar19 - (int)lVar45;
            puVar22 = puVar22 + lVar45;
            puVar39 = (undefined8 *)((long)puVar1 + uVar24);
            puVar38 = (undefined8 *)(puVar41 + 0x11);
            do {
              puVar16 = puVar39 + -1;
              uVar48 = puVar39[-2];
              uVar50 = puVar39[1];
              uVar49 = *puVar39;
              lVar45 = lVar45 + -0x20;
              puVar39 = puVar39 + 4;
              puVar38[-1] = *puVar16;
              puVar38[-2] = uVar48;
              puVar38[1] = uVar50;
              *puVar38 = uVar49;
              puVar38 = puVar38 + 4;
            } while (lVar45 != 0);
            if (uVar44 == 0) goto LAB_01180884;
          }
        }
        do {
          puVar22 = puVar22 + 1;
          uVar19 = uVar19 - 1;
          puVar37[1] = *puVar22;
          puVar37 = puVar37 + 1;
        } while (uVar19 != 0);
        goto LAB_01180884;
      }
    }
  }
  for (; 2 < uVar44; uVar44 = uVar44 - 3) {
    puVar21[1] = puVar22[1];
    puVar21[2] = puVar22[2];
    puVar22 = puVar22 + 3;
    puVar21[3] = *puVar22;
    puVar21 = puVar21 + 3;
  }
  puVar37 = puVar21;
  if (uVar44 != 0) {
    puVar21[1] = puVar22[1];
    puVar37 = puVar21 + 1;
    if (uVar44 != 1) {
      puVar21[2] = puVar22[2];
      puVar37 = puVar21 + 2;
    }
  }
joined_r0x01180944:
  puVar41 = puVar37;
  if ((puVar5 <= puVar41) || (pbVar4 <= pbVar28)) goto LAB_01180974;
  goto LAB_01180254;
}

