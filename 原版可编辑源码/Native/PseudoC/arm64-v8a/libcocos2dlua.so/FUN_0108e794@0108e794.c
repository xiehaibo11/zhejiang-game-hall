
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0108e794(undefined8 param_1,char *param_2,int param_3,int param_4,code *param_5)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined4 uVar12;
  ulong uVar13;
  char *pcVar14;
  size_t __n;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  char *pcVar23;
  long lVar24;
  uint local_2dc;
  uint local_2bc;
  char *local_2b8;
  char *local_2b0;
  char *pcStack_2a8;
  uint local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  int local_288;
  undefined4 uStack_284;
  code *local_280;
  code *local_278;
  code *local_248;
  code *local_238;
  code *local_230;
  long *local_228;
  char *local_220;
  long local_218;
  char local_210;
  undefined4 local_208;
  undefined1 auStack_200 [32];
  int local_1e0;
  long local_1d8;
  code *local_1a8;
  int local_1a0;
  undefined8 local_198 [5];
  undefined8 local_170;
  code *local_140;
  undefined8 local_138 [3];
  long local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  code *local_e0;
  undefined1 auStack_d8 [88];
  code *local_80;
  char *local_78 [2];
  int local_68;
  
                    /* try { // try from 0108e794 to 0118e7c7 has its CatchHandler @ 0108e794
                       catch() { ... } // from try @ 0108e794 with catch @ 0108e794
                       catch() { ... } // from try @ 0108e824 with catch @ 0108e794 */
                    /* try { // try from 0108e7c8 to 0118e7d7 has its CatchHandler @ 0108e914 */
  param_2[800] = '\0';
  param_2[0x321] = '\0';
  param_2[0x322] = '\0';
  param_2[0x323] = '\0';
  param_2[0x324] = '\0';
  param_2[0x325] = '\0';
  param_2[0x326] = '\0';
  param_2[0x327] = '\0';
  param_2[0] = '\x01';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  lVar8 = ft_module_get_service(*(undefined8 *)(param_2 + 0xb0),"postscript-cmaps");
  *(long *)(param_2 + 0x300) = lVar8;
  lVar9 = FT_Get_Module_Interface(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"psaux");
  *(long *)(param_2 + 0x308) = lVar9;
                    /* try { // try from 0108e804 to 0118e817 has its CatchHandler @ 0108e8b0 */
  if (lVar9 == 0) {
    return 0xb;
  }
  uVar21 = *(undefined8 *)(param_2 + 0xb8);
                    /* try { // try from 0108e818 to 0118e823 has its CatchHandler @ 0108e8a0 */
  memset(&local_2b8,0,0x240);
                    /* try { // try from 0108e824 to 0118e92f has its CatchHandler @ 0108e794 */
  uVar10 = ft_mem_alloc(uVar21,0xc,&local_2bc);
  *(undefined8 *)(param_2 + 0x310) = uVar10;
  if (local_2bc == 0) {
    param_2[0x318] = '\f';
    param_2[0x319] = '\0';
    param_2[0x31a] = '\0';
    param_2[0x31b] = '\0';
    param_2[0x31c] = '\0';
    param_2[0x31d] = '\0';
    param_2[0x31e] = '\0';
    param_2[799] = '\0';
    plVar20 = *(long **)(param_2 + 0xc0);
                    /* catch() { ... } // from try @ 0108e7c8 with catch @ 0108e914 */
    (*(code *)**(undefined8 **)(lVar9 + 8))(&local_2b8,0,0,uVar21);
    local_210 = '\0';
    local_220 = (char *)0x0;
                    /* try { // try from 0108e930 to 0118e963 has its CatchHandler @ 0108e930
                       catch() { ... } // from try @ 0108e930 with catch @ 0108e930
                       catch() { ... } // from try @ 0108e9c0 with catch @ 0108e930
                       catch() { ... } // from try @ 0108ea98 with catch @ 0108e930 */
    local_218 = 0;
    local_228 = plVar20;
    local_2bc = FT_Stream_Seek(plVar20,0);
    local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,local_2bc);
    if (local_2bc == 0) {
      local_2bc = FT_Stream_EnterFrame(plVar20,0x11);
      local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,local_2bc);
      if (local_2bc != 0) goto LAB_0108e95c;
      iVar6 = memcmp((void *)plVar20[8],"%!PS-TrueTypeFont",0x11);
      if (iVar6 != 0) {
        local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,2);
        FT_Stream_ExitFrame(plVar20);
                    /* try { // try from 0108ea68 to 0118ea7b has its CatchHandler @ 0108eb48 */
        local_2bc = 2;
        if (local_210 != '\0') goto joined_r0x0108f210;
        goto LAB_0108ea6c;
      }
      FT_Stream_ExitFrame(plVar20);
      local_2bc = FT_Stream_Seek(plVar20,0);
                    /* try { // try from 0108f084 to 0118f093 has its CatchHandler @ 0108f1d0 */
      local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,local_2bc);
      if (local_2bc != 0) goto LAB_0108e95c;
      lVar16 = plVar20[1];
      if (plVar20[5] != 0) {
        local_220 = (char *)ft_mem_alloc(uVar21,lVar16,local_78);
        local_2bc = (uint)local_78[0];
        if ((uint)local_78[0] == 0) {
                    /* try { // try from 0108f0c0 to 0118f0d3 has its CatchHandler @ 0108f16c */
          local_2bc = FT_Stream_Read(plVar20,local_220,lVar16);
          local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,local_2bc);
                    /* try { // try from 0108f0d4 to 0118f0df has its CatchHandler @ 0108f15c */
          if (local_2bc == 0) goto LAB_0108f1ac;
        }
        goto LAB_0108e95c;
      }
      local_220 = (char *)(*plVar20 + plVar20[2]);
      local_210 = '\x01';
      local_218 = lVar16;
      local_2bc = FT_Stream_Skip(plVar20,lVar16);
      local_78[0] = (char *)CONCAT44(local_78[0]._4_4_,local_2bc);
      lVar16 = local_218;
      if (local_2bc != 0) goto LAB_0108e95c;
