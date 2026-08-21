
/* WARNING: Removing unreachable block (ram,0x00e7b88c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e79134(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,int param_6,int param_7,int *param_8)

{
  undefined8 **ppuVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint extraout_var;
  uint extraout_var_00;
  undefined8 *puVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  int *piVar27;
  uint *puVar28;
  undefined4 *puVar29;
  long *plVar30;
  byte bVar31;
  ushort uVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  undefined1 *puVar37;
  byte *pbVar38;
  undefined4 *puVar39;
  uint *puVar40;
  uint *puVar41;
  undefined4 *puVar42;
  undefined8 *puVar43;
  byte *pbVar44;
  int *piVar45;
  undefined8 uVar46;
  uint uVar47;
  int *piVar48;
  int *piVar49;
  long *plVar50;
  undefined8 uVar51;
  int iVar52;
  uint uVar53;
  undefined1 uVar54;
  ulong *puVar55;
  uint uVar56;
  int iVar57;
  undefined8 *puVar58;
  uint uVar59;
  long lVar60;
  int iVar61;
  undefined8 uVar62;
  ulong uVar63;
  long lVar64;
  uint *puVar65;
  int iVar66;
  long *plVar67;
  undefined8 uVar68;
  int local_6584;
  ulong local_64e8;
  undefined8 *local_6480;
  undefined8 *local_6420;
  undefined8 **ppuStack_6418;
  undefined8 *puStack_6410;
  undefined8 uStack_6408;
  undefined1 auStack_4bf4 [4];
  undefined8 uStack_4bf0;
  undefined8 uStack_4be8;
  long lStack_4be0;
  long lStack_4bd8;
  undefined8 *local_4bd0;
  undefined8 local_4bc8;
  undefined8 *local_4bc0;
  undefined8 **local_4bb8;
  undefined8 *local_4bb0;
  char cStack_4ba8;
  undefined1 local_4ba7;
  undefined4 local_4ba4;
  undefined8 *local_3398;
  undefined8 **local_3390;
  undefined8 *local_3388;
  undefined1 uStack_3380;
  undefined1 uStack_337f;
  undefined4 local_337c;
  undefined8 *local_1b70;
  undefined8 **local_1b68;
  undefined8 *local_1b60;
  undefined1 uStack_1b58;
  undefined1 uStack_1b57;
  undefined4 local_1b54;
  undefined8 local_348;
  undefined8 **local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined2 local_2e8;
  undefined1 uStack_2e6;
  undefined1 local_2e5;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 ***local_2d0;
  int local_2c8;
  undefined8 *local_2c0;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_268;
  ulong uStack_260;
  char local_258;
  undefined8 local_210;
  undefined8 **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  int iStack_190;
  int local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e0;
  int iStack_dc;
  undefined8 **ppuStack_d8;
  int iStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar4 = tpidr_el0;
  lVar24 = *(long *)(lVar4 + 0x28);
  lVar60 = param_1[0x1e];
  uVar62 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 7);
  iVar66 = *(int *)(*(long *)(lVar60 + 0x420) + 0x408);
  ppuVar1 = (undefined8 **)(param_1 + 1);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0x14;
  local_1b0 = 10;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_1f8 = 0;
  local_200 = 0x14;
  local_1f0 = 10;
  local_1d8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_210 = uVar62;
  local_208 = ppuVar1;
  local_1d0 = uVar62;
  local_1c8 = ppuVar1;
  local_e0 = param_7;
  iStack_dc = param_6;
  local_a8 = ppuVar1;
  memset(&cStack_4ba8,0,0x4998);
  local_330 = 0;
  uStack_338 = 0x10;
  local_328 = 10;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_4bd0 = param_1;
  local_4bc8 = param_3;
  local_348 = uVar62;
  local_340 = ppuVar1;
  memset(&uStack_1b58,0,0x1810);
  uVar54 = *(undefined1 *)(param_1 + 0x20);
  local_1b70 = param_1;
  local_1b68 = &local_1b70;
  local_1b60 = &local_348;
  uStack_1b57 = uVar54;
  local_1b54 = uVar3;
  memset(&uStack_3380,0,0x1810);
  local_3398 = param_1;
  local_3390 = &local_1b70;
  local_3388 = &local_348;
  uStack_337f = uVar54;
  local_337c = uVar3;
  memset(&cStack_4ba8,0,0x1810);
  uStack_308 = *(undefined4 *)((long)param_1 + 0x2c);
  uStack_304 = *(undefined4 *)((long)param_1 + 0x34);
  local_2e0 = &local_1d0;
  uStack_2f0 = param_4[1];
  uStack_2f8 = *param_4;
  local_2d8 = &local_210;
  local_2d0 = &local_a8;
  uStack_2e6 = *(undefined1 *)((long)param_1 + 0x101);
  iStack_2b8 = *(int *)((long)param_1 + 300);
  iStack_2b4 = *(int *)(param_1 + 0x26);
  iStack_2b0 = -iStack_2b8;
  if (-1 < iStack_2b8) {
    iStack_2b0 = iStack_2b8;
  }
  iVar57 = -iStack_2b4;
  if (-1 < iStack_2b4) {
    iVar57 = iStack_2b4;
  }
  if (iStack_2b0 <= iVar57) {
    iStack_2b0 = iVar57;
  }
  iStack_2b0 = iStack_2b0 << 1;
  uStack_2ac = 0x199a;
  local_2e5 = 1;
  local_2e8 = 0;
  local_258 = '\0';
  cVar9 = *(char *)((long)param_1 + 0xd);
  local_18c._0_1_ = cVar9 != '\0';
  *param_8 = *(int *)(*(long *)(lVar60 + 0x420) + 0x400) << 0x10;
  if (cVar9 == '\0') {
    uVar56 = 0x30;
  }
  else {
    uVar56 = *(uint *)(*(long *)(lVar60 + 0x418) + 0x7a8);
  }
  local_6420 = (undefined8 *)((ulong)local_6420 & 0xffffffff00000000);
  local_4bc0 = param_1;
  local_4bb8 = &local_1b70;
  local_4bb0 = &local_348;
  local_4ba7 = uVar54;
  local_4ba4 = uVar3;
  uStack_300 = uVar3;
  local_2c8 = param_7;
  local_2c0 = param_1 + 0x27;
  puVar15 = (undefined8 *)FUN_00e1388c(uVar62,0x28,&local_6420);
  if ((int)local_6420 == 0) {
    *puVar15 = uVar62;
    puVar15[1] = ppuVar1;
  }
  lVar16 = FUN_00e13bcc(uVar62,8,0,uVar56,0,&local_6420);
  plVar30 = puVar15 + 2;
  *plVar30 = lVar16;
  if ((int)local_6420 == 0) {
    puVar65 = (uint *)(puVar15 + 4);
    *puVar65 = uVar56;
    plVar67 = puVar15 + 3;
    *plVar67 = lVar16;
    local_6420 = (undefined8 *)((ulong)local_6420 & 0xffffffff00000000);
    puVar58 = (undefined8 *)FUN_00e13bcc(uVar62,1,0,0x220,0,&local_6420);
    if ((int)local_6420 == 0) {
      if (*(int *)ppuVar1 == 0) {
        local_64e8 = 0;
        iVar66 = iVar66 * 0x10000;
        bVar5 = false;
        local_6584 = 0;
        uVar46 = *param_2;
        uVar68 = param_2[3];
        uVar51 = param_2[2];
        puVar43 = puVar15 + 1;
        uVar63 = 0;
        iVar57 = 20000000;
        puVar58[1] = param_2[1];
        *puVar58 = uVar46;
        puVar58[3] = uVar68;
        puVar58[2] = uVar51;
        local_6480 = puVar58;
        iVar14 = local_6584;
        bVar7 = false;
LAB_00e79754:
        while( true ) {
          bVar8 = bVar7;
          local_6584 = iVar14;
          iVar11 = iStack_dc;
          puVar55 = local_6480 + 3;
          pbVar25 = (byte *)*puVar55;
          pbVar44 = (byte *)local_6480[2];
          iVar61 = (int)uVar63;
          if (pbVar25 < pbVar44) {
            pbVar38 = pbVar25 + 1;
            *puVar55 = (ulong)pbVar38;
            bVar31 = *pbVar25;
            uVar59 = (uint)bVar31;
            if (((bVar31 == 0xe) || (bVar31 == 0xb)) &&
               (uVar59 = (uint)bVar31, *(char *)((long)param_1 + 0xd) != '\0')) {
              uVar59 = 0;
            }
            cVar9 = *(char *)((long)param_1 + 0xc);
          }
          else {
            uVar59 = 0xe;
            if (iVar61 != 0) {
              uVar59 = 0xb;
            }
            cVar9 = *(char *)((long)param_1 + 0xc);
            pbVar38 = pbVar25;
          }
          iVar14 = local_6584;
          if (cVar9 == '\0') break;
          if ((((0x1f < uVar59) || ((uVar59 | 2) == 0xe)) ||
              (((uVar59 | 1) == 0xb || ((uVar59 == 0xd || (bVar8)))))) || ((uVar59 | 2) == 3)) {
            uVar23 = (uint)local_64e8;
            if (uVar59 < 0x20 && (uVar59 != 0xc && (0 < (int)uVar23 && (uVar59 | 1) != 0xb))) {
              uVar23 = 0;
            }
            local_64e8 = (ulong)uVar23;
            if (uVar59 != 0xc && (bVar5 && uVar59 < 0x20)) {
              bVar5 = false;
            }
            break;
          }
          *plVar67 = *plVar30;
          bVar7 = false;
        }
        if (*(int *)ppuVar1 != 0) goto LAB_00e79574;
        iVar57 = iVar57 + -1;
        if (iVar57 == 0) {
          uVar54 = false;
          iVar11 = 0x12;
          goto LAB_00e794f8;
        }
        bVar7 = bVar8;
        switch(uVar59) {
        case 0:
        case 2:
        case 0x11:
          break;
        case 1:
        case 0x12:
          if (cVar9 == '\0') {
            if ((char)local_a0 != '\0') break;
            uVar46 = 0;
          }
          else {
            uVar46 = *(undefined8 *)(*(long *)(lVar60 + 0x40) + 8);
          }
          puVar19 = &local_1d0;
          goto code_r0x00e79970;
        case 3:
        case 0x17:
          if (cVar9 == '\0') {
            if ((char)local_a0 != '\0') break;
            uVar46 = 0;
          }
          else {
            uVar46 = **(undefined8 **)(lVar60 + 0x40);
          }
          puVar19 = &local_210;
code_r0x00e79970:
          FUN_00e81ba4(param_1,puVar15,puVar19,param_8,&local_18c,uVar46);
          cVar9 = *(char *)(lVar60 + 0x438);
joined_r0x00e7f4a0:
          if (cVar9 != '\0') {
code_r0x00e80bd8:
            iVar11 = 0;
            iVar66 = *(int *)ppuVar1;
            goto joined_r0x00e80de4;
          }
          break;
        case 4:
          piVar27 = (int *)*plVar67;
          piVar45 = (int *)*plVar30;
          if (((char)local_18c == '\0') && (1 < (uint)((ulong)((long)piVar27 - (long)piVar45) >> 3))
             ) {
            if (piVar45[1] == 1) {
              iVar61 = *piVar45;
              if (iVar61 < 0) {
                iVar61 = -(0x2000 - iVar61 >> 0xe);
              }
              else {
                iVar61 = iVar61 + 0x2000 >> 0xe;
              }
            }
            else if (piVar45[1] == 2) {
              iVar61 = *piVar45 << 0x10;
            }
            else {
              iVar61 = *piVar45;
            }
            *param_8 = iVar61 + iVar66;
          }
          local_18c._0_1_ = '\x01';
          if (*(char *)(lVar60 + 0x438) == '\0') {
            if (piVar27 == piVar45) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar52 = *(int *)(lVar60 + 0x3a0);
                iVar61 = local_e0;
              }
              else {
                *piVar27 = 0xa1;
                iVar52 = *(int *)(lVar60 + 0x3a0);
                iVar61 = local_e0;
              }
            }
            else {
              piVar45 = piVar27 + -2;
              *plVar67 = (long)piVar45;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar45;
                if (iVar61 < 0) {
                  local_e0 = local_e0 - (0x2000 - iVar61 >> 0xe);
                  iVar52 = *(int *)(lVar60 + 0x3a0);
                  iVar61 = local_e0;
                }
                else {
                  local_e0 = (iVar61 + 0x2000 >> 0xe) + local_e0;
                  iVar52 = *(int *)(lVar60 + 0x3a0);
                  iVar61 = local_e0;
                }
              }
              else if (piVar27[-1] == 2) {
                local_e0 = *piVar45 * 0x10000 + local_e0;
                iVar52 = *(int *)(lVar60 + 0x3a0);
                iVar61 = local_e0;
              }
              else {
                local_e0 = *piVar45 + local_e0;
                iVar52 = *(int *)(lVar60 + 0x3a0);
                iVar61 = local_e0;
              }
            }
            local_e0 = iVar61;
            if (iVar52 == 0) {
              if ((char)local_2e8 != '\0') {
                FUN_00e81e48(&local_4bd0,uStack_268 & 0xffffffff,uStack_260 & 0xffffffff);
                if (local_258 != '\0') {
                  FUN_00e8368c(&local_4bd0,&local_4bc0,auStack_2a8,uStack_298,uStack_290,1);
                }
                    /* WARNING: Ignoring partial resolution of indirect */
                local_2e8._0_1_ = 0;
                local_258 = '\0';
              }
              goto code_r0x00e7c86c;
            }
            break;
          }
          goto code_r0x00e80bd8;
        case 5:
          lVar36 = *plVar67;
          lVar16 = *plVar30;
          uVar59 = (uint)((ulong)(lVar36 - lVar16) >> 3);
          if (uVar59 != 0) {
            uVar23 = 1;
            while( true ) {
              uVar53 = (uint)((ulong)(lVar36 - lVar16) >> 3);
              if (uVar23 - 1 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 - 1) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar11 = 0;
                }
              }
              iStack_dc = iVar11 + iStack_dc;
              if (uVar23 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)uVar23 * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                iVar11 = 0;
                if (piVar27 != (int *)0x0) {
                  if (*piVar27 == 0) {
                    *piVar27 = 0x82;
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = 0;
                  }
                }
              }
              local_e0 = iVar11 + local_e0;
              FUN_00e81e48(&local_4bd0,iStack_dc);
              if (uVar59 <= uVar23 + 1) break;
              lVar36 = *plVar67;
              uVar23 = uVar23 + 2;
              lVar16 = *plVar30;
            }
            lVar16 = *plVar30;
          }
          goto LAB_00e7c988;
        case 6:
        case 7:
          lVar16 = *plVar30;
          uVar26 = *plVar67 - lVar16;
          if ((int)(uVar26 >> 3) != 0) {
            bVar7 = uVar59 == 6;
            uVar35 = 0;
            lVar36 = 4;
            if (((ulong)(*plVar67 - lVar16) >> 3 & 0xffffffff) != 0) goto code_r0x00e79a90;
code_r0x00e79a10:
            piVar27 = (int *)*puVar43;
            if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
              *piVar27 = 0x82;
            }
            iVar11 = 0;
            if (!bVar7) goto code_r0x00e79a48;
            do {
              iStack_dc = iStack_dc + iVar11;
              while( true ) {
                FUN_00e81e48(&local_4bd0,iStack_dc,local_e0);
                if ((uVar26 >> 3 & 0xffffffff) - 1 == uVar35) {
                  lVar16 = *plVar30;
                  goto LAB_00e7cb64;
                }
                lVar16 = *plVar30;
                uVar35 = uVar35 + 1;
                bVar7 = (bool)(bVar7 ^ 1);
                lVar36 = lVar36 + 8;
                if (((ulong)(*plVar67 - lVar16) >> 3 & 0xffffffff) <= uVar35) goto code_r0x00e79a10;
code_r0x00e79a90:
                lVar34 = lVar16 + lVar36;
                if (*(int *)(lVar16 + lVar36) == 1) {
                  iVar11 = *(int *)(lVar34 + -4);
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (*(int *)(lVar16 + lVar36) == 2) {
                  iVar11 = *(int *)(lVar34 + -4) << 0x10;
                }
                else {
                  iVar11 = *(int *)(lVar34 + -4);
                }
                if (bVar7) break;
code_r0x00e79a48:
                local_e0 = local_e0 + iVar11;
              }
            } while( true );
          }
          goto LAB_00e7cb64;
        case 8:
        case 0x18:
          lVar36 = *plVar67;
          lVar16 = *plVar30;
          uVar23 = (uint)((ulong)(lVar36 - lVar16) >> 3);
          if (5 < uVar23) {
            uVar53 = 6;
            do {
              uVar33 = (uint)((ulong)(lVar36 - lVar16) >> 3);
              if (uVar53 - 6 < uVar33) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 6) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
joined_r0x00e7ac2c:
                if (uVar33 <= uVar53 - 5) goto code_r0x00e7abbc;
code_r0x00e7ac30:
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 5) * 8);
                if (piVar27[1] == 1) {
                  iVar61 = *piVar27;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar61 = *piVar27 << 0x10;
                }
                else {
                  iVar61 = *piVar27;
                }
joined_r0x00e7acd0:
                if (uVar33 <= uVar53 - 4) goto code_r0x00e7ac60;
code_r0x00e7abe4:
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 4) * 8);
                if (piVar27[1] == 1) {
                  iVar52 = *piVar27;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar52 = *piVar27 << 0x10;
                }
                else {
                  iVar52 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                  goto joined_r0x00e7ac2c;
                }
                *piVar27 = 0x82;
                iVar11 = 0;
                if (uVar53 - 5 < uVar33) {
                  iVar11 = 0;
                  goto code_r0x00e7ac30;
                }
code_r0x00e7abbc:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar61 = 0;
                  goto joined_r0x00e7acd0;
                }
                *piVar27 = 0x82;
                iVar61 = 0;
                if (uVar53 - 4 < uVar33) {
                  iVar61 = 0;
                  goto code_r0x00e7abe4;
                }
code_r0x00e7ac60:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar52 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar52 = 0;
                }
              }
              iVar61 = local_e0 + iVar61;
              if (uVar53 - 3 < uVar33) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 3) * 8);
                if (piVar27[1] == 1) {
                  iVar12 = *piVar27;
                  if (iVar12 < 0) {
                    iVar12 = -(0x2000 - iVar12 >> 0xe);
                  }
                  else {
                    iVar12 = iVar12 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar12 = *piVar27 << 0x10;
                }
                else {
                  iVar12 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar12 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar12 = 0;
                }
              }
              iVar52 = iVar52 + iStack_dc + iVar11;
              if (uVar53 - 2 < uVar33) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 2) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else {
                  if (piVar27[1] == 2) {
                    iVar52 = *piVar27 * 0x10000 + iVar52;
                    goto joined_r0x00e7af4c;
                  }
                  iVar11 = *piVar27;
                }
                iVar52 = iVar11 + iVar52;
joined_r0x00e7aeac:
                if (uVar33 <= uVar53 - 1) goto code_r0x00e7ae6c;
code_r0x00e7aeb0:
                piVar27 = (int *)(lVar16 + (ulong)(uVar53 - 1) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto joined_r0x00e7aeac;
                *piVar27 = 0x82;
joined_r0x00e7af4c:
                if (uVar53 - 1 < uVar33) goto code_r0x00e7aeb0;
code_r0x00e7ae6c:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar11 = 0;
                }
              }
              FUN_00e81fd0(&local_4bd0);
              local_e0 = iVar11 + iVar12 + iVar61;
              iStack_dc = iVar52;
              if (uVar23 < uVar53 + 6) goto code_r0x00e7afc8;
              lVar36 = *plVar67;
              lVar16 = *plVar30;
              uVar53 = uVar53 + 6;
            } while( true );
          }
          uVar53 = 0;
          if (uVar59 != 0x18) goto code_r0x00e7c980;
          goto code_r0x00e7afd8;
        case 9:
          if (cVar9 != '\0') {
            if ((char)local_2e8 != '\0') {
              FUN_00e81e48(&local_4bd0,uStack_268 & 0xffffffff,uStack_260 & 0xffffffff);
              if (local_258 != '\0') {
                FUN_00e8368c(&local_4bd0,&local_4bc0,auStack_2a8,uStack_298,uStack_290,1);
              }
              local_2e5 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
              local_2e8._0_1_ = 0;
              local_258 = '\0';
            }
            local_18c._0_1_ = '\x01';
          }
          break;
        case 10:
        case 0x1d:
          if (0x10 < iVar61) goto LAB_00e80bf4;
          uVar63 = (long)iVar61 + 1;
          if (0x10 < uVar63) {
            uVar63 = 0;
            *(int *)ppuVar1 = 0x82;
          }
          lVar16 = *plVar67;
          local_6480 = puVar58 + uVar63 * 4;
          if (lVar16 == *plVar30) {
            piVar27 = (int *)*puVar43;
            if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto joined_r0x00e7b84c;
            iVar11 = 0;
            *piVar27 = 0xa1;
          }
          else if (*(int *)(lVar16 + -4) == 2) {
            *plVar67 = lVar16 + -8;
            iVar11 = *(int *)(lVar16 + -8);
          }
          else {
            piVar27 = (int *)*puVar43;
            if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
              *piVar27 = 0xa0;
            }
