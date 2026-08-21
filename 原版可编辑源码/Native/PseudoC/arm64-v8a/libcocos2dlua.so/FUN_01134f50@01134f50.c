
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01134f50(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  ulong uVar6;
  undefined4 **ppuVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  uint *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar29 = *(long *)(param_1 + 0x350);
  lVar15 = *(long *)(lVar29 + 8);
  lVar16 = 0;
  if (lVar15 != 0) {
    lVar16 = param_3 / lVar15;
  }
  if (param_3 != lVar16 * lVar15) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                 "Fractional scanlines cannot be read");
    return 0xffffffff;
  }
  uVar25 = *(uint *)(lVar29 + 0x48);
  uVar30 = *(uint *)(lVar29 + 0x4c);
  iVar28 = *(int *)(lVar29 + 0x50);
  pbVar27 = *(byte **)(param_1 + 0x388);
  lVar16 = *(long *)(param_1 + 0x390);
  pbVar18 = pbVar27;
  if (0 < param_3) {
    pbVar27 = pbVar27 + lVar16;
    uVar3 = *(uint *)(lVar29 + 0x10);
    lVar16 = *(long *)(lVar29 + 0x40);
    local_80 = (undefined4 *)(param_1 + 0x284);
    local_88 = (undefined4 *)(param_1 + 0x2ac);
    puVar11 = *(uint **)(lVar29 + 0x70);
    local_78 = param_1;
    local_68 = param_3;
LAB_01135040:
    if (iVar28 == 0) {
      while( true ) {
        pbVar17 = pbVar18;
        uVar20 = uVar30;
        if ((int)uVar30 < 0xb) {
          if (pbVar18 < pbVar27) {
            pbVar17 = pbVar18 + 1;
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar25;
            uVar20 = uVar30 + 8;
            if ((int)uVar30 < 3) {
              if (pbVar17 < pbVar27) {
                uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar18[1]) << (ulong)(uVar30 + 8 & 0x1f) |
                         uVar25;
                pbVar17 = pbVar18 + 2;
                uVar20 = uVar30 + 0x10;
              }
              else {
                uVar20 = 0xb;
              }
            }
          }
          else {
            uVar20 = uVar25;
            if (uVar30 == 0) goto joined_r0x01135f44;
            uVar20 = 0xb;
          }
        }
        uVar30 = uVar20;
        pbVar18 = pbVar17;
        if ((uVar25 & 0x7ff) == 0) break;
        uVar30 = uVar30 - 1;
        uVar25 = uVar25 >> 1;
      }
    }
    uVar23 = (ulong)uVar25;
    while( true ) {
      if ((int)uVar30 < 8) {
        uVar25 = (uint)uVar23;
        if (pbVar18 < pbVar27) {
          uVar23 = (ulong)((uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) |
                          uVar25);
          uVar30 = uVar30 + 8;
          pbVar18 = pbVar18 + 1;
        }
        else {
          pbVar17 = pbVar18;
          if (uVar30 == 0) goto joined_r0x01135ebc;
          uVar30 = 8;
        }
      }
      if ((uVar23 & 0xff) != 0) break;
      uVar30 = uVar30 - 8;
      uVar23 = uVar23 >> 8;
    }
    do {
      uVar25 = uVar30;
      uVar30 = uVar25 - 1;
      uVar20 = (uint)(uVar23 >> 1);
      uVar6 = uVar23 & 1;
      uVar23 = uVar23 >> 1;
    } while (uVar6 == 0);
    if ((int)uVar25 < 2) {
      if (pbVar18 < pbVar27) {
        uVar20 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar20;
        uVar30 = uVar25 + 7;
        pbVar18 = pbVar18 + 1;
      }
      else {
        if (uVar30 == 0) {
joined_r0x01135f44:
          iVar28 = 0;
          uVar25 = uVar20;
          pbVar17 = pbVar18;
joined_r0x01135ebc:
          puVar14 = puVar11;
          if (uVar3 != 0) {
            bVar8 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
            ppuVar7 = &local_88;
            if (bVar8) {
              ppuVar7 = &local_80;
            }
            pcVar12 = "tile";
            if (bVar8) {
              pcVar12 = "strip";
            }
            TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                           "%s at line %u of %s %u (got %u, expected %u)","Premature EOL",
                           *(undefined4 *)(lVar29 + 0x90),pcVar12,**ppuVar7,0,uVar3);
            *puVar11 = uVar3;
            puVar14 = puVar11 + 1;
            if ((int)uVar3 < 1) {
              puVar11[1] = 0;
              puVar14 = puVar11 + 2;
            }
          }
          goto LAB_01136118;
        }
        uVar30 = 1;
      }
    }
    uVar30 = uVar30 - 1;
    uVar25 = uVar20 >> 1;
    uVar31 = **(uint **)(lVar29 + 0x68);
    iVar10 = (int)puVar11;
    local_70 = param_2;
    if ((uVar20 & 1) != 0) {
      uVar20 = 0;
      puVar14 = puVar11;
LAB_01135200:
      uVar26 = 0;
      pbVar17 = pbVar18;
      uVar31 = uVar30;
      local_90 = puVar14;
      if (0xb < (int)uVar30) goto LAB_01135290;
LAB_0113520c:
      if (pbVar17 < pbVar27) {
        pbVar18 = pbVar17 + 1;
        uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar30 & 0x1f) | uVar25;
        uVar31 = uVar30 + 8;
        if ((int)uVar30 < 4) {
          if (pbVar18 < pbVar27) {
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar31 & 0x1f) | uVar25;
            pbVar18 = pbVar17 + 2;
            uVar31 = uVar30 + 0x10;
          }
          else {
            uVar31 = 0xc;
          }
        }
      }
      else {
        if (uVar30 == 0) goto LAB_01135f64;
        pbVar18 = pbVar17;
        uVar31 = 0xc;
      }