LAB_0108f1ac:
      local_218 = lVar16;
      local_2b0 = local_220;
      local_2bc = 0;
LAB_0108ea98:
                    /* try { // try from 0108ea98 to 0118ec37 has its CatchHandler @ 0108e930 */
      pcVar14 = local_220 + local_218;
      local_2a0 = 0;
      local_2b8 = local_220;
      pcStack_2a8 = pcVar14;
      (*local_280)(&local_2b8);
      if (local_2b8 < pcVar14) {
        local_2dc = (uint)(param_2 + 0x2d0);
        do {
          if ((local_2b8 + 0x19 < pcVar14) && (*local_2b8 == 'F')) {
            iVar6 = strncmp(local_2b8,"FontDirectory",0xd);
            if (iVar6 == 0) {
              (*local_278)(&local_2b8);
              (*local_280)(&local_2b8);
              pcVar18 = local_2b8;
              while (pcVar23 = pcVar18, local_2b8 < pcVar14) {
                    /* catch() { ... } // from try @ 0108ea90 with catch @ 0108eb38 */
                    /* catch() { ... } // from try @ 0108ea68 with catch @ 0108eb48 */
                if (((local_2b8 + 5 < pcVar14) && (*local_2b8 == 'k')) &&
                   (iVar6 = strncmp(local_2b8,"known",5), iVar6 == 0)) {
                  (*local_278)(&local_2b8);
                    /* try { // try from 0108ed30 to 0118ed3f has its CatchHandler @ 0108efd8 */
                  (*local_248)(&local_2b8,local_78);
                    /* try { // try from 0108ed40 to 0118ed4f has its CatchHandler @ 0108efac */
                  pcVar23 = local_2b8;
                  if (local_68 != 3) {
                    pcVar23 = pcVar18;
                  }
                  break;
                }
                (*local_278)(&local_2b8);
                if (local_2a0 != 0) goto switchD_0108ed08_caseD_6;
                (*local_280)(&local_2b8);
              }
            }
            else {
LAB_0108ebec:
              (*local_278)(&local_2b8);
              pcVar23 = local_2b8;
              if (local_2a0 != 0) break;
            }
          }
          else {
                    /* catch() { ... } // from try @ 0108ea34 with catch @ 0108eb94 */
            if ((pcVar14 <= local_2b8 + 2) || (*local_2b8 != '/')) goto LAB_0108ebec;
            pcVar18 = local_2b8 + 1;
            local_2b8 = pcVar18;
            (*local_278)(&local_2b8);
            if (local_2a0 != 0) break;
                    /* catch() { ... } // from try @ 0108ea24 with catch @ 0108ebc0 */
            pcVar23 = local_2b8;
                    /* catch() { ... } // from try @ 0108e9b4 with catch @ 0108ebc4 */
                    /* catch() { ... } // from try @ 0108e9a0 with catch @ 0108ebd4 */
            if ((local_2b8 < pcVar14) && (__n = (long)local_2b8 - (long)pcVar18, __n - 1 < 0x15)) {
              uVar13 = 0xfffffffffffffff1;
              ppuVar22 = &PTR_s_version_01472cf8_0x11_0172a550;
LAB_0108eca4:
              pcVar23 = *ppuVar22;
              if (pcVar23 == (char *)0x0) {
                uVar12 = 9;
              }
              else {
                    /* try { // try from 0108ecac to 0118ecbf has its CatchHandler @ 0108efec */
                    /* try { // try from 0108ecc0 to 0118eccb has its CatchHandler @ 0108efdc */
                    /* try { // try from 0108eccc to 0118ed2f has its CatchHandler @ 0108ec38 */
                if (((*pcVar18 == *pcVar23) && (sVar11 = strlen(pcVar23), __n == sVar11)) &&
                   (iVar6 = memcmp(pcVar18,pcVar23,__n), iVar6 == 0)) {
                  if (uVar13 < 4) {
                    (*(code *)ppuVar22[2])(param_2,&local_2b8);
                  }
                  else {
                    /* catch() { ... } // from try @ 0108e964 with catch @ 0108ec28 */
                    local_78[0] = param_2 + 0x130;
                    if ((*(int *)(ppuVar22 + 1) != 2) &&
                       (local_78[0] = param_2 + 0x2d0, *(int *)(ppuVar22 + 1) != 5)) {
                      local_78[0] = param_2 + 0xf8;
                    /* try { // try from 0108ec38 to 0118ec6f has its CatchHandler @ 0108ec38
                       catch() { ... } // from try @ 0108ec38 with catch @ 0108ec38
                       catch() { ... } // from try @ 0108eccc with catch @ 0108ec38
                       catch() { ... } // from try @ 0108eda8 with catch @ 0108ec38
                       catch() { ... } // from try @ 0108ee78 with catch @ 0108ec38 */
                    }
                    pcVar15 = local_238;
                    if (*(int *)((long)ppuVar22 + 0xc) - 9U < 2) {
                      pcVar15 = local_230;
                    }
                    /* try { // try from 0108ec70 to 0118ec7f has its CatchHandler @ 0108f040 */
                    local_2a0 = (*pcVar15)(&local_2b8,ppuVar22,local_78,0,0);
                  }
                  uVar12 = 7;
                  if (local_2a0 != 0) {
                    uVar12 = 1;
                    local_2dc = local_2a0;
                  }
                }
                else {
                  uVar12 = 0;
                }
              }
              pcVar23 = local_2b8;
              switch(uVar12) {
              case 0:
              case 9:
                goto switchD_0108ed08_caseD_0;
              default:
                local_2bc = local_2dc;
                goto joined_r0x0108f170;
              case 6:
                goto switchD_0108ed08_caseD_6;
              case 7:
                break;
              }
            }
          }
switchD_0108ed08_caseD_7:
          local_2b8 = pcVar23;
          (*local_280)(&local_2b8);
        } while (local_2b8 < pcVar14);
      }