joined_r0x00e7b84c:
            iVar11 = 0;
          }
          if ((cVar9 != '\0') && (*(long *)(lVar60 + 0x4a0) != 0)) {
            piVar27 = (int *)FUN_00e148b4();
            if (piVar27 == (int *)0x0) {
              iVar11 = -1;
            }
            else {
              iVar11 = *piVar27;
            }
          }
          local_6480[1] = 0;
          *local_6480 = 0;
          local_6480[3] = 0;
          local_6480[2] = 0;
          if (uVar59 == 0x1d) {
            uVar59 = *(int *)(lVar60 + 0x44c) + iVar11;
            if (*(uint *)(lVar60 + 0x444) <= uVar59) goto LAB_00e80bf4;
            lVar16 = *(long *)(lVar60 + 0x458);
            uVar46 = *(undefined8 *)(lVar16 + (ulong)uVar59 * 8);
            local_6480[3] = uVar46;
            local_6480[1] = uVar46;
            lVar16 = *(long *)(lVar16 + (ulong)(uVar59 + 1) * 8);
            lVar36 = 0x10;
          }
          else {
            uVar59 = *(int *)(lVar60 + 0x448) + iVar11;
            if (*(uint *)(lVar60 + 0x440) <= uVar59) goto LAB_00e80bf4;
            lVar36 = *(long *)(lVar60 + 0x450);
            lVar16 = *(long *)(lVar36 + (ulong)uVar59 * 8);
            local_6480[1] = lVar16;
            if (*(char *)(lVar60 + 0x5c) == '\0') {
code_r0x00e7c098:
              lVar36 = *(long *)(lVar36 + (ulong)(uVar59 + 1) * 8);
            }
            else {
              if (*(long *)(lVar60 + 0x498) == 0) {
                lVar16 = lVar16 + ((long)*(int *)(lVar60 + 0x490) &
                                  ((long)*(int *)(lVar60 + 0x490) >> 0x3f ^ 0xffffffffffffffffU));
                local_6480[1] = lVar16;
                goto code_r0x00e7c098;
              }
              lVar36 = lVar16 + (ulong)*(uint *)(*(long *)(lVar60 + 0x498) + (ulong)uVar59 * 4);
            }
            local_6480[2] = lVar36;
            lVar36 = 0x18;
          }
          *(long *)((long)local_6480 + lVar36) = lVar16;
          uVar63 = (ulong)(iVar61 + 1);
          goto LAB_00e79754;
        case 0xb:
          uVar63 = (ulong)(iVar61 - 1U);
          if (iVar61 < 1) {
LAB_00e80bf4:
            iVar11 = 0x12;
            iVar66 = *(int *)ppuVar1;
            goto joined_r0x00e80de4;
          }
          uVar26 = uVar63;
          if (0x10 < iVar61 - 1U) {
            *(int *)ppuVar1 = 0x82;
            uVar26 = 0;
          }
          local_6480 = puVar58 + uVar26 * 4;
          goto LAB_00e79754;
        case 0xc:
          if (pbVar38 < pbVar44) {
            *puVar55 = (ulong)((long)pbVar38 + 1);
            bVar31 = *pbVar38;
            switch(bVar31) {
            case 8:
            case 0xd:
            case 0x13:
            case 0x19:
            case 0x1f:
            case 0x20:
              break;
            default:
code_r0x00e7c1c4:
              if (bVar31 < 0x26) goto code_r0x00e7c1cc;
              break;
            case 0x22:
              puVar20 = &UNK_0197bbf8;
              goto code_r0x00e7cb48;
            case 0x23:
              FUN_00e821cc(puVar15,&iStack_dc,&local_e0,&local_4bd0,&UNK_0197bc04,0);
              break;
            case 0x24:
              puVar20 = &UNK_0197bc10;
code_r0x00e7cb48:
              uVar46 = 0;
code_r0x00e7974c:
              FUN_00e821cc(puVar15,&iStack_dc,&local_e0,&local_4bd0,puVar20,uVar46);
              goto LAB_00e79754;
            case 0x25:
              uVar46 = 1;
              puVar20 = &UNK_0197bc1c;
              goto code_r0x00e7974c;
            }
            break;
          }
          piVar27 = (int *)*local_6480;
          if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
            *piVar27 = 0x55;
            bVar31 = 0;
            goto code_r0x00e7c1c4;
          }
          bVar31 = 0;
code_r0x00e7c1cc:
          if (*(char *)((long)param_1 + 0xd) != '\0') break;
          iVar11 = (int)local_64e8;
          if (((bVar31 != 0x11) && (cVar9 != '\0')) && (0 < iVar11)) {
            local_64e8 = 0;
            break;
          }
          switch(bVar31) {
          case 1:
          case 2:
            if (cVar9 == '\0') goto LAB_00e7cb5c;
            piVar27 = (int *)*plVar30;
            uVar59 = (uint)((ulong)(*plVar67 - (long)piVar27) >> 3);
            if (uVar59 == 0) {
              piVar45 = (int *)*puVar43;
              if (piVar45 == (int *)0x0) {
                piVar45 = (int *)0x0;
                bVar7 = true;
code_r0x00e7e300:
                if ((!bVar7) && (*piVar45 == 0)) {
                  *piVar45 = 0x82;
                }
                goto code_r0x00e7f180;
              }
              if (*piVar45 == 0) {
                *piVar45 = 0x82;
                piVar45 = (int *)*puVar43;
                iVar11 = 0;
                if (piVar45 != (int *)0x0) goto code_r0x00e7dde0;
                iVar11 = 0;
code_r0x00e7e2f0:
                bVar7 = true;
joined_r0x00e7e2fc:
                iVar61 = 0;
                goto joined_r0x00e7ee68;
              }
            }
            else {
              if (piVar27[1] == 1) {
                iVar11 = *piVar27;
                if (-1 < iVar11) {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  goto joined_r0x00e7de28;
                }
                iVar11 = -(0x2000 - iVar11 >> 0xe);
                if (uVar59 < 3) goto code_r0x00e7ddd4;
code_r0x00e7de2c:
                if (piVar27[5] == 1) {
                  iVar61 = piVar27[4];
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[5] == 2) {
                  iVar61 = piVar27[4] << 0x10;
                }
                else {
                  iVar61 = piVar27[4];
                }
                if (uVar59 < 5) goto code_r0x00e7e5d0;
                if (piVar27[9] != 1) {
                  if (piVar27[9] != 2) {
                    iVar52 = piVar27[8];
                    iVar12 = piVar27[3];
                    goto joined_r0x00e7f1f0;
                  }
                  iVar52 = piVar27[8] << 0x10;
                  iVar12 = piVar27[3];
                  iVar11 = iVar61 - iVar11;
                  goto joined_r0x00e7de08;
                }
                iVar52 = piVar27[8];
                if (-1 < iVar52) {
                  iVar52 = iVar52 + 0x2000 >> 0xe;
                  iVar12 = piVar27[3];
                  iVar11 = iVar61 - iVar11;
                  goto joined_r0x00e7de08;
                }
                iVar52 = -(0x2000 - iVar52 >> 0xe);
                iVar12 = piVar27[3];
joined_r0x00e7f1f0:
                iVar11 = iVar61 - iVar11;
                if (iVar12 == 1) goto code_r0x00e7f110;
code_r0x00e7de0c:
                if (iVar12 == 2) {
                  iVar12 = piVar27[2] << 0x10;
                }
                else {
                  iVar12 = piVar27[2];
                }
              }
              else {
                if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
joined_r0x00e7de28:
                if (2 < uVar59) goto code_r0x00e7de2c;
code_r0x00e7ddd4:
                piVar45 = (int *)*puVar43;
                if (piVar45 == (int *)0x0) goto code_r0x00e7e2f0;
code_r0x00e7dde0:
                if (*piVar45 != 0) {
                  bVar7 = false;
                  goto joined_r0x00e7e2fc;
                }
                *piVar45 = 0x82;
                iVar61 = 0;
code_r0x00e7e5d0:
                piVar45 = (int *)*puVar43;
                if (piVar45 == (int *)0x0) {
                  bVar7 = true;
                }
                else if (*piVar45 == 0) {
                  *piVar45 = 0x82;
                  bVar7 = false;
                }
                else {
                  bVar7 = false;
                }
joined_r0x00e7ee68:
                if (uVar59 < 2) goto code_r0x00e7e300;
                iVar52 = 0;
                iVar12 = piVar27[3];
                iVar11 = iVar61 - iVar11;
joined_r0x00e7de08:
                if (iVar12 != 1) goto code_r0x00e7de0c;
code_r0x00e7f110:
                iVar12 = piVar27[2];
                if (iVar12 < 0) {
                  iVar12 = -(0x2000 - iVar12 >> 0xe);
                }
                else {
                  iVar12 = iVar12 + 0x2000 >> 0xe;
                }
              }
              piVar27[4] = iVar11 - iVar12;
              lVar16 = *plVar30;
              *(undefined4 *)(lVar16 + 0x14) = 0;
              if ((uint)((ulong)(*plVar67 - lVar16) >> 3) < 4) {
code_r0x00e7f180:
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0x82;
                }
              }
              else {
                if (*(int *)(lVar16 + 0x1c) == 1) {
                  iVar11 = *(int *)(lVar16 + 0x18);
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (*(int *)(lVar16 + 0x1c) == 2) {
                  iVar11 = *(int *)(lVar16 + 0x18) << 0x10;
                }
                else {
                  iVar11 = *(int *)(lVar16 + 0x18);
                }
                *(int *)(lVar16 + 0x20) = (iVar52 - iVar61) - iVar11;
                *(undefined4 *)(*plVar30 + 0x24) = 0;
              }
            }
            lVar16 = 0;
            if (bVar31 != 1) {
              lVar16 = 8;
            }
            puVar19 = &local_210;
            if (bVar31 != 1) {
              puVar19 = &local_1d0;
            }
            FUN_00e81ba4(param_1,puVar15,puVar19,param_8,&local_18c,
                         *(undefined4 *)(*(long *)(lVar60 + 0x40) + lVar16));
            cVar9 = *(char *)(lVar60 + 0x438);
            goto joined_r0x00e7f4a0;
          case 3:
            puVar40 = (uint *)*plVar67;
            puVar28 = (uint *)*plVar30;
            if (puVar40 == puVar28) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar59 = 0;
                goto joined_r0x00e7d8a0;
              }
              *piVar27 = 0xa1;
              uVar59 = 0;
              if (puVar40 != puVar28) goto code_r0x00e7d8a4;
              uVar59 = 0;
code_r0x00e7dea8:
              piVar27 = (int *)*puVar43;
              puVar41 = puVar28;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar23 = 0;
              }
              else {
                *piVar27 = 0xa1;
                uVar23 = 0;
              }
            }
            else {
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar59 = *puVar41;
                if ((int)uVar59 < 0) {
                  uVar59 = -((int)(0x2000 - uVar59) >> 0xe);
                  puVar40 = puVar41;
                }
                else {
                  uVar59 = (int)(uVar59 + 0x2000) >> 0xe;
                  puVar40 = puVar41;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar59 = *puVar41 << 0x10;
                puVar40 = puVar41;
              }
              else {
                uVar59 = *puVar41;
                puVar40 = puVar41;
              }
joined_r0x00e7d8a0:
              if (puVar40 == puVar28) goto code_r0x00e7dea8;
code_r0x00e7d8a4:
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar23 = *puVar41;
                if ((int)uVar23 < 0) {
                  uVar23 = -((int)(0x2000 - uVar23) >> 0xe);
                }
                else {
                  uVar23 = (int)(uVar23 + 0x2000) >> 0xe;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar23 = *puVar41 << 0x10;
              }
              else {
                uVar23 = *puVar41;
              }
            }
            if (puVar41 != puVar28 + (ulong)*puVar65 * 2) {
              bVar8 = uVar59 != 0 && uVar23 != 0;
code_r0x00e7eb10:
              *puVar41 = (uint)bVar8;
              goto code_r0x00e7eb14;
            }
            goto code_r0x00e7eb28;
          case 4:
            puVar40 = (uint *)*plVar67;
            puVar28 = (uint *)*plVar30;
            if (puVar40 == puVar28) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar59 = 0;
                goto joined_r0x00e7d8ec;
              }
              *piVar27 = 0xa1;
              uVar59 = 0;
              if (puVar40 != puVar28) goto code_r0x00e7d8f0;
              uVar59 = 0;
code_r0x00e7def8:
              piVar27 = (int *)*puVar43;
              puVar41 = puVar28;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar23 = 0;
              }
              else {
                *piVar27 = 0xa1;
                uVar23 = 0;
              }
            }
            else {
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar59 = *puVar41;
                if ((int)uVar59 < 0) {
                  uVar59 = -((int)(0x2000 - uVar59) >> 0xe);
                  puVar40 = puVar41;
                }
                else {
                  uVar59 = (int)(uVar59 + 0x2000) >> 0xe;
                  puVar40 = puVar41;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar59 = *puVar41 << 0x10;
                puVar40 = puVar41;
              }
              else {
                uVar59 = *puVar41;
                puVar40 = puVar41;
              }
joined_r0x00e7d8ec:
              if (puVar40 == puVar28) goto code_r0x00e7def8;
code_r0x00e7d8f0:
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar23 = *puVar41;
                if ((int)uVar23 < 0) {
                  uVar23 = -((int)(0x2000 - uVar23) >> 0xe);
                }
                else {
                  uVar23 = (int)(uVar23 + 0x2000) >> 0xe;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar23 = *puVar41 << 0x10;
              }
              else {
                uVar23 = *puVar41;
              }
            }
            if (puVar41 != puVar28 + (ulong)*puVar65 * 2) {
              bVar8 = uVar23 != 0 || uVar59 != 0;
              goto code_r0x00e7eb10;
            }
code_r0x00e7eb28:
            piVar27 = (int *)*puVar43;
            break;
          case 5:
            puVar28 = (uint *)*plVar67;
            puVar40 = (uint *)*plVar30;
            if (puVar28 == puVar40) {
              piVar27 = (int *)*puVar43;
              puVar41 = puVar28;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar59 = 0;
              }
              else {
                *piVar27 = 0xa1;
                uVar59 = 0;
              }
            }
            else {
              puVar41 = puVar28 + -2;
              *plVar67 = (long)puVar41;
              if (puVar28[-1] == 1) {
                uVar59 = *puVar41;
                if ((int)uVar59 < 0) {
                  uVar59 = -((int)(0x2000 - uVar59) >> 0xe);
                }
                else {
                  uVar59 = (int)(uVar59 + 0x2000) >> 0xe;
                }
              }
              else if (puVar28[-1] == 2) {
                uVar59 = *puVar41 << 0x10;
              }
              else {
                uVar59 = *puVar41;
              }
            }
            if (puVar41 == puVar40 + (ulong)*puVar65 * 2) goto code_r0x00e7eb28;
            *puVar41 = (uint)(uVar59 == 0);
code_r0x00e7eb14:
            lVar16 = *plVar67;
            *(undefined4 *)(lVar16 + 4) = 2;
            goto code_r0x00e7ed04;
          case 6:
            if (cVar9 == '\0') goto LAB_00e7cb5c;
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            lVar16 = *(long *)(lVar60 + 8);
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                *piVar49 = 0xa1;
              }
joined_r0x00e81074:
              uVar63 = 0;
              if (piVar27 != piVar45) goto code_r0x00e8109c;
code_r0x00e80e94:
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar26 = 0;
              }
              else {
                uVar26 = 0;
                *piVar27 = 0xa1;
code_r0x00e813d4:
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  lVar36 = 0;
                  iVar66 = 0;
                  *piVar27 = 0xa1;
code_r0x00e8144c:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    lVar34 = 0;
                    iVar57 = 0;
                  }
                  else {
                    lVar34 = 0;
                    *piVar27 = 0xa1;
                    piVar27 = (int *)*puVar43;
joined_r0x00e8148c:
                    if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                      iVar57 = 0;
                    }
                    else {
                      iVar57 = 0;
                      *piVar27 = 0xa1;
                    }
                  }
                  goto joined_r0x00e815b8;
                }
              }
              lVar34 = 0;
              iVar66 = 0;
              lVar36 = 0;
              iVar57 = 0;
            }
            else {
              if (piVar27[-1] == 2) {
                *plVar67 = (long)(piVar27 + -2);
                uVar63 = (ulong)(uint)piVar27[-2];
                piVar27 = piVar27 + -2;
              }
              else {
                piVar49 = (int *)*puVar43;
                if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) goto joined_r0x00e81074;
                uVar63 = 0;
                *piVar49 = 0xa0;
              }
              if (piVar27 == piVar45) goto code_r0x00e80e94;
code_r0x00e8109c:
              if (piVar27[-1] != 2) {
                piVar49 = (int *)*puVar43;
                if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                  uVar26 = 0;
                  *piVar49 = 0xa0;
                  goto joined_r0x00e810c0;
                }
                uVar26 = 0;
                if (piVar27 != piVar45) goto code_r0x00e8139c;
                goto code_r0x00e813d4;
              }
              *plVar67 = (long)(piVar27 + -2);
              uVar26 = (ulong)(uint)piVar27[-2];
              piVar27 = piVar27 + -2;
joined_r0x00e810c0:
              if (piVar27 == piVar45) goto code_r0x00e813d4;
code_r0x00e8139c:
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar66 = *piVar49;
                if (iVar66 < 0) {
                  iVar66 = -(0x2000 - iVar66 >> 0xe);
                }
                else {
                  iVar66 = iVar66 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar66 = *piVar49 << 0x10;
              }
              else {
                iVar66 = *piVar49;
              }
              lVar36 = (long)iVar66;
              if (piVar49 == piVar45) goto code_r0x00e8144c;
              piVar49 = piVar27 + -4;
              *plVar67 = (long)piVar49;
              if (piVar27[-3] == 1) {
                iVar57 = *piVar49;
                if (iVar57 < 0) {
                  iVar57 = -(0x2000 - iVar57 >> 0xe);
                }
                else {
                  iVar57 = iVar57 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-3] == 2) {
                iVar57 = *piVar49 << 0x10;
              }
              else {
                iVar57 = *piVar49;
              }
              lVar34 = (long)iVar57;
              if (piVar49 == piVar45) {
                piVar27 = (int *)*puVar43;
                goto joined_r0x00e8148c;
              }
              piVar45 = piVar27 + -6;
              *plVar67 = (long)piVar45;
              if (piVar27[-5] == 1) {
                iVar57 = *piVar45;
                if (iVar57 < 0) {
                  iVar57 = -(0x2000 - iVar57 >> 0xe);
                }
                else {
                  iVar57 = iVar57 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-5] == 2) {
                iVar57 = *piVar45 << 0x10;
              }
              else {
                iVar57 = *piVar45;
              }
            }
joined_r0x00e815b8:
            if ((param_5 != '\0') || (*(char *)(lVar60 + 0x5b) != '\0')) goto LAB_00e80dbc;
            lVar16 = *(long *)(*(long *)(lVar16 + 0xf0) + 0x68);
            if (*(long *)(lVar60 + 0x460) == 0) {
              if (lVar16 == 0) goto LAB_00e80dbc;
              lVar34 = **(long **)(lVar60 + 0x40) + lVar34;
              goto code_r0x00e81728;
            }
            lVar34 = **(long **)(lVar60 + 0x40) + lVar34;
            if (lVar16 != 0) goto code_r0x00e81728;
            if (0xff < (uint)uVar26) goto code_r0x00e8169c;
            pcVar17 = (char *)(**(code **)(*(long *)(lVar60 + 0x488) + 0x28))
                                        (*(undefined2 *)
                                          (*(long *)(*(long *)(lVar60 + 0x488) + 0x30) +
                                          (long)(int)(uint)uVar26 * 2));
            uVar56 = *(uint *)(lVar60 + 0x468);
            if (uVar56 == 0) goto code_r0x00e8169c;
            uVar26 = 0;
            lVar16 = *(long *)(lVar60 + 0x460);
            goto code_r0x00e8166c;
          case 7:
            if (cVar9 != '\0') {
              piVar45 = (int *)*plVar67;
              piVar27 = (int *)*plVar30;
              if (piVar45 == piVar27) {
                piVar48 = (int *)*puVar43;
                piVar49 = piVar45;
                if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                  iVar11 = 0;
                }
                else {
                  *piVar48 = 0xa1;
                  iVar11 = 0;
                }
              }
              else {
                piVar49 = piVar45 + -2;
                *plVar67 = (long)piVar49;
                if (piVar45[-1] == 1) {
                  iVar11 = *piVar49;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar45[-1] == 2) {
                  iVar11 = *piVar49 << 0x10;
                }
                else {
                  iVar11 = *piVar49;
                }
              }
              plVar50 = *(long **)(lVar60 + 0x48);
              plVar50[1] = (long)iVar11;
              if (piVar49 == piVar27) {
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0xa1;
                }
                *plVar50 = 0;
code_r0x00e7f050:
                piVar27 = (int *)*puVar43;
                if (piVar27 == (int *)0x0) {
                  iVar11 = 0;
                  iVar61 = 0;
                }
                else {
                  if (*piVar27 == 0) {
                    iVar11 = 0;
                    *piVar27 = 0xa1;
                    piVar27 = (int *)*puVar43;
                    goto joined_r0x00e7f0c8;
                  }
                  iVar11 = 0;
                  iVar61 = 0;
                }
              }
              else {
                piVar45 = piVar49 + -2;
                *plVar67 = (long)piVar45;
                if (piVar49[-1] == 1) {
                  iVar11 = *piVar45;
                  if (iVar11 < 0) {
                    *plVar50 = (long)-(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    *plVar50 = (long)(iVar11 + 0x2000 >> 0xe);
                  }
                }
                else if (piVar49[-1] == 2) {
                  *plVar50 = (long)(*piVar45 << 0x10);
                }
                else {
                  *plVar50 = (long)*piVar45;
                }
                if (piVar45 == piVar27) goto code_r0x00e7f050;
                piVar45 = piVar49 + -4;
                *plVar67 = (long)piVar45;
                if (piVar49[-3] == 1) {
                  iVar11 = *piVar45;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar49[-3] == 2) {
                  iVar11 = *piVar45 << 0x10;
                }
                else {
                  iVar11 = *piVar45;
                }
                if (piVar45 == piVar27) {
                  piVar27 = (int *)*puVar43;
joined_r0x00e7f0c8:
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar61 = 0;
                  }
                  else {
                    *piVar27 = 0xa1;
                    iVar61 = 0;
                  }
                }
                else {
                  piVar27 = piVar49 + -6;
                  *plVar67 = (long)piVar27;
                  if (piVar49[-5] == 1) {
                    iVar61 = *piVar27;
                    if (iVar61 < 0) {
                      iVar61 = -(0x2000 - iVar61 >> 0xe);
                    }
                    else {
                      iVar61 = iVar61 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar49[-5] == 2) {
                    iVar61 = *piVar27 << 0x10;
                  }
                  else {
                    iVar61 = *piVar27;
                  }
                }
              }
              plVar50 = *(long **)(lVar60 + 0x40);
              *plVar50 = (long)(iVar61 + (int)*plVar50);
              plVar50[1] = (long)(iVar11 + (int)plVar50[1]);
              local_18c._0_1_ = '\x01';
              if (*(char *)(lVar60 + 0x5b) != '\0') goto LAB_00e80dc8;
              if (bVar8) {
                local_e0 = local_e0 + iVar11;
                iStack_dc = iStack_dc + iVar61;
              }
              else {
                bVar8 = false;
              }
            }
          default:
            goto LAB_00e7cb5c;
          case 9:
            piVar45 = (int *)*plVar67;
            piVar27 = (int *)*plVar30;
            if (piVar45 == piVar27) {
              piVar48 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar48 = 0xa1;
                iVar11 = 0;
              }
            }
            else {
              piVar49 = piVar45 + -2;
              *plVar67 = (long)piVar49;
              if (piVar45[-1] != 1) {
                if (piVar45[-1] != 2) {
                  iVar61 = *piVar49;
                  goto joined_r0x00e7df54;
                }
                iVar61 = *piVar49 << 0x10;
                if (iVar61 != -0x80000000) goto code_r0x00e7e924;
code_r0x00e7df58:
                if (piVar49 == piVar27 + (ulong)*puVar65 * 2) goto code_r0x00e7ed2c;
                iVar11 = 0x7fffffff;
                goto code_r0x00e7e99c;
              }
              iVar11 = *piVar49;
              if (iVar11 < 0) {
                iVar61 = -(0x2000 - iVar11 >> 0xe);
joined_r0x00e7df54:
                if (iVar61 == -0x80000000) goto code_r0x00e7df58;
              }
              else {
                iVar61 = iVar11 + 0x2000 >> 0xe;
              }
code_r0x00e7e924:
              iVar11 = -iVar61;
              if (-1 < iVar61) {
                iVar11 = iVar61;
              }
            }
            goto code_r0x00e7ea54;
          case 10:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
                goto joined_r0x00e7d97c;
              }
              *piVar49 = 0xa1;
              iVar11 = 0;
              if (piVar27 != piVar45) goto code_r0x00e7d980;
              iVar11 = 0;
