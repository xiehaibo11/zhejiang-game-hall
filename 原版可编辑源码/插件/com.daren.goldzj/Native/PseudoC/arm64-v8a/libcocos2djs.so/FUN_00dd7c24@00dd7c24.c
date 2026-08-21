
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00dd7c24(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  uint *local_70;
  uint local_64;
  
  lVar15 = *(long *)(param_1 + 0x350);
  lVar7 = *(long *)(lVar15 + 8);
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = param_3 / lVar7;
  }
  if (param_3 != lVar8 * lVar7) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Decode1D",
                 "Fractional scanlines cannot be read");
    return 0xffffffff;
  }
  uVar16 = *(uint *)(lVar15 + 0x48);
  uVar18 = *(uint *)(lVar15 + 0x4c);
  local_9c = *(int *)(lVar15 + 0x50);
  pbVar13 = *(byte **)(param_1 + 0x388);
  lVar8 = *(long *)(param_1 + 0x390);
  local_80 = param_1;
  pbVar10 = pbVar13;
  if (0 < param_3) {
    pbVar13 = pbVar13 + lVar8;
    local_64 = *(uint *)(lVar15 + 0x10);
    lVar8 = *(long *)(lVar15 + 0x40);
    local_70 = *(uint **)(lVar15 + 0x70);
    local_90 = param_1 + 0x284;
    local_98 = param_1 + 0x2ac;
    local_78 = lVar15;
LAB_00dd7d78:
    lVar7 = local_80;
    if (local_9c == 0) {
      while( true ) {
        pbVar9 = pbVar10;
        uVar17 = uVar18;
        if ((int)uVar18 < 0xb) {
          if (pbVar10 < pbVar13) {
            pbVar9 = pbVar10 + 1;
            uVar16 = (uint)*(byte *)(lVar8 + (ulong)*pbVar10) << (ulong)(uVar18 & 0x1f) | uVar16;
            uVar17 = uVar18 + 8;
            if ((int)uVar18 < 3) {
              if (pbVar9 < pbVar13) {
                uVar16 = (uint)*(byte *)(lVar8 + (ulong)pbVar10[1]) << (ulong)(uVar18 + 8 & 0x1f) |
                         uVar16;
                pbVar9 = pbVar10 + 2;
                uVar17 = uVar18 + 0x10;
              }
              else {
                uVar17 = 0xb;
              }
            }
          }
          else {
            if (uVar18 == 0) {
              local_9c = 0;
              goto LAB_00dd82bc;
            }
            uVar17 = 0xb;
          }
        }
        uVar18 = uVar17;
        pbVar10 = pbVar9;
        if ((uVar16 & 0x7ff) == 0) break;
        uVar18 = uVar18 - 1;
        uVar16 = uVar16 >> 1;
      }
    }
    while( true ) {
      uVar17 = uVar16;
      if ((int)uVar18 < 8) {
        if (pbVar10 < pbVar13) {
          uVar17 = (uint)*(byte *)(lVar8 + (ulong)*pbVar10) << (ulong)(uVar18 & 0x1f) | uVar16;
          uVar18 = uVar18 + 8;
          pbVar10 = pbVar10 + 1;
        }
        else {
          pbVar9 = pbVar10;
          if (uVar18 == 0) goto LAB_00dd82bc;
          uVar18 = 8;
        }
      }
      if ((uVar17 & 0xff) != 0) break;
      uVar18 = uVar18 - 8;
      uVar16 = uVar17 >> 8;
    }
    do {
      uVar18 = uVar18 - 1;
      uVar16 = uVar17 >> 1;
      uVar19 = uVar17 & 1;
      uVar17 = uVar16;
    } while (uVar19 == 0);
    uVar17 = 0;
    puVar5 = local_70;
LAB_00dd7eb8:
    uVar14 = 0;
    pbVar9 = pbVar10;
    uVar19 = uVar18;
    puVar6 = puVar5;
    local_88 = param_2;
    if (0xb < (int)uVar18) goto LAB_00dd7f48;
LAB_00dd7ec4:
    if (pbVar9 < pbVar13) {
      pbVar10 = pbVar9 + 1;
      uVar16 = (uint)*(byte *)(lVar8 + (ulong)*pbVar9) << (ulong)(uVar18 & 0x1f) | uVar16;
      uVar19 = uVar18 + 8;
      if ((int)uVar18 < 4) {
        if (pbVar10 < pbVar13) {
          uVar16 = (uint)*(byte *)(lVar8 + (ulong)pbVar9[1]) << (ulong)(uVar19 & 0x1f) | uVar16;
          pbVar10 = pbVar9 + 2;
          uVar19 = uVar18 + 0x10;
        }
        else {
          uVar19 = 0xc;
        }
      }
    }
    else {
      if (uVar18 == 0) goto LAB_00dd8244;
      pbVar10 = pbVar9;
      uVar19 = 0xc;
    }
LAB_00dd7f48:
    uVar11 = (ulong)(uVar16 & 0xfff);
    uVar18 = uVar19 - (byte)TIFFFaxWhiteTable[uVar11 * 8 + 1];
    uVar16 = uVar16 >> (ulong)((byte)TIFFFaxWhiteTable[uVar11 * 8 + 1] & 0x1f);
    pbVar9 = pbVar10;
    switch(TIFFFaxWhiteTable[uVar11 * 8]) {
    case 7:
      uVar19 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar14;
      uVar17 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar17;
      puVar6 = puVar5 + 1;
      *puVar5 = uVar19;
      if ((int)local_64 <= (int)uVar17) goto LAB_00dd7d60;
      uVar14 = 0;
      goto joined_r0x00dd7fa0;
    default:
      bVar4 = (*(uint *)(local_80 + 0x10) & 0x400) == 0;
      plVar3 = &local_98;
      if (bVar4) {
        plVar3 = &local_90;
      }
      pcVar1 = "tile";
      if (bVar4) {
        pcVar1 = "strip";
      }
      TIFFErrorExt(*(undefined8 *)(local_80 + 0x3b8),"Fax3Decode1D",
                   "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(local_78 + 0x90),
                   pcVar1,*(undefined4 *)*plVar3,uVar17);
      local_9c = 0;
      goto joined_r0x00dd80b0;
    case 9:
    case 0xb:
      goto switchD_00dd7f74_caseD_9;
    case 0xc:
      goto LAB_00dd80c8;
    }
  }