switchD_0108ed08_caseD_6:
                    /* try { // try from 0108ed74 to 0118ed87 has its CatchHandler @ 0108ef60 */
      local_2bc = local_2a0;
joined_r0x0108f170:
      if (local_2bc == 0) {
        if (param_2[0x299] == '*') {
          *(int *)(param_2 + 0x278) = local_1a0;
          if (local_120 == 0) {
                    /* try { // try from 0108eda0 to 0118eda7 has its CatchHandler @ 0108ef44 */
            local_2bc = 3;
          }
                    /* try { // try from 0108eda8 to 0118ee0b has its CatchHandler @ 0108ec38 */
          local_120 = 0;
          *(undefined8 *)(param_2 + 0x250) = local_138[0];
          *(undefined8 *)(param_2 + 0x290) = uStack_108;
          *(undefined8 *)(param_2 + 0x288) = local_110;
          *(undefined8 *)(param_2 + 600) = local_198[0];
          *(undefined8 *)(param_2 + 0x280) = local_170;
          local_198[0] = 0;
          local_170 = 0;
          if (*(int *)(param_2 + 0x220) == 1) {
            if (local_1e0 < 1) {
LAB_0108f1ec:
                    /* try { // try from 0108f1ec to 0118f223 has its CatchHandler @ 0108f1ec
                       catch() { ... } // from try @ 0108f1ec with catch @ 0108f1ec
                       catch() { ... } // from try @ 0108f280 with catch @ 0108f1ec
                       catch() { ... } // from try @ 0108f35c with catch @ 0108f1ec
                       catch() { ... } // from try @ 0108f434 with catch @ 0108f1ec */
              local_2dc = 0;
              iVar6 = 0;
            }
            else {
              if (local_1a0 < 1) {
                lVar16 = 0;
                do {
                    /* catch() { ... } // from try @ 0108f084 with catch @ 0108f1d0 */
                  *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar16 * 2) = 0;
                  *(char **)(*(long *)(param_2 + 0x240) + lVar16 * 8) = ".notdef";
                  lVar16 = lVar16 + 1;
                } while (local_1e0 != lVar16);
                goto LAB_0108f1ec;
              }
              lVar16 = 0;
              iVar6 = 0;
              local_2dc = 0;
                    /* try { // try from 0108ee0c to 0118ee1b has its CatchHandler @ 0108ef5c */
              do {
                    /* try { // try from 0108ee1c to 0118ee2b has its CatchHandler @ 0108ef58 */
                *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar16 * 2) = 0;
                *(char **)(*(long *)(param_2 + 0x240) + lVar16 * 8) = ".notdef";
                pcVar14 = *(char **)(local_1d8 + lVar16 * 8);
                if (pcVar14 != (char *)0x0) {
                  lVar19 = *(long *)(param_2 + 0x280);
                  lVar24 = 0;
                  do {
                    pcVar18 = *(char **)(lVar19 + lVar24 * 8);
                    /* try { // try from 0108ee48 to 0118ee5b has its CatchHandler @ 0108ef54 */
                    iVar7 = strcmp(pcVar14,pcVar18);
                    if (iVar7 == 0) {
                    /* try { // try from 0108ee70 to 0118ee77 has its CatchHandler @ 0108ef40 */
                      *(short *)(*(long *)(param_2 + 0x238) + lVar16 * 2) = (short)lVar24;
                    /* try { // try from 0108ee78 to 0118f04f has its CatchHandler @ 0108ec38 */
                      *(char **)(*(long *)(param_2 + 0x240) + lVar16 * 8) = pcVar18;
                      iVar7 = strcmp(".notdef",pcVar18);
                      if (iVar7 != 0) {
                        uVar1 = (int)lVar16;
                        if ((int)local_2dc <= lVar16) {
                          uVar1 = local_2dc;
                        }
                        local_2dc = uVar1;
                        if (iVar6 <= lVar16) {
                          iVar6 = (int)lVar16 + 1;
                        }
                      }
                      break;
                    }
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < local_1a0);
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 != local_1e0);
            }
            *(uint *)(param_2 + 0x22c) = local_2dc;
            *(int *)(param_2 + 0x230) = iVar6;
            *(undefined4 *)(param_2 + 0x228) = local_208;
          }
        }
        else {
                    /* try { // try from 0108f0e0 to 0118f1eb has its CatchHandler @ 0108f050 */
          local_2bc = 2;
        }
      }
    }
    else {
LAB_0108e95c:
      if (local_210 == '\0') {
LAB_0108ea6c:
        ft_mem_free(uVar21,local_220);
        local_220 = (char *)0x0;
        local_2bc = (uint)local_78[0];
        if ((uint)local_78[0] == 0) goto LAB_0108ea98;
      }
    }
  }