code_r0x00e7dfa4:
              piVar27 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar61 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar61 = 0;
              }
            }
            else {
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  piVar27 = piVar49;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
                piVar27 = piVar49;
              }
              else {
                iVar11 = *piVar49;
                piVar27 = piVar49;
              }
joined_r0x00e7d97c:
              if (piVar27 == piVar45) goto code_r0x00e7dfa4;
code_r0x00e7d980:
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar49;
                if (iVar61 < 0) {
                  iVar61 = -(0x2000 - iVar61 >> 0xe);
                }
                else {
                  iVar61 = iVar61 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar61 = *piVar49 << 0x10;
              }
              else {
                iVar61 = *piVar49;
              }
            }
            if (piVar49 == piVar45 + (ulong)*puVar65 * 2) goto code_r0x00e7ed2c;
            *piVar49 = iVar61 + iVar11;
            goto code_r0x00e7ecf8;
          case 0xb:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
                goto joined_r0x00e7d9c8;
              }
              *piVar49 = 0xa1;
              iVar11 = 0;
              if (piVar27 != piVar45) goto code_r0x00e7d9cc;
              iVar11 = 0;
code_r0x00e7dff4:
              piVar27 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar61 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar61 = 0;
              }
            }
            else {
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  piVar27 = piVar49;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
                piVar27 = piVar49;
              }
              else {
                iVar11 = *piVar49;
                piVar27 = piVar49;
              }
joined_r0x00e7d9c8:
              if (piVar27 == piVar45) goto code_r0x00e7dff4;
code_r0x00e7d9cc:
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar49;
                if (iVar61 < 0) {
                  iVar61 = -(0x2000 - iVar61 >> 0xe);
                }
                else {
                  iVar61 = iVar61 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar61 = *piVar49 << 0x10;
              }
              else {
                iVar61 = *piVar49;
              }
            }
            if (piVar49 != piVar45 + (ulong)*puVar65 * 2) {
              *piVar49 = iVar61 - iVar11;
              goto code_r0x00e7ecf8;
            }
            goto code_r0x00e7ed2c;
          case 0xc:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if ((cVar9 == '\0') || (!bVar5)) {
              if (piVar27 == piVar45) {
                piVar49 = (int *)*puVar43;
                if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                  iVar11 = 0;
                  goto joined_r0x00e7e454;
                }
                *piVar49 = 0xa1;
                iVar11 = 0;
                if (piVar27 != piVar45) goto code_r0x00e7e458;
                iVar11 = 0;
code_r0x00e7e688:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar61 = 0;
                }
                else {
code_r0x00e7e884:
                  iVar61 = 0;
                  *piVar27 = 0xa1;
                }
              }
              else {
                piVar49 = piVar27 + -2;
                *plVar67 = (long)piVar49;
                if (piVar27[-1] == 1) {
                  iVar11 = *piVar49;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                    piVar27 = piVar49;
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                    piVar27 = piVar49;
                  }
                }
                else if (piVar27[-1] == 2) {
                  iVar11 = *piVar49 << 0x10;
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = *piVar49;
                  piVar27 = piVar49;
                }
joined_r0x00e7e454:
                if (piVar27 == piVar45) goto code_r0x00e7e688;
code_r0x00e7e458:
                piVar45 = piVar27 + -2;
                *plVar67 = (long)piVar45;
                if (piVar27[-1] == 1) {
                  iVar61 = *piVar45;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[-1] == 2) {
                  iVar61 = *piVar45 << 0x10;
                }
                else {
                  iVar61 = *piVar45;
                }
              }
            }
            else if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
code_r0x00e7e4b0:
                iVar11 = 0;
                if (piVar27 == piVar45) goto code_r0x00e7d284;
              }
              else {
                *piVar49 = 0xa1;
                iVar11 = 0;
                if (piVar27 == piVar45) {
                  iVar11 = 0;
                  goto code_r0x00e7d284;
                }
              }
code_r0x00e7e4bc:
              if (piVar27[-1] == 2) {
                bVar5 = false;
                *plVar67 = (long)(piVar27 + -2);
                iVar61 = piVar27[-2];
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7e548;
                bVar5 = false;
                *piVar27 = 0xa0;
                iVar61 = 0;
              }
            }
            else {
              if (piVar27[-1] != 2) {
                piVar49 = (int *)*puVar43;
                if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) goto code_r0x00e7e4b0;
                *piVar49 = 0xa0;
                iVar11 = 0;
                if (piVar27 == piVar45) {
                  iVar11 = 0;
                  goto code_r0x00e7d284;
                }
                goto code_r0x00e7e4bc;
              }
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              iVar11 = piVar27[-2];
              piVar27 = piVar49;
              if (piVar49 != piVar45) goto code_r0x00e7e4bc;
code_r0x00e7d284:
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                bVar5 = false;
                goto code_r0x00e7e884;
              }
code_r0x00e7e548:
              iVar61 = 0;
              bVar5 = false;
            }
            uVar13 = FT_DivFix((long)iVar61,(long)iVar11);
            goto code_r0x00e7f568;
          case 0xe:
            piVar45 = (int *)*plVar67;
            piVar27 = (int *)*plVar30;
            if (piVar45 == piVar27) {
              piVar48 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar48 = 0xa1;
                iVar11 = 0;
              }
            }
            else {
              piVar49 = piVar45 + -2;
              *plVar67 = (long)piVar49;
              if (piVar45[-1] != 1) {
                if (piVar45[-1] != 2) {
                  iVar11 = *piVar49;
                  goto joined_r0x00e7e034;
                }
                iVar11 = *piVar49 << 0x10;
                if (iVar11 != -0x80000000) goto code_r0x00e7e984;
code_r0x00e7e038:
                if (piVar49 == piVar27 + (ulong)*puVar65 * 2) goto code_r0x00e7ed2c;
                *piVar49 = 0x7fffffff;
                goto code_r0x00e7ecf8;
              }
              iVar11 = *piVar49;
              if (iVar11 < 0) {
                iVar11 = -(0x2000 - iVar11 >> 0xe);
joined_r0x00e7e034:
                if (iVar11 == -0x80000000) goto code_r0x00e7e038;
              }
              else {
                iVar11 = iVar11 + 0x2000 >> 0xe;
              }
            }
code_r0x00e7e984:
            if (piVar49 != piVar27 + (ulong)*puVar65 * 2) {
              iVar11 = -iVar11;
code_r0x00e7e99c:
              *piVar49 = iVar11;
              goto code_r0x00e7ecf8;
            }
            goto code_r0x00e7ed2c;
          case 0xf:
            puVar40 = (uint *)*plVar67;
            puVar28 = (uint *)*plVar30;
            if (puVar40 == puVar28) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar59 = 0;
                goto joined_r0x00e7da30;
              }
              *piVar27 = 0xa1;
              uVar59 = 0;
              if (puVar40 != puVar28) goto code_r0x00e7da34;
              uVar59 = 0;
code_r0x00e7e088:
              piVar27 = (int *)*puVar43;
              puVar41 = puVar28;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar23 = 0;
              }
              else {
                *piVar27 = 0xa1;
                uVar23 = 0;
              }
            }
            else {
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar59 = *puVar41;
                if ((int)uVar59 < 0) {
                  uVar59 = -((int)(0x2000 - uVar59) >> 0xe);
                  puVar40 = puVar41;
                }
                else {
                  uVar59 = (int)(uVar59 + 0x2000) >> 0xe;
                  puVar40 = puVar41;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar59 = *puVar41 << 0x10;
                puVar40 = puVar41;
              }
              else {
                uVar59 = *puVar41;
                puVar40 = puVar41;
              }
joined_r0x00e7da30:
              if (puVar40 == puVar28) goto code_r0x00e7e088;
code_r0x00e7da34:
              puVar41 = puVar40 + -2;
              *plVar67 = (long)puVar41;
              if (puVar40[-1] == 1) {
                uVar23 = *puVar41;
                if ((int)uVar23 < 0) {
                  uVar23 = -((int)(0x2000 - uVar23) >> 0xe);
                }
                else {
                  uVar23 = (int)(uVar23 + 0x2000) >> 0xe;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar23 = *puVar41 << 0x10;
              }
              else {
                uVar23 = *puVar41;
              }
            }
            if (puVar41 == puVar28 + (ulong)*puVar65 * 2) goto code_r0x00e7ed2c;
            *puVar41 = (uint)(uVar23 == uVar59);
            lVar16 = *plVar67;
            *(undefined4 *)(lVar16 + 4) = 2;
            goto code_r0x00e7ed04;
          case 0x10:
            if (cVar9 == '\0') goto LAB_00e79754;
            piVar49 = (int *)*plVar67;
            piVar27 = (int *)*plVar30;
            piVar45 = piVar27;
            if (piVar49 != piVar27) {
              if (piVar49[-1] == 2) {
                piVar48 = piVar49 + -2;
                *plVar67 = (long)piVar48;
                uVar59 = piVar49[-2];
                piVar49 = piVar48;
                if (piVar48 != piVar27) goto code_r0x00e7e504;
              }
              else {
                piVar48 = (int *)*puVar43;
                if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) goto code_r0x00e7e4f4;
                *piVar48 = 0xa0;
                uVar59 = 0;
                if (piVar49 != piVar27) goto code_r0x00e7e504;
                uVar59 = 0;
              }
code_r0x00e7d390:
              piVar48 = (int *)*puVar43;
              if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) goto joined_r0x00e7e570;
              *piVar48 = 0xa1;
joined_r0x00e7f5fc:
              local_64e8 = 0;
joined_r0x00e7e52c:
              if (uVar59 < 0x1d) goto code_r0x00e7f600;
code_r0x00e7fd1c:
              uVar23 = (uint)local_64e8;
              if ((int)(uVar23 | uVar59) < 0) goto code_r0x00e80ee0;
              if (2 < (int)uVar23) {
                uVar23 = 3;
              }
              local_6584 = 0;
              iVar14 = local_6584;
              if (0 < (int)uVar23) {
                lVar16 = 0;
                piVar49 = (int *)((long)&uStack_f8 + (long)(int)uVar23 * 4 + 4);
                do {
                  if (piVar45 == piVar27) {
                    piVar45 = (int *)*puVar43;
                    if ((piVar45 == (int *)0x0) || (*piVar45 != 0)) {
                      iVar14 = 0;
                      piVar45 = piVar27;
                    }
                    else {
                      *piVar45 = 0xa1;
                      iVar14 = 0;
                      piVar45 = piVar27;
                    }
                  }
                  else {
                    piVar48 = piVar45 + -2;
                    *plVar67 = (long)piVar48;
                    if (piVar45[-1] == 1) {
                      iVar14 = *piVar48;
                      if (iVar14 < 0) {
                        iVar14 = -(0x2000 - iVar14 >> 0xe);
                        piVar45 = piVar48;
                      }
                      else {
                        iVar14 = iVar14 + 0x2000 >> 0xe;
                        piVar45 = piVar48;
                      }
                    }
                    else if (piVar45[-1] == 2) {
                      iVar14 = *piVar48 << 0x10;
                      piVar45 = piVar48;
                    }
                    else {
                      iVar14 = *piVar48;
                      piVar45 = piVar48;
                    }
                  }
                  lVar16 = lVar16 + 1;
                  *piVar49 = iVar14;
                  piVar49 = piVar49 + -1;
                  local_64e8 = (ulong)uVar23;
                } while (lVar16 < (int)uVar23);
                goto code_r0x00e808c8;
              }
              goto LAB_00e79754;
            }
            piVar48 = (int *)*puVar43;
            if ((piVar48 != (int *)0x0) && (*piVar48 == 0)) {
              *piVar48 = 0xa1;
              uVar59 = 0;
              if (piVar49 != piVar27) goto code_r0x00e7e504;
              uVar59 = 0;
              goto code_r0x00e7d390;
            }
code_r0x00e7e4f4:
            uVar59 = 0;
            if (piVar49 == piVar27) goto code_r0x00e7d390;
code_r0x00e7e504:
            if (piVar49[-1] == 2) {
              piVar45 = piVar49 + -2;
              *plVar67 = (long)piVar45;
              local_64e8 = (ulong)(uint)piVar49[-2];
              piVar49 = piVar45;
              goto joined_r0x00e7e52c;
            }
            piVar48 = (int *)*puVar43;
            piVar45 = piVar49;
            if ((piVar48 != (int *)0x0) && (*piVar48 == 0)) {
              *piVar48 = 0xa0;
              goto joined_r0x00e7f5fc;
            }
joined_r0x00e7e570:
            local_64e8 = 0;
            if (0x1c < uVar59) goto code_r0x00e7fd1c;
code_r0x00e7f600:
            iVar14 = (int)local_64e8;
            piVar48 = piVar27;
            switch(&UNK_00e7f61c + (ulong)*(ushort *)(&UNK_0197b8e2 + (ulong)uVar59 * 2) * 4) {
            case (undefined *)0xe7f61c:
              puVar40 = *(uint **)(lVar60 + 0x4d8);
              if (puVar40 == (uint *)0x0) {
                iVar11 = 0x12;
                goto LAB_00e80dd0;
              }
              if (uVar59 == 0x12) {
                uVar59 = 0x13;
              }
              local_6584 = uVar59 - 0xd;
              if (iVar14 != *puVar40 * local_6584) goto code_r0x00e80ee0;
              if (local_6584 != 0) {
                iVar11 = 0;
                uVar59 = (int)((ulong)((long)piVar49 - (long)piVar27) >> 3) - iVar14;
                iVar61 = uVar59 + local_6584;
                do {
                  if (uVar59 < (uint)((ulong)((long)piVar49 - (long)piVar27) >> 3)) {
                    piVar45 = piVar27 + (ulong)uVar59 * 2;
                    if (piVar45[1] == 1) {
                      iVar52 = *piVar45;
                      if (iVar52 < 0) {
                        iVar52 = -(0x2000 - iVar52 >> 0xe);
                        uVar23 = *puVar40;
                      }
                      else {
                        iVar52 = iVar52 + 0x2000 >> 0xe;
                        uVar23 = *puVar40;
                      }
                    }
                    else if (piVar45[1] == 2) {
                      iVar52 = *piVar45 << 0x10;
                      uVar23 = *puVar40;
                    }
                    else {
                      iVar52 = *piVar45;
                      uVar23 = *puVar40;
                    }
                  }
                  else {
                    piVar45 = (int *)*puVar43;
                    if ((piVar45 == (int *)0x0) || (*piVar45 != 0)) {
                      iVar52 = 0;
                      uVar23 = *puVar40;
                    }
                    else {
                      iVar52 = 0;
                      *piVar45 = 0x82;
                      uVar23 = *puVar40;
                    }
                  }
                  if (1 < uVar23) {
                    uVar26 = 1;
                    do {
                      uVar23 = (iVar61 + (int)uVar26) - 1;
                      if (uVar23 < (uint)((ulong)((long)piVar49 - (long)piVar27) >> 3)) {
                        piVar27 = piVar27 + (ulong)uVar23 * 2;
                        if (piVar27[1] == 1) {
                          iVar12 = *piVar27;
                          if (iVar12 < 0) {
                            iVar12 = -(0x2000 - iVar12 >> 0xe);
                          }
                          else {
                            iVar12 = iVar12 + 0x2000 >> 0xe;
                          }
                        }
                        else if (piVar27[1] == 2) {
                          iVar12 = *piVar27 << 0x10;
                        }
                        else {
                          iVar12 = *piVar27;
                        }
                      }
                      else {
                        piVar27 = (int *)*puVar43;
                        if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                          iVar12 = 0;
                        }
                        else {
                          *piVar27 = 0x82;
                          iVar12 = 0;
                        }
                      }
                      iVar12 = FT_MulFix((long)iVar12,
                                         *(undefined8 *)(*(long *)(puVar40 + 0x42) + uVar26 * 8));
                      uVar26 = uVar26 + 1;
                      iVar52 = iVar52 + iVar12;
                      piVar49 = (int *)*plVar67;
                      piVar27 = (int *)*plVar30;
                    } while (uVar26 < *puVar40);
                    iVar61 = iVar61 + (int)uVar26 + -1;
                  }
                  if ((uint)((ulong)((long)piVar49 - (long)piVar27) >> 3) < uVar59) {
                    piVar45 = (int *)*puVar43;
                    if ((piVar45 != (int *)0x0) && (*piVar45 == 0)) {
                      *piVar45 = 0x82;
                    }
                  }
                  else {
                    piVar27[(ulong)uVar59 * 2] = iVar52;
                    piVar27 = (int *)*plVar30;
                    piVar27[(ulong)uVar59 * 2 + 1] = 0;
                  }
                  iVar11 = iVar11 + 1;
                  piVar49 = (int *)*plVar67;
                  uVar59 = uVar59 + 1;
                } while (iVar11 != local_6584);
              }
              if ((uint)((ulong)((long)piVar49 - (long)piVar27) >> 3) < (uint)(iVar14 - local_6584))
              {
                piVar27 = (int *)*puVar43;
                local_64e8 = 0;
                iVar14 = local_6584;
                if ((piVar27 != (int *)0x0) && (local_64e8 = 0, *piVar27 == 0)) {
                  local_64e8 = 0;
                  iVar14 = 0xa1;
                  goto code_r0x00e7d014;
                }
              }
              else {
                piVar27 = piVar49 + (ulong)(uint)(iVar14 - local_6584) * -2;
code_r0x00e7f8f8:
                *plVar67 = (long)piVar27;
code_r0x00e80a90:
                local_64e8 = 0;
                iVar14 = local_6584;
              }
              goto LAB_00e79754;
            case (undefined *)0xe7f8f0:
              local_6584 = 0;
              goto code_r0x00e7f8f8;
            case (undefined *)0xe7fa08:
              if ((iVar14 != 3) ||
                 ((bVar8 && ((*(int *)(lVar60 + 0x3a0) == 0 || (*(int *)(lVar60 + 0x3a4) != 7))))))
              goto code_r0x00e80ee0;
              if (piVar45 == piVar27 + (ulong)*puVar65 * 2) {
                piVar49 = (int *)*puVar43;
                if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                  *piVar49 = 0x82;
                }
              }
              else {
                *piVar45 = iStack_dc;
                lVar16 = *plVar67;
                *(undefined4 *)(lVar16 + 4) = 0;
                piVar45 = (int *)(lVar16 + 8);
                *plVar67 = (long)piVar45;
                piVar27 = (int *)*plVar30;
              }
              if (piVar45 == piVar27 + (ulong)*puVar65 * 2) {
                local_6584 = 2;
                piVar27 = (int *)*puVar43;
                local_64e8 = 0;
                iVar14 = local_6584;
                if (piVar27 != (int *)0x0) {
                  local_6584 = 2;
                  local_64e8 = 0;
                  iVar14 = local_6584;
                  if (*piVar27 == 0) {
                    *piVar27 = 0x82;
                    iVar14 = 2;
                    goto code_r0x00e80b14;
                  }
                }
              }
              else {
                *piVar45 = local_e0;
                lVar16 = *plVar67;
                local_64e8 = 0;
                *(undefined4 *)(lVar16 + 4) = 0;
                *plVar67 = lVar16 + 8;
                local_6584 = 2;
                iVar14 = local_6584;
              }
              goto LAB_00e79754;
            case (undefined *)0xe7fac8:
              if (iVar14 != 0) goto code_r0x00e80ee0;
              local_64e8 = 0;
              local_6584 = 0;
              iVar14 = local_6584;
              bVar7 = false;
              if (bVar8) {
                lVar16 = *(long *)(lVar60 + 0x18);
                if ((*(uint *)(lVar16 + 8) <
                     (int)*(short *)(lVar16 + 0x1a) + (int)*(short *)(lVar16 + 0x62) + 6U) &&
                   (iVar14 = FUN_00e13cd0(lVar16,6,0), iVar14 != 0)) goto LAB_00e80dc8;
                local_64e8 = 0;
                *(undefined8 *)(lVar60 + 0x3a0) = 1;
                goto code_r0x00e808c8;
              }
              goto LAB_00e79754;
            case (undefined *)0xe7fb58:
              if (iVar14 != 0) goto code_r0x00e80ee0;
              local_64e8 = 0;
              local_6584 = 0;
              iVar14 = local_6584;
              bVar7 = false;
              if (bVar8) {
                if (*(int *)(lVar60 + 0x3a0) == 0) goto code_r0x00e80ee0;
                iVar11 = *(int *)(lVar60 + 0x3a4);
                local_64e8 = 0;
                local_6584 = 0;
                *(int *)(lVar60 + 0x3a4) = iVar11 + 1;
                iVar14 = local_6584;
                bVar7 = bVar8;
                if (iVar11 - 1U < 6) {
                  lVar16 = *(long *)(lVar60 + 0x18);
                  if ((*(uint *)(lVar16 + 8) <
                       (int)*(short *)(lVar16 + 0x1a) + (int)*(short *)(lVar16 + 0x62) + 1U) &&
                     (iVar14 = FUN_00e13cd0(lVar16,1,0), iVar14 != 0)) goto code_r0x00e80ee0;
                  iVar14 = iVar11 * 2 + -6;
                  if (iVar11 < 4) {
                    iVar14 = iVar11 * 2;
                  }
                  (&iStack_190)[iVar14] = iStack_dc;
                  (&local_18c)[iVar14] = local_e0;
                  if (iVar11 != 6) {
                    local_64e8 = 0;
                    local_6584 = 0;
                    iVar14 = local_6584;
                    if (iVar11 != 3) goto LAB_00e79754;
                  }
                  FUN_00e81fd0(&local_4bd0,local_188 & 0xffffffff,local_188._4_4_,
                               local_180 & 0xffffffff,local_180._4_4_,local_178 & 0xffffffff,
                               local_178._4_4_);
                  local_64e8 = 0;
                  local_6584 = 0;
                  iVar14 = local_6584;
                }
              }
              goto LAB_00e79754;
            case (undefined *)0xe7fca4:
              if (iVar14 != 1) goto code_r0x00e80ee0;
              local_64e8 = 0;
              local_6584 = 1;
              iVar14 = local_6584;
              bVar7 = false;
              if (bVar8) {
                local_80 = 0;
                uStack_98 = 0;
                uStack_88 = 0;
                local_90 = 0;
                local_1e8 = 0;
                local_1a8 = 0;
                local_a8 = ppuVar1;
                local_a0 = 0x100;
                goto code_r0x00e80b10;
              }
              goto LAB_00e79754;
            case (undefined *)0xe7fd1c:
              goto code_r0x00e7fd1c;
            case (undefined *)0xe7fe24:
              iVar11 = 0x12;
              if ((iVar14 != 1) || (puVar40 = *(uint **)(lVar60 + 0x4d8), puVar40 == (uint *)0x0))
              goto LAB_00e80dd0;
              if (piVar45 == piVar27) {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e8030c;
                iVar14 = 0xa1;
code_r0x00e8088c:
                iVar11 = 0;
                *piVar27 = iVar14;
              }
              else if (piVar45[-1] == 2) {
                puVar15[3] = piVar45 + -2;
                iVar11 = piVar45[-2];
                if (iVar11 < 0) goto code_r0x00e80ee0;
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  iVar14 = 0xa0;
                  goto code_r0x00e8088c;
                }
