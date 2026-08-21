
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_011321ec(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 **ppuVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  undefined1 *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  byte *pbVar29;
  long lVar30;
  uint uVar31;
  uint *local_90;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long local_68;
  
  lVar30 = *(long *)(param_1 + 0x350);
  lVar16 = *(long *)(lVar30 + 8);
  lVar17 = 0;
  if (lVar16 != 0) {
    lVar17 = param_3 / lVar16;
  }
  if (param_3 != lVar17 * lVar16) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax4Decode","Fractional scanlines cannot be read"
                );
    return 0xffffffff;
  }
  uVar31 = *(uint *)(lVar30 + 0x48);
  uVar27 = *(uint *)(lVar30 + 0x4c);
  iVar24 = *(int *)(lVar30 + 0x50);
  pbVar28 = *(byte **)(param_1 + 0x388);
  lVar17 = *(long *)(param_1 + 0x390);
  local_70 = param_1;
  pbVar29 = pbVar28;
  if (0 < param_3) {
    pbVar28 = pbVar28 + lVar17;
    uVar3 = *(uint *)(lVar30 + 0x10);
    lVar17 = *(long *)(lVar30 + 0x40);
    local_78 = (undefined4 *)(param_1 + 0x284);
    local_80 = (undefined4 *)(param_1 + 0x2ac);
    puVar13 = *(uint **)(lVar30 + 0x68);
    puVar11 = *(uint **)(lVar30 + 0x70);
LAB_01132390:
    iVar10 = (int)puVar11;
    local_90 = puVar11;
    if (0 < (int)uVar3) {
      uVar20 = *puVar13;
      iVar21 = 0;
      uVar15 = 0;
      puVar13 = puVar13 + 1;
LAB_011323d0:
      puVar14 = local_90;
      local_68 = param_2;
      if (local_90 == puVar11) {
        uVar25 = 0;
        do {
          puVar14 = puVar11;
          if ((int)uVar27 < 7) {
            if (pbVar29 < pbVar28) {
              uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
              uVar27 = uVar27 + 8;
              pbVar29 = pbVar29 + 1;
            }
            else {
              if (uVar27 == 0) goto LAB_01132da8;
              uVar27 = 7;
            }
          }
          uVar22 = (ulong)(uVar31 & 0x7f);
          uVar27 = uVar27 - (byte)TIFFFaxMainTable[uVar22 * 8 + 1];
          uVar31 = uVar31 >> (ulong)((byte)TIFFFaxMainTable[uVar22 * 8 + 1] & 0x1f);
          puVar18 = puVar13;
          switch(TIFFFaxMainTable[uVar22 * 8]) {
          case 1:
            uVar15 = *puVar13 + uVar20;
            uVar25 = iVar21 + uVar25 + uVar15;
            uVar20 = uVar15 + puVar13[1];
            iVar21 = -uVar15;
            puVar13 = puVar13 + 2;
            if ((int)uVar3 <= (int)uVar15) goto LAB_011329d8;
            break;
          case 2:
            goto switchD_01132438_caseD_2;
          case 3:
            goto switchD_01132438_caseD_3;
          case 4:
            goto switchD_01132438_caseD_4;
          case 5:
            goto switchD_01132438_caseD_5;
          case 6:
            puVar13 = puVar11;
            goto LAB_01132aa0;
          default:
            pbVar19 = pbVar29;
            local_90 = puVar11;
                    /* catch() { ... } // from try @ 01132b08 with catch @ 01132b18 */
            goto LAB_01132a00;
          case 0xc:
            goto switchD_01132438_caseD_c;
          }
        } while( true );
      }
      uVar25 = 0;
LAB_011323dc:
      if ((int)uVar27 < 7) {
        if (pbVar29 < pbVar28) {
          uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
          uVar27 = uVar27 + 8;
          pbVar29 = pbVar29 + 1;
        }
        else {
          if (uVar27 == 0) goto LAB_01132da8;
          uVar27 = 7;
        }
      }
      uVar22 = (ulong)(uVar31 & 0x7f);
      uVar27 = uVar27 - (byte)TIFFFaxMainTable[uVar22 * 8 + 1];
      uVar31 = uVar31 >> (ulong)((byte)TIFFFaxMainTable[uVar22 * 8 + 1] & 0x1f);
      puVar18 = puVar13;
      switch(TIFFFaxMainTable[uVar22 * 8]) {
      case 1:
        goto switchD_01132438_caseD_1;
      case 2:
        goto switchD_01132438_caseD_2;
      case 3:
        goto switchD_01132438_caseD_3;
      case 4:
        goto switchD_01132438_caseD_4;
      case 5:
        goto switchD_01132438_caseD_5;
      case 6:
        puVar13 = local_90;
                    /* try { // try from 01132a80 to 01232a8b has its CatchHandler @ 01132aa8 */
LAB_01132aa0:
        local_90 = puVar13 + 1;
        *puVar13 = uVar3 - uVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132a80 with catch @ 01132aa8
                        */
        uVar5 = *(undefined4 *)(lVar30 + 0x90);
        uVar20 = *(uint *)(local_70 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132a40 with catch @ 01132abc
                       catch(type#1 @ 00000000) { ... } // from try @ 01132a64 with catch @ 01132abc
                        */
        uVar9 = *(undefined8 *)(local_70 + 0x3b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132584 with catch @ 01132ac0
                        */
                    /* try { // try from 01132ad0 to 01232ad3 has its CatchHandler @ 01132ad4 */
        pcVar12 = "Uncompressed data (not supported) at line %u of %s %u (x %u)";
        goto LAB_01132ad4;
      default:
        goto switchD_01132438_caseD_7;
      case 0xc:
        goto switchD_01132438_caseD_c;
      }
    }
    uVar15 = 0;
    bVar8 = uVar3 == 0;
    if (uVar3 != 0) goto LAB_01132be0;
    goto joined_r0x01132d08;
  }
LAB_01132f28:
  *(uint *)(lVar30 + 0x48) = uVar31;
  *(uint *)(lVar30 + 0x4c) = uVar27;
  *(int *)(lVar30 + 0x50) = iVar24;
  *(byte **)(local_70 + 0x388) = pbVar29;
  *(byte **)(local_70 + 0x390) = pbVar28 + (lVar17 - (long)pbVar29);
                    /* try { // try from 01132fb8 to 01232fbb has its CatchHandler @ 01133040 */
  return 1;
switchD_01132438_caseD_c:
  local_90 = puVar14 + 1;
  *puVar14 = uVar3 - uVar15;
  if ((int)uVar27 < 4) {
    if (pbVar29 < pbVar28) {
      uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
      uVar27 = uVar27 + 8;
      pbVar29 = pbVar29 + 1;
    }
    else {
      puVar14 = local_90;
      if (uVar27 == 0) goto LAB_01132da8;
      uVar27 = 4;
    }
  }
  if ((uVar31 & 0xf) != 0) {
    bVar8 = (*(uint *)(local_70 + 0x10) & 0x400) == 0;
    ppuVar7 = &local_80;
    if (bVar8) {
      ppuVar7 = &local_78;
    }
    pcVar12 = "tile";
    if (bVar8) {
      pcVar12 = "strip";
    }
    TIFFErrorExt(*(undefined8 *)(local_70 + 0x3b8),"Fax4Decode",
                 "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(lVar30 + 0x90),pcVar12,
                 **ppuVar7,uVar15);
  }
  uVar27 = uVar27 - 4;
  uVar31 = uVar31 >> 4;
  iVar24 = 1;
  goto joined_r0x01132bc8;
switchD_01132438_caseD_5:
  if (local_90 != puVar11) {
    while (((int)uVar20 <= (int)uVar15 && ((int)uVar20 < (int)uVar3))) {
      uVar20 = *puVar13 + uVar20 + puVar13[1];
      puVar13 = puVar13 + 2;
    }
  }
  iVar21 = *(int *)(TIFFFaxMainTable + uVar22 * 8 + 4) + uVar15;
  if (((int)uVar20 <= iVar21) && (local_90 != puVar11 || (int)uVar20 < iVar21)) {
    bVar8 = (*(uint *)(local_70 + 0x10) & 0x400) == 0;
    ppuVar7 = &local_80;
    if (bVar8) {
      ppuVar7 = &local_78;
    }
    pcVar12 = "tile";
    if (bVar8) {
      pcVar12 = "strip";
    }
    TIFFErrorExt(*(undefined8 *)(local_70 + 0x3b8),"Fax4Decode",
                 "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(lVar30 + 0x90),pcVar12,
                 **ppuVar7,uVar15);
    goto joined_r0x01132bc8;
  }
  iVar21 = (uVar20 - uVar15) - *(int *)(TIFFFaxMainTable + uVar22 * 8 + 4);
  *local_90 = iVar21 + uVar25;
  puVar18 = puVar13 + -1;
  pbVar19 = pbVar29;
  uVar25 = uVar20 - *puVar18;
  uVar15 = iVar21 + uVar15;
  goto LAB_011329c0;
switchD_01132438_caseD_4:
  if (local_90 != puVar11) {
    while (((int)uVar20 <= (int)uVar15 && ((int)uVar20 < (int)uVar3))) {
      uVar20 = *puVar13 + uVar20 + puVar13[1];
      puVar13 = puVar13 + 2;
    }
  }
  iVar4 = *(int *)(TIFFFaxMainTable + uVar22 * 8 + 4);
  *local_90 = iVar21 + uVar25 + uVar20 + iVar4;
  puVar18 = puVar13 + 1;
  pbVar19 = pbVar29;
  uVar25 = *puVar13 + uVar20;
  uVar15 = iVar4 + uVar20;
LAB_011329c0:
  uVar20 = uVar25;
  local_90 = local_90 + 1;
LAB_011329c4:
  iVar21 = -uVar15;
  puVar13 = puVar18;
  pbVar29 = pbVar19;
  if ((int)uVar3 <= (int)uVar15) goto joined_r0x01132a70;
  goto LAB_011323d0;
switchD_01132438_caseD_3:
  if (local_90 != puVar11) {
    while (((int)uVar20 <= (int)uVar15 && ((int)uVar20 < (int)uVar3))) {
      uVar20 = *puVar13 + uVar20 + puVar13[1];
      puVar13 = puVar13 + 2;
    }
  }
  *local_90 = iVar21 + uVar25 + uVar20;
  puVar18 = puVar13 + 1;
  pbVar19 = pbVar29;
  uVar25 = *puVar13 + uVar20;
  uVar15 = uVar20;
  goto LAB_011329c0;
switchD_01132438_caseD_2:
  if (((uint)((int)local_90 - iVar10) >> 2 & 1) == 0) {
    while( true ) {
      pbVar19 = pbVar29;
      uVar26 = uVar27;
      if ((int)uVar27 < 0xc) {
        if (pbVar29 < pbVar28) {
          pbVar19 = pbVar29 + 1;
          uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
          uVar26 = uVar27 + 8;
          if ((int)uVar27 < 4) {
            if (pbVar19 < pbVar28) {
              uVar31 = (uint)*(byte *)(lVar17 + (ulong)pbVar29[1]) << (ulong)(uVar26 & 0x1f) |
                       uVar31;
              pbVar19 = pbVar29 + 2;
              uVar26 = uVar27 + 0x10;
            }
            else {
              uVar26 = 0xc;
            }
          }
        }
        else {
                    /* try { // try from 01132584 to 01232593 has its CatchHandler @ 01132ac0 */
          puVar14 = local_90;
          if (uVar27 == 0) goto LAB_01132da8;
          uVar26 = 0xc;
        }
      }
      uVar22 = (ulong)(uVar31 & 0xfff);
      cVar6 = TIFFFaxWhiteTable[uVar22 * 8];
      uVar27 = uVar26 - (byte)TIFFFaxWhiteTable[uVar22 * 8 + 1];
      uVar31 = uVar31 >> (ulong)((byte)TIFFFaxWhiteTable[uVar22 * 8 + 1] & 0x1f);
      pbVar29 = pbVar19;
      if ((cVar6 != '\t') && (cVar6 != '\v')) break;
      uVar15 = *(int *)(TIFFFaxWhiteTable + uVar22 * 8 + 4) + uVar15;
      uVar25 = *(int *)(TIFFFaxWhiteTable + uVar22 * 8 + 4) + uVar25;
    }
    if (cVar6 == '\a') {
      iVar21 = *(int *)(TIFFFaxWhiteTable + uVar22 * 8 + 4);
      *local_90 = iVar21 + uVar25;
      uVar15 = iVar21 + uVar15;
      uVar25 = 0;
      while( true ) {
        pbVar19 = pbVar29;
        uVar26 = uVar27;
        if ((int)uVar27 < 0xd) {
          if (pbVar29 < pbVar28) {
            pbVar19 = pbVar29 + 1;
            uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
            uVar26 = uVar27 + 8;
            if ((int)uVar27 < 5) {
              if (pbVar19 < pbVar28) {
                uVar31 = (uint)*(byte *)(lVar17 + (ulong)pbVar29[1]) << (ulong)(uVar26 & 0x1f) |
                         uVar31;
                pbVar19 = pbVar29 + 2;
                uVar26 = uVar27 + 0x10;
              }
              else {
                uVar26 = 0xd;
              }
            }
          }
          else {
            if (uVar27 == 0) goto LAB_01133010;
            uVar26 = 0xd;
          }
        }
        uVar22 = (ulong)(uVar31 & 0x1fff);
        uVar27 = uVar26 - (byte)TIFFFaxBlackTable[uVar22 * 8 + 1];
        uVar31 = uVar31 >> (ulong)((byte)TIFFFaxBlackTable[uVar22 * 8 + 1] & 0x1f);
        if (1 < (byte)TIFFFaxBlackTable[uVar22 * 8] - 10) break;
        uVar15 = *(int *)(TIFFFaxBlackTable + uVar22 * 8 + 4) + uVar15;
        uVar25 = *(int *)(TIFFFaxBlackTable + uVar22 * 8 + 4) + uVar25;
        pbVar29 = pbVar19;
      }
      if ((byte)TIFFFaxBlackTable[uVar22 * 8] == 8) {
        puVar23 = TIFFFaxBlackTable + uVar22 * 8;
        goto LAB_01132854;
      }
      goto LAB_0113231c;
    }
  }
  else {
    while( true ) {
      pbVar19 = pbVar29;
      uVar26 = uVar27;
      if ((int)uVar27 < 0xd) {
        if (pbVar29 < pbVar28) {
          pbVar19 = pbVar29 + 1;
          uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
          uVar26 = uVar27 + 8;
          if ((int)uVar27 < 5) {
            if (pbVar19 < pbVar28) {
              uVar31 = (uint)*(byte *)(lVar17 + (ulong)pbVar29[1]) << (ulong)(uVar26 & 0x1f) |
                       uVar31;
              pbVar19 = pbVar29 + 2;
              uVar26 = uVar27 + 0x10;
            }
            else {
              uVar26 = 0xd;
            }
          }
        }
        else {
          puVar14 = local_90;
          if (uVar27 == 0) goto LAB_01132da8;
          uVar26 = 0xd;
        }
      }
      uVar22 = (ulong)(uVar31 & 0x1fff);
      uVar27 = uVar26 - (byte)TIFFFaxBlackTable[uVar22 * 8 + 1];
      uVar31 = uVar31 >> (ulong)((byte)TIFFFaxBlackTable[uVar22 * 8 + 1] & 0x1f);
      pbVar29 = pbVar19;
      if (1 < (byte)TIFFFaxBlackTable[uVar22 * 8] - 10) break;
      uVar15 = *(int *)(TIFFFaxBlackTable + uVar22 * 8 + 4) + uVar15;
      uVar25 = *(int *)(TIFFFaxBlackTable + uVar22 * 8 + 4) + uVar25;
    }
    if ((byte)TIFFFaxBlackTable[uVar22 * 8] == 8) {
      iVar21 = *(int *)(TIFFFaxBlackTable + uVar22 * 8 + 4);
      *local_90 = iVar21 + uVar25;
      uVar15 = iVar21 + uVar15;
      uVar25 = 0;
      while( true ) {
        pbVar19 = pbVar29;
        uVar26 = uVar27;
        if ((int)uVar27 < 0xc) {
          if (pbVar29 < pbVar28) {
            pbVar19 = pbVar29 + 1;
            uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
            uVar26 = uVar27 + 8;
            if ((int)uVar27 < 4) {
              if (pbVar19 < pbVar28) {
                uVar31 = (uint)*(byte *)(lVar17 + (ulong)pbVar29[1]) << (ulong)(uVar26 & 0x1f) |
                         uVar31;
                pbVar19 = pbVar29 + 2;
                uVar26 = uVar27 + 0x10;
              }
              else {
                uVar26 = 0xc;
              }
            }
          }
          else {
            if (uVar27 == 0) goto LAB_01133010;
            uVar26 = 0xc;
          }
        }
        uVar22 = (ulong)(uVar31 & 0xfff);
        cVar6 = TIFFFaxWhiteTable[uVar22 * 8];
        uVar27 = uVar26 - (byte)TIFFFaxWhiteTable[uVar22 * 8 + 1];
        uVar31 = uVar31 >> (ulong)((byte)TIFFFaxWhiteTable[uVar22 * 8 + 1] & 0x1f);
        if ((cVar6 != '\t') && (cVar6 != '\v')) break;
        uVar15 = *(int *)(TIFFFaxWhiteTable + uVar22 * 8 + 4) + uVar15;
        uVar25 = *(int *)(TIFFFaxWhiteTable + uVar22 * 8 + 4) + uVar25;
        pbVar29 = pbVar19;
      }
      if (cVar6 == '\a') {
        puVar23 = TIFFFaxWhiteTable + uVar22 * 8;
LAB_01132854:
        iVar21 = *(int *)(puVar23 + 4);
        puVar13 = local_90 + 2;
        local_90[1] = iVar21 + uVar25;
        uVar15 = iVar21 + uVar15;
        local_90 = puVar11;
        if (puVar13 != puVar11) {
          while ((local_90 = puVar13, (int)uVar20 <= (int)uVar15 && ((int)uVar20 < (int)uVar3))) {
            uVar20 = *puVar18 + uVar20 + puVar18[1];
            puVar18 = puVar18 + 2;
          }
        }
        goto LAB_011329c4;
      }
LAB_0113231c:
      local_90 = local_90 + 1;
    }
  }
  goto LAB_01132a00;
LAB_01133010:
  puVar14 = local_90 + 1;
LAB_01132da8:
  bVar8 = (*(uint *)(local_70 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_80;
  if (bVar8) {
    ppuVar7 = &local_78;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(local_70 + 0x3b8),"Fax4Decode",
                 "Premature EOF at line %u of %s %u (x %u)",*(undefined4 *)(lVar30 + 0x90),pcVar12,
                 **ppuVar7,uVar15);
  puVar13 = puVar14;
  if (uVar25 != 0) {
    puVar13 = puVar14 + 1;
    *puVar14 = uVar25;
  }
  if (uVar15 == uVar3) goto joined_r0x01133008;
  pcVar12 = "Premature EOL";
  if (uVar3 <= uVar15) {
    pcVar12 = "Line length mismatch";
  }
  bVar8 = (*(uint *)(local_70 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_80;
  if (bVar8) {
    ppuVar7 = &local_78;
  }
  pcVar2 = "tile";
  if (bVar8) {
    pcVar2 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(local_70 + 0x3b8),"Fax4Decode",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar12,
                 *(undefined4 *)(lVar30 + 0x90),pcVar2,**ppuVar7,uVar15,uVar3);
  bVar8 = (int)uVar3 < (int)uVar15;
  if (((int)uVar15 <= (int)uVar3) || (puVar13 <= puVar11)) goto joined_r0x01132fcc;
  goto LAB_01132ebc;
switchD_01132438_caseD_1:
  while (((int)uVar20 <= (int)uVar15 && ((int)uVar20 < (int)uVar3))) {
    uVar20 = *puVar18 + uVar20 + puVar18[1];
    puVar18 = puVar18 + 2;
  }
  puVar13 = puVar18 + 2;
  uVar15 = *puVar18 + uVar20;
  uVar25 = iVar21 + uVar25 + uVar15;
  uVar20 = uVar15 + puVar18[1];
  iVar21 = -uVar15;
  if ((int)uVar3 <= (int)uVar15) goto LAB_011329d8;
  goto LAB_011323dc;
LAB_011329d8:
  local_90 = puVar14;
  if (uVar25 == 0) goto joined_r0x01132a70;
  if ((int)uVar3 <= (int)(uVar15 + uVar25)) {
LAB_01132a64:
                    /* try { // try from 01132a64 to 01232a73 has its CatchHandler @ 01132abc */
    *puVar14 = uVar25;
    local_90 = puVar14 + 1;
    goto joined_r0x01132a70;
  }
  if ((int)uVar27 < 1) {
                    /* try { // try from 01132a40 to 01232a4f has its CatchHandler @ 01132abc */
    if (pbVar29 < pbVar28) {
                    /* try { // try from 01132a50 to 01232a63 has its CatchHandler @ 011321e0 */
      uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
      uVar27 = uVar27 + 8;
      pbVar29 = pbVar29 + 1;
    }
    else {
      if (uVar27 == 0) goto LAB_01132da8;
      uVar27 = 1;
    }
  }
                    /* try { // try from 01132a8c to 01232acf has its CatchHandler @ 011321e0 */
  if ((uVar31 & 1) != 0) {
    uVar27 = uVar27 - 1;
    uVar31 = uVar31 >> 1;
    goto LAB_01132a64;
  }
switchD_01132438_caseD_7:
  pbVar19 = pbVar29;
  local_90 = puVar14;
LAB_01132a00:
  uVar5 = *(undefined4 *)(lVar30 + 0x90);
  uVar20 = *(uint *)(local_70 + 0x10);
  uVar9 = *(undefined8 *)(local_70 + 0x3b8);
  pcVar12 = "Bad code word at line %u of %s %u (x %u)";
  pbVar29 = pbVar19;
LAB_01132ad4:
  bVar8 = (uVar20 & 0x400) == 0;
  puVar1 = local_80;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132ad0 with catch @ 01132ad4
                        */
  if (bVar8) {
    puVar1 = local_78;
  }
                    /* try { // try from 01132ad8 to 01232adb has its CatchHandler @ 01132ae4 */
                    /* try { // try from 01132adc to 01232ae7 has its CatchHandler @ 011321e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01132ad8 with catch @ 01132ae4
                        */
                    /* catch() { ... } // from try @ 01132b0c with catch @ 01132ae8 */
  pcVar2 = "tile";
  if (bVar8) {
    pcVar2 = "strip";
  }
  TIFFErrorExt(uVar9,"Fax4Decode",pcVar12,uVar5,pcVar2,*puVar1,uVar15);
joined_r0x01132bc8:
  param_2 = local_68;
  if (uVar25 != 0) {
    *local_90 = uVar25;
    local_90 = local_90 + 1;
                    /* try { // try from 01132b08 to 01232b0b has its CatchHandler @ 01132b18 */
                    /* try { // try from 01132b0c to 01232b2b has its CatchHandler @ 01132ae8 */
  }
joined_r0x01132a70:
  bVar8 = uVar3 <= uVar15;
  local_68 = param_2;
  if (uVar15 != uVar3) {
LAB_01132be0:
    pcVar12 = "Premature EOL";
    if (bVar8) {
      pcVar12 = "Line length mismatch";
    }
    bVar8 = (*(uint *)(local_70 + 0x10) & 0x400) == 0;
    ppuVar7 = &local_80;
    if (bVar8) {
      ppuVar7 = &local_78;
    }
    pcVar2 = "tile";
    if (bVar8) {
      pcVar2 = "strip";
    }
    TIFFWarningExt(*(undefined8 *)(local_70 + 0x3b8),"Fax4Decode",
                   "%s at line %u of %s %u (got %u, expected %u)",pcVar12,
                   *(undefined4 *)(lVar30 + 0x90),pcVar2,**ppuVar7,uVar15,uVar3);
    while (((int)uVar3 < (int)uVar15 && (puVar11 < local_90))) {
      local_90 = local_90 + -1;
      uVar15 = uVar15 - *local_90;
    }
    if ((int)uVar15 < (int)uVar3) {
      puVar13 = local_90;
      if (((uint)((int)local_90 - iVar10) >> 2 & 1) != 0) {
        puVar13 = local_90 + 1;
        *local_90 = 0;
      }
      *puVar13 = uVar3 - (uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
      local_90 = puVar13 + 1;
    }
    else if ((int)uVar3 < (int)uVar15) {
      *local_90 = uVar3;
      local_90[1] = 0;
      local_90 = local_90 + 2;
    }
  }
joined_r0x01132d08:
  if (iVar24 != 0) {
    pbVar19 = pbVar29;
    uVar15 = uVar27;
    local_68 = param_2;
    if ((int)uVar27 < 0xd) goto joined_r0x01133008;
    goto LAB_01132f50;
  }
  (**(code **)(lVar30 + 0x58))(param_2,puVar11,local_90,uVar3);
  *local_90 = 0;
  puVar11 = *(uint **)(lVar30 + 0x68);
  puVar13 = *(uint **)(lVar30 + 0x70);
  param_3 = param_3 - *(long *)(lVar30 + 8);
  iVar24 = 0;
  param_2 = param_2 + *(long *)(lVar30 + 8);
  *(uint **)(lVar30 + 0x68) = puVar13;
  *(uint **)(lVar30 + 0x70) = puVar11;
  *(int *)(lVar30 + 0x90) = *(int *)(lVar30 + 0x90) + 1;
  if (param_3 < 1) goto LAB_01132f18;
  goto LAB_01132390;
LAB_01132f18:
  iVar24 = 0;
  pbVar28 = *(byte **)(local_70 + 0x388);
  lVar17 = *(long *)(local_70 + 0x390);
  goto LAB_01132f28;
  while (puVar11 < puVar13) {
LAB_01132ebc:
    puVar13 = puVar13 + -1;
    uVar15 = uVar15 - *puVar13;
    bVar8 = (int)uVar3 < (int)uVar15;
    if ((int)uVar15 <= (int)uVar3) break;
  }
joined_r0x01132fcc:
  if ((int)uVar15 < (int)uVar3) {
    puVar14 = puVar13;
    if (((uint)((int)puVar13 - iVar10) >> 2 & 1) != 0) {
      puVar14 = puVar13 + 1;
      *puVar13 = 0;
    }
    puVar13 = puVar14 + 1;
    *puVar14 = uVar3 - (uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
  }
  else if (bVar8) {
    local_90 = puVar13 + 2;
    uVar27 = 0;
    *puVar13 = uVar3;
    puVar13[1] = 0;
    goto joined_r0x01133008;
  }
joined_r0x01133008:
  uVar27 = 0;
  local_90 = puVar13;
joined_r0x01133008:
  if (pbVar29 < pbVar28) {
    pbVar19 = (byte *)((long)pbVar29 + 1);
    uVar31 = (uint)*(byte *)(lVar17 + (ulong)*pbVar29) << (ulong)(uVar27 & 0x1f) | uVar31;
    uVar15 = uVar27 + 8;
    if ((int)uVar27 < 5) {
      if (pbVar19 < pbVar28) {
        uVar31 = (uint)*(byte *)(lVar17 + (ulong)*(byte *)((long)pbVar29 + 1)) <<
                 (ulong)(uVar15 & 0x1f) | uVar31;
        pbVar19 = (byte *)((long)pbVar29 + 2);
        uVar15 = uVar27 + 0x10;
      }
      else {
        uVar15 = 0xd;
      }
    }
  }
  else {
    uVar15 = 0;
    pbVar19 = pbVar29;
    if (uVar27 != 0) {
      uVar15 = 0xd;
    }
  }
LAB_01132f50:
  (**(code **)(lVar30 + 0x58))(local_68,puVar11,local_90,uVar3);
  *(uint *)(lVar30 + 0x48) = uVar31 >> 0xd;
  *(uint *)(lVar30 + 0x4c) = uVar15 - 0xd;
  *(int *)(lVar30 + 0x50) = iVar24;
  lVar17 = *(long *)(local_70 + 0x388);
  *(byte **)(local_70 + 0x388) = pbVar19;
  *(long *)(local_70 + 0x390) = (lVar17 - (long)pbVar19) + *(long *)(local_70 + 0x390);
  if (*(int *)(lVar30 + 0x90) == 0) {
    return 0xffffffff;
  }
  return 1;
}