LAB_01135290:
      uVar23 = (ulong)(uVar25 & 0xfff);
      uVar30 = uVar31 - (byte)TIFFFaxWhiteTable[uVar23 * 8 + 1];
      uVar25 = uVar25 >> (ulong)((byte)TIFFFaxWhiteTable[uVar23 * 8 + 1] & 0x1f);
      pbVar17 = pbVar18;
      switch(TIFFFaxWhiteTable[uVar23 * 8]) {
      case 7:
        uVar31 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar26;
        uVar20 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar20;
        local_90 = puVar14 + 1;
        *puVar14 = uVar31;
        if ((int)uVar3 <= (int)uVar20) goto LAB_0113555c;
        uVar26 = 0;
        uVar22 = uVar30;
        if (0xc < (int)uVar30) goto LAB_01135370;
        goto LAB_011352ec;
      default:
        bVar8 = (*(uint *)(local_78 + 0x10) & 0x400) == 0;
        ppuVar7 = &local_88;
        if (bVar8) {
          ppuVar7 = &local_80;
        }
        pcVar12 = "tile";
        if (bVar8) {
          pcVar12 = "strip";
        }
        TIFFErrorExt(*(undefined8 *)(local_78 + 0x3b8),"Fax3Decode2D",
                     "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(lVar29 + 0x90),
                     pcVar12,**ppuVar7,uVar20);
        iVar28 = 0;
        goto joined_r0x011354ec;
      case 9:
      case 0xb:
        goto switchD_011352bc_caseD_9;
      case 0xc:
        iVar28 = 1;
        goto joined_r0x011354ec;
      }
    }
    if ((int)uVar3 < 1) {
      iVar28 = 0;
      uVar20 = 0;
      local_90 = puVar11;
      goto LAB_01135d20;
    }
    iVar21 = 0;
    uVar20 = 0;
    puVar13 = puVar11;
    puVar14 = *(uint **)(lVar29 + 0x68) + 1;
LAB_01135578:
    local_90 = puVar13;
    if (puVar13 == puVar11) {
      uVar26 = 0;
      do {
        if ((int)uVar30 < 7) {
          if (pbVar18 < pbVar27) {
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar25;
            uVar30 = uVar30 + 8;
            pbVar18 = pbVar18 + 1;
          }
          else {
            local_90 = puVar11;
            if (uVar30 == 0) goto LAB_011360b0;
            uVar30 = 7;
          }
        }
        uVar23 = (ulong)(uVar25 & 0x7f);
        uVar30 = uVar30 - (byte)TIFFFaxMainTable[uVar23 * 8 + 1];
        uVar25 = uVar25 >> (ulong)((byte)TIFFFaxMainTable[uVar23 * 8 + 1] & 0x1f);
        switch(TIFFFaxMainTable[uVar23 * 8]) {
        case 1:
          uVar20 = *puVar14 + uVar31;
          uVar26 = iVar21 + uVar26 + uVar20;
          uVar31 = uVar20 + puVar14[1];
          iVar21 = -uVar20;
          local_90 = puVar11;
          puVar14 = puVar14 + 2;
          if ((int)uVar3 <= (int)uVar20) goto LAB_01135b60;
          break;
        case 2:
          goto switchD_0113568c_caseD_2;
        case 3:
          goto switchD_011355e0_caseD_3;
        case 4:
          goto switchD_011355e0_caseD_4;
        case 5:
          goto switchD_011355e0_caseD_5;
        case 6:
          puVar13 = puVar11;
          goto LAB_01135bfc;
        default:
          local_90 = puVar11;
          goto LAB_01135bcc;
        case 0xc:
          puVar13 = puVar11;
          goto switchD_011355e0_caseD_c;
        }
      } while( true );
    }
    uVar26 = 0;