code_r0x00e8030c:
                iVar11 = 0;
              }
              if (*puVar40 + iVar11 <= *(uint *)(lVar60 + 0x4e8)) {
                memcpy((void *)(*(long *)(lVar60 + 0x4e0) + (long)iVar11 * 8),
                       *(void **)(puVar40 + 0x42),(ulong)*puVar40 << 3);
                local_64e8 = 0;
                goto code_r0x00e808c8;
              }
              goto code_r0x00e80ee0;
            case (undefined *)0xe7fe6c:
              if (iVar14 == 2) {
                if (piVar45 == piVar27) {
                  piVar45 = (int *)*puVar43;
                  if (piVar45 == (int *)0x0) {
                    iVar14 = 0;
                    iVar11 = 0;
                  }
                  else {
                    if (*piVar45 == 0) {
                      *piVar45 = 0xa1;
                      iVar14 = 0;
                      goto code_r0x00e805d0;
                    }
                    iVar14 = 0;
code_r0x00e805e4:
                    iVar11 = 0;
                  }
                }
                else {
                  piVar49 = piVar45 + -2;
                  *plVar67 = (long)piVar49;
                  if (piVar45[-1] == 1) {
                    iVar14 = *piVar49;
                    if (iVar14 < 0) {
                      iVar14 = -(0x2000 - iVar14 >> 0xe);
                    }
                    else {
                      iVar14 = iVar14 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-1] == 2) {
                    iVar14 = *piVar49 << 0x10;
                  }
                  else {
                    iVar14 = *piVar49;
                  }
                  if (piVar49 == piVar27) {
code_r0x00e805d0:
                    piVar45 = (int *)*puVar43;
                    if ((piVar45 == (int *)0x0) || (*piVar45 != 0)) goto code_r0x00e805e4;
                    *piVar45 = 0xa1;
                    iVar11 = 0;
                  }
                  else {
                    piVar48 = piVar45 + -4;
                    *plVar67 = (long)piVar48;
                    if (piVar45[-3] == 1) {
                      iVar11 = *piVar48;
                      if (iVar11 < 0) {
                        iVar11 = -(0x2000 - iVar11 >> 0xe);
                      }
                      else {
                        iVar11 = iVar11 + 0x2000 >> 0xe;
                      }
                    }
                    else if (piVar45[-3] == 2) {
                      iVar11 = *piVar48 << 0x10;
                    }
                    else {
                      iVar11 = *piVar48;
                    }
                  }
                }
                if (piVar48 == piVar27 + (ulong)*puVar65 * 2) break;
                iVar11 = iVar11 + iVar14;
code_r0x00e80980:
                *piVar48 = iVar11;
                goto code_r0x00e80a74;
              }
              goto code_r0x00e80ee0;
            case (undefined *)0xe7feb4:
              if (iVar14 != 2) goto code_r0x00e80ee0;
              if (piVar45 == piVar27) {
                piVar45 = (int *)*puVar43;
                if (piVar45 == (int *)0x0) {
                  iVar14 = 0;
                  iVar11 = 0;
                }
                else {
                  if (*piVar45 == 0) {
                    *piVar45 = 0xa1;
                    iVar14 = 0;
                    goto code_r0x00e8064c;
                  }
                  iVar14 = 0;
code_r0x00e80660:
                  iVar11 = 0;
                }
              }
              else {
                piVar49 = piVar45 + -2;
                *plVar67 = (long)piVar49;
                if (piVar45[-1] == 1) {
                  iVar14 = *piVar49;
                  if (iVar14 < 0) {
                    iVar14 = -(0x2000 - iVar14 >> 0xe);
                  }
                  else {
                    iVar14 = iVar14 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar45[-1] == 2) {
                  iVar14 = *piVar49 << 0x10;
                }
                else {
                  iVar14 = *piVar49;
                }
                if (piVar49 == piVar27) {
code_r0x00e8064c:
                  piVar45 = (int *)*puVar43;
                  if ((piVar45 == (int *)0x0) || (*piVar45 != 0)) goto code_r0x00e80660;
                  *piVar45 = 0xa1;
                  iVar11 = 0;
                }
                else {
                  piVar48 = piVar45 + -4;
                  *plVar67 = (long)piVar48;
                  if (piVar45[-3] == 1) {
                    iVar11 = *piVar48;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-3] == 2) {
                    iVar11 = *piVar48 << 0x10;
                  }
                  else {
                    iVar11 = *piVar48;
                  }
                }
              }
              if (piVar48 != piVar27 + (ulong)*puVar65 * 2) {
                iVar11 = iVar11 - iVar14;
                goto code_r0x00e80980;
              }
              break;
            case (undefined *)0xe7fefc:
              if (iVar14 == 2) {
                if (piVar45 == piVar27) {
                  piVar27 = (int *)*puVar43;
                  if (piVar27 == (int *)0x0) {
                    iVar14 = 0;
                    iVar11 = 0;
                  }
                  else {
                    if (*piVar27 == 0) {
                      *piVar27 = 0xa1;
                      iVar14 = 0;
                      goto code_r0x00e806c8;
                    }
                    iVar14 = 0;
                    iVar11 = 0;
                  }
                }
                else {
                  piVar49 = piVar45 + -2;
                  *plVar67 = (long)piVar49;
                  if (piVar45[-1] == 1) {
                    iVar14 = *piVar49;
                    if (iVar14 < 0) {
                      iVar14 = -(0x2000 - iVar14 >> 0xe);
                    }
                    else {
                      iVar14 = iVar14 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-1] == 2) {
                    iVar14 = *piVar49 << 0x10;
                  }
                  else {
                    iVar14 = *piVar49;
                  }
                  if (piVar49 == piVar27) {
code_r0x00e806c8:
                    piVar27 = (int *)*puVar43;
                    if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                      iVar11 = 0;
                    }
                    else {
                      *piVar27 = 0xa1;
                      iVar11 = 0;
                    }
                  }
                  else {
                    piVar27 = piVar45 + -4;
                    *plVar67 = (long)piVar27;
                    if (piVar45[-3] == 1) {
                      iVar11 = *piVar27;
                      if (iVar11 < 0) {
                        iVar11 = -(0x2000 - iVar11 >> 0xe);
                      }
                      else {
                        iVar11 = iVar11 + 0x2000 >> 0xe;
                      }
                    }
                    else if (piVar45[-3] == 2) {
                      iVar11 = *piVar27 << 0x10;
                    }
                    else {
                      iVar11 = *piVar27;
                    }
                  }
                }
                uVar13 = FT_MulFix((long)iVar11,(long)iVar14);
                goto code_r0x00e809c0;
              }
              goto code_r0x00e80ee0;
            case (undefined *)0xe7ff44:
              if (iVar14 == 2) {
                if (piVar45 == piVar27) {
                  piVar27 = (int *)puVar15[1];
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e80ee0;
                  *piVar27 = 0xa1;
                  iVar14 = 0;
code_r0x00e801f8:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                    *piVar27 = 0xa1;
                  }
                  iVar11 = 0;
                }
                else {
                  piVar49 = piVar45 + -2;
                  *plVar67 = (long)piVar49;
                  if (piVar45[-1] == 1) {
                    iVar14 = *piVar49;
                    if (iVar14 < 0) {
                      iVar14 = -(0x2000 - iVar14 >> 0xe);
                    }
                    else {
                      iVar14 = iVar14 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-1] == 2) {
                    iVar14 = *piVar49 << 0x10;
                  }
                  else {
                    iVar14 = *piVar49;
                  }
                  if (piVar49 == piVar27) goto code_r0x00e801f8;
                  piVar27 = piVar45 + -4;
                  *plVar67 = (long)piVar27;
                  if (piVar45[-3] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-3] == 2) {
                    iVar11 = *piVar27 << 0x10;
                  }
                  else {
                    iVar11 = *piVar27;
                  }
                }
                if (iVar14 != 0) {
                  uVar13 = FT_DivFix((long)iVar11,(long)iVar14);
code_r0x00e809c0:
                  if ((undefined4 *)*plVar67 == (undefined4 *)(*plVar30 + (ulong)*puVar65 * 8))
                  break;
                  *(undefined4 *)*plVar67 = uVar13;
code_r0x00e80a74:
                  lVar16 = *plVar67;
                  *(undefined4 *)(lVar16 + 4) = 0;
                  *plVar67 = lVar16 + 8;
                  local_6584 = 1;
                  goto code_r0x00e80a90;
                }
              }
code_r0x00e80ee0:
              iVar11 = 0x12;
              goto LAB_00e80dd0;
            case (undefined *)0xe7ff8c:
              iVar11 = 0x12;
              if ((iVar14 != 2) || (*(long *)(lVar60 + 0x4d8) == 0)) goto LAB_00e80dd0;
              if (piVar45 == piVar27) {
                piVar45 = (int *)*puVar43;
                if ((piVar45 != (int *)0x0) && (*piVar45 == 0)) {
                  *piVar45 = 0xa1;
                }
                iVar14 = *(int *)(lVar60 + 0x4e8);
                piVar49 = piVar27;
joined_r0x00e804c0:
                uVar59 = 0;
                if (iVar14 == 0) goto code_r0x00e80ee0;
              }
              else {
                if (piVar45[-1] != 2) {
                  piVar48 = (int *)*puVar43;
                  piVar49 = piVar45;
                  if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                    iVar14 = *(int *)(lVar60 + 0x4e8);
                  }
                  else {
                    *piVar48 = 0xa0;
                    iVar14 = *(int *)(lVar60 + 0x4e8);
                  }
                  goto joined_r0x00e804c0;
                }
                piVar49 = piVar45 + -2;
                puVar15[3] = piVar49;
                uVar59 = piVar45[-2];
                if (((int)uVar59 < 0) || (*(uint *)(lVar60 + 0x4e8) <= uVar59))
                goto code_r0x00e80ee0;
              }
              if (piVar49 == piVar27) {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar14 = 0;
                }
                else {
                  *piVar27 = 0xa1;
                  iVar14 = 0;
                }
              }
              else {
                piVar27 = piVar49 + -2;
                *plVar67 = (long)piVar27;
                if (piVar49[-1] == 1) {
                  iVar14 = *piVar27;
                  if (iVar14 < 0) {
                    iVar14 = -(0x2000 - iVar14 >> 0xe);
                  }
                  else {
                    iVar14 = iVar14 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar49[-1] == 2) {
                  iVar14 = *piVar27 << 0x10;
                }
                else {
                  iVar14 = *piVar27;
                }
              }
              local_64e8 = 0;
              *(long *)(*(long *)(lVar60 + 0x4e0) + (long)(int)uVar59 * 8) = (long)iVar14;
code_r0x00e808c8:
              local_6584 = 0;
              iVar14 = local_6584;
              bVar7 = bVar8;
              goto LAB_00e79754;
            case (undefined *)0xe7ffe8:
              iVar11 = 0x12;
              if ((iVar14 != 1) || (*(long *)(lVar60 + 0x4d8) == 0)) goto LAB_00e80dd0;
              if (piVar45 == piVar27) {
                piVar45 = (int *)*puVar43;
                if ((piVar45 != (int *)0x0) && (*piVar45 == 0)) {
                  *piVar45 = 0xa1;
                }
                iVar14 = *(int *)(lVar60 + 0x4e8);
                piVar49 = piVar27;
joined_r0x00e80548:
                uVar59 = 0;
                if (iVar14 == 0) goto code_r0x00e80ee0;
              }
              else {
                if (piVar45[-1] != 2) {
                  piVar48 = (int *)*puVar43;
                  piVar49 = piVar45;
                  if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                    iVar14 = *(int *)(lVar60 + 0x4e8);
                  }
                  else {
                    *piVar48 = 0xa0;
                    iVar14 = *(int *)(lVar60 + 0x4e8);
                  }
                  goto joined_r0x00e80548;
                }
                piVar49 = piVar45 + -2;
                puVar15[3] = piVar49;
                uVar59 = piVar45[-2];
                if (((int)uVar59 < 0) || (*(uint *)(lVar60 + 0x4e8) <= uVar59))
                goto code_r0x00e80ee0;
              }
              if (piVar49 != piVar27 + (ulong)*puVar65 * 2) {
                *piVar49 = (int)*(undefined8 *)(*(long *)(lVar60 + 0x4e0) + (long)(int)uVar59 * 8);
                goto code_r0x00e80a74;
              }
              break;
            case (undefined *)0xe80044:
              if (iVar14 != 4) goto code_r0x00e80ee0;
              if (piVar45 == piVar27) {
                piVar45 = (int *)*puVar43;
                if (piVar45 == (int *)0x0) {
                  iVar14 = 0;
code_r0x00e80800:
                  iVar61 = 0;
                  iVar11 = 0;
                }
                else {
                  if (*piVar45 == 0) {
                    *piVar45 = 0xa1;
                    iVar14 = 0;
                    goto code_r0x00e807b0;
                  }
                  iVar61 = 0;
                  iVar14 = 0;
                  iVar11 = 0;
                }
code_r0x00e80a4c:
                iVar52 = 0;
                piVar49 = piVar27;
              }
              else {
                piVar49 = piVar45 + -2;
                *plVar67 = (long)piVar49;
                if (piVar45[-1] == 1) {
                  iVar14 = *piVar49;
                  if (iVar14 < 0) {
                    iVar14 = -(0x2000 - iVar14 >> 0xe);
                  }
                  else {
                    iVar14 = iVar14 + 0x2000 >> 0xe;
                  }
joined_r0x00e80430:
                  if (piVar49 != piVar27) goto code_r0x00e8077c;
code_r0x00e807b0:
                  piVar45 = (int *)*puVar43;
                  if (piVar45 == (int *)0x0) goto code_r0x00e80800;
                  if (*piVar45 != 0) {
                    iVar61 = 0;
                    iVar11 = 0;
                    goto code_r0x00e80a4c;
                  }
                  *piVar45 = 0xa1;
                  iVar11 = 0;
code_r0x00e8083c:
                  piVar45 = (int *)*puVar43;
                  if (piVar45 == (int *)0x0) {
                    iVar61 = 0;
                  }
                  else if (*piVar45 == 0) {
                    *piVar45 = 0xa1;
                    piVar45 = (int *)*puVar43;
                    iVar61 = 0;
                    if (piVar45 != (int *)0x0) goto code_r0x00e80a40;
                  }
                  else {
                    iVar61 = 0;
                  }
                  goto code_r0x00e80a4c;
                }
                if (piVar45[-1] != 2) {
                  iVar14 = *piVar49;
                  goto joined_r0x00e80430;
                }
                iVar14 = *piVar49 << 0x10;
                if (piVar49 == piVar27) goto code_r0x00e807b0;
code_r0x00e8077c:
                piVar49 = piVar45 + -4;
                *plVar67 = (long)piVar49;
                if (piVar45[-3] == 1) {
                  iVar11 = *piVar49;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar45[-3] == 2) {
                  iVar11 = *piVar49 << 0x10;
                }
                else {
                  iVar11 = *piVar49;
                }
                if (piVar49 == piVar27) goto code_r0x00e8083c;
                piVar49 = piVar45 + -6;
                *plVar67 = (long)piVar49;
                if (piVar45[-5] == 1) {
                  iVar61 = *piVar49;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar45[-5] == 2) {
                  iVar61 = *piVar49 << 0x10;
                }
                else {
                  iVar61 = *piVar49;
                }
                if (piVar49 == piVar27) {
                  piVar45 = (int *)*puVar43;
                  if (piVar45 == (int *)0x0) goto code_r0x00e80a4c;
code_r0x00e80a40:
                  if (*piVar45 == 0) {
                    *piVar45 = 0xa1;
                  }
                  goto code_r0x00e80a4c;
                }
                piVar49 = piVar45 + -8;
                *plVar67 = (long)piVar49;
                if (piVar45[-7] == 1) {
                  iVar52 = *piVar49;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar45[-7] == 2) {
                  iVar52 = *piVar49 << 0x10;
                }
                else {
                  iVar52 = *piVar49;
                }
              }
              if (piVar49 != piVar27 + (ulong)*puVar65 * 2) {
                if (iVar11 <= iVar14) {
                  iVar61 = iVar52;
                }
                *piVar49 = iVar61;
                goto code_r0x00e80a74;
              }
              break;
            case (undefined *)0xe8008c:
              if (iVar14 != 0) goto code_r0x00e80ee0;
              uVar23 = *(uint *)(*(long *)(lVar60 + 0x420) + 0x4c0);
              uVar59 = uVar23 ^ uVar23 << 0xd;
              uVar59 = uVar59 ^ uVar59 >> 0x11;
              *(uint *)(*(long *)(lVar60 + 0x420) + 0x4c0) = uVar59 ^ uVar59 << 5;
              if (piVar45 != piVar27 + (ulong)*puVar65 * 2) {
                *piVar45 = (uVar23 & 0xffff) + 1;
                goto code_r0x00e80a74;
              }
            }
            local_6584 = 1;
            piVar27 = (int *)*puVar43;
            local_64e8 = 0;
            iVar14 = local_6584;
            if (piVar27 != (int *)0x0) {
              local_6584 = 1;
              local_64e8 = 0;
              iVar14 = local_6584;
              if (*piVar27 == 0) {
                *piVar27 = 0x82;
code_r0x00e80b10:
                iVar14 = 1;
code_r0x00e80b14:
                local_64e8 = 0;
                bVar7 = bVar8;
              }
            }
            goto LAB_00e79754;
          case 0x11:
            if ((cVar9 == '\0') || (iVar14 = local_6584 + -1, 0 < local_6584)) goto LAB_00e79754;
            if (iVar11 == 0) goto code_r0x00e80ee0;
            local_64e8 = (long)iVar11 - 1;
            if ((undefined4 *)*plVar67 != (undefined4 *)(*plVar30 + (ulong)*puVar65 * 8)) {
              *(undefined4 *)*plVar67 = *(undefined4 *)((long)&local_f0 + local_64e8 * 4);
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              *plVar67 = lVar16 + 8;
              iVar14 = local_6584;
              goto LAB_00e79754;
            }
            piVar27 = (int *)*puVar43;
            break;
          case 0x12:
            if (*plVar67 != *plVar30) {
              lVar16 = *plVar67 + -8;
              goto LAB_00e7cb64;
            }
            piVar27 = (int *)*puVar43;
joined_r0x00e7d78c:
            if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
              iVar14 = 0xa1;
              goto code_r0x00e7d014;
            }
            goto LAB_00e79754;
          case 0x14:
            lVar16 = *plVar67;
            lVar36 = *plVar30;
            if (lVar16 == lVar36) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
code_r0x00e7dc64:
                uVar59 = 0;
                if (lVar16 == lVar36) goto code_r0x00e7d450;
              }
              else {
                *piVar27 = 0xa1;
                uVar59 = 0;
                if (lVar16 == lVar36) {
                  uVar59 = 0;
                  goto code_r0x00e7d450;
                }
              }