LAB_00dd7cdc:
  *(uint *)(lVar15 + 0x48) = uVar16;
  *(uint *)(lVar15 + 0x4c) = uVar18;
  *(int *)(lVar15 + 0x50) = local_9c;
  *(byte **)(local_80 + 0x388) = pbVar10;
  *(byte **)(local_80 + 0x390) = pbVar13 + (lVar8 - (long)pbVar10);
  return 1;
LAB_00dd82bc:
  puVar6 = local_70;
  if (local_64 != 0) {
    bVar4 = (*(uint *)(local_80 + 0x10) & 0x400) == 0;
    plVar3 = &local_98;
    if (bVar4) {
      plVar3 = &local_90;
    }
    pcVar1 = "tile";
    if (bVar4) {
      pcVar1 = "strip";
    }
    TIFFWarningExt(*(undefined8 *)(local_80 + 0x3b8),"Fax3Decode1D",
                   "%s at line %u of %s %u (got %u, expected %u)","Premature EOL",
                   *(undefined4 *)(lVar15 + 0x90),pcVar1,*(undefined4 *)*plVar3,0,local_64);
    *local_70 = local_64;
    puVar6 = local_70 + 1;
    if ((int)local_64 < 1) {
      local_70[1] = 0;
      puVar6 = local_70 + 2;
    }
  }
  goto LAB_00dd8468;
switchD_00dd7f74_caseD_9:
  uVar17 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar17;
  uVar14 = *(int *)(TIFFFaxWhiteTable + uVar11 * 8 + 4) + uVar14;
  uVar19 = uVar18;
  if ((int)uVar18 < 0xc) goto LAB_00dd7ec4;
  goto LAB_00dd7f48;
