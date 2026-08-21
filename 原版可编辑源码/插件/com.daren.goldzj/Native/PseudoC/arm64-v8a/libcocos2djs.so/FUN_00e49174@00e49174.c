
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e49174(undefined8 param_1,char *param_2,uint param_3,int param_4,code *param_5)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  char *pcVar17;
  char cVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  char *pcVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined8 uVar26;
  uint local_2c4;
  char *local_2c0;
  char *local_2b8;
  char *pcStack_2b0;
  uint local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  int local_290;
  undefined4 uStack_28c;
  code *local_288;
  code *local_280;
  code *local_250;
  code *local_240;
  code *local_238;
  long *local_230;
  char *local_228;
  long local_220;
  char local_218;
  undefined4 local_210;
  undefined1 auStack_208 [32];
  int local_1e8;
  long local_1e0;
  code *local_1b0;
  int local_1a8;
  undefined8 local_1a0 [5];
  undefined8 local_178;
  code *local_148;
  undefined8 local_140 [3];
  long local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_e8;
  undefined1 auStack_e0 [88];
  code *local_88;
  char *local_80 [2];
  int local_70;
  
  param_2[0x328] = '\0';
  param_2[0x329] = '\0';
  param_2[0x32a] = '\0';
  param_2[0x32b] = '\0';
  param_2[0x32c] = '\0';
  param_2[0x32d] = '\0';
  param_2[0x32e] = '\0';
  param_2[0x32f] = '\0';
  param_2[0] = '\x01';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  lVar8 = FUN_00e19608(*(undefined8 *)(param_2 + 0xb0),"postscript-cmaps",1);
  *(long *)(param_2 + 0x308) = lVar8;
  lVar9 = FUN_00e19584(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"psaux");
  *(long *)(param_2 + 0x310) = lVar9;
  if (lVar9 == 0) {
    return 0xb;
  }
  uVar21 = *(undefined8 *)(param_2 + 0xb8);
  memset(&local_2c0,0,0x240);
  uVar10 = FUN_00e1388c(uVar21,0xc,&local_2c4);
  *(undefined8 *)(param_2 + 0x318) = uVar10;
  uVar5 = local_2c4;
  if (local_2c4 == 0) {
    param_2[800] = '\f';
    param_2[0x321] = '\0';
    param_2[0x322] = '\0';
    param_2[0x323] = '\0';
    param_2[0x324] = '\0';
    param_2[0x325] = '\0';
    param_2[0x326] = '\0';
    param_2[0x327] = '\0';
    plVar19 = *(long **)(param_2 + 0xc0);
    (*(code *)**(undefined8 **)(lVar9 + 8))(&local_2c0,0,0,uVar21);
    local_228 = (char *)0x0;
    local_220 = 0;
    local_218 = '\0';
    local_230 = plVar19;
    uVar5 = FUN_00e1bb5c(plVar19,0);
    local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,uVar5);
    if (uVar5 == 0) {
      uVar5 = FUN_00e1d718(plVar19,0x11);
      local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,uVar5);
      if (uVar5 != 0) goto joined_r0x00e49344;
      iVar6 = memcmp((void *)plVar19[8],"%!PS-TrueTypeFont",0x11);
      if (iVar6 != 0) {
        local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,2);
        FUN_00e1d90c(plVar19);
        uVar5 = 2;
        goto joined_r0x00e49344;
      }
      FUN_00e1d90c(plVar19);
      uVar5 = FUN_00e1bb5c(plVar19,0);
      local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,uVar5);
      if (uVar5 != 0) goto joined_r0x00e49344;
      lVar14 = plVar19[1];
      if (plVar19[5] != 0) {
        local_228 = (char *)FUN_00e1388c(uVar21,lVar14,local_80);
        uVar5 = (uint)local_80[0];
        if ((uint)local_80[0] == 0) {
          uVar5 = FUN_00e1bbd0(plVar19,local_228,lVar14);
          local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,uVar5);
          if (uVar5 == 0) goto LAB_00e49ba0;
        }
        goto joined_r0x00e49344;
      }
      local_228 = (char *)(*plVar19 + plVar19[2]);
      local_218 = '\x01';
      local_220 = lVar14;
      uVar5 = FUN_00e1bc6c(plVar19,lVar14);
      local_80[0] = (char *)CONCAT44(local_80[0]._4_4_,uVar5);
      lVar14 = local_220;
      if (uVar5 != 0) goto joined_r0x00e49344;