code_r0x00e7dc70:
              piVar27 = (int *)(lVar16 + -8);
              *plVar67 = (long)piVar27;
              if (*(int *)(lVar16 + -4) == 1) {
                iVar11 = *piVar27;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else if (*(int *)(lVar16 + -4) == 2) {
                iVar11 = *piVar27 << 0x10;
              }
              else {
                iVar11 = *piVar27;
              }
            }
            else {
              if (*(int *)(lVar16 + -4) != 2) {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7dc64;
                *piVar27 = 0xa0;
                uVar59 = 0;
                if (lVar16 == lVar36) {
                  uVar59 = 0;
                  goto code_r0x00e7d450;
                }
                goto code_r0x00e7dc70;
              }
              lVar34 = lVar16 + -8;
              *plVar67 = lVar34;
              uVar59 = *(uint *)(lVar16 + -8);
              lVar16 = lVar34;
              if (lVar34 != lVar36) goto code_r0x00e7dc70;
code_r0x00e7d450:
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar11 = 0;
              }
            }
            if (uVar59 < 0x20) {
              *(int *)((long)&local_170 + (long)(int)uVar59 * 4) = iVar11;
            }
            goto LAB_00e79754;
          case 0x15:
            puVar39 = (undefined4 *)*plVar67;
            puVar29 = (undefined4 *)*plVar30;
            puVar42 = puVar39;
            if (puVar39 == puVar29) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7dcb0;
              iVar11 = 0xa1;
code_r0x00e7ee88:
              uVar59 = 0;
              *piVar27 = iVar11;
            }
            else if (puVar39[-1] == 2) {
              puVar42 = puVar39 + -2;
              *plVar67 = (long)puVar42;
              uVar59 = puVar39[-2];
              if (0x1f < uVar59) goto LAB_00e79754;
            }
            else {
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                iVar11 = 0xa0;
                goto code_r0x00e7ee88;
              }
code_r0x00e7dcb0:
              uVar59 = 0;
            }
            if (puVar42 == puVar29 + (ulong)*puVar65 * 2) goto code_r0x00e7f3f4;
            *puVar42 = *(undefined4 *)((long)&local_170 + (long)(int)uVar59 * 4);
code_r0x00e7f3bc:
            lVar16 = *plVar67;
            *(undefined4 *)(lVar16 + 4) = 0;
            *plVar67 = lVar16 + 8;
            goto LAB_00e79754;
          case 0x16:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
                goto joined_r0x00e7e0c0;
              }
              *piVar49 = 0xa1;
              iVar11 = 0;
              if (piVar27 != piVar45) goto code_r0x00e7daec;
              iVar11 = 0;
code_r0x00e7e0d8:
              piVar27 = (int *)*puVar43;
              if (piVar27 == (int *)0x0) {
                iVar61 = 0;
                iVar52 = 0;
              }
              else if (*piVar27 == 0) {
                *piVar27 = 0xa1;
                iVar61 = 0;
code_r0x00e7ec34:
                piVar27 = (int *)*puVar43;
                if (piVar27 == (int *)0x0) {
                  iVar52 = 0;
                }
                else if (*piVar27 == 0) {
                  *piVar27 = 0xa1;
                  iVar52 = 0;
code_r0x00e7edc8:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                    *piVar27 = 0xa1;
                  }
                }
                else {
                  iVar52 = 0;
                }
              }
              else {
                iVar52 = 0;
                iVar61 = 0;
              }
              iVar12 = 0;
              piVar49 = piVar45;
            }
            else {
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  piVar27 = piVar49;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
                piVar27 = piVar49;
              }
              else {
                iVar11 = *piVar49;
                piVar27 = piVar49;
              }
joined_r0x00e7e0c0:
              if (piVar27 == piVar45) goto code_r0x00e7e0d8;
code_r0x00e7daec:
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar49;
                if (iVar61 < 0) {
                  iVar61 = -(0x2000 - iVar61 >> 0xe);
                  goto joined_r0x00e7ebfc;
                }
                iVar61 = iVar61 + 0x2000 >> 0xe;
                if (piVar49 != piVar45) goto code_r0x00e7ec00;
                goto code_r0x00e7ec34;
              }
              if (piVar27[-1] == 2) {
                iVar61 = *piVar49 << 0x10;
              }
              else {
                iVar61 = *piVar49;
              }
joined_r0x00e7ebfc:
              if (piVar49 == piVar45) goto code_r0x00e7ec34;
code_r0x00e7ec00:
              piVar49 = piVar27 + -4;
              *plVar67 = (long)piVar49;
              if (piVar27[-3] == 1) {
                iVar52 = *piVar49;
                if (iVar52 < 0) {
                  iVar52 = -(0x2000 - iVar52 >> 0xe);
                }
                else {
                  iVar52 = iVar52 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-3] == 2) {
                iVar52 = *piVar49 << 0x10;
              }
              else {
                iVar52 = *piVar49;
              }
              if (piVar49 == piVar45) goto code_r0x00e7edc8;
              piVar49 = piVar27 + -6;
              *plVar67 = (long)piVar49;
              if (piVar27[-5] == 1) {
                iVar12 = *piVar49;
                if (iVar12 < 0) {
                  iVar12 = -(0x2000 - iVar12 >> 0xe);
                }
                else {
                  iVar12 = iVar12 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-5] == 2) {
                iVar12 = *piVar49 << 0x10;
              }
              else {
                iVar12 = *piVar49;
              }
            }
            if (piVar49 != piVar45 + (ulong)*puVar65 * 2) {
              if (iVar61 <= iVar11) {
                iVar52 = iVar12;
              }
              *piVar49 = iVar52;
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              *plVar67 = lVar16 + 8;
              goto LAB_00e79754;
            }
            piVar27 = (int *)*puVar43;
            break;
          case 0x17:
            uVar23 = *(uint *)(*(long *)(lVar60 + 0x420) + 0x4c0);
            uVar59 = uVar23 ^ uVar23 << 0xd;
            uVar59 = uVar59 ^ uVar59 >> 0x11;
            *(uint *)(*(long *)(lVar60 + 0x420) + 0x4c0) = uVar59 ^ uVar59 << 5;
            if ((int *)*plVar67 != (int *)(*plVar30 + (ulong)*puVar65 * 8)) {
              *(int *)*plVar67 = (uVar23 & 0xffff) + 1;
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              lVar16 = lVar16 + 8;
              goto LAB_00e7cb64;
            }
            piVar27 = (int *)*puVar43;
            break;
          case 0x18:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
                goto joined_r0x00e7db54;
              }
              *piVar49 = 0xa1;
              iVar11 = 0;
              if (piVar27 != piVar45) goto code_r0x00e7db58;
              iVar11 = 0;
code_r0x00e7e128:
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar61 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar61 = 0;
              }
            }
            else {
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  piVar27 = piVar49;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
                piVar27 = piVar49;
              }
              else {
                iVar11 = *piVar49;
                piVar27 = piVar49;
              }
joined_r0x00e7db54:
              if (piVar27 == piVar45) goto code_r0x00e7e128;
code_r0x00e7db58:
              piVar45 = piVar27 + -2;
              *plVar67 = (long)piVar45;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar45;
                if (iVar61 < 0) {
                  iVar61 = -(0x2000 - iVar61 >> 0xe);
                }
                else {
                  iVar61 = iVar61 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar61 = *piVar45 << 0x10;
              }
              else {
                iVar61 = *piVar45;
              }
            }
            uVar13 = FT_MulFix((long)iVar61,(long)iVar11);
code_r0x00e7f568:
            if ((undefined4 *)*plVar67 != (undefined4 *)(*plVar30 + (ulong)*puVar65 * 8)) {
              *(undefined4 *)*plVar67 = uVar13;
code_r0x00e7f590:
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              *plVar67 = lVar16 + 8;
              goto LAB_00e79754;
            }
code_r0x00e7f5c4:
            piVar27 = (int *)*puVar43;
            break;
          case 0x1a:
            puVar40 = (uint *)*plVar67;
            if (puVar40 == (uint *)*plVar30) {
              piVar27 = (int *)*puVar43;
              puVar28 = puVar40;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                *piVar27 = 0xa1;
              }
            }
            else {
              puVar28 = puVar40 + -2;
              *plVar67 = (long)puVar28;
              if (puVar40[-1] == 1) {
                uVar59 = *puVar28;
                if ((int)uVar59 < 0) {
                  uVar59 = -((int)(0x2000 - uVar59) >> 0xe);
                }
                else {
                  uVar59 = (int)(uVar59 + 0x2000) >> 0xe;
                }
              }
              else if (puVar40[-1] == 2) {
                uVar59 = *puVar28 * 0x10000;
              }
              else {
                uVar59 = *puVar28;
              }
              if ((int)uVar59 < 1) {
                lVar16 = 0;
                puVar40 = puVar28;
                puVar28 = (uint *)*plVar30;
              }
              else {
                lVar36 = (long)(int)(uVar59 >> (9 < (int)uVar59));
                do {
                  lVar16 = lVar36;
                  lVar36 = FT_DivFix((long)(int)uVar59,lVar16);
                  lVar36 = lVar16 + lVar36 + 1 >> 1;
                } while (lVar36 != lVar16);
                puVar40 = (uint *)*plVar67;
                puVar28 = (uint *)*plVar30;
              }
            }
            if (puVar40 != puVar28 + (ulong)*puVar65 * 2) {
              *puVar40 = (uint)lVar16;
              goto code_r0x00e7f590;
            }
            goto code_r0x00e7f5c4;
          case 0x1b:
            piVar45 = (int *)*plVar67;
            piVar27 = (int *)*plVar30;
            if (piVar45 == piVar27) {
              piVar48 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar48 = 0xa1;
                iVar11 = 0;
              }
            }
            else {
              piVar49 = piVar45 + -2;
              *plVar67 = (long)piVar49;
              if (piVar45[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else if (piVar45[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
              }
              else {
                iVar11 = *piVar49;
              }
            }
            if (piVar49 == piVar27 + (ulong)*puVar65 * 2) {
              piVar45 = (int *)*puVar43;
              if ((piVar45 != (int *)0x0) && (*piVar45 == 0)) {
                *piVar45 = 0x82;
              }
            }
            else {
              *piVar49 = iVar11;
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              piVar49 = (int *)(lVar16 + 8);
              *plVar67 = (long)piVar49;
              piVar27 = (int *)*plVar30;
            }
code_r0x00e7ea54:
            if (piVar49 == piVar27 + (ulong)*puVar65 * 2) goto code_r0x00e7ed2c;
            *piVar49 = iVar11;
code_r0x00e7ecf8:
            lVar16 = *plVar67;
            *(undefined4 *)(lVar16 + 4) = 0;
code_r0x00e7ed04:
            *plVar67 = lVar16 + 8;
            goto LAB_00e79754;
          case 0x1c:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
                goto joined_r0x00e7dbdc;
              }
              *piVar49 = 0xa1;
              iVar11 = 0;
              if (piVar27 != piVar45) goto code_r0x00e7dbe0;
              iVar11 = 0;
code_r0x00e7e1c4:
              piVar27 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar61 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar61 = 0;
              }
            }
            else {
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                  piVar27 = piVar49;
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                  piVar27 = piVar49;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
                piVar27 = piVar49;
              }
              else {
                iVar11 = *piVar49;
                piVar27 = piVar49;
              }
joined_r0x00e7dbdc:
              if (piVar27 == piVar45) goto code_r0x00e7e1c4;
code_r0x00e7dbe0:
              piVar49 = piVar27 + -2;
              *plVar67 = (long)piVar49;
              if (piVar27[-1] == 1) {
                iVar61 = *piVar49;
                if (iVar61 < 0) {
                  iVar61 = -(0x2000 - iVar61 >> 0xe);
                }
                else {
                  iVar61 = iVar61 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[-1] == 2) {
                iVar61 = *piVar49 << 0x10;
              }
              else {
                iVar61 = *piVar49;
              }
            }
            if (piVar49 == piVar45 + (ulong)*puVar65 * 2) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                *piVar27 = 0x82;
              }
            }
            else {
              *piVar49 = iVar11;
              lVar16 = *plVar67;
              *(undefined4 *)(lVar16 + 4) = 0;
              piVar49 = (int *)(lVar16 + 8);
              *plVar67 = (long)piVar49;
              piVar45 = (int *)*plVar30;
            }
            if (piVar49 != piVar45 + (ulong)*puVar65 * 2) {
              *piVar49 = iVar61;
              goto code_r0x00e7ecf8;
            }
code_r0x00e7ed2c:
            piVar27 = (int *)*puVar43;
            break;
          case 0x1d:
            piVar27 = (int *)*plVar67;
            piVar45 = (int *)*plVar30;
            if (piVar27 == piVar45) {
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) goto code_r0x00e7dccc;
              iVar11 = 0xa1;
code_r0x00e7eeb8:
              uVar59 = 0;
              *piVar49 = iVar11;
            }
            else if (piVar27[-1] == 2) {
              *plVar67 = (long)(piVar27 + -2);
              uVar59 = piVar27[-2];
              piVar27 = piVar27 + -2;
            }
            else {
              piVar49 = (int *)*puVar43;
              if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                iVar11 = 0xa0;
                goto code_r0x00e7eeb8;
              }
code_r0x00e7dccc:
              uVar59 = 0;
            }
            uVar23 = (uint)((ulong)((long)piVar27 - (long)piVar45) >> 3);
            if (uVar23 == 0) goto LAB_00e79754;
            if ((int)uVar59 < 0) {
              uVar53 = uVar23 - 1;
              if (uVar23 != 0) goto code_r0x00e7ef34;
code_r0x00e7ef14:
              piVar49 = (int *)*puVar43;
              if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar49 = 0x82;
                iVar11 = 0;
              }
            }
            else {
              if (uVar59 < uVar23) {
                uVar53 = ~uVar59 + uVar23;
                if (!CARRY4(~uVar59,uVar23)) goto code_r0x00e7ef14;
              }
              else {
                uVar53 = 0;
              }
code_r0x00e7ef34:
              piVar49 = piVar45 + (ulong)uVar53 * 2;
              if (piVar49[1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else if (piVar49[1] == 2) {
                iVar11 = *piVar49 << 0x10;
              }
              else {
                iVar11 = *piVar49;
              }
            }
            if (piVar27 != piVar45 + (ulong)*puVar65 * 2) {
              *piVar27 = iVar11;
              goto code_r0x00e7f3bc;
            }
code_r0x00e7f3f4:
            piVar27 = (int *)*puVar43;
            break;
          case 0x1e:
            lVar36 = *plVar67;
            lVar34 = *plVar30;
            lVar16 = lVar36;
            if (lVar36 == lVar34) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
code_r0x00e7dcec:
                uVar59 = 0;
              }
              else {
                *piVar27 = 0xa1;
                uVar59 = 0;
              }
            }
            else if (*(int *)(lVar36 + -4) == 2) {
              lVar16 = lVar36 + -8;
              *plVar67 = lVar16;
              uVar59 = *(uint *)(lVar36 + -8);
            }
            else {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7dcec;
              *piVar27 = 0xa0;
              uVar59 = 0;
            }
            if (lVar16 == lVar34) {
              piVar27 = (int *)*puVar43;
              goto joined_r0x00e7d78c;
            }
            if (*(int *)(lVar16 + -4) == 2) {
              *plVar67 = lVar16 + -8;
              uVar23 = *(uint *)(lVar16 + -8);
              if (1 < (int)uVar23) {
                if ((uint)((ulong)((lVar16 + -8) - lVar34) >> 3) < uVar23) {
                  piVar27 = (int *)*puVar43;
                  break;
                }
                if ((int)uVar59 < 0) {
                  iVar11 = 0;
                  if (uVar23 != 0) {
                    iVar11 = (int)-uVar59 / (int)uVar23;
                  }
                  iVar11 = iVar11 * uVar23;
                }
                else {
                  uVar53 = 0;
                  if (uVar23 != 0) {
                    uVar53 = uVar59 / uVar23;
                  }
                  iVar11 = -(uVar53 * uVar23);
                }
                if (uVar59 + iVar11 != 0) {
                  uVar46 = 0x200000000;
                  uVar26 = 0xffffffff;
                  iVar61 = -1;
                  uVar53 = uVar23;
                  do {
                    iVar52 = (int)uVar26;
                    uVar51 = uVar46;
                    if (iVar61 == iVar52) {
                      iVar61 = iVar52 + 1;
                      uVar51 = *(undefined8 *)(*plVar30 + (long)iVar61 * 8);
                      iVar52 = iVar61;
                    }
                    iVar52 = iVar52 + uVar59 + iVar11;
                    uVar33 = -uVar23;
                    if (iVar52 < (int)uVar23) {
                      uVar33 = uVar23 & iVar52 >> 0x1f;
                    }
                    uVar26 = (ulong)(iVar52 + uVar33);
                    uVar35 = -(ulong)(iVar52 + uVar33 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3;
                    uVar53 = uVar53 - 1;
                    uVar46 = *(undefined8 *)(*plVar30 + uVar35);
                    *(undefined8 *)(*plVar30 + uVar35) = uVar51;
                  } while (uVar53 != 0);
                }
              }
            }
            else {
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                iVar14 = 0xa0;
                goto code_r0x00e7d014;
              }
            }
            goto LAB_00e79754;
          case 0x21:
            if ((bVar8) && (cVar9 != '\0')) {
              piVar45 = (int *)*plVar67;
              piVar27 = (int *)*plVar30;
              if (piVar45 == piVar27) {
                piVar48 = (int *)*puVar43;
                piVar49 = piVar45;
                if ((piVar48 == (int *)0x0) || (local_e0 = *piVar48, local_e0 != 0)) {
                  local_e0 = 0;
                }
                else {
                  *piVar48 = 0xa1;
                }
joined_r0x00e7e408:
                if (piVar49 == piVar27) goto code_r0x00e7e63c;
code_r0x00e7e40c:
                piVar27 = piVar49 + -2;
                *plVar67 = (long)piVar27;
                if (piVar49[-1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iStack_dc = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iStack_dc = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar49[-1] == 2) {
                  iStack_dc = *piVar27 << 0x10;
                }
                else {
                  iStack_dc = *piVar27;
                }
              }
              else {
                piVar49 = piVar45 + -2;
                *plVar67 = (long)piVar49;
                if (piVar45[-1] == 1) {
                  iVar11 = *piVar49;
                  if (iVar11 < 0) {
                    local_e0 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    local_e0 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else {
                  if (piVar45[-1] == 2) {
                    local_e0 = *piVar49 << 0x10;
                    goto joined_r0x00e7e408;
                  }
                  local_e0 = *piVar49;
                }
                if (piVar49 != piVar27) goto code_r0x00e7e40c;
code_r0x00e7e63c:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iStack_dc = 0;
                }
                else {
                  *piVar27 = 0xa1;
                  iStack_dc = 0;
                }
              }
              *(undefined4 *)(lVar60 + 0x3a0) = 0;
            }
            goto LAB_00e7cb5c;
          }
joined_r0x00e7efac:
          iVar14 = local_6584;
          if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
            iVar14 = 0x82;
code_r0x00e7d014:
            *piVar27 = iVar14;
            iVar14 = local_6584;
          }
          goto LAB_00e79754;
        case 0xd:
          if (cVar9 != '\0') {
            piVar45 = (int *)*plVar67;
            piVar27 = (int *)*plVar30;
            if (piVar45 == piVar27) {
              piVar48 = (int *)*puVar43;
              piVar49 = piVar45;
              if ((piVar48 == (int *)0x0) || (*piVar48 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar48 = 0xa1;
                iVar11 = 0;
              }
            }
            else {
              piVar49 = piVar45 + -2;
              *plVar67 = (long)piVar49;
              if (piVar45[-1] == 1) {
                iVar11 = *piVar49;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else if (piVar45[-1] == 2) {
                iVar11 = *piVar49 << 0x10;
              }
              else {
                iVar11 = *piVar49;
              }
            }
            plVar50 = *(long **)(lVar60 + 0x48);
            *plVar50 = (long)iVar11;
            plVar50[1] = 0;
            if (piVar49 == piVar27) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                iVar11 = 0;
              }
              else {
                *piVar27 = 0xa1;
                iVar11 = 0;
              }
            }
            else {
              piVar27 = piVar49 + -2;
              *plVar67 = (long)piVar27;
              if (piVar49[-1] == 1) {
                iVar11 = *piVar27;
                if (iVar11 < 0) {
                  iVar11 = -(0x2000 - iVar11 >> 0xe);
                }
                else {
                  iVar11 = iVar11 + 0x2000 >> 0xe;
                }
              }
              else if (piVar49[-1] == 2) {
                iVar11 = *piVar27 << 0x10;
              }
              else {
                iVar11 = *piVar27;
              }
            }
            **(long **)(lVar60 + 0x40) = (long)(iVar11 + (int)**(long **)(lVar60 + 0x40));
            local_18c._0_1_ = '\x01';
            if (*(char *)(lVar60 + 0x5b) != '\0') goto code_r0x00e80bd8;
            if (bVar8) {
              iStack_dc = iStack_dc + iVar11;
            }
            else {
              bVar8 = false;
            }
          }
          break;
        case 0xe:
          if ((bVar8) || (cVar9 == '\0')) {
            piVar27 = (int *)*plVar30;
            if ((((uint)((ulong)(*plVar67 - (long)piVar27) >> 3) | 4) == 5) &&
               ((char)local_18c == '\0')) {
              if (piVar27[1] == 1) {
                iVar57 = *piVar27;
                if (iVar57 < 0) {
                  iVar57 = -(0x2000 - iVar57 >> 0xe);
                }
                else {
                  iVar57 = iVar57 + 0x2000 >> 0xe;
                }
              }
              else if (piVar27[1] == 2) {
                iVar57 = *piVar27 << 0x10;
              }
              else {
                iVar57 = *piVar27;
              }
              *param_8 = iVar57 + iVar66;
            }
            local_18c._0_1_ = '\x01';
            if (*(char *)(lVar60 + 0x438) == '\0') {
              if ((char)local_2e8 != '\0') {
                FUN_00e81e48(&local_4bd0,uStack_268 & 0xffffffff,uStack_260 & 0xffffffff);
                if (local_258 != '\0') {
                  FUN_00e8368c(&local_4bd0,&local_4bc0,auStack_2a8,uStack_298,uStack_290,1);
                }
                local_2e5 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
                local_2e8._0_1_ = 0;
                local_258 = '\0';
              }
              if ((*(char *)((long)param_1 + 0xd) == '\0') &&
                 (*(char *)((long)param_1 + 0xc) == '\0')) {
                piVar27 = (int *)puVar15[2];
                piVar45 = (int *)puVar15[3];
                if ((uint)((ulong)((long)piVar45 - (long)piVar27) >> 3) < 2) {
LAB_00e80dc8:
                  iVar11 = 0;
                  goto LAB_00e80dd0;
                }
                if (param_5 != '\0') goto LAB_00e80dbc;
                if (piVar45 == piVar27) {
                  piVar49 = (int *)*puVar43;
                  if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                    uVar63 = 0;
                    *piVar49 = 0xa1;
                    goto joined_r0x00e81328;
                  }
LAB_00e80f00:
                  uVar63 = 0;
                  if (piVar45 == piVar27) goto LAB_00e80e1c;
LAB_00e80f0c:
                  if (piVar45[-1] == 2) {
                    *plVar67 = (long)(piVar45 + -2);
                    uVar56 = piVar45[-2];
                    piVar45 = piVar45 + -2;
                  }
                  else {
                    piVar49 = (int *)*puVar43;
                    if ((piVar49 != (int *)0x0) && (*piVar49 == 0)) {
                      *piVar49 = 0xa0;
                      goto joined_r0x00e81340;
                    }
LAB_00e80f98:
                    uVar56 = 0;
                  }
                  if (piVar45 != piVar27) goto LAB_00e80fa4;
LAB_00e80f34:
                  piVar49 = (int *)*puVar43;
                  if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
                    local_e0 = 0;
                    goto joined_r0x00e81018;
                  }
                  *piVar49 = 0xa1;
                  local_e0 = 0;
                  if (piVar45 == piVar27) {
                    local_e0 = 0;
                    goto LAB_00e81034;
                  }
LAB_00e80f58:
                  piVar27 = piVar45 + -2;
                  *plVar67 = (long)piVar27;
                  if (piVar45[-1] == 1) {
                    iVar66 = *piVar27;
                    if (iVar66 < 0) {
                      iStack_dc = -(0x2000 - iVar66 >> 0xe);
                    }
                    else {
                      iStack_dc = iVar66 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar45[-1] == 2) {
                    iStack_dc = *piVar27 << 0x10;
                  }
                  else {
                    iStack_dc = *piVar27;
                  }
                }
                else {
                  if (piVar45[-1] == 2) {
                    *plVar67 = (long)(piVar45 + -2);
                    uVar63 = (ulong)(uint)piVar45[-2];
                    piVar45 = piVar45 + -2;
                  }
                  else {
                    piVar49 = (int *)*puVar43;
                    if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) goto LAB_00e80f00;
                    uVar63 = 0;
                    *piVar49 = 0xa0;
                  }
joined_r0x00e81328:
                  if (piVar45 != piVar27) goto LAB_00e80f0c;
LAB_00e80e1c:
                  piVar49 = (int *)*puVar43;
                  if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) goto LAB_00e80f98;
                  *piVar49 = 0xa1;
joined_r0x00e81340:
                  uVar56 = 0;
                  if (piVar45 == piVar27) goto LAB_00e80f34;
LAB_00e80fa4:
                  piVar49 = piVar45 + -2;
                  *plVar67 = (long)piVar49;
                  if (piVar45[-1] == 1) {
                    iVar66 = *piVar49;
                    if (iVar66 < 0) {
                      local_e0 = -(0x2000 - iVar66 >> 0xe);
                      piVar45 = piVar49;
                    }
                    else {
                      local_e0 = iVar66 + 0x2000 >> 0xe;
                      piVar45 = piVar49;
                    }
                  }
                  else if (piVar45[-1] == 2) {
                    local_e0 = *piVar49 << 0x10;
                    piVar45 = piVar49;
                  }
                  else {
                    local_e0 = *piVar49;
                    piVar45 = piVar49;
                  }
joined_r0x00e81018:
                  if (piVar45 != piVar27) goto LAB_00e80f58;
LAB_00e81034:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iStack_dc = 0;
                  }
                  else {
                    *piVar27 = 0xa1;
                    iStack_dc = 0;
                  }
                }
                ppuStack_6418 = (undefined8 **)0x0;
                local_6420 = (undefined8 *)0x0;
                uStack_6408 = (undefined8 **)0x0;
                puStack_6410 = (undefined8 *)0x0;
                lVar16 = *(long *)(lVar60 + 8);
                if (*(long *)(*(long *)(lVar16 + 0xf0) + 0x68) != 0) goto LAB_00e8113c;
                iVar11 = 0x12;
                if ((0xff < (uint)uVar63) ||
                   (lVar16 = *(long *)(lVar60 + 0x418), *(long *)(lVar16 + 0x520) == 0))
                goto LAB_00e80dd0;
                sVar10 = (*(code *)**(undefined8 **)(lVar16 + 0x1368))(uVar63);
                if (*(uint *)(lVar16 + 0x24) == 0) goto LAB_00e80dbc;
                uVar63 = 0;
                goto LAB_00e81284;
              }
            }
            iVar11 = 0;
            iVar66 = *(int *)ppuVar1;