joined_r0x0108f210:
  if (local_1a8 != (code *)0x0) {
    (*local_1a8)(auStack_200);
  }
  if (local_e0 != (code *)0x0) {
    (*local_e0)(local_138);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(local_198);
  }
  if (local_80 != (code *)0x0) {
    (*local_80)(auStack_d8);
  }
  if (local_210 == '\0') {
    ft_mem_free(local_298,local_220);
                    /* catch() { ... } // from try @ 0108e818 with catch @ 0108e8a0 */
    local_220 = (char *)0x0;
  }
  (*(code *)CONCAT44(uStack_284,local_288))(&local_2b8);
                    /* catch() { ... } // from try @ 0108e804 with catch @ 0108e8b0 */
  if (param_3 < 0) {
    return (ulong)local_2bc;
  }
  if (local_2bc != 0) {
    return (ulong)local_2bc;
  }
  if (0 < param_3) {
    return 6;
  }
  uVar13 = *(ulong *)(param_2 + 0x10);
  *(long *)(param_2 + 0x20) = (long)*(int *)(param_2 + 0x278);
  uVar17 = uVar13 | 0x211;
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
  *(ulong *)(param_2 + 0x10) = uVar17;
  if (param_2[0x128] != '\0') {
                    /* try { // try from 0108e9a0 to 0118e9b3 has its CatchHandler @ 0108ebd4 */
    uVar17 = uVar13 | 0x215;
    *(ulong *)(param_2 + 0x10) = uVar17;
  }
  pcVar14 = *(char **)(param_2 + 0x110);
                    /* try { // try from 0108e9b4 to 0118e9bf has its CatchHandler @ 0108ebc4 */
                    /* try { // try from 0108e9c0 to 0118ea23 has its CatchHandler @ 0108e930 */
  *(ulong *)(param_2 + 0x10) = uVar17 | 0x800;
  *(char **)(param_2 + 0x28) = pcVar14;
  *(char **)(param_2 + 0x30) = "Regular";
  if (pcVar14 == (char *)0x0) {
    if (*(long *)(param_2 + 0x218) != 0) {
                    /* try { // try from 0108ea34 to 0118ea43 has its CatchHandler @ 0108eb94 */
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x218);
    }
  }
  else {
    pcVar18 = *(char **)(param_2 + 0x108);
    if (pcVar18 != (char *)0x0) {
      cVar2 = *pcVar18;
      while (cVar2 != '\0') {
        while (cVar3 = *pcVar14, cVar2 != cVar3) {
          if ((cVar2 == ' ') || (cVar2 == '-')) goto LAB_0108ea20;
          if ((cVar3 != ' ') && (cVar3 != '-')) {
            if (cVar3 == '\0') {
              *(char **)(param_2 + 0x30) = pcVar18;
            }
            goto LAB_0108eed0;
          }
          pcVar14 = pcVar14 + 1;
          if (cVar2 == '\0') goto LAB_0108eed0;
        }
        pcVar14 = pcVar14 + 1;
LAB_0108ea20:
        pcVar18 = pcVar18 + 1;
        cVar2 = *pcVar18;
                    /* try { // try from 0108ea24 to 0118ea33 has its CatchHandler @ 0108ebc0 */
      }
    }
  }
