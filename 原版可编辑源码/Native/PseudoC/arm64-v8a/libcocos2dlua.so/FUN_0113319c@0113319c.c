
undefined8 FUN_0113319c(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 **ppuVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_a8;
  undefined4 *local_90;
  undefined4 *local_88;
  long local_80;
  long local_78;
  long local_70;
  uint *local_68;
  
  local_70 = *(long *)(param_1 + 0x350);
  lVar8 = *(long *)(local_70 + 8);
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = param_3 / lVar8;
  }
  if (param_3 != lVar9 * lVar8) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3DecodeRLE",
                 "Fractional scanlines cannot be read");
    return 0xffffffff;
  }
  uVar17 = *(uint *)(local_70 + 0x48);
  uVar21 = *(uint *)(local_70 + 0x4c);
  local_a8 = *(undefined4 *)(local_70 + 0x50);
  pbVar14 = *(byte **)(param_1 + 0x388);
  lVar9 = *(long *)(param_1 + 0x390);
  pbVar10 = pbVar14;
  if (0 < param_3) {
    uVar4 = *(uint *)(local_70 + 4);
    uVar5 = *(uint *)(local_70 + 0x10);
    lVar8 = *(long *)(local_70 + 0x40);
    pbVar14 = pbVar14 + lVar9;
    local_68 = *(uint **)(local_70 + 0x70);
    local_88 = (undefined4 *)(param_1 + 0x284);
    local_90 = (undefined4 *)(param_1 + 0x2ac);
LAB_01133290:
    uVar16 = 0;
    puVar19 = local_68;
LAB_011332e0:
    uVar13 = 0;
    pbVar15 = pbVar10;
    uVar22 = uVar21;
    puVar20 = puVar19;
    local_78 = param_2;
    if (0xb < (int)uVar21) goto LAB_01133374;
LAB_011332ec:
    if (pbVar15 < pbVar14) {
      pbVar10 = pbVar15 + 1;
      uVar17 = (uint)*(byte *)(lVar8 + (ulong)*pbVar15) << (ulong)(uVar21 & 0x1f) | uVar17;
      uVar22 = uVar21 + 8;
      if ((int)uVar21 < 4) {
        if (pbVar10 < pbVar14) {
          uVar17 = (uint)*(byte *)(lVar8 + (ulong)pbVar15[1]) << (ulong)(uVar22 & 0x1f) | uVar17;
          pbVar10 = pbVar15 + 2;
          uVar22 = uVar21 + 0x10;
        }
        else {
          uVar22 = 0xc;
        }
      }
    }
    else {
      if (uVar21 == 0) goto LAB_011336b8;
      pbVar10 = pbVar15;
      uVar22 = 0xc;
    }
LAB_01133374:
    uVar11 = (ulong)(uVar17 & 0xfff);
    uVar21 = uVar22 - (byte)TIFFFaxWhiteTable[uVar11 * 8 + 1];
    uVar17 = uVar17 >> (ulong)((byte)TIFFFaxWhiteTable[uVar11 * 8 + 1] & 0x1f);
    pbVar15 = pbVar10;
    switch(TIFFFaxWhiteTable[uVar11 * 8]) {
    case 7:
      uVar22 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar13;
      uVar16 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar16;
      puVar20 = puVar19 + 1;
      *puVar19 = uVar22;
      lVar9 = param_3;
      puVar18 = puVar20;
      if ((int)uVar5 <= (int)uVar16) goto joined_r0x01133288;
      uVar13 = 0;
      goto joined_r0x011333cc;
    default:
      goto switchD_011333a0_caseD_8;
    case 9:
    case 0xb:
      goto switchD_011333a0_caseD_9;
    case 0xc:
      goto switchD_011333a0_caseD_c;
    }
  }
  goto LAB_01133260;
switchD_011333a0_caseD_9:
  uVar16 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar16;
  uVar13 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar13;
  uVar22 = uVar21;
  if ((int)uVar21 < 0xc) goto LAB_011332ec;
  goto LAB_01133374;