joined_r0x00e80c80:
            uVar54 = false;
            goto joined_r0x00e80c80;
          }
          uVar26 = (ulong)local_e0;
          uVar35 = (ulong)iStack_dc;
          if ((char)local_2e8 != '\0') {
            FUN_00e81e48(&local_4bd0,uStack_268 & 0xffffffff,uStack_260 & 0xffffffff);
            if (local_258 != '\0') {
              FUN_00e8368c(&local_4bd0,&local_4bc0,auStack_2a8,uStack_298,uStack_290,1);
            }
                    /* WARNING: Ignoring partial resolution of indirect */
            local_2e8._0_1_ = 0;
            local_258 = '\0';
          }
          local_2e5 = 1;
          uStack_288 = uVar35;
          uStack_280 = uVar26;
          uStack_268 = uVar35;
          uStack_260 = uVar26;
          if ((cStack_4ba8 == '\0') || (*(char *)((long)local_2d0 + 9) != '\0')) {
            FUN_00e8259c(&local_4bc0,local_2e0,local_2d8,local_2d0,local_2c8,0);
          }
          memcpy(&local_3398,&local_4bc0,0x1828);
          local_80 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_1e8 = 0;
          local_1a8 = 0;
          local_a8 = ppuVar1;
          local_a0 = 0x100;
          uVar26 = (ulong)(iVar61 - 1);
          if (0 < iVar61) {
            do {
              while( true ) {
                uVar59 = (int)uVar63 - 1;
                uVar63 = (ulong)uVar59;
                uVar35 = uVar26;
                if (0x10 < uVar59) break;
LAB_00e7b1f8:
                uVar26 = uVar26 - 1;
                if ((int)uVar59 < 1) goto LAB_00e7b220;
              }
              if (*(int *)ppuVar1 != 0) {
                uVar35 = 0;
                goto LAB_00e7b1f8;
              }
              uVar35 = 0;
              *(int *)ppuVar1 = 0x82;
              uVar26 = uVar26 - 1;
            } while (0 < (int)uVar59);
LAB_00e7b220:
            uVar63 = 0;
            local_6480 = puVar58 + uVar35 * 4;
            puVar55 = local_6480 + 3;
          }
          *puVar55 = local_6480[1];
          bVar8 = true;
          break;
        case 0xf:
          if (*(char *)((long)param_1 + 0xd) != '\0') {
            if (*(char *)((long)param_1 + 0x61) != '\0') goto LAB_00e80bf4;
            lVar16 = *plVar67;
            if (lVar16 == *plVar30) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7c0c8;
              iVar11 = 0xa1;
code_r0x00e7cb54:
              iVar61 = 0;
              *piVar27 = iVar11;
            }
            else {
              if (*(int *)(lVar16 + -4) != 2) {
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  iVar11 = 0xa0;
                  goto code_r0x00e7cb54;
                }
code_r0x00e7c0c8:
                *(undefined4 *)(param_1 + 0x12) = 0;
                break;
              }
              *plVar67 = lVar16 + -8;
              iVar61 = *(int *)(lVar16 + -8);
              if (iVar61 < 0) break;
            }
            *(int *)(param_1 + 0x12) = iVar61;
          }
          break;
        case 0x10:
          if (*(char *)((long)param_1 + 0xd) != '\0') {
            if (param_1[0xd] == 0) goto LAB_00e80bf4;
            cVar9 = (**(code **)(param_1[0x51] + 0x18))
                              (param_1 + 0xc,*(undefined4 *)(param_1 + 0x12),
                               *(undefined4 *)((long)param_1 + 0x94),param_1[0x13]);
            if ((cVar9 != '\0') &&
               (iVar11 = (**(code **)(param_1[0x51] + 0x20))
                                   (param_1 + 0xc,*(undefined4 *)(param_1 + 0x12),
                                    *(undefined4 *)((long)param_1 + 0x94),param_1[0x13]),
               iVar11 != 0)) {
              iVar66 = *(int *)ppuVar1;
              goto joined_r0x00e80c80;
            }
            lVar34 = *plVar67;
            lVar36 = *plVar30;
            lVar16 = lVar34;
            if (lVar34 == lVar36) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto code_r0x00e7c0f4;
              iVar11 = 0xa1;
code_r0x00e7cb74:
              uVar59 = 0;
              *piVar27 = iVar11;
            }
            else if (*(int *)(lVar34 + -4) == 2) {
              lVar16 = lVar34 + -8;
              puVar15[3] = lVar16;
              uVar59 = *(uint *)(lVar34 + -8);
              if (uVar56 < uVar59) goto LAB_00e80bf4;
            }
            else {
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                iVar11 = 0xa0;
                goto code_r0x00e7cb74;
              }
code_r0x00e7c0f4:
              uVar59 = 0;
            }
            iVar11 = *(int *)(param_1 + 0x10);
            uVar23 = (uint)((ulong)(lVar16 - lVar36) >> 3);
            if (uVar59 != 0) {
              iVar61 = uVar23 - iVar11 * uVar59;
              uVar26 = 0;
              uVar23 = iVar61 + uVar59;
              do {
                while( true ) {
                  lVar34 = param_1[0x11];
                  uVar53 = iVar61 + (int)uVar26;
                  uVar33 = (uint)((ulong)(lVar16 - lVar36) >> 3);
                  if (uVar33 <= uVar53) break;
                  piVar27 = (int *)(lVar36 + (ulong)uVar53 * 8);
                  if (piVar27[1] == 1) {
                    iVar52 = *piVar27;
                    if (iVar52 < 0) {
                      iVar52 = -(0x2000 - iVar52 >> 0xe);
                      uVar47 = *(uint *)(param_1 + 0x10);
                    }
                    else {
                      iVar52 = iVar52 + 0x2000 >> 0xe;
                      uVar47 = *(uint *)(param_1 + 0x10);
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar52 = *piVar27 << 0x10;
                    uVar47 = *(uint *)(param_1 + 0x10);
                  }
                  else {
                    iVar52 = *piVar27;
                    uVar47 = *(uint *)(param_1 + 0x10);
                  }
                  if (uVar47 < 2) goto code_r0x00e7cdd8;
code_r0x00e7cbd0:
                  lVar64 = 0;
                  do {
                    iVar12 = *(int *)(lVar34 + 4 + lVar64 * 4);
                    if ((uint)((ulong)uVar23 + lVar64) < (uint)((ulong)(lVar16 - lVar36) >> 3)) {
                      piVar27 = (int *)(lVar36 + ((ulong)uVar23 + lVar64 & 0xffffffff) * 8);
                      if (piVar27[1] == 1) {
                        iVar22 = *piVar27;
                        if (iVar22 < 0) {
                          iVar22 = -(0x2000 - iVar22 >> 0xe);
                        }
                        else {
                          iVar22 = iVar22 + 0x2000 >> 0xe;
                        }
                      }
                      else if (piVar27[1] == 2) {
                        iVar22 = *piVar27 << 0x10;
                      }
                      else {
                        iVar22 = *piVar27;
                      }
                    }
                    else {
                      piVar27 = (int *)*puVar43;
                      if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                        iVar22 = 0;
                      }
                      else {
                        *piVar27 = 0x82;
                        iVar22 = 0;
                      }
                    }
                    iVar12 = FT_MulFix((long)iVar12,(long)iVar22);
                    lVar64 = lVar64 + 1;
                    iVar52 = iVar52 + iVar12;
                    lVar16 = *plVar67;
                    lVar36 = *plVar30;
                  } while ((int)lVar64 + 1U < *(uint *)(param_1 + 0x10));
                  uVar23 = uVar23 + (int)lVar64;
                  if ((uint)((ulong)(lVar16 - lVar36) >> 3) < uVar53) goto code_r0x00e7cde0;
code_r0x00e7cce0:
                  *(int *)(lVar36 + (ulong)uVar53 * 8) = iVar52;
                  lVar36 = *plVar30;
                  *(undefined4 *)(lVar36 + (ulong)uVar53 * 8 + 4) = 0;
                  lVar16 = *plVar67;
code_r0x00e7cd00:
                  uVar26 = uVar26 + 1;
                  if (uVar26 == uVar59) goto code_r0x00e7ce0c;
                }
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  uVar47 = *(uint *)(param_1 + 0x10);
                }
                else {
                  *piVar27 = 0x82;
                  uVar47 = *(uint *)(param_1 + 0x10);
                }
                iVar52 = 0;
                if (1 < uVar47) goto code_r0x00e7cbd0;
code_r0x00e7cdd8:
                if (uVar53 <= uVar33) goto code_r0x00e7cce0;
code_r0x00e7cde0:
                piVar27 = (int *)*puVar43;
                if (piVar27 == (int *)0x0) goto code_r0x00e7cd00;
                if (*piVar27 == 0) {
                  *piVar27 = 0x82;
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar59);
code_r0x00e7ce0c:
              uVar23 = (uint)((ulong)(lVar16 - lVar36) >> 3);
            }
            uVar59 = iVar11 * uVar59 - uVar59;
            if (uVar23 < uVar59) {
              piVar27 = (int *)*puVar43;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                *piVar27 = 0xa1;
              }
            }
            else {
              *plVar67 = lVar16 + (ulong)uVar59 * -8;
            }
            *(undefined1 *)((long)param_1 + 0x61) = 1;
            goto LAB_00e79754;
          }
          break;
        case 0x13:
        case 0x14:
          if (((char)local_a0 == '\0') || ((uint)((ulong)(*plVar67 - *plVar30) >> 3) < 2)) {
            FUN_00e81ba4(param_1,puVar15,&local_210,param_8,&local_18c,0);
            if (*(char *)(lVar60 + 0x438) != '\0') goto code_r0x00e80bd8;
            if (uVar59 == 0x13) {
              uVar26 = local_1e8 + local_1a8;
              if (uVar26 < 0x61) {
                local_90 = uVar26 + 7 >> 3;
                uStack_98 = uVar26;
                local_a0 = CONCAT62(local_a0._2_6_,0x101);
                if ((uVar26 != 0) && (local_90 != 0)) {
                  uVar26 = 0;
                  do {
                    puVar2 = (undefined1 *)local_6480[3];
                    if (puVar2 < (undefined1 *)local_6480[2]) {
                      *puVar55 = (ulong)(puVar2 + 1);
                      uVar54 = *puVar2;
                    }
                    else {
                      piVar27 = (int *)*local_6480;
                      if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                        uVar54 = 0;
                      }
                      else {
                        *piVar27 = 0x55;
                        uVar54 = 0;
                      }
                    }
                    *(undefined1 *)((long)&uStack_88 + uVar26) = uVar54;
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < local_90);
                }
              }
              else if ((local_a8 != (undefined8 **)0x0) && (*(int *)local_a8 == 0)) {
                *(int *)local_a8 = 0x12;
              }
            }
            else {
              memset(&uStack_6408,0,0x1810);
              uStack_b0 = 0;
              uStack_c8 = 0;
              iStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_6408._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x20),(undefined1)uStack_6408);
              uStack_6408 = (undefined8 **)CONCAT44(uVar3,(undefined4)uStack_6408);
              uVar26 = local_1e8 + local_1a8;
              if (uVar26 < 0x61) {
                uStack_c0 = uVar26 + 7 >> 3;
                iStack_d0 = 0x101;
                uStack_c8 = uVar26;
                if ((uVar26 != 0) && (uStack_c0 != 0)) {
                  puVar2 = (undefined1 *)local_6480[2];
                  puVar37 = (undefined1 *)local_6480[3];
                  uVar26 = 0;
                  do {
                    if (puVar37 < puVar2) {
                      *puVar55 = (ulong)(puVar37 + 1);
                      uVar54 = *puVar37;
                      puVar37 = puVar37 + 1;
                    }
                    else {
                      piVar27 = (int *)*local_6480;
                      if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                        uVar54 = 0;
                      }
                      else {
                        *piVar27 = 0x55;
                        uVar54 = 0;
                      }
                    }
                    *(undefined1 *)((long)&uStack_b8 + uVar26) = uVar54;
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uStack_c0);
                }
              }
              else if (*(int *)ppuVar1 == 0) {
                *(int *)ppuVar1 = 0x12;
              }
              local_6420 = param_1;
              ppuStack_6418 = &local_1b70;
              puStack_6410 = &local_348;
              ppuStack_d8 = ppuVar1;
              FUN_00e8259c(&local_6420,&local_1d0,&local_210,&ppuStack_d8,0,0);
            }
          }
          break;
        case 0x15:
          piVar27 = (int *)*plVar67;
          piVar45 = (int *)*plVar30;
          if (((char)local_18c == '\0') && (2 < (uint)((ulong)((long)piVar27 - (long)piVar45) >> 3))
             ) {
            if (piVar45[1] == 1) {
              iVar61 = *piVar45;
              if (iVar61 < 0) {
                iVar61 = -(0x2000 - iVar61 >> 0xe);
              }
              else {
                iVar61 = iVar61 + 0x2000 >> 0xe;
              }
            }
            else if (piVar45[1] == 2) {
              iVar61 = *piVar45 << 0x10;
            }
            else {
              iVar61 = *piVar45;
            }
            *param_8 = iVar61 + iVar66;
          }
          local_18c._0_1_ = '\x01';
          if (*(char *)(lVar60 + 0x438) != '\0') goto code_r0x00e80bd8;
          if (piVar27 == piVar45) {
            piVar49 = (int *)*puVar43;
            if ((piVar49 == (int *)0x0) || (*piVar49 != 0)) {
              iVar61 = 0;
            }
            else {
              *piVar49 = 0xa1;
              iVar61 = 0;
            }
          }
          else {
            piVar49 = piVar27 + -2;
            *plVar67 = (long)piVar49;
            if (piVar27[-1] == 1) {
              iVar61 = *piVar49;
              if (iVar61 < 0) {
                iVar61 = -(0x2000 - iVar61 >> 0xe);
                piVar27 = piVar49;
              }
              else {
                iVar61 = iVar61 + 0x2000 >> 0xe;
                piVar27 = piVar49;
              }
            }
            else if (piVar27[-1] == 2) {
              iVar61 = *piVar49 << 0x10;
              piVar27 = piVar49;
            }
            else {
              iVar61 = *piVar49;
              piVar27 = piVar49;
            }
          }
          local_e0 = iVar61 + local_e0;
          if (piVar27 == piVar45) {
            piVar27 = (int *)*puVar43;
            if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
              iVar61 = *(int *)(lVar60 + 0x3a0);
              iStack_dc = iVar11;
            }
            else {
              *piVar27 = 0xa1;
              iVar61 = *(int *)(lVar60 + 0x3a0);
              iStack_dc = iVar11;
            }
            goto joined_r0x00e7c748;
          }
          piVar45 = piVar27 + -2;
          *plVar67 = (long)piVar45;
          if (piVar27[-1] == 1) {
            iVar11 = *piVar45;
            if (iVar11 < 0) {
              iStack_dc = iStack_dc - (0x2000 - iVar11 >> 0xe);
              iVar11 = *(int *)(lVar60 + 0x3a0);
            }
            else {
              iStack_dc = (iVar11 + 0x2000 >> 0xe) + iStack_dc;
              iVar11 = *(int *)(lVar60 + 0x3a0);
            }
          }
          else if (piVar27[-1] == 2) {
            iStack_dc = *piVar45 * 0x10000 + iStack_dc;
            iVar11 = *(int *)(lVar60 + 0x3a0);
          }
          else {
            iStack_dc = *piVar45 + iStack_dc;
            iVar11 = *(int *)(lVar60 + 0x3a0);
          }
          if (iVar11 != 0) break;
code_r0x00e7c7c4:
          iVar11 = iStack_dc;
          iVar61 = local_e0;
          local_18c._0_1_ = '\x01';
          if ((char)local_2e8 != '\0') {
            FUN_00e81e48(&local_4bd0,uStack_268 & 0xffffffff,uStack_260 & 0xffffffff);
            if (local_258 != '\0') {
              FUN_00e8368c(&local_4bd0,&local_4bc0,auStack_2a8,uStack_298,uStack_290,1);
            }
                    /* WARNING: Ignoring partial resolution of indirect */
            local_2e8._0_1_ = 0;
            local_258 = '\0';
          }
code_r0x00e7c86c:
          uStack_260 = (ulong)iVar61;
          uStack_268 = (ulong)iVar11;
          local_2e5 = 1;
          uStack_288 = uStack_268;
          uStack_280 = uStack_260;
          if ((cStack_4ba8 == '\0') || (*(char *)((long)local_2d0 + 9) != '\0')) {
            FUN_00e8259c(&local_4bc0,local_2e0,local_2d8,local_2d0,local_2c8,0);
          }
          memcpy(&local_3398,&local_4bc0,0x1828);
          break;
        case 0x16:
          piVar27 = (int *)*plVar67;
          piVar45 = (int *)*plVar30;
          if (((char)local_18c == '\0') && (1 < (uint)((ulong)((long)piVar27 - (long)piVar45) >> 3))
             ) {
            if (piVar45[1] == 1) {
              iVar11 = *piVar45;
              if (iVar11 < 0) {
                iVar11 = -(0x2000 - iVar11 >> 0xe);
              }
              else {
                iVar11 = iVar11 + 0x2000 >> 0xe;
              }
            }
            else if (piVar45[1] == 2) {
              iVar11 = *piVar45 << 0x10;
            }
            else {
              iVar11 = *piVar45;
            }
            *param_8 = iVar11 + iVar66;
          }
          local_18c._0_1_ = '\x01';
          if (*(char *)(lVar60 + 0x438) != '\0') goto code_r0x00e80bd8;
          if (piVar27 == piVar45) {
            piVar27 = (int *)*puVar43;
            if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
              iVar61 = *(int *)(lVar60 + 0x3a0);
            }
            else {
              *piVar27 = 0xa1;
              iVar61 = *(int *)(lVar60 + 0x3a0);
            }
          }
          else {
            piVar45 = piVar27 + -2;
            *plVar67 = (long)piVar45;
            if (piVar27[-1] == 1) {
              iVar11 = *piVar45;
              if (iVar11 < 0) {
                iStack_dc = iStack_dc - (0x2000 - iVar11 >> 0xe);
                iVar61 = *(int *)(lVar60 + 0x3a0);
              }
              else {
                iStack_dc = (iVar11 + 0x2000 >> 0xe) + iStack_dc;
                iVar61 = *(int *)(lVar60 + 0x3a0);
              }
            }
            else if (piVar27[-1] == 2) {
              iStack_dc = *piVar45 * 0x10000 + iStack_dc;
              iVar61 = *(int *)(lVar60 + 0x3a0);
            }
            else {
              iStack_dc = *piVar45 + iStack_dc;
              iVar61 = *(int *)(lVar60 + 0x3a0);
            }
          }