LAB_0108eed0:
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
  local_2b8._0_4_ = 9;
  local_290 = FT_Get_Module(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"truetype");
  pcStack_2a8 = *(char **)(param_2 + 0x318);
  local_2b0 = *(char **)(param_2 + 0x310);
  if (param_4 != 0) {
    local_2b8._0_4_ = 0x19;
    local_288 = param_4;
    local_280 = param_5;
  }
  uVar13 = FT_Open_Face(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),&local_2b8,0,param_2 + 800);
  if ((int)uVar13 != 0) {
    return uVar13;
  }
  FT_Done_Size(*(undefined8 *)(*(long *)(param_2 + 800) + 0xa0));
  lVar16 = *(long *)(param_2 + 800);
                    /* catch() { ... } // from try @ 0108ee70 with catch @ 0108ef40 */
                    /* catch() { ... } // from try @ 0108eda0 with catch @ 0108ef44 */
  uVar10 = *(undefined8 *)(lVar16 + 0x78);
                    /* catch() { ... } // from try @ 0108ee48 with catch @ 0108ef54 */
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar16 + 0x80);
  *(undefined8 *)(param_2 + 0x78) = uVar10;
                    /* catch() { ... } // from try @ 0108ee1c with catch @ 0108ef58 */
  uVar10 = *(undefined8 *)(lVar16 + 0x68);
                    /* catch() { ... } // from try @ 0108ee0c with catch @ 0108ef5c */
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar16 + 0x70);
  *(undefined8 *)(param_2 + 0x68) = uVar10;
                    /* catch() { ... } // from try @ 0108ed74 with catch @ 0108ef60 */
  *(undefined2 *)(param_2 + 0x88) = *(undefined2 *)(lVar16 + 0x88);
  *(undefined2 *)(param_2 + 0x8a) = *(undefined2 *)(lVar16 + 0x8a);
  *(undefined2 *)(param_2 + 0x8c) = *(undefined2 *)(lVar16 + 0x8c);
  *(undefined2 *)(param_2 + 0x8e) = *(undefined2 *)(lVar16 + 0x8e);
  *(undefined2 *)(param_2 + 0x90) = *(undefined2 *)(lVar16 + 0x90);
  uVar5 = *(undefined2 *)(lVar16 + 0x92);
  *(undefined2 *)(param_2 + 0x94) = *(undefined2 *)(param_2 + 0x12a);
  *(undefined2 *)(param_2 + 0x96) = *(undefined2 *)(param_2 + 300);
  *(undefined2 *)(param_2 + 0x92) = uVar5;
  *(ulong *)(param_2 + 0x18) = (ulong)(*(long *)(param_2 + 0x120) != 0);
  if ((*(byte *)(lVar16 + 0x18) >> 1 & 1) == 0) {
    bVar4 = *(byte *)(lVar16 + 0x10);
                    /* catch() { ... } // from try @ 0108ed40 with catch @ 0108efac */
  }
  else {
    *(ulong *)(param_2 + 0x18) = (ulong)(*(long *)(param_2 + 0x120) != 0) | 2;
    bVar4 = *(byte *)(lVar16 + 0x10);
  }
  if ((bVar4 >> 5 & 1) != 0) {
    *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x20;
  }
  if (lVar8 == 0) {
switchD_0108f048_default:
    uVar13 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0108ed30 with catch @ 0108efd8 */
    plVar20 = *(long **)(lVar9 + 0x28);
                    /* catch() { ... } // from try @ 0108ecc0 with catch @ 0108efdc */
                    /* catch() { ... } // from try @ 0108ecac with catch @ 0108efec */
    local_2b0 = (char *)0x10003756e6963;
    local_2b8 = param_2;
    uVar13 = FT_CMap_New(plVar20[3],0,&local_2b8,0);
    if (((uint)uVar13 != 0) && (((uint)uVar13 & 0xff) != 0xa3)) {
      return uVar13;
    }
                    /* catch() { ... } // from try @ 0108ec70 with catch @ 0108f040 */
    switch(*(undefined4 *)(param_2 + 0x220)) {
    case 1:
                    /* try { // try from 0108f050 to 0118f083 has its CatchHandler @ 0108f050
                       catch() { ... } // from try @ 0108f050 with catch @ 0108f050
                       catch() { ... } // from try @ 0108f0e0 with catch @ 0108f050 */
      local_2b0 = (char *)0x2000741444243;
      lVar8 = plVar20[2];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 2:
      local_2b0 = (char *)0x741444f42;
      lVar8 = *plVar20;
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 3:
      local_2b0 = (char *)0x300076c617431;
      lVar8 = plVar20[3];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 4:
      local_2b0 = (char *)0x1000741444245;
      lVar8 = plVar20[1];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    default:
      goto switchD_0108f048_default;
    }
    uVar13 = FT_CMap_New(lVar8,0,&local_2b8,0);
                    /* catch() { ... } // from try @ 0108f0d4 with catch @ 0108f15c */
  }
  return uVar13;
switchD_0108ed08_caseD_0:
  lVar16 = uVar13 + 0xf;
  uVar13 = uVar13 + 1;
  ppuVar22 = ppuVar22 + 6;
  if (0x12 < lVar16) goto switchD_0108ed08_caseD_7;
  goto LAB_0108eca4;
}