LAB_00e49ba0:
      local_220 = lVar14;
      local_2b8 = local_228;
      local_2c4 = 0;
LAB_00e49550:
      pcVar13 = local_228 + local_220;
      local_2a8 = 0;
      local_2c0 = local_228;
      pcStack_2b0 = pcVar13;
      (*local_288)(&local_2c0);
      if (local_2c0 < pcVar13) {
        do {
          if ((local_2c0 + 0x19 < pcVar13) && (*local_2c0 == 'F')) {
            iVar6 = strncmp(local_2c0,"FontDirectory",0xd);
            if (iVar6 == 0) {
              (*local_280)(&local_2c0);
              (*local_288)(&local_2c0);
              pcVar17 = local_2c0;
              while (pcVar23 = pcVar17, local_2c0 < pcVar13) {
                if (((local_2c0 + 5 < pcVar13) && (*local_2c0 == 'k')) &&
                   (iVar6 = strncmp(local_2c0,"known",5), iVar6 == 0)) {
                  (*local_280)(&local_2c0);
                  (*local_250)(&local_2c0,local_80);
                  pcVar23 = local_2c0;
                  if (local_70 != 3) {
                    pcVar23 = pcVar17;
                  }
                  break;
                }
                (*local_280)(&local_2c0);
                uVar5 = local_2a8;
                if (local_2a8 != 0) goto joined_r0x00e49b50;
                (*local_288)(&local_2c0);
              }
            }
            else {
LAB_00e49964:
              (*local_280)(&local_2c0);
joined_r0x00e49770:
              pcVar23 = local_2c0;
              uVar5 = local_2a8;
              if (local_2a8 != 0) goto joined_r0x00e49b50;
            }
          }
          else {
            if ((pcVar13 <= local_2c0 + 2) || (*local_2c0 != '/')) goto LAB_00e49964;
            pcVar17 = local_2c0 + 1;
            local_2c0 = pcVar17;
            (*local_280)(&local_2c0);
            uVar5 = local_2a8;
            if (local_2a8 != 0) goto joined_r0x00e49b50;
            pcVar23 = local_2c0;
            if ((local_2c0 < pcVar13) && ((int)((long)local_2c0 - (long)pcVar17) - 1U < 0x15)) {
              uVar16 = (long)local_2c0 - (long)pcVar17 & 0xffffffff;
              uVar12 = 0xfffffffffffffff1;
              ppuVar24 = &PTR_s_version_0194a117_0x11_01c950f8;
              do {
                pcVar23 = *ppuVar24;
                if ((((pcVar23 != (char *)0x0) && (*pcVar17 == *pcVar23)) &&
                    (sVar11 = strlen(pcVar23), uVar16 == sVar11)) &&
                   (iVar6 = memcmp(pcVar17,pcVar23,uVar16), iVar6 == 0)) {
                  if (uVar12 < 4) {
                    (*(code *)ppuVar24[2])(param_2,&local_2c0);
                  }
                  else {
                    local_80[0] = param_2 + 0x130;
                    if ((*(int *)(ppuVar24 + 1) != 2) &&
                       (local_80[0] = param_2 + 0x2d8, *(int *)(ppuVar24 + 1) != 5)) {
                      local_80[0] = param_2 + 0xf8;
                    }
                    pcVar15 = local_238;
                    if (1 < *(int *)((long)ppuVar24 + 0xc) - 9U) {
                      pcVar15 = local_240;
                    }
                    local_2a8 = (*pcVar15)(&local_2c0,ppuVar24,local_80,0,0);
                  }
                  goto joined_r0x00e49770;
                }
                uVar1 = uVar12 + 0x10;
                uVar12 = uVar12 + 1;
                ppuVar24 = ppuVar24 + 6;
                pcVar23 = local_2c0;
              } while (uVar1 < 0x14);
            }
          }
          local_2c0 = pcVar23;
          (*local_288)(&local_2c0);
        } while (local_2c0 < pcVar13);
      }
      local_2c4 = local_2a8;
      uVar5 = local_2a8;
      if (local_2a8 == 0) {
        if (param_2[0x2a1] == '*') {
          *(int *)(param_2 + 0x280) = local_1a8;
          if (local_128 == 0) {
            local_2c4 = 3;
          }
          local_128 = 0;
          *(undefined8 *)(param_2 + 0x250) = local_140[0];
          *(undefined8 *)(param_2 + 0x298) = uStack_110;
          *(undefined8 *)(param_2 + 0x290) = local_118;
          *(undefined8 *)(param_2 + 600) = local_1a0[0];
          *(undefined8 *)(param_2 + 0x288) = local_178;
          local_1a0[0] = 0;
          local_178 = 0;
          uVar5 = local_2c4;
          if (*(int *)(param_2 + 0x220) == 1) {
            lVar14 = (long)local_1e8;
            if (local_1e8 < 1) {
LAB_00e49be0:
              iVar4 = 0;
              iVar6 = 0;
            }
            else {
              if (local_1a8 < 1) {
                lVar22 = 0;
                do {
                  *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar22 * 2) = 0;
                  *(char **)(*(long *)(param_2 + 0x240) + lVar22 * 8) = ".notdef";
                  lVar22 = lVar22 + 1;
                } while (lVar14 != lVar22);
                goto LAB_00e49be0;
              }
              lVar22 = 0;
              iVar6 = 0;
              iVar4 = 0;
              do {
                while( true ) {
                  *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar22 * 2) = 0;
                  *(char **)(*(long *)(param_2 + 0x240) + lVar22 * 8) = ".notdef";
                  pcVar13 = *(char **)(local_1e0 + lVar22 * 8);
                  if (pcVar13 == (char *)0x0) break;
                  lVar25 = *(long *)(param_2 + 0x288);
                  lVar20 = 0;
                  do {
                    pcVar17 = *(char **)(lVar25 + lVar20 * 8);
                    iVar7 = strcmp(pcVar13,pcVar17);
                    if (iVar7 == 0) {
                      *(short *)(*(long *)(param_2 + 0x238) + lVar22 * 2) = (short)lVar20;
                      *(char **)(*(long *)(param_2 + 0x240) + lVar22 * 8) = pcVar17;
                      iVar7 = strcmp(".notdef",pcVar17);
                      if (iVar7 != 0) {
                        iVar7 = (int)lVar22;
                        if (iVar4 <= lVar22) {
                          iVar7 = iVar4;
                        }
                        iVar4 = iVar7;
                        if (iVar6 <= lVar22) {
                          iVar6 = (int)lVar22 + 1;
                        }
                      }
                      goto LAB_00e49b20;
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < local_1a8);
                  lVar22 = lVar22 + 1;
                  if (lVar22 == lVar14) goto LAB_00e49be8;
                }
LAB_00e49b20:
                lVar22 = lVar22 + 1;
              } while (lVar22 != lVar14);
            }
LAB_00e49be8:
            *(int *)(param_2 + 0x22c) = iVar4;
            *(int *)(param_2 + 0x230) = iVar6;
            *(undefined4 *)(param_2 + 0x228) = local_210;
            uVar5 = local_2c4;
          }
        }
        else {
          local_2c4 = 2;
          uVar5 = local_2c4;
        }
      }
    }
    else {
joined_r0x00e49344:
      if (local_218 == '\0') {
        FUN_00e139fc(uVar21,local_228);
        local_228 = (char *)0x0;
        local_2c4 = (uint)local_80[0];
        uVar5 = (uint)local_80[0];
        if ((uint)local_80[0] == 0) goto LAB_00e49550;
      }
    }
  }