joined_r0x00e7c748:
          local_18c._0_1_ = '\x01';
          if (iVar61 == 0) goto code_r0x00e7c7c4;
          break;
        case 0x19:
          lVar36 = *plVar67;
          lVar16 = *plVar30;
          uVar59 = (uint)((ulong)(lVar36 - lVar16) >> 3);
          if (uVar59 < 7) {
            uVar23 = 0;
            if (uVar59 != 0) goto code_r0x00e7b91c;
          }
          else {
            uVar23 = 1;
            while( true ) {
              uVar53 = (uint)((ulong)(lVar36 - lVar16) >> 3);
              if (uVar23 - 1 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 - 1) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar11 = 0;
                }
              }
              iStack_dc = iVar11 + iStack_dc;
              if (uVar23 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)uVar23 * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                iVar11 = 0;
                if (piVar27 != (int *)0x0) {
                  if (*piVar27 == 0) {
                    *piVar27 = 0x82;
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = 0;
                  }
                }
              }
              local_e0 = iVar11 + local_e0;
              FUN_00e81e48(&local_4bd0,iStack_dc);
              if (uVar59 <= uVar23 + 7) break;
              lVar36 = *plVar67;
              uVar23 = uVar23 + 2;
              lVar16 = *plVar30;
            }
            for (uVar23 = uVar23 + 1; uVar23 < uVar59; uVar23 = uVar23 + 6) {
code_r0x00e7b91c:
              lVar16 = *plVar30;
              uVar53 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
              if (uVar23 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)uVar23 * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
joined_r0x00e7b9d8:
                if (uVar53 <= (uVar23 | 1)) goto code_r0x00e7b968;
code_r0x00e7b9dc:
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 | 1) * 8);
                if (piVar27[1] == 1) {
                  iVar61 = *piVar27;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar61 = *piVar27 << 0x10;
                }
                else {
                  iVar61 = *piVar27;
                }
joined_r0x00e7ba7c:
                if (uVar53 <= uVar23 + 2) goto code_r0x00e7ba0c;
code_r0x00e7b990:
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 2) * 8);
                if (piVar27[1] == 1) {
                  iVar52 = *piVar27;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar52 = *piVar27 << 0x10;
                }
                else {
                  iVar52 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                  goto joined_r0x00e7b9d8;
                }
                *piVar27 = 0x82;
                iVar11 = 0;
                if ((uVar23 | 1) < uVar53) {
                  iVar11 = 0;
                  goto code_r0x00e7b9dc;
                }
code_r0x00e7b968:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar61 = 0;
                  goto joined_r0x00e7ba7c;
                }
                *piVar27 = 0x82;
                iVar61 = 0;
                if (uVar23 + 2 < uVar53) {
                  iVar61 = 0;
                  goto code_r0x00e7b990;
                }
code_r0x00e7ba0c:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar52 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar52 = 0;
                }
              }
              iVar61 = local_e0 + iVar61;
              if (uVar23 + 3 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 3) * 8);
                if (piVar27[1] == 1) {
                  iVar12 = *piVar27;
                  if (iVar12 < 0) {
                    iVar12 = -(0x2000 - iVar12 >> 0xe);
                  }
                  else {
                    iVar12 = iVar12 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar12 = *piVar27 << 0x10;
                }
                else {
                  iVar12 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar12 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar12 = 0;
                }
              }
              iVar52 = iVar52 + iStack_dc + iVar11;
              if (uVar23 + 4 < uVar53) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 4) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else {
                  if (piVar27[1] == 2) {
                    iVar52 = *piVar27 * 0x10000 + iVar52;
                    goto joined_r0x00e7bd04;
                  }
                  iVar11 = *piVar27;
                }
                iVar52 = iVar11 + iVar52;
joined_r0x00e7bc60:
                if (uVar53 <= uVar23 + 5) goto code_r0x00e7bc20;
code_r0x00e7bc64:
                piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 5) * 8);
                if (piVar27[1] == 1) {
                  iVar11 = *piVar27;
                  if (iVar11 < 0) {
                    iVar11 = -(0x2000 - iVar11 >> 0xe);
                  }
                  else {
                    iVar11 = iVar11 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar11 = *piVar27 << 0x10;
                }
                else {
                  iVar11 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto joined_r0x00e7bc60;
                *piVar27 = 0x82;
joined_r0x00e7bd04:
                if (uVar23 + 5 < uVar53) goto code_r0x00e7bc64;
code_r0x00e7bc20:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar11 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar11 = 0;
                }
              }
              FUN_00e81fd0(&local_4bd0);
              local_e0 = iVar11 + iVar12 + iVar61;
              iStack_dc = iVar52;
            }
          }
          goto code_r0x00e7c980;
        case 0x1a:
          lVar16 = *plVar30;
          uVar53 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
          uVar23 = uVar53 & 0xfffffffd;
          uVar59 = uVar53 - uVar23;
          if (uVar59 < uVar23) {
            do {
              if ((uVar53 - uVar59 & 1) == 0) {
                lVar16 = *plVar30;
                uVar33 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                iVar11 = iStack_dc;
                if (uVar59 < uVar33) goto code_r0x00e7a528;
code_r0x00e7a38c:
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0x82;
                  uVar47 = uVar59 + 1;
                  iVar61 = 0;
                  if (uVar47 < uVar33) goto code_r0x00e7a3b4;
                  iVar61 = 0;
                  goto code_r0x00e7a558;
                }
                iVar61 = 0;
                uVar47 = uVar59 + 1;
                if (uVar33 <= uVar47) goto code_r0x00e7a558;
code_r0x00e7a3b4:
                piVar27 = (int *)(lVar16 + (ulong)uVar47 * 8);
                if (piVar27[1] == 1) {
                  iVar52 = *piVar27;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar52 = *piVar27 << 0x10;
                }
                else {
                  iVar52 = *piVar27;
                }
                iVar61 = local_e0 + iVar61;
                uVar47 = uVar59 + 2;
                if (uVar47 < uVar33) goto code_r0x00e7a580;
code_r0x00e7a3e4:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar12 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar12 = 0;
                }
              }
              else {
                lVar16 = *plVar30;
                uVar33 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                if (uVar59 < uVar33) {
                  piVar27 = (int *)(lVar16 + (ulong)uVar59 * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar11 = *piVar27 << 0x10;
                  }
                  else {
                    iVar11 = *piVar27;
                  }
                }
                else {
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar11 = 0;
                  }
                  else {
                    *piVar27 = 0x82;
                    iVar11 = 0;
                  }
                }
                uVar59 = uVar59 + 1;
                iVar11 = iStack_dc + iVar11;
                if (uVar33 <= uVar59) goto code_r0x00e7a38c;
code_r0x00e7a528:
                piVar27 = (int *)(lVar16 + (ulong)uVar59 * 8);
                if (piVar27[1] == 1) {
                  iVar61 = *piVar27;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar61 = *piVar27 << 0x10;
                }
                else {
                  iVar61 = *piVar27;
                }
                uVar47 = uVar59 + 1;
                if (uVar47 < uVar33) goto code_r0x00e7a3b4;
code_r0x00e7a558:
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0x82;
                  uVar47 = uVar59 + 2;
                  iVar61 = local_e0 + iVar61;
                  iVar52 = 0;
                  if (uVar47 < uVar33) {
                    iVar52 = 0;
                    goto code_r0x00e7a580;
                  }
                  goto code_r0x00e7a3e4;
                }
                iVar52 = 0;
                uVar47 = uVar59 + 2;
                iVar61 = local_e0 + iVar61;
                if (uVar33 <= uVar47) goto code_r0x00e7a3e4;
code_r0x00e7a580:
                piVar27 = (int *)(lVar16 + (ulong)uVar47 * 8);
                if (piVar27[1] == 1) {
                  iVar12 = *piVar27;
                  if (iVar12 < 0) {
                    iVar12 = -(0x2000 - iVar12 >> 0xe);
                  }
                  else {
                    iVar12 = iVar12 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar12 = *piVar27 << 0x10;
                }
                else {
                  iVar12 = *piVar27;
                }
              }
              iVar52 = iVar52 + iVar11;
              if (uVar59 + 3 < uVar33) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar59 + 3) * 8);
                if (piVar27[1] == 1) {
                  iVar22 = *piVar27;
                  if (iVar22 < 0) {
                    iVar22 = -(0x2000 - iVar22 >> 0xe);
                  }
                  else {
                    iVar22 = iVar22 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar22 = *piVar27 << 0x10;
                }
                else {
                  iVar22 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar22 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar22 = 0;
                }
              }
              iVar22 = iVar22 + iVar12 + iVar61;
              FUN_00e81fd0(&local_4bd0,iVar11,iVar61,iVar52,iVar12 + iVar61,iVar52,iVar22);
              local_e0 = iVar22;
              uVar59 = uVar59 + 4;
              iStack_dc = iVar52;
            } while (uVar59 < uVar23);
code_r0x00e7b63c:
            lVar16 = *plVar30;
          }
          goto code_r0x00e7b644;
        case 0x1b:
          lVar16 = *plVar30;
          uVar53 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
          uVar23 = uVar53 & 0xfffffffd;
          uVar59 = uVar53 - uVar23;
          if (uVar59 < uVar23) {
            do {
              if ((uVar53 - uVar59 & 1) == 0) {
                lVar16 = *plVar30;
                uVar33 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                iVar11 = local_e0;
                if (uVar59 < uVar33) goto code_r0x00e7b3a8;
code_r0x00e7b2dc:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar61 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar61 = 0;
                }
              }
              else {
                lVar16 = *plVar30;
                uVar33 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                if (uVar59 < uVar33) {
                  piVar27 = (int *)(lVar16 + (ulong)uVar59 * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar11 = *piVar27 << 0x10;
                  }
                  else {
                    iVar11 = *piVar27;
                  }
                }
                else {
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar11 = 0;
                  }
                  else {
                    *piVar27 = 0x82;
                    iVar11 = 0;
                  }
                }
                uVar59 = uVar59 + 1;
                iVar11 = local_e0 + iVar11;
                if (uVar33 <= uVar59) goto code_r0x00e7b2dc;
code_r0x00e7b3a8:
                piVar27 = (int *)(lVar16 + (ulong)uVar59 * 8);
                if (piVar27[1] == 1) {
                  iVar61 = *piVar27;
                  if (iVar61 < 0) {
                    iVar61 = -(0x2000 - iVar61 >> 0xe);
                  }
                  else {
                    iVar61 = iVar61 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar61 = *piVar27 << 0x10;
                }
                else {
                  iVar61 = *piVar27;
                }
              }
              iVar61 = iStack_dc + iVar61;
              if (uVar59 + 1 < uVar33) {
                piVar27 = (int *)(lVar16 + (ulong)(uVar59 + 1) * 8);
                if (piVar27[1] == 1) {
                  iVar52 = *piVar27;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else {
                  if (piVar27[1] == 2) {
                    iVar61 = *piVar27 * 0x10000 + iVar61;
                    goto joined_r0x00e7b5bc;
                  }
                  iVar52 = *piVar27;
                }
                iVar61 = iVar52 + iVar61;
joined_r0x00e7b4a8:
                if (uVar33 <= uVar59 + 2) goto code_r0x00e7b438;
code_r0x00e7b4ac:
                piVar27 = (int *)(lVar16 + (ulong)(uVar59 + 2) * 8);
                if (piVar27[1] != 1) {
                  if (piVar27[1] != 2) {
                    iVar11 = *piVar27 + iVar11;
                    goto joined_r0x00e7b2ac;
                  }
                  iVar11 = *piVar27 * 0x10000 + iVar11;
                  goto joined_r0x00e7b54c;
                }
                iVar52 = *piVar27;
                if (-1 < iVar52) {
                  iVar11 = (iVar52 + 0x2000 >> 0xe) + iVar11;
                  goto joined_r0x00e7b54c;
                }
                iVar11 = iVar11 - (0x2000 - iVar52 >> 0xe);
joined_r0x00e7b2ac:
                if (uVar33 <= uVar59 + 3) goto code_r0x00e7b4dc;
code_r0x00e7b460:
                piVar27 = (int *)(lVar16 + (ulong)(uVar59 + 3) * 8);
                if (piVar27[1] == 1) {
                  iVar52 = *piVar27;
                  if (iVar52 < 0) {
                    iVar52 = -(0x2000 - iVar52 >> 0xe);
                  }
                  else {
                    iVar52 = iVar52 + 0x2000 >> 0xe;
                  }
                }
                else if (piVar27[1] == 2) {
                  iVar52 = *piVar27 << 0x10;
                }
                else {
                  iVar52 = *piVar27;
                }
              }
              else {
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) goto joined_r0x00e7b4a8;
                *piVar27 = 0x82;
joined_r0x00e7b5bc:
                if (uVar59 + 2 < uVar33) goto code_r0x00e7b4ac;
code_r0x00e7b438:
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0x82;
                  goto joined_r0x00e7b2ac;
                }
joined_r0x00e7b54c:
                if (uVar59 + 3 < uVar33) goto code_r0x00e7b460;
code_r0x00e7b4dc:
                piVar27 = (int *)*puVar43;
                if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                  iVar52 = 0;
                }
                else {
                  *piVar27 = 0x82;
                  iVar52 = 0;
                }
              }
              FUN_00e81fd0(&local_4bd0);
              uVar59 = uVar59 + 4;
              local_e0 = iVar11;
              iStack_dc = iVar52 + iVar61;
            } while (uVar59 < uVar23);
            goto code_r0x00e7b63c;
          }
          goto code_r0x00e7b644;
        case 0x1c:
          if (pbVar38 < pbVar44) {
            pbVar25 = (byte *)((long)pbVar38 + 1);
            *puVar55 = (ulong)pbVar25;
            uVar21 = (ushort)*pbVar38;
            pbVar38 = pbVar25;
            if (pbVar44 <= pbVar25) goto code_r0x00e7b8f0;
code_r0x00e7b280:
            *puVar55 = (ulong)(pbVar38 + 1);
            uVar32 = (ushort)*pbVar38;
          }
          else {
            piVar27 = (int *)*local_6480;
            if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
              *piVar27 = 0x55;
              uVar21 = 0;
              if (pbVar44 <= pbVar38) goto code_r0x00e7b8f0;
              uVar21 = 0;
              goto code_r0x00e7b280;
            }
            uVar21 = 0;
            if (pbVar38 < pbVar44) goto code_r0x00e7b280;
code_r0x00e7b8f0:
            piVar27 = (int *)*local_6480;
            if (piVar27 == (int *)0x0) {
              uVar32 = 0;
            }
            else if (*piVar27 == 0) {
              *piVar27 = 0x55;
              uVar32 = 0;
            }
            else {
              uVar32 = 0;
            }
          }
          if ((int *)*plVar67 == (int *)(*plVar30 + (ulong)*puVar65 * 8)) {
LAB_00e7cff4:
            piVar27 = (int *)*puVar43;
            goto joined_r0x00e7efac;
          }
          *(int *)*plVar67 = (int)(short)(uVar32 | uVar21 << 8);
LAB_00e7c2b4:
          lVar16 = *plVar67;
          *(undefined4 *)(lVar16 + 4) = 2;
          lVar16 = lVar16 + 8;
          goto LAB_00e7c988;
        case 0x1e:
        case 0x1f:
          lVar16 = *plVar30;
          uVar23 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
          uVar53 = uVar23 & 0xfffffffd;
          uVar23 = uVar23 - uVar53;
          if (uVar23 < uVar53) {
            bVar8 = uVar59 == 0x1f;
            do {
              if (bVar8) {
                lVar16 = *plVar30;
                uVar59 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                if (uVar23 < uVar59) {
                  piVar27 = (int *)(lVar16 + (ulong)uVar23 * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar11 = *piVar27 << 0x10;
                  }
                  else {
                    iVar11 = *piVar27;
                  }
joined_r0x00e79ce0:
                  if (uVar59 <= uVar23 + 1) goto code_r0x00e79bd4;
code_r0x00e79ce4:
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 1) * 8);
                  if (piVar27[1] == 1) {
                    iVar61 = *piVar27;
                    if (iVar61 < 0) {
                      iVar61 = -(0x2000 - iVar61 >> 0xe);
                    }
                    else {
                      iVar61 = iVar61 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar61 = *piVar27 << 0x10;
                  }
                  else {
                    iVar61 = *piVar27;
                  }
joined_r0x00e79df8:
                  iVar11 = iStack_dc + iVar11;
                  if (uVar59 <= uVar23 + 2) goto code_r0x00e79d14;
code_r0x00e79bfc:
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 2) * 8);
                  if (piVar27[1] == 1) {
                    iVar52 = *piVar27;
                    if (iVar52 < 0) {
                      iVar52 = -(0x2000 - iVar52 >> 0xe);
                    }
                    else {
                      iVar52 = iVar52 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar52 = *piVar27 << 0x10;
                  }
                  else {
                    iVar52 = *piVar27;
                  }
                }
                else {
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar11 = 0;
                    goto joined_r0x00e79ce0;
                  }
                  *piVar27 = 0x82;
                  iVar11 = 0;
                  if (uVar23 + 1 < uVar59) {
                    iVar11 = 0;
                    goto code_r0x00e79ce4;
                  }
code_r0x00e79bd4:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar61 = 0;
                    goto joined_r0x00e79df8;
                  }
                  *piVar27 = 0x82;
                  iVar11 = iStack_dc + iVar11;
                  iVar61 = 0;
                  if (uVar23 + 2 < uVar59) goto code_r0x00e79bfc;
                  iVar61 = 0;
code_r0x00e79d14:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar52 = 0;
                  }
                  else {
                    *piVar27 = 0x82;
                    iVar52 = 0;
                  }
                }
                iVar61 = iVar61 + iVar11;
                iVar52 = iVar52 + local_e0;
                if (uVar23 + 3 < uVar59) {
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 3) * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                      goto joined_r0x00e7a0f0;
                    }
                    iVar52 = (iVar11 + 0x2000 >> 0xe) + iVar52;
                  }
                  else if (piVar27[1] == 2) {
                    iVar52 = *piVar27 * 0x10000 + iVar52;
                  }
                  else {
                    iVar11 = *piVar27;
joined_r0x00e7a0f0:
                    iVar52 = iVar11 + iVar52;
                  }
                }
                else {
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                    *piVar27 = 0x82;
                  }
                }
                if (uVar53 - uVar23 == 5) {
                  if (uVar23 + 4 < uVar59) {
                    piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 4) * 8);
                    if (piVar27[1] == 1) {
                      iVar11 = *piVar27;
                      if (iVar11 < 0) {
                        iVar11 = -(0x2000 - iVar11 >> 0xe);
                      }
                      else {
                        iVar11 = iVar11 + 0x2000 >> 0xe;
                      }
                    }
                    else if (piVar27[1] == 2) {
                      iVar11 = *piVar27 << 0x10;
                    }
                    else {
                      iVar11 = *piVar27;
                    }
                  }
                  else {
                    piVar27 = (int *)*puVar43;
                    if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                      iVar11 = 0;
                    }
                    else {
                      *piVar27 = 0x82;
                      iVar11 = 0;
                    }
                  }
                  bVar8 = false;
                  iVar61 = iVar11 + iVar61;
code_r0x00e7a2e0:
                  uVar23 = uVar23 + 1;
                }
                else {
                  bVar8 = false;
                }
              }
              else {
                lVar16 = *plVar30;
                uVar59 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
                if (uVar23 < uVar59) {
                  piVar27 = (int *)(lVar16 + (ulong)uVar23 * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar11 = *piVar27 << 0x10;
                  }
                  else {
                    iVar11 = *piVar27;
                  }
joined_r0x00e79d54:
                  if (uVar59 <= uVar23 + 1) goto code_r0x00e79c70;
code_r0x00e79d58:
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 1) * 8);
                  if (piVar27[1] == 1) {
                    iVar61 = *piVar27;
                    if (iVar61 < 0) {
                      iVar61 = -(0x2000 - iVar61 >> 0xe);
                    }
                    else {
                      iVar61 = iVar61 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar61 = *piVar27 << 0x10;
                  }
                  else {
                    iVar61 = *piVar27;
                  }
joined_r0x00e79ed0:
                  iVar11 = local_e0 + iVar11;
                  if (uVar59 <= uVar23 + 2) goto code_r0x00e79d88;
code_r0x00e79c98:
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 2) * 8);
                  if (piVar27[1] == 1) {
                    iVar52 = *piVar27;
                    if (iVar52 < 0) {
                      iVar52 = -(0x2000 - iVar52 >> 0xe);
                    }
                    else {
                      iVar52 = iVar52 + 0x2000 >> 0xe;
                    }
                  }
                  else if (piVar27[1] == 2) {
                    iVar52 = *piVar27 << 0x10;
                  }
                  else {
                    iVar52 = *piVar27;
                  }
                }
                else {
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar11 = 0;
                    goto joined_r0x00e79d54;
                  }
                  *piVar27 = 0x82;
                  iVar11 = 0;
                  if (uVar23 + 1 < uVar59) {
                    iVar11 = 0;
                    goto code_r0x00e79d58;
                  }