joined_r0x00dd7fa0:
  pbVar10 = pbVar9;
  uVar12 = uVar18;
  if ((int)uVar18 < 0xd) {
    if (pbVar9 < pbVar13) {
      pbVar10 = pbVar9 + 1;
      uVar16 = (uint)*(byte *)(lVar8 + (ulong)*pbVar9) << (ulong)(uVar18 & 0x1f) | uVar16;
      uVar12 = uVar18 + 8;
      if ((int)uVar18 < 5) {
        if (pbVar10 < pbVar13) {
          uVar16 = (uint)*(byte *)(lVar8 + (ulong)pbVar9[1]) << (ulong)(uVar12 & 0x1f) | uVar16;
          pbVar10 = pbVar9 + 2;
          uVar12 = uVar18 + 0x10;
        }
        else {
          uVar12 = 0xd;
        }
      }
    }
    else {
      if (uVar18 == 0) goto LAB_00dd8244;
      uVar12 = 0xd;
    }
  }
  uVar11 = (ulong)(uVar16 & 0x1fff);
  uVar18 = uVar12 - (byte)TIFFFaxBlackTable[uVar11 * 8 + 1];
  uVar12 = (uint)(byte)TIFFFaxBlackTable[uVar11 * 8];
  uVar16 = uVar16 >> (ulong)((byte)TIFFFaxBlackTable[uVar11 * 8 + 1] & 0x1f);
  if (1 < uVar12 - 10) goto LAB_00dd7e7c;
  uVar17 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar17;
  uVar14 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar14;
  pbVar9 = pbVar10;
  goto joined_r0x00dd7fa0;
LAB_00dd8244:
  bVar4 = (*(uint *)(local_80 + 0x10) & 0x400) == 0;
  plVar3 = &local_98;
  if (bVar4) {
    plVar3 = &local_90;
  }
  pcVar1 = "tile";
  if (bVar4) {
    pcVar1 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(local_80 + 0x3b8),"Fax3Decode1D",
                 "Premature EOF at line %u of %s %u (x %u)",*(undefined4 *)(local_78 + 0x90),pcVar1,
                 *(undefined4 *)*plVar3,uVar17);
  lVar15 = local_78;
  if (uVar14 != 0) {
    *puVar6 = uVar14;
    puVar6 = puVar6 + 1;
  }
  if (uVar17 == local_64) goto LAB_00dd8464;
  pcVar1 = "Premature EOL";
  if (local_64 <= uVar17) {
    pcVar1 = "Line length mismatch";
  }
  bVar4 = (*(uint *)(lVar7 + 0x10) & 0x400) == 0;
  plVar3 = &local_98;
  if (bVar4) {
    plVar3 = &local_90;
  }
  pcVar2 = "tile";
  if (bVar4) {
    pcVar2 = "strip";
  }
  TIFFWarningExt(*(undefined8 *)(lVar7 + 0x3b8),"Fax3Decode1D",
                 "%s at line %u of %s %u (got %u, expected %u)",pcVar1,
                 *(undefined4 *)(local_78 + 0x90),pcVar2,*(undefined4 *)*plVar3,uVar17,local_64);
  bVar4 = (int)local_64 < (int)uVar17;
  if (((int)uVar17 <= (int)local_64) || (puVar6 <= local_70)) goto joined_r0x00dd8440;
  goto LAB_00dd83e4;
LAB_00dd7e7c:
  if (uVar12 == 0xc) {
LAB_00dd80c8:
    local_9c = 1;
  }
  else {
    if (uVar12 == 8) {
      puVar6 = puVar5 + 2;
      uVar17 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar17;
      uVar14 = *(int *)(TIFFFaxBlackTable + uVar11 * 8 + 4) + uVar14;
      puVar5[1] = uVar14;
      if ((int)local_64 <= (int)uVar17) goto LAB_00dd7d60;
      if (uVar14 != 0 || uVar19 != 0) {
        puVar5 = puVar6;
      }
      goto LAB_00dd7eb8;
    }
    bVar4 = (*(uint *)(local_80 + 0x10) & 0x400) == 0;
    plVar3 = &local_98;
    if (bVar4) {
      plVar3 = &local_90;
    }
    pcVar1 = "tile";
    if (bVar4) {
      pcVar1 = "strip";
    }
    TIFFErrorExt(*(undefined8 *)(local_80 + 0x3b8),"Fax3Decode1D",
                 "Bad code word at line %u of %s %u (x %u)",*(undefined4 *)(local_78 + 0x90),pcVar1,
                 *(undefined4 *)*plVar3,uVar17);
    local_9c = 0;
  }