LAB_01135584:
    if ((int)uVar30 < 7) {
      if (pbVar18 < pbVar27) {
        uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar25;
        uVar30 = uVar30 + 8;
        pbVar18 = pbVar18 + 1;
      }
      else {
        if (uVar30 == 0) goto LAB_011360b0;
        uVar30 = 7;
      }
    }
    uVar23 = (ulong)(uVar25 & 0x7f);
    uVar30 = uVar30 - (byte)TIFFFaxMainTable[uVar23 * 8 + 1];
    uVar25 = uVar25 >> (ulong)((byte)TIFFFaxMainTable[uVar23 * 8 + 1] & 0x1f);
    puVar19 = puVar14;
    pbVar17 = pbVar18;
    switch(TIFFFaxMainTable[uVar23 * 8]) {
    case 1:
      goto switchD_011355e0_caseD_1;
    case 2:
      goto switchD_011355e0_caseD_2;
    case 3:
      goto switchD_011355e0_caseD_3;
    case 4:
      goto switchD_011355e0_caseD_4;
    case 5:
      goto switchD_011355e0_caseD_5;
    case 6:
LAB_01135bfc:
      local_90 = puVar13 + 1;
      *puVar13 = uVar3 - uVar20;
      uVar31 = *(uint *)(param_1 + 0x10);
      uVar4 = *(undefined4 *)(lVar29 + 0x90);
      uVar9 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar12 = "Uncompressed data (not supported) at line %u of %s %u (x %u)";
      goto LAB_01135c2c;
    default:
      goto switchD_011355e0_caseD_7;
    case 0xc:
      goto switchD_011355e0_caseD_c;
    }
  }
LAB_01135018:
  *(uint *)(lVar29 + 0x48) = uVar25;
  *(uint *)(lVar29 + 0x4c) = uVar30;
  *(int *)(lVar29 + 0x50) = iVar28;
  *(byte **)(param_1 + 0x388) = pbVar18;
  *(byte **)(param_1 + 0x390) = pbVar27 + (lVar16 - (long)pbVar18);
  return 1;
switchD_011352bc_caseD_9:
  uVar20 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar20;
  uVar26 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar26;
  uVar31 = uVar30;
  if ((int)uVar30 < 0xc) goto LAB_0113520c;
  goto LAB_01135290;
LAB_011352ec:
  if (pbVar17 < pbVar27) {
    pbVar18 = pbVar17 + 1;
    uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar22 & 0x1f) | uVar25;
    uVar30 = uVar22 + 8;
    if ((int)uVar22 < 5) {
      if (pbVar18 < pbVar27) {
        uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar30 & 0x1f) | uVar25;
        pbVar18 = pbVar17 + 2;
        uVar30 = uVar22 + 0x10;
      }
      else {
        uVar30 = 0xd;
      }
    }
  }
  else {
    if (uVar22 == 0) goto LAB_01135f64;
    uVar30 = 0xd;
    pbVar18 = pbVar17;
  }