joined_r0x00e49b50:
  local_2c4 = uVar5;
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(auStack_208);
  }
  if (local_e8 != (code *)0x0) {
    (*local_e8)(local_140);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(local_1a0);
  }
  if (local_88 != (code *)0x0) {
    (*local_88)(auStack_e0);
  }
  if (local_218 == '\0') {
    FUN_00e139fc(local_2a0,local_228);
    local_228 = (char *)0x0;
  }
  (*(code *)CONCAT44(uStack_28c,local_290))(&local_2c0);
  if ((int)param_3 < 0) {
    return (ulong)local_2c4;
  }
  if (local_2c4 != 0) {
    return (ulong)local_2c4;
  }
  if ((param_3 & 0xffff) != 0) {
    return 6;
  }
  uVar12 = *(ulong *)(param_2 + 0x10);
  *(long *)(param_2 + 0x20) = (long)*(int *)(param_2 + 0x280);
  uVar16 = uVar12 | 0x211;
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  *(ulong *)(param_2 + 0x10) = uVar16;
  if (param_2[0x128] != '\0') {
    uVar16 = uVar12 | 0x215;
    *(ulong *)(param_2 + 0x10) = uVar16;
  }
  pcVar13 = *(char **)(param_2 + 0x110);
  *(ulong *)(param_2 + 0x10) = uVar16 | 0x800;
  *(char **)(param_2 + 0x28) = pcVar13;
  *(char **)(param_2 + 0x30) = "Regular";
  if (pcVar13 == (char *)0x0) {
    if (*(long *)(param_2 + 0x218) != 0) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x218);
    }
  }
  else {
    pcVar17 = *(char **)(param_2 + 0x108);
    if (pcVar17 != (char *)0x0) {
      for (; cVar18 = *pcVar17, cVar18 != '\0'; pcVar17 = pcVar17 + 1) {
        while (cVar2 = *pcVar13, cVar2 != cVar18) {
          if ((cVar18 == '-') || (cVar18 == ' ')) {
            pcVar17 = pcVar17 + 1;
            cVar18 = *pcVar17;
          }
          else {
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if (cVar2 == '\0') {
                *(char **)(param_2 + 0x30) = pcVar17;
              }
              goto LAB_00e49428;
            }
            pcVar13 = pcVar13 + 1;
            cVar18 = *pcVar17;
          }
          if (cVar18 == '\0') goto LAB_00e49428;
        }
        pcVar13 = pcVar13 + 1;
      }
    }
  }