code_r0x00e79c70:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar61 = 0;
                    goto joined_r0x00e79ed0;
                  }
                  *piVar27 = 0x82;
                  iVar11 = local_e0 + iVar11;
                  iVar61 = 0;
                  if (uVar23 + 2 < uVar59) goto code_r0x00e79c98;
                  iVar61 = 0;
code_r0x00e79d88:
                  piVar27 = (int *)*puVar43;
                  if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                    iVar52 = 0;
                  }
                  else {
                    *piVar27 = 0x82;
                    iVar52 = 0;
                  }
                }
                iVar61 = iVar61 + iStack_dc;
                iVar52 = iVar52 + iVar11;
                if (uVar23 + 3 < uVar59) {
                  piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 3) * 8);
                  if (piVar27[1] == 1) {
                    iVar11 = *piVar27;
                    if (iVar11 < 0) {
                      iVar11 = -(0x2000 - iVar11 >> 0xe);
                    }
                    else {
                      iVar11 = iVar11 + 0x2000 >> 0xe;
                    }
                  }
                  else {
                    if (piVar27[1] == 2) {
                      iVar61 = *piVar27 * 0x10000 + iVar61;
                      goto joined_r0x00e7a1a4;
                    }
                    iVar11 = *piVar27;
                  }
                  iVar61 = iVar11 + iVar61;
                  if (uVar53 - uVar23 != 5) goto code_r0x00e7a174;
code_r0x00e7a1a8:
                  if (uVar23 + 4 < uVar59) {
                    piVar27 = (int *)(lVar16 + (ulong)(uVar23 + 4) * 8);
                    if (piVar27[1] == 1) {
                      iVar11 = *piVar27;
                      if (iVar11 < 0) {
                        iVar11 = -(0x2000 - iVar11 >> 0xe);
                      }
                      else {
                        iVar11 = iVar11 + 0x2000 >> 0xe;
                      }
                    }
                    else if (piVar27[1] == 2) {
                      iVar11 = *piVar27 << 0x10;
                    }
                    else {
                      iVar11 = *piVar27;
                    }
                  }
                  else {
                    piVar27 = (int *)*puVar43;
                    if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                      iVar11 = 0;
                    }
                    else {
                      *piVar27 = 0x82;
                      iVar11 = 0;
                    }
                  }
                  iVar52 = iVar11 + iVar52;
                  bVar8 = true;
                  goto code_r0x00e7a2e0;
                }
                piVar27 = (int *)*puVar43;
                if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                  *piVar27 = 0x82;
                }
joined_r0x00e7a1a4:
                if (uVar53 - uVar23 == 5) goto code_r0x00e7a1a8;
code_r0x00e7a174:
                bVar8 = true;
              }
              FUN_00e81fd0(&local_4bd0);
              local_e0 = iVar52;
              uVar23 = uVar23 + 4;
              iStack_dc = iVar61;
            } while (uVar23 < uVar53);
            goto code_r0x00e7b63c;
          }
code_r0x00e7b644:
          *plVar67 = lVar16;
          goto LAB_00e79754;
        default:
          if (0xf6 < uVar59) {
            if (uVar59 < 0xfb) {
              if (pbVar38 < pbVar44) {
                *puVar55 = (ulong)((long)pbVar38 + 1);
                uVar23 = (uint)*pbVar38;
              }
              else {
                piVar27 = (int *)*local_6480;
                if (piVar27 == (int *)0x0) {
                  uVar23 = 0;
                }
                else if (*piVar27 == 0) {
                  *piVar27 = 0x55;
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                }
              }
              piVar27 = (int *)*plVar67;
              if (piVar27 != (int *)(*plVar30 + (ulong)*puVar65 * 8)) {
                iVar11 = (uVar23 | uVar59 * 0x100 - 0xf700) + 0x6c;
LAB_00e7cee8:
                *piVar27 = iVar11;
                goto LAB_00e7ceec;
              }
LAB_00e7cf00:
              piVar27 = (int *)*puVar43;
              goto joined_r0x00e7efac;
            }
            if (uVar59 != 0xff) {
              if (pbVar38 < pbVar44) {
                *puVar55 = (ulong)((long)pbVar38 + 1);
                uVar23 = (uint)*pbVar38;
              }
              else {
                piVar27 = (int *)*local_6480;
                if (piVar27 == (int *)0x0) {
                  uVar23 = 0;
                }
                else if (*piVar27 == 0) {
                  *piVar27 = 0x55;
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                }
              }
              piVar27 = (int *)*plVar67;
              if (piVar27 != (int *)(*plVar30 + (ulong)*puVar65 * 8)) {
                iVar11 = -0x6c - (uVar23 | uVar59 * 0x100 - 0xfb00);
                goto LAB_00e7cee8;
              }
              goto LAB_00e7cf00;
            }
            if (pbVar38 < pbVar44) {
              pbVar25 = (byte *)((long)pbVar38 + 1);
              *puVar55 = (ulong)pbVar25;
              uVar59 = (uint)*pbVar38;
              pbVar38 = pbVar25;
              if (pbVar44 <= pbVar25) goto LAB_00e7cab0;
LAB_00e7c2ec:
              *puVar55 = (ulong)(pbVar38 + 1);
              uVar23 = (uint)*pbVar38;
              pbVar38 = pbVar38 + 1;
joined_r0x00e7cac8:
              if (pbVar44 <= pbVar38) goto LAB_00e7cacc;
LAB_00e7c304:
              *puVar55 = (ulong)(pbVar38 + 1);
              uVar53 = (uint)*pbVar38;
              pbVar38 = pbVar38 + 1;
joined_r0x00e7c318:
              if (pbVar38 < pbVar44) goto LAB_00e7c31c;
LAB_00e7cae8:
              piVar27 = (int *)*local_6480;
              if (piVar27 == (int *)0x0) {
                uVar33 = 0;
              }
              else if (*piVar27 == 0) {
                *piVar27 = 0x55;
                uVar33 = 0;
              }
              else {
                uVar33 = 0;
              }
            }
            else {
              piVar27 = (int *)*local_6480;
              if ((piVar27 != (int *)0x0) && (*piVar27 == 0)) {
                *piVar27 = 0x55;
                uVar59 = 0;
                if (pbVar44 <= pbVar38) goto LAB_00e7cab0;
                uVar59 = 0;
                goto LAB_00e7c2ec;
              }
              uVar59 = 0;
              if (pbVar38 < pbVar44) goto LAB_00e7c2ec;
LAB_00e7cab0:
              piVar27 = (int *)*local_6480;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar23 = 0;
                goto joined_r0x00e7cac8;
              }
              *piVar27 = 0x55;
              uVar23 = 0;
              if (pbVar38 < pbVar44) {
                uVar23 = 0;
                goto LAB_00e7c304;
              }
LAB_00e7cacc:
              piVar27 = (int *)*local_6480;
              if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
                uVar53 = 0;
                goto joined_r0x00e7c318;
              }
              *piVar27 = 0x55;
              uVar53 = 0;
              if (pbVar44 <= pbVar38) goto LAB_00e7cae8;
              uVar53 = 0;
LAB_00e7c31c:
              *puVar55 = (ulong)(pbVar38 + 1);
              uVar33 = (uint)*pbVar38;
            }
            uVar33 = uVar59 << 0x18 | uVar23 << 0x10 | uVar53 << 8 | uVar33;
            if (cVar9 == '\0') {
              if ((uint *)*plVar67 != (uint *)(*plVar30 + (ulong)*puVar65 * 8)) {
                *(uint *)*plVar67 = uVar33;
                lVar16 = *plVar67;
                *(undefined4 *)(lVar16 + 4) = 0;
                lVar16 = lVar16 + 8;
                goto LAB_00e7c988;
              }
              goto LAB_00e7cff4;
            }
            if (64000 < uVar33 + 32000 && !bVar5) {
              bVar5 = true;
            }
            if ((uint *)*plVar67 == (uint *)(*plVar30 + (ulong)*puVar65 * 8)) goto LAB_00e7cff4;
            *(uint *)*plVar67 = uVar33;
            goto LAB_00e7c2b4;
          }
          if ((int *)*plVar67 == (int *)(*plVar30 + (ulong)*puVar65 * 8)) goto LAB_00e7cf00;
          *(int *)*plVar67 = uVar59 - 0x8b;
LAB_00e7ceec:
          lVar16 = *plVar67;
          *(undefined4 *)(lVar16 + 4) = 2;
          lVar16 = lVar16 + 8;
          goto LAB_00e7cb64;
        }
LAB_00e7cb5c:
        lVar16 = *plVar30;
LAB_00e7cb64:
        *plVar67 = lVar16;
        bVar7 = bVar8;
        goto LAB_00e79754;
      }
    }
    else if (*(int *)ppuVar1 == 0) {
      *(int *)ppuVar1 = 0x40;
    }
LAB_00e79574:
    uVar54 = false;
    goto LAB_00e7957c;
  }
  FUN_00e139fc(uVar62,puVar15);
  puVar15 = (undefined8 *)0x0;
  puVar58 = (undefined8 *)0x0;
  iVar11 = 0x40;
  uVar54 = true;
  iVar66 = *(int *)ppuVar1;
joined_r0x00e80c80:
  if (iVar66 != 0) goto LAB_00e7957c;
  goto LAB_00e794f8;
LAB_00e81284:
  if (*(short *)(*(long *)(lVar16 + 0x520) + uVar63 * 2) != sVar10) goto code_r0x00e81290;
  if ((int)uVar63 < 0) goto LAB_00e80dbc;
  lVar16 = *(long *)(lVar60 + 8);
LAB_00e8113c:
  iVar11 = (**(code **)(lVar60 + 0x478))(lVar16,uVar63,&ppuStack_d8,&lStack_4be0);
  lVar16 = lStack_4be0;
  if (iVar11 != 0) goto LAB_00e80dd0;
  puStack_6410 = (undefined8 *)((long)ppuStack_d8 + lStack_4be0);
  ppuStack_6418 = ppuStack_d8;
  uStack_6408 = ppuStack_d8;
  FUN_00e79134(param_1,&local_6420,param_3,param_4,1,iStack_dc,local_e0,&uStack_4bf0);
  (**(code **)(lVar60 + 0x480))(*(undefined8 *)(lVar60 + 8),(ulong)&local_6420 | 8,lVar16);
  ppuStack_6418 = (undefined8 **)0x0;
  local_6420 = (undefined8 *)0x0;
  uStack_6408 = (undefined8 **)0x0;
  puStack_6410 = (undefined8 *)0x0;
  lVar16 = *(long *)(lVar60 + 8);
  if (*(long *)(*(long *)(lVar16 + 0xf0) + 0x68) != 0) {
LAB_00e811cc:
    iVar11 = (**(code **)(lVar60 + 0x478))(lVar16,uVar56,&ppuStack_d8,&lStack_4be0);
    if (iVar11 == 0) {
      puStack_6410 = (undefined8 *)((long)ppuStack_d8 + lStack_4be0);
      ppuStack_6418 = ppuStack_d8;
      uStack_6408 = ppuStack_d8;
      FUN_00e79134(param_1,&local_6420,param_3,param_4,1,0,0,&uStack_4bf0);
      (**(code **)(lVar60 + 0x480))
                (*(undefined8 *)(lVar60 + 8),(ulong)&local_6420 | 8,
                 (long)puStack_6410 - (long)ppuStack_6418);
      iVar11 = 0;
    }
    goto LAB_00e80dd0;
  }
  iVar11 = 0x12;
  if ((0xff < uVar56) || (lVar16 = *(long *)(lVar60 + 0x418), *(long *)(lVar16 + 0x520) == 0))
  goto LAB_00e80dd0;
  sVar10 = (*(code *)**(undefined8 **)(lVar16 + 0x1368))(uVar56);
  if (*(uint *)(lVar16 + 0x24) == 0) goto LAB_00e80dbc;
  uVar56 = 0;
  do {
    if (*(short *)(*(long *)(lVar16 + 0x520) + (ulong)uVar56 * 2) == sVar10) {
      if (-1 < (int)uVar56) {
        lVar16 = *(long *)(lVar60 + 8);
        goto LAB_00e811cc;
      }
      break;
    }
    uVar56 = uVar56 + 1;
  } while (uVar56 < *(uint *)(lVar16 + 0x24));
  goto LAB_00e80dbc;
code_r0x00e81290:
  uVar59 = (int)uVar63 + 1;
  uVar63 = (ulong)uVar59;
  if (*(uint *)(lVar16 + 0x24) <= uVar59) goto LAB_00e80dbc;
  goto LAB_00e81284;
code_r0x00e81728:
  if ((int)((uint)uVar26 | (uint)uVar63) < 0) goto LAB_00e80dbc;
  if (*(char *)(lVar60 + 0x5a) == '\0') {
    FUN_00e1430c(*(undefined8 *)(lVar60 + 0x18));
    lVar16 = *(long *)(lVar60 + 8);
    puVar43 = *(undefined8 **)(*(long *)(lVar16 + 0xf0) + 0x68);
    if (puVar43 == (undefined8 *)0x0) {
      ppuStack_d8 = *(undefined8 ***)(*(long *)(lVar16 + 0x290) + (uVar26 & 0xffffffff) * 8);
      iStack_d0 = *(int *)(*(long *)(lVar16 + 0x298) + (uVar26 & 0xffffffff) * 4);
    }
    else {
      iVar11 = (**(code **)*puVar43)(puVar43[1],uVar26 & 0xffffffff,&ppuStack_d8);
      if (iVar11 != 0) goto LAB_00e80dd0;
    }
    iVar14 = iStack_d0;
    ppuVar6 = ppuStack_d8;
    puStack_6410 = (undefined8 *)((long)ppuStack_d8 + (long)iStack_d0);
    local_6420 = (undefined8 *)0x0;
    ppuStack_6418 = ppuStack_d8;
    uStack_6408 = ppuStack_d8;
    FUN_00e79134(param_1,&local_6420,param_3,param_4,1,0,0,auStack_4bf4);
    plVar30 = *(long **)(*(long *)(*(long *)(lVar60 + 8) + 0xf0) + 0x68);
    ppuStack_d8 = ppuVar6;
    iStack_d0 = iVar14;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 8))(plVar30[1],&ppuStack_d8);
    }
    plVar30 = *(long **)(lVar60 + 0x40);
    lStack_4bd8 = plVar30[1];
    lStack_4be0 = *plVar30;
    uStack_4be8 = (*(undefined8 **)(lVar60 + 0x48))[1];
    uStack_4bf0 = **(undefined8 **)(lVar60 + 0x48);
    *plVar30 = 0;
    plVar30[1] = 0;
    lVar16 = *(long *)(lVar60 + 8);
    puVar43 = *(undefined8 **)(*(long *)(lVar16 + 0xf0) + 0x68);
    if (puVar43 == (undefined8 *)0x0) {
      ppuStack_d8 = *(undefined8 ***)(*(long *)(lVar16 + 0x290) + (uVar63 & 0xffffffff) * 8);
      iStack_d0 = *(int *)(*(long *)(lVar16 + 0x298) + (uVar63 & 0xffffffff) * 4);
    }
    else {
      iVar11 = (**(code **)*puVar43)(puVar43[1],uVar63 & 0xffffffff,&ppuStack_d8);
      if (iVar11 != 0) goto LAB_00e80dd0;
    }
    iVar14 = iStack_d0;
    ppuVar6 = ppuStack_d8;
    puStack_6410 = (undefined8 *)((long)ppuStack_d8 + (long)iStack_d0);
    local_6420 = (undefined8 *)0x0;
    ppuStack_6418 = ppuStack_d8;
    uStack_6408 = ppuStack_d8;
    FUN_00e79134(param_1,&local_6420,param_3,param_4,1,(int)lVar34 - iVar57,iVar66,auStack_4bf4);
    plVar30 = *(long **)(*(long *)(*(long *)(lVar60 + 8) + 0xf0) + 0x68);
    ppuStack_d8 = ppuVar6;
    iStack_d0 = iVar14;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 8))(plVar30[1],&ppuStack_d8);
    }
    iVar11 = 0;
    plVar30 = *(long **)(lVar60 + 0x40);
    plVar30[1] = lStack_4bd8;
    *plVar30 = lStack_4be0;
    puVar43 = *(undefined8 **)(lVar60 + 0x48);
    puVar43[1] = uStack_4be8;
    *puVar43 = uStack_4bf0;
  }
  else {
    lVar60 = *(long *)(lVar60 + 0x10);
    lVar16 = **(long **)(lVar60 + 0x128);
    iVar11 = FUN_00e141b0(lVar16,2);
    if (iVar11 == 0) {
      puVar65 = *(uint **)(lVar16 + 0xa0);
      *puVar65 = (uint)uVar26;
      *(undefined2 *)(puVar65 + 1) = 0x202;
      puVar65[2] = 0;
      puVar65[3] = 0;
      puVar65[0xc] = (uint)uVar63;
      *(undefined2 *)(puVar65 + 0xd) = 2;
      FT_RoundFix(lVar34 - iVar57);
      puVar65[0xe] = extraout_var;
      FT_RoundFix(lVar36);
      puVar65[0xf] = extraout_var_00;
      *(undefined4 *)(lVar60 + 0xf0) = 2;
      uVar46 = *(undefined8 *)(lVar16 + 0x58);
      iVar11 = 0;
      *(undefined4 *)(lVar60 + 0x90) = 0x636f6d70;
      *(undefined8 *)(lVar60 + 0xf8) = uVar46;
      *(undefined4 *)(lVar16 + 0x98) = 2;
    }
  }
  goto LAB_00e80dd0;
code_r0x00e7afc8:
  if (uVar59 == 0x18) {
code_r0x00e7afd8:
    lVar16 = *plVar30;
    uVar59 = (uint)((ulong)(*plVar67 - lVar16) >> 3);
    if (uVar53 < uVar59) {
      piVar27 = (int *)(lVar16 + (ulong)uVar53 * 8);
      if (piVar27[1] == 1) {
        iVar11 = *piVar27;
        if (iVar11 < 0) {
          iVar11 = -(0x2000 - iVar11 >> 0xe);
        }
        else {
          iVar11 = iVar11 + 0x2000 >> 0xe;
        }
      }
      else if (piVar27[1] == 2) {
        iVar11 = *piVar27 << 0x10;
      }
      else {
        iVar11 = *piVar27;
      }
    }
    else {
      piVar27 = (int *)*puVar43;
      if ((piVar27 == (int *)0x0) || (*piVar27 != 0)) {
        iVar11 = 0;
      }
      else {
        *piVar27 = 0x82;
        iVar11 = 0;
      }
    }
    iStack_dc = iVar11 + iStack_dc;
    if ((uVar53 | 1) < uVar59) {
      piVar27 = (int *)(lVar16 + (ulong)(uVar53 | 1) * 8);
      if (piVar27[1] == 1) {
        iVar11 = *piVar27;
        if (iVar11 < 0) {
          iVar11 = -(0x2000 - iVar11 >> 0xe);
        }
        else {
          iVar11 = iVar11 + 0x2000 >> 0xe;
        }
      }
      else if (piVar27[1] == 2) {
        iVar11 = *piVar27 << 0x10;
      }
      else {
        iVar11 = *piVar27;
      }
    }
    else {
      piVar27 = (int *)*puVar43;
      iVar11 = 0;
      if (piVar27 != (int *)0x0) {
        if (*piVar27 == 0) {
          *piVar27 = 0x82;
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
        }
      }
    }
    local_e0 = iVar11 + local_e0;
    FUN_00e81e48(&local_4bd0,iStack_dc);
  }
code_r0x00e7c980:
  lVar16 = *plVar30;
LAB_00e7c988:
  *plVar67 = lVar16;
  goto LAB_00e79754;
  while (uVar26 = uVar26 + 1, uVar26 < uVar56) {
code_r0x00e8166c:
    pcVar18 = *(char **)(lVar16 + uVar26 * 8);
    if (((pcVar18 != (char *)0x0) && (*pcVar18 == *pcVar17)) &&
       (iVar14 = strcmp(pcVar18,pcVar17), iVar14 == 0)) goto code_r0x00e816a0;
  }
code_r0x00e8169c:
  uVar26 = 0xffffffff;
code_r0x00e816a0:
  if ((uint)uVar63 < 0x100) {
    pcVar17 = (char *)(**(code **)(*(long *)(lVar60 + 0x488) + 0x28))
                                (*(undefined2 *)
                                  (*(long *)(*(long *)(lVar60 + 0x488) + 0x30) +
                                  (long)(int)(uint)uVar63 * 2));
    uVar56 = *(uint *)(lVar60 + 0x468);
    if (uVar56 != 0) {
      uVar63 = 0;
      lVar16 = *(long *)(lVar60 + 0x460);
      do {
        pcVar18 = *(char **)(lVar16 + uVar63 * 8);
        if (((pcVar18 != (char *)0x0) && (*pcVar18 == *pcVar17)) &&
           (iVar14 = strcmp(pcVar18,pcVar17), iVar14 == 0)) goto code_r0x00e81728;
        uVar63 = uVar63 + 1;
      } while (uVar63 < uVar56);
    }
  }
LAB_00e80dbc:
  iVar11 = 0x12;
LAB_00e80dd0:
  iVar66 = *(int *)ppuVar1;
joined_r0x00e80de4:
  uVar54 = false;
  if (iVar66 == 0) {
LAB_00e794f8:
    *(int *)ppuVar1 = iVar11;
  }
LAB_00e7957c:
  local_330 = 0;
  local_320 = 0;
  local_318 = 0;
  FUN_00e139fc(local_348,local_310);
  uStack_1f8 = 0;
  local_310 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  FUN_00e139fc(local_210,local_1d8);
  uStack_1b8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1d8 = 0;
  FUN_00e139fc(local_1d0,local_198);
  local_198 = 0;
  FUN_00e139fc(uVar62,puVar58);
  if (!(bool)uVar54) {
    uVar62 = *puVar15;
    FUN_00e139fc(uVar62,puVar15[2]);
    puVar15[2] = 0;
    FUN_00e139fc(uVar62,puVar15);
  }
  if (*(long *)(lVar4 + 0x28) != lVar24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