LAB_01135370:
  while( true ) {
    uVar23 = (ulong)(uVar25 & 0x1fff);
    uVar30 = uVar30 - (byte)TIFFFaxBlackTable[uVar23 * 8 + 1];
    uVar22 = (uint)(byte)TIFFFaxBlackTable[uVar23 * 8];
    uVar25 = uVar25 >> (ulong)((byte)TIFFFaxBlackTable[uVar23 * 8 + 1] & 0x1f);
    if (1 < uVar22 - 10) break;
    uVar20 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar20;
    uVar26 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar26;
    pbVar17 = pbVar18;
    uVar22 = uVar30;
    if ((int)uVar30 < 0xd) goto LAB_011352ec;
  }
  if (uVar22 == 0xc) {
    iVar28 = 1;
    goto joined_r0x011354ec;
  }
  if (uVar22 == 8) {
    local_90 = puVar14 + 2;
    uVar20 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar20;
    uVar26 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar26;
    puVar14[1] = uVar26;
    if ((int)uVar3 <= (int)uVar20) goto LAB_0113555c;
    if (uVar26 != 0 || uVar31 != 0) {
      puVar14 = local_90;
    }
    goto LAB_01135200;
  }
  bVar8 = (*(uint *)(local_78 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  TIFFErrorExt(*(undefined8 *)(local_78 + 0x3b8),"Fax3Decode2D",
               "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(lVar29 + 0x90),pcVar12,
               **ppuVar7,uVar20);
  iVar28 = 0;
joined_r0x011354ec:
  if (uVar26 != 0) {
    *local_90 = uVar26;
    local_90 = local_90 + 1;
  }
  puVar14 = local_90;
  param_1 = local_78;
  if (uVar20 != uVar3) goto LAB_0113541c;
  goto LAB_01135e38;
LAB_01135f64:
  bVar8 = (*(uint *)(local_78 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(local_78 + 0x3b8),"Fax3Decode2D",
                 "Premature EOF at line %u of %s %u (x %u)",*(undefined4 *)(lVar29 + 0x90),pcVar12,
                 **ppuVar7,uVar20);
  param_1 = local_78;
  puVar14 = local_90;
  if (uVar26 != 0) {
    puVar14 = local_90 + 1;
    *local_90 = uVar26;
  }
  if (uVar20 == uVar3) goto LAB_0113610c;
  bVar8 = (*(uint *)(local_78 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  pcVar2 = "Premature EOL";
  if (uVar3 <= uVar20) {
    pcVar2 = "Line length mismatch";
  }
  bVar8 = (int)uVar3 < (int)uVar20;
  TIFFWarningExt(*(undefined8 *)(local_78 + 0x3b8),"Fax3Decode2D",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar2,
                 *(undefined4 *)(lVar29 + 0x90),pcVar12,**ppuVar7,uVar20,uVar3);
  param_2 = local_70;
  if ((puVar14 <= puVar11) || ((int)uVar20 <= (int)uVar3)) goto joined_r0x01136080;
  goto LAB_01136054;
  while ((int)uVar3 < (int)uVar20) {
LAB_01136054:
    puVar14 = puVar14 + -1;
    uVar20 = uVar20 - *puVar14;
    bVar8 = (int)uVar3 < (int)uVar20;
    if (puVar14 <= puVar11) break;
  }
  goto joined_r0x01136080;
LAB_0113555c:
  iVar28 = 0;
  puVar14 = local_90;
  param_1 = local_78;
  if (uVar20 == uVar3) goto LAB_01135e38;
LAB_0113541c:
  bVar8 = (*(uint *)(local_78 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  pcVar2 = "Premature EOL";
  if (uVar3 <= uVar20) {
    pcVar2 = "Line length mismatch";
  }
  bVar8 = (int)uVar3 < (int)uVar20;
  TIFFWarningExt(*(undefined8 *)(local_78 + 0x3b8),"Fax3Decode2D",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar2,
                 *(undefined4 *)(lVar29 + 0x90),pcVar12,**ppuVar7,uVar20,uVar3);
  param_1 = local_78;
  if ((puVar11 < local_90) && ((int)uVar3 < (int)uVar20)) {
    puVar14 = local_90 + -1;
    do {
      local_90 = puVar14 + -1;
      uVar20 = uVar20 - *puVar14;
      bVar8 = (int)uVar3 < (int)uVar20;
      if (puVar14 <= puVar11) break;
      puVar14 = local_90;
    } while ((int)uVar3 < (int)uVar20);
    goto LAB_01135de8;
  }
  goto joined_r0x01135df0;
switchD_0113568c_caseD_2:
  puVar19 = puVar14;
  pbVar17 = pbVar18;
switchD_011355e0_caseD_2:
  if (((uint)((int)puVar13 - iVar10) >> 2 & 1) == 0) {
    while( true ) {
      pbVar18 = pbVar17;
      uVar22 = uVar30;
      if ((int)uVar30 < 0xc) {
        if (pbVar17 < pbVar27) {
          pbVar18 = pbVar17 + 1;
          uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar30 & 0x1f) | uVar25;
          uVar22 = uVar30 + 8;
          if ((int)uVar30 < 4) {
            if (pbVar18 < pbVar27) {
              uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar22 & 0x1f) |
                       uVar25;
              pbVar18 = pbVar17 + 2;
              uVar22 = uVar30 + 0x10;
            }
            else {
              uVar22 = 0xc;
            }
          }
        }
        else {
          local_90 = puVar13;
          if (uVar30 == 0) goto LAB_011360b0;
          uVar22 = 0xc;
        }
      }
      uVar23 = (ulong)(uVar25 & 0xfff);
      cVar5 = TIFFFaxWhiteTable[uVar23 * 8];
      uVar30 = uVar22 - (byte)TIFFFaxWhiteTable[uVar23 * 8 + 1];
      uVar25 = uVar25 >> (ulong)((byte)TIFFFaxWhiteTable[uVar23 * 8 + 1] & 0x1f);
      if ((cVar5 != '\t') && (cVar5 != '\v')) break;
      uVar20 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar20;
      uVar26 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar26;
      pbVar17 = pbVar18;
    }
    local_90 = puVar13;
    if (cVar5 == '\a') {
      iVar28 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4);
      *puVar13 = iVar28 + uVar26;
      uVar20 = iVar28 + uVar20;
      uVar26 = 0;
      pbVar17 = pbVar18;
      while( true ) {
        pbVar18 = pbVar17;
        uVar22 = uVar30;
        if ((int)uVar30 < 0xd) {
          if (pbVar17 < pbVar27) {
            pbVar18 = pbVar17 + 1;
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar30 & 0x1f) | uVar25;
            uVar22 = uVar30 + 8;
            if ((int)uVar30 < 5) {
              if (pbVar18 < pbVar27) {
                uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar22 & 0x1f) |
                         uVar25;
                pbVar18 = pbVar17 + 2;
                uVar22 = uVar30 + 0x10;
              }
              else {
                uVar22 = 0xd;
              }
            }
          }
          else {
            if (uVar30 == 0) goto LAB_01136264;
            uVar22 = 0xd;
          }
        }
        uVar23 = (ulong)(uVar25 & 0x1fff);
        uVar30 = uVar22 - (byte)TIFFFaxBlackTable[uVar23 * 8 + 1];
        uVar25 = uVar25 >> (ulong)((byte)TIFFFaxBlackTable[uVar23 * 8 + 1] & 0x1f);
        if (1 < (byte)TIFFFaxBlackTable[uVar23 * 8] - 10) break;
        uVar20 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar20;
        uVar26 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar26;
        pbVar17 = pbVar18;
      }
      if ((byte)TIFFFaxBlackTable[uVar23 * 8] == 8) {
        puVar24 = TIFFFaxBlackTable + uVar23 * 8;
        goto LAB_011359dc;
      }
      goto LAB_01135038;
    }
    goto switchD_011355e0_caseD_7;
  }
  while( true ) {
    pbVar18 = pbVar17;
    uVar22 = uVar30;
    if ((int)uVar30 < 0xd) {
      if (pbVar17 < pbVar27) {
        pbVar18 = pbVar17 + 1;
        uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar30 & 0x1f) | uVar25;
        uVar22 = uVar30 + 8;
        if ((int)uVar30 < 5) {
          if (pbVar18 < pbVar27) {
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar22 & 0x1f) | uVar25;
            pbVar18 = pbVar17 + 2;
            uVar22 = uVar30 + 0x10;
          }
          else {
            uVar22 = 0xd;
          }
        }
      }
      else {
        local_90 = puVar13;
        if (uVar30 == 0) goto LAB_011360b0;
        uVar22 = 0xd;
      }
    }
    uVar23 = (ulong)(uVar25 & 0x1fff);
    uVar30 = uVar22 - (byte)TIFFFaxBlackTable[uVar23 * 8 + 1];
    uVar25 = uVar25 >> (ulong)((byte)TIFFFaxBlackTable[uVar23 * 8 + 1] & 0x1f);
    if (1 < (byte)TIFFFaxBlackTable[uVar23 * 8] - 10) break;
    uVar20 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar20;
    uVar26 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4) + uVar26;
    pbVar17 = pbVar18;
  }
  local_90 = puVar13;
  if ((byte)TIFFFaxBlackTable[uVar23 * 8] != 8) goto switchD_011355e0_caseD_7;
  iVar28 = *(int *)(TIFFFaxBlackTable + uVar23 * 8 + 4);
  *puVar13 = iVar28 + uVar26;
  uVar20 = iVar28 + uVar20;
  uVar26 = 0;
  pbVar17 = pbVar18;
  while( true ) {
    pbVar18 = pbVar17;
    uVar22 = uVar30;
    if ((int)uVar30 < 0xc) {
      if (pbVar17 < pbVar27) {
        pbVar18 = pbVar17 + 1;
        uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar17) << (ulong)(uVar30 & 0x1f) | uVar25;
        uVar22 = uVar30 + 8;
        if ((int)uVar30 < 4) {
          if (pbVar18 < pbVar27) {
            uVar25 = (uint)*(byte *)(lVar16 + (ulong)pbVar17[1]) << (ulong)(uVar22 & 0x1f) | uVar25;
            pbVar18 = pbVar17 + 2;
            uVar22 = uVar30 + 0x10;
          }
          else {
            uVar22 = 0xc;
          }
        }
      }
      else {
        if (uVar30 == 0) goto LAB_01136264;
        uVar22 = 0xc;
      }
    }
    uVar23 = (ulong)(uVar25 & 0xfff);
    cVar5 = TIFFFaxWhiteTable[uVar23 * 8];
    uVar30 = uVar22 - (byte)TIFFFaxWhiteTable[uVar23 * 8 + 1];
    uVar25 = uVar25 >> (ulong)((byte)TIFFFaxWhiteTable[uVar23 * 8 + 1] & 0x1f);
    if ((cVar5 != '\t') && (cVar5 != '\v')) break;
    uVar20 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar20;
    uVar26 = *(int *)(TIFFFaxWhiteTable + uVar23 * 8 + 4) + uVar26;
    pbVar17 = pbVar18;
  }
  if (cVar5 == '\a') {
    puVar24 = TIFFFaxWhiteTable + uVar23 * 8;
LAB_011359dc:
    puVar14 = puVar13 + 2;
    uVar20 = *(int *)(puVar24 + 4) + uVar20;
    puVar13[1] = *(int *)(puVar24 + 4) + uVar26;
    puVar13 = puVar11;
    uVar26 = uVar31;
    if (puVar14 != puVar11) {
      while ((puVar13 = puVar14, uVar26 = uVar31, (int)uVar31 <= (int)uVar20 &&
             ((int)uVar31 < (int)uVar3))) {
        uVar31 = *puVar19 + uVar31 + puVar19[1];
        puVar19 = puVar19 + 2;
      }
    }
    goto LAB_01135b48;
  }