joined_r0x00dd80b0:
  if (uVar14 != 0) {
    *puVar6 = uVar14;
    puVar6 = puVar6 + 1;
  }
  bVar4 = local_64 <= uVar17;
  lVar15 = local_78;
  if (uVar17 == local_64) goto LAB_00dd81e0;
  goto LAB_00dd80ec;
LAB_00dd7d60:
  local_9c = 0;
  bVar4 = local_64 <= uVar17;
  lVar15 = local_78;
  if (uVar17 != local_64) {
LAB_00dd80ec:
    lVar15 = local_78;
    pcVar1 = "Premature EOL";
    if (bVar4) {
      pcVar1 = "Line length mismatch";
    }
    bVar4 = (*(uint *)(local_80 + 0x10) & 0x400) == 0;
    plVar3 = &local_98;
    if (bVar4) {
      plVar3 = &local_90;
    }
    pcVar2 = "tile";
    if (bVar4) {
      pcVar2 = "strip";
    }
    TIFFWarningExt(*(undefined8 *)(local_80 + 0x3b8),"Fax3Decode1D",
                   "%s at line %u of %s %u (got %u, expected %u)",pcVar1,
                   *(undefined4 *)(local_78 + 0x90),pcVar2,*(undefined4 *)*plVar3,uVar17,local_64);
    puVar5 = puVar6;
    while (((int)local_64 < (int)uVar17 && (local_70 < puVar5))) {
      puVar5 = puVar5 + -1;
      uVar17 = uVar17 - *puVar5;
    }
    if ((int)uVar17 < (int)local_64) {
      puVar6 = puVar5;
      if (((uint)((int)puVar5 - (int)local_70) >> 2 & 1) != 0) {
        puVar6 = puVar5 + 1;
        *puVar5 = 0;
      }
      *puVar6 = local_64 - (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
      puVar6 = puVar6 + 1;
    }
    else {
      puVar6 = puVar5;
      if ((int)local_64 < (int)uVar17) {
        puVar6 = puVar5 + 2;
        *puVar5 = local_64;
        puVar5[1] = 0;
      }
    }
  }
LAB_00dd81e0:
  param_2 = local_88;
  (**(code **)(lVar15 + 0x58))(local_88,local_70,puVar6,local_64);
  param_2 = param_2 + *(long *)(lVar15 + 8);
  param_3 = param_3 - *(long *)(lVar15 + 8);
  *(int *)(lVar15 + 0x90) = *(int *)(lVar15 + 0x90) + 1;
  if (param_3 < 1) goto code_r0x00dd8230;
  goto LAB_00dd7d78;
code_r0x00dd8230:
  pbVar13 = *(byte **)(local_80 + 0x388);
  lVar8 = *(long *)(local_80 + 0x390);
  goto LAB_00dd7cdc;
  while (local_70 < puVar6) {
LAB_00dd83e4:
    puVar6 = puVar6 + -1;
    uVar17 = uVar17 - *puVar6;
    bVar4 = (int)local_64 < (int)uVar17;
    if ((int)uVar17 <= (int)local_64) break;
  }
joined_r0x00dd8440:
  param_2 = local_88;
  if ((int)uVar17 < (int)local_64) {
    puVar5 = puVar6;
    if (((uint)((int)puVar6 - (int)local_70) >> 2 & 1) != 0) {
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
    }
    local_9c = 0;
    *puVar5 = local_64 - (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    puVar6 = puVar5 + 1;
  }
  else if (bVar4) {
    *puVar6 = local_64;
    puVar6[1] = 0;
    local_9c = 0;
    puVar6 = puVar6 + 2;
  }
  else {
LAB_00dd8464:
    local_9c = 0;
    param_2 = local_88;
  }
LAB_00dd8468:
  (**(code **)(lVar15 + 0x58))(param_2,local_70,puVar6,local_64);
  *(uint *)(lVar15 + 0x48) = uVar16;
  *(undefined4 *)(lVar15 + 0x4c) = 0;
  *(int *)(lVar15 + 0x50) = local_9c;
  lVar8 = *(long *)(lVar7 + 0x388);
  *(byte **)(lVar7 + 0x388) = pbVar9;
  *(long *)(lVar7 + 0x390) = (lVar8 - (long)pbVar9) + *(long *)(lVar7 + 0x390);
  return 0xffffffff;
}