joined_r0x011333cc:
  pbVar10 = pbVar15;
  uVar12 = uVar21;
  if ((int)uVar21 < 0xd) {
    if (pbVar15 < pbVar14) {
      pbVar10 = pbVar15 + 1;
      uVar17 = (uint)*(byte *)(lVar8 + (ulong)*pbVar15) << (ulong)(uVar21 & 0x1f) | uVar17;
      uVar12 = uVar21 + 8;
      if ((int)uVar21 < 5) {
        if (pbVar10 < pbVar14) {
          uVar17 = (uint)*(byte *)(lVar8 + (ulong)pbVar15[1]) << (ulong)(uVar12 & 0x1f) | uVar17;
          pbVar10 = pbVar15 + 2;
          uVar12 = uVar21 + 0x10;
        }
        else {
          uVar12 = 0xd;
        }
      }
    }
    else {
      if (uVar21 == 0) goto LAB_011336b8;
      uVar12 = 0xd;
    }
  }
  uVar11 = (ulong)(uVar17 & 0x1fff);
  uVar21 = uVar12 - (byte)TIFFFaxBlackTable[uVar11 * 8 + 1];
  uVar12 = (uint)(byte)TIFFFaxBlackTable[uVar11 * 8];
  uVar17 = uVar17 >> (ulong)((byte)TIFFFaxBlackTable[uVar11 * 8 + 1] & 0x1f);
                    /* try { // try from 01133478 to 012335e7 has its CatchHandler @ 01133478
                       catch() { ... } // from try @ 01133478 with catch @ 01133478
                       catch() { ... } // from try @ 011335f4 with catch @ 01133478 */
  if (1 < uVar12 - 10) goto LAB_011332a0;
  uVar16 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar16;
  uVar13 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar13;
  pbVar15 = pbVar10;
  goto joined_r0x011333cc;
LAB_011336b8:
  bVar7 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
  puVar1 = local_90;
                    /* try { // try from 011336dc to 012336df has its CatchHandler @ 011337c0 */
  if (bVar7) {
    puVar1 = local_88;
  }
  pcVar2 = "tile";
  if (bVar7) {
    pcVar2 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3DecodeRLE",
                 "Premature EOF at line %u of %s %u (x %u)",*(undefined4 *)(local_70 + 0x90),pcVar2,
                 *puVar1,uVar16);
  puVar19 = puVar20;
  if (uVar13 != 0) {
    puVar19 = puVar20 + 1;
    *puVar20 = uVar13;
  }
  puVar20 = puVar19;
                    /* try { // try from 01133714 to 0123371b has its CatchHandler @ 011337c4 */
  if (uVar16 == uVar5) goto LAB_01133810;
  bVar7 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
  ppuVar6 = &local_90;
                    /* try { // try from 0113373c to 01233747 has its CatchHandler @ 011337ac */
  if (bVar7) {
    ppuVar6 = &local_88;
  }
                    /* try { // try from 0113375c to 01233767 has its CatchHandler @ 011337c0 */
  pcVar2 = "tile";
  if (bVar7) {
    pcVar2 = "strip";
  }
                    /* try { // try from 01133768 to 012337df has its CatchHandler @ 01133620 */
  pcVar3 = "Premature EOL";
  if (uVar5 <= uVar16) {
    pcVar3 = "Line length mismatch";
  }
  bVar7 = (int)uVar5 < (int)uVar16;
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3DecodeRLE",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar3,
                 *(undefined4 *)(local_70 + 0x90),pcVar2,**ppuVar6,uVar16,uVar5);
  if ((puVar19 <= local_68) || ((int)uVar16 <= (int)uVar5)) goto LAB_011337d0;
  goto LAB_011337a8;
LAB_011332a0:
  if (uVar12 == 0xc) {
switchD_011333a0_caseD_c:
    local_a8 = 1;
  }
  else {
    if (uVar12 == 8) {
      uVar16 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar16;
      uVar13 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar13;
      puVar19[1] = uVar13;
      lVar9 = param_3;
      puVar18 = puVar19 + 2;
      if ((int)uVar5 <= (int)uVar16) goto joined_r0x01133288;
      if (uVar13 != 0 || uVar22 != 0) {
        puVar19 = puVar19 + 2;
      }
      goto LAB_011332e0;
    }
switchD_011333a0_caseD_8:
    bVar7 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
    ppuVar6 = &local_90;
    if (bVar7) {
      ppuVar6 = &local_88;
    }
    pcVar2 = "tile";
    if (bVar7) {
      pcVar2 = "strip";
    }
    local_80 = param_3;
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3DecodeRLE",
                 "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(local_70 + 0x90),pcVar2,
                 **ppuVar6,uVar16);
    param_3 = local_80;
    param_2 = local_78;
  }
  lVar9 = param_3;
  local_78 = param_2;
  puVar18 = puVar20;
  if (uVar13 != 0) {
    puVar18 = puVar20 + 1;
    *puVar20 = uVar13;
    lVar9 = param_3;
  }