LAB_01135038:
  local_90 = puVar13 + 1;
  goto LAB_01135bcc;
switchD_011355e0_caseD_c:
  local_90 = puVar13 + 1;
  *puVar13 = uVar3 - uVar20;
  if ((int)uVar30 < 4) {
    if (pbVar18 < pbVar27) {
      uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar25;
      uVar30 = uVar30 + 8;
      pbVar18 = pbVar18 + 1;
    }
    else {
      if (uVar30 == 0) goto LAB_011360b0;
      uVar30 = 4;
    }
  }
  if ((uVar25 & 0xf) != 0) {
    bVar8 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
    ppuVar7 = &local_88;
    if (bVar8) {
      ppuVar7 = &local_80;
    }
    pcVar12 = "tile";
    if (bVar8) {
      pcVar12 = "strip";
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                 "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(lVar29 + 0x90),pcVar12,
                 **ppuVar7,uVar20);
  }
  uVar30 = uVar30 - 4;
  uVar25 = uVar25 >> 4;
  iVar28 = 1;
  goto joined_r0x01135d14;
switchD_011355e0_caseD_5:
  if (puVar13 != puVar11) {
    while (((int)uVar31 <= (int)uVar20 && ((int)uVar31 < (int)uVar3))) {
      uVar31 = *puVar14 + uVar31 + puVar14[1];
      puVar14 = puVar14 + 2;
    }
  }
  iVar28 = *(int *)(TIFFFaxMainTable + uVar23 * 8 + 4) + uVar20;
  if ((iVar28 < (int)uVar31) || (local_90 = puVar13, puVar13 == puVar11 && iVar28 <= (int)uVar31)) {
    iVar28 = (uVar31 - uVar20) - *(int *)(TIFFFaxMainTable + uVar23 * 8 + 4);
    *puVar13 = iVar28 + uVar26;
    puVar19 = puVar14 + -1;
    puVar13 = puVar13 + 1;
    uVar26 = uVar31 - *puVar19;
    uVar20 = iVar28 + uVar20;
    goto LAB_01135b48;
  }
  goto switchD_011355e0_caseD_7;