LAB_00e49428:
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  local_2c0._0_4_ = 9;
  local_298 = FT_Get_Module(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"truetype");
  pcStack_2b0 = *(char **)(param_2 + 800);
  local_2b8 = *(char **)(param_2 + 0x318);
  if (param_4 != 0) {
    local_2c0._0_4_ = 0x19;
    local_290 = param_4;
    local_288 = param_5;
  }
  uVar12 = FT_Open_Face(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),&local_2c0,0,param_2 + 0x328)
  ;
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  FT_Done_Size(*(undefined8 *)(*(long *)(param_2 + 0x328) + 0xa0));
  lVar14 = *(long *)(param_2 + 0x328);
  uVar10 = *(undefined8 *)(lVar14 + 0x78);
  uVar26 = *(undefined8 *)(lVar14 + 0x70);
  uVar21 = *(undefined8 *)(lVar14 + 0x68);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar14 + 0x80);
  *(undefined8 *)(param_2 + 0x78) = uVar10;
  *(undefined8 *)(param_2 + 0x70) = uVar26;
  *(undefined8 *)(param_2 + 0x68) = uVar21;
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar14 + 0x88);
  *(undefined2 *)(param_2 + 0x90) = *(undefined2 *)(lVar14 + 0x90);
  *(undefined2 *)(param_2 + 0x92) = *(undefined2 *)(lVar14 + 0x92);
  *(ulong *)(param_2 + 0x18) = (ulong)(*(long *)(param_2 + 0x120) != 0);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x12a);
  if ((*(byte *)(lVar14 + 0x18) >> 1 & 1) == 0) {
    bVar3 = *(byte *)(lVar14 + 0x10);
  }
  else {
    *(ulong *)(param_2 + 0x18) = (ulong)(*(long *)(param_2 + 0x120) != 0) | 2;
    bVar3 = *(byte *)(lVar14 + 0x10);
  }
  if ((bVar3 >> 5 & 1) != 0) {
    *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x20;
  }
  if (lVar8 == 0) {
switchD_00e4962c_default:
    uVar12 = 0;
  }
  else {
    plVar19 = *(long **)(lVar9 + 0x40);
    local_2b8 = (char *)0x10003756e6963;
    local_2c0 = param_2;
    uVar12 = FUN_00e17cf8(plVar19[3],0,&local_2c0,0);
    if ((((uint)uVar12 != 0) && (uVar5 = (uint)uVar12 & 0xff, uVar5 != 0xa3)) && (uVar5 != 7)) {
      return uVar12;
    }
    switch(*(undefined4 *)(param_2 + 0x220)) {
    case 1:
      local_2b8 = (char *)0x2000741444243;
      lVar8 = plVar19[2];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 2:
      local_2b8 = (char *)0x741444f42;
      lVar8 = *plVar19;
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 3:
      local_2b8 = (char *)0x300076c617431;
      lVar8 = plVar19[3];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 4:
      local_2b8 = (char *)0x1000741444245;
      lVar8 = plVar19[1];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    default:
      goto switchD_00e4962c_default;
    }
    uVar12 = FUN_00e17cf8(lVar8,0,&local_2c0,0);
  }
  return uVar12;
}