joined_r0x01133288:
  local_80 = lVar9;
  puVar19 = puVar18;
  if (uVar16 != uVar5) {
    bVar7 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
    ppuVar6 = &local_90;
    if (bVar7) {
      ppuVar6 = &local_88;
    }
    pcVar2 = "tile";
    if (bVar7) {
      pcVar2 = "strip";
    }
    pcVar3 = "Premature EOL";
    if (uVar5 <= uVar16) {
      pcVar3 = "Line length mismatch";
    }
    TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3DecodeRLE",
                   "%s at line %u of %s %u (got %u, expected %u)",pcVar3,
                   *(undefined4 *)(local_70 + 0x90),pcVar2,**ppuVar6,uVar16,uVar5);
    for (; (local_68 < puVar18 && ((int)uVar5 < (int)uVar16)); uVar16 = uVar16 - *puVar18) {
      puVar18 = puVar18 + -1;
    }
    if ((int)uVar16 < (int)uVar5) {
      puVar19 = puVar18;
      if (((uint)((int)puVar18 - (int)local_68) >> 2 & 1) != 0) {
        puVar19 = puVar18 + 1;
                    /* try { // try from 011335e8 to 012335f3 has its CatchHandler @ 0113360c */
        *puVar18 = 0;
      }
                    /* try { // try from 011335f4 to 0123361f has its CatchHandler @ 01133478 */
      *puVar19 = uVar5 - (uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
      puVar19 = puVar19 + 1;
    }
    else {
      puVar19 = puVar18;
      if ((int)uVar5 < (int)uVar16) {
        puVar19 = puVar18 + 2;
        *puVar18 = uVar5;
        puVar18[1] = 0;
      }
    }
  }
  param_2 = local_78;
                    /* catch() { ... } // from try @ 011335e8 with catch @ 0113360c */
  (**(code **)(local_70 + 0x58))(local_78,local_68,puVar19,uVar5);
  if ((uVar4 >> 2 & 1) == 0) {
                    /* try { // try from 01133620 to 012336db has its CatchHandler @ 01133620
                       catch() { ... } // from try @ 01133620 with catch @ 01133620
                       catch() { ... } // from try @ 01133768 with catch @ 01133620 */
    if ((uVar4 >> 3 & 1) != 0) {
      uVar16 = uVar21 & 0xfffffff0;
      uVar17 = uVar17 >> (ulong)(uVar21 - uVar16 & 0x1f);
      uVar21 = uVar16;
      if ((uVar16 == 0) && (uVar21 = 0, ((ulong)pbVar10 & 1) != 0)) {
        pbVar10 = pbVar10 + 1;
      }
    }
  }
  else {
    uVar17 = uVar17 >> (ulong)(uVar21 - (uVar21 & 0xfffffff8) & 0x1f);
    uVar21 = uVar21 & 0xfffffff8;
  }
  param_3 = local_80 - *(long *)(local_70 + 8);
  param_2 = param_2 + *(long *)(local_70 + 8);
  *(int *)(local_70 + 0x90) = *(int *)(local_70 + 0x90) + 1;
  if (0 < param_3) goto LAB_01133290;
  pbVar14 = *(byte **)(param_1 + 0x388);
  lVar9 = *(long *)(param_1 + 0x390);
LAB_01133260:
  *(uint *)(local_70 + 0x48) = uVar17;
  *(uint *)(local_70 + 0x4c) = uVar21;
  *(undefined4 *)(local_70 + 0x50) = local_a8;
  *(byte **)(param_1 + 0x388) = pbVar10;
  *(byte **)(param_1 + 0x390) = pbVar14 + (lVar9 - (long)pbVar10);
  return 1;
                    /* catch() { ... } // from try @ 011336dc with catch @ 011337c0
                       catch() { ... } // from try @ 0113375c with catch @ 011337c0 */
                    /* catch() { ... } // from try @ 01133714 with catch @ 011337c4 */
  while ((int)uVar5 < (int)uVar16) {
LAB_011337a8:
    puVar19 = puVar19 + -1;
                    /* catch() { ... } // from try @ 0113373c with catch @ 011337ac */
    uVar16 = uVar16 - *puVar19;
    bVar7 = (int)uVar5 < (int)uVar16;
    if (puVar19 <= local_68) break;
  }
LAB_011337d0:
  if ((int)uVar16 < (int)uVar5) {
    puVar20 = puVar19;
    if (((uint)((int)puVar19 - (int)local_68) >> 2 & 1) != 0) {
      puVar20 = puVar19 + 1;
      *puVar19 = 0;
    }
    *puVar20 = uVar5 - (uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
    puVar20 = puVar20 + 1;
  }
  else {
    puVar20 = puVar19;
    if (bVar7) {
      puVar20 = puVar19 + 2;
      *puVar19 = uVar5;
      puVar19[1] = 0;
    }
  }
LAB_01133810:
  lVar9 = local_70;
  (**(code **)(local_70 + 0x58))(local_78,local_68,puVar20,uVar5);
  *(uint *)(lVar9 + 0x48) = uVar17;
  *(undefined4 *)(lVar9 + 0x4c) = 0;
  *(undefined4 *)(lVar9 + 0x50) = local_a8;
  lVar9 = *(long *)(param_1 + 0x388);
  *(byte **)(param_1 + 0x388) = pbVar15;
  *(long *)(param_1 + 0x390) = (lVar9 - (long)pbVar15) + *(long *)(param_1 + 0x390);
  return 0xffffffff;
}