switchD_011355e0_caseD_4:
  if (puVar13 != puVar11) {
    while (((int)uVar31 <= (int)uVar20 && ((int)uVar31 < (int)uVar3))) {
      uVar31 = *puVar14 + uVar31 + puVar14[1];
      puVar14 = puVar14 + 2;
    }
  }
  iVar28 = *(int *)(TIFFFaxMainTable + uVar23 * 8 + 4);
  *puVar13 = iVar21 + uVar26 + uVar31 + iVar28;
  puVar19 = puVar14 + 1;
  puVar13 = puVar13 + 1;
  uVar26 = *puVar14 + uVar31;
  uVar20 = iVar28 + uVar31;
  goto LAB_01135b48;
switchD_011355e0_caseD_3:
  if (puVar13 != puVar11) {
    while (((int)uVar31 <= (int)uVar20 && ((int)uVar31 < (int)uVar3))) {
      uVar31 = *puVar14 + uVar31 + puVar14[1];
      puVar14 = puVar14 + 2;
    }
  }
  *puVar13 = iVar21 + uVar26 + uVar31;
  puVar19 = puVar14 + 1;
  puVar13 = puVar13 + 1;
  uVar26 = *puVar14 + uVar31;
  uVar20 = uVar31;
LAB_01135b48:
  uVar31 = uVar26;
  iVar28 = 0;
  iVar21 = -uVar20;
  local_90 = puVar13;
  puVar14 = puVar19;
  if ((int)uVar3 <= (int)uVar20) goto LAB_01135d20;
  goto LAB_01135578;
LAB_01136264:
  local_90 = puVar13 + 1;
  pbVar18 = pbVar17;
LAB_011360b0:
  bVar8 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                 "Premature EOF at line %u of %s %u (x %u)",*(undefined4 *)(lVar29 + 0x90),pcVar12,
                 **ppuVar7,uVar20);
  puVar14 = local_90;
  if (uVar26 != 0) {
    puVar14 = local_90 + 1;
    *local_90 = uVar26;
  }
  pbVar17 = pbVar18;
  if (uVar20 == uVar3) goto LAB_0113610c;
  bVar8 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  pcVar2 = "Premature EOL";
  if (uVar3 <= uVar20) {
    pcVar2 = "Line length mismatch";
  }
  bVar8 = (int)uVar3 < (int)uVar20;
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar2,
                 *(undefined4 *)(lVar29 + 0x90),pcVar12,**ppuVar7,uVar20,uVar3);
  param_2 = local_70;
  if ((puVar14 <= puVar11) || ((int)uVar20 <= (int)uVar3)) goto joined_r0x01136080;
  goto LAB_011361fc;
switchD_011355e0_caseD_1:
  while (((int)uVar31 <= (int)uVar20 && ((int)uVar31 < (int)uVar3))) {
    uVar31 = *puVar19 + uVar31 + puVar19[1];
    puVar19 = puVar19 + 2;
  }
  puVar14 = puVar19 + 2;
  uVar20 = *puVar19 + uVar31;
  uVar26 = iVar21 + uVar26 + uVar20;
  uVar31 = uVar20 + puVar19[1];
  iVar21 = -uVar20;
  if ((int)uVar3 <= (int)uVar20) goto LAB_01135b60;
  goto LAB_01135584;
LAB_01135b60:
  if (uVar26 == 0) {
    iVar28 = 0;
    goto LAB_01135d20;
  }
  if ((int)uVar3 <= (int)(uVar20 + uVar26)) {
LAB_01135ba0:
    iVar28 = 0;
    *local_90 = uVar26;
    local_90 = local_90 + 1;
    goto LAB_01135d20;
  }
  if ((int)uVar30 < 1) {
    if (pbVar18 < pbVar27) {
      uVar25 = (uint)*(byte *)(lVar16 + (ulong)*pbVar18) << (ulong)(uVar30 & 0x1f) | uVar25;
      uVar30 = uVar30 + 8;
      pbVar18 = pbVar18 + 1;
    }
    else {
      if (uVar30 == 0) goto LAB_011360b0;
      uVar30 = 1;
    }
  }
  if ((uVar25 & 1) != 0) {
    uVar30 = uVar30 - 1;
    uVar25 = uVar25 >> 1;
    goto LAB_01135ba0;
  }
switchD_011355e0_caseD_7:
LAB_01135bcc:
  uVar31 = *(uint *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(lVar29 + 0x90);
  uVar9 = *(undefined8 *)(param_1 + 0x3b8);
  pcVar12 = "Bad code word at line %u of %s %u (x %u)";
LAB_01135c2c:
  bVar8 = (uVar31 & 0x400) == 0;
  puVar1 = local_88;
  if (bVar8) {
    puVar1 = local_80;
  }
  pcVar2 = "tile";
  if (bVar8) {
    pcVar2 = "strip";
  }
  TIFFErrorExt(uVar9,"Fax3Decode2D",pcVar12,uVar4,pcVar2,*puVar1,uVar20);
  iVar28 = 0;
joined_r0x01135d14:
  if (uVar26 != 0) {
    *local_90 = uVar26;
    local_90 = local_90 + 1;
  }
  goto LAB_01135d20;
LAB_0113610c:
  iVar28 = 0;
  param_2 = local_70;
  goto LAB_01136118;
LAB_01135d20:
  puVar14 = local_90;
  if (uVar20 == uVar3) goto LAB_01135e38;
  bVar8 = (*(uint *)(param_1 + 0x10) & 0x400) == 0;
  ppuVar7 = &local_88;
  if (bVar8) {
    ppuVar7 = &local_80;
  }
  pcVar12 = "tile";
  if (bVar8) {
    pcVar12 = "strip";
  }
  pcVar2 = "Premature EOL";
  if (uVar3 <= uVar20) {
    pcVar2 = "Line length mismatch";
  }
  bVar8 = (int)uVar3 < (int)uVar20;
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode2D",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar2,
                 *(undefined4 *)(lVar29 + 0x90),pcVar12,**ppuVar7,uVar20,uVar3);
  param_1 = local_78;
  if ((puVar11 < local_90) && ((int)uVar3 < (int)uVar20)) {
    puVar14 = local_90 + -1;
    do {
      local_90 = puVar14 + -1;
      uVar20 = uVar20 - *puVar14;
      bVar8 = (int)uVar3 < (int)uVar20;
      if (puVar14 <= puVar11) break;
      puVar14 = local_90;
    } while ((int)uVar3 < (int)uVar20);
LAB_01135de8:
    local_90 = local_90 + 1;
    param_1 = local_78;
  }
joined_r0x01135df0:
  local_78 = param_1;
  if ((int)uVar20 < (int)uVar3) {
    puVar14 = local_90;
    if (((uint)((int)local_90 - iVar10) >> 2 & 1) != 0) {
      puVar14 = local_90 + 1;
      *local_90 = 0;
    }
    *puVar14 = uVar3 - (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
    puVar14 = puVar14 + 1;
  }
  else {
    puVar14 = local_90;
    if (bVar8) {
      puVar14 = local_90 + 2;
      *local_90 = uVar3;
      local_90[1] = 0;
    }
  }
LAB_01135e38:
  param_2 = local_70;
  (**(code **)(lVar29 + 0x58))(local_70,puVar11,puVar14,uVar3);
  *puVar14 = 0;
  puVar11 = *(uint **)(lVar29 + 0x68);
  *(undefined8 *)(lVar29 + 0x68) = *(undefined8 *)(lVar29 + 0x70);
  *(uint **)(lVar29 + 0x70) = puVar11;
  local_68 = local_68 - *(long *)(lVar29 + 8);
  *(int *)(lVar29 + 0x90) = *(int *)(lVar29 + 0x90) + 1;
  param_2 = param_2 + *(long *)(lVar29 + 8);
  if (local_68 < 1) goto code_r0x01135eac;
  goto LAB_01135040;
code_r0x01135eac:
  pbVar27 = *(byte **)(param_1 + 0x388);
  lVar16 = *(long *)(param_1 + 0x390);
  goto LAB_01135018;
  while ((int)uVar3 < (int)uVar20) {
LAB_011361fc:
    puVar14 = puVar14 + -1;
    uVar20 = uVar20 - *puVar14;
    bVar8 = (int)uVar3 < (int)uVar20;
    if (puVar14 <= puVar11) break;
  }
joined_r0x01136080:
  local_70 = param_2;
  if ((int)uVar20 < (int)uVar3) {
    puVar13 = puVar14;
    if (((uint)((int)puVar14 - iVar10) >> 2 & 1) != 0) {
      puVar13 = puVar14 + 1;
      *puVar14 = 0;
    }
    iVar28 = 0;
    *puVar13 = uVar3 - (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
    puVar14 = puVar13 + 1;
  }
  else if (bVar8) {
    *puVar14 = uVar3;
    puVar14[1] = 0;
    iVar28 = 0;
    puVar14 = puVar14 + 2;
  }
  else {
    iVar28 = 0;
  }
LAB_01136118:
  (**(code **)(lVar29 + 0x58))(param_2,puVar11,puVar14,uVar3);
  *(uint *)(lVar29 + 0x48) = uVar25;
  *(undefined4 *)(lVar29 + 0x4c) = 0;
  *(int *)(lVar29 + 0x50) = iVar28;
  lVar16 = *(long *)(param_1 + 0x388);
  *(byte **)(param_1 + 0x388) = pbVar17;
  *(long *)(param_1 + 0x390) = (lVar16 - (long)pbVar17) + *(long *)(param_1 + 0x390);
  return 0xffffffff;
}

