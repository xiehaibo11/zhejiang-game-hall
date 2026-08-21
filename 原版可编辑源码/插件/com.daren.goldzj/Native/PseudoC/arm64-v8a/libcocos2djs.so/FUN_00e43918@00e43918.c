
/* WARNING: Removing unreachable block (ram,0x00e4401c) */
/* WARNING: Removing unreachable block (ram,0x00e43ee0) */

void FUN_00e43918(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  short sVar7;
  bool bVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  size_t sVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  code *pcVar23;
  char *pcVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  ulong uVar27;
  char cVar28;
  uint uVar29;
  char *pcVar30;
  char cVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  byte *pbVar35;
  byte *pbVar36;
  ulong uVar37;
  undefined8 uVar38;
  long lVar39;
  char *pcVar40;
  ulong *puVar41;
  byte bVar42;
  undefined **ppuVar43;
  char *pcVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulong *local_2a8;
  uint local_264;
  char *local_260;
  char *pcStack_258;
  char *local_250;
  ulong local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  code *local_230;
  code *local_228;
  code *local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  code *local_1e0;
  code *pcStack_1d8;
  long local_1d0;
  char *local_1c8;
  long local_1c0;
  byte *pbStack_1b8;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte abStack_18e [5];
  byte bStack_189;
  undefined8 local_188;
  byte local_180;
  undefined1 auStack_17f [263];
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  *param_2 = 1;
  if (param_2[0x20] == 0) {
    lVar39 = FUN_00e19584(*(undefined8 *)(param_2[0x16] + 8),"psaux");
    if (lVar39 == 0) {
      uVar14 = 0xb;
      if (*(long *)(lVar6 + 0x28) == local_78) {
        return;
      }
      goto LAB_00e43a78;
    }
    param_2[0x20] = lVar39;
    if (param_2[0x4c] != 0) goto LAB_00e4396c;
LAB_00e439a4:
    uVar38 = FUN_00e19584(*(undefined8 *)(param_2[0x16] + 8),"pshinter");
    param_2[0x4c] = uVar38;
    uVar14 = FUN_00e1bb5c(param_1,0);
    iVar11 = (int)uVar14;
  }
  else {
    if (param_2[0x4c] == 0) goto LAB_00e439a4;
LAB_00e4396c:
    uVar14 = FUN_00e1bb5c(param_1,0);
    iVar11 = (int)uVar14;
  }
  if (iVar11 == 0) {
    uVar38 = param_2[0x17];
    lVar39 = param_2[0x18];
    local_1a0 = 0;
    uStack_198 = 0;
    pbStack_1b8 = (byte *)0x0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    pcStack_1d8 = (code *)0x0;
    local_1e0 = (code *)0x0;
    local_1c8 = (char *)0x0;
    local_1d0 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    local_220 = (code *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    local_240 = 0;
    local_228 = (code *)0x0;
    local_230 = (code *)0x0;
    pcStack_258 = (char *)0x0;
    local_260 = (char *)0x0;
    local_248 = 0;
    local_250 = (char *)0x0;
    (*(code *)**(undefined8 **)(param_2[0x20] + 8))(&local_260,0,0,uVar38);
    local_1d0 = lVar39;
    lVar15 = FUN_00e1d4a0(lVar39);
    uVar10 = FUN_00e1d718(lVar39,0x1f);
    if (uVar10 == 0) {
      iVar11 = strncmp(*(char **)(lVar39 + 0x40),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
      FUN_00e1d90c(lVar39);
      if (iVar11 == 0) {
LAB_00e43aa8:
        lVar16 = FUN_00e1d4a0(lVar39);
        lVar34 = *(long *)(lVar39 + 8);
        lVar17 = FUN_00e1d4a0(lVar39);
        uVar14 = lVar34 - lVar17;
        if (0x108 < uVar14) {
          uVar14 = 0x109;
        }
        uVar10 = FUN_00e1bbd0(lVar39,&local_188,uVar14);
        if (uVar10 == 0) {
          lVar17 = 0;
          do {
            pbVar36 = (byte *)((long)&local_188 + uVar14 + lVar17);
            *pbVar36 = 0;
            if (&local_188 < pbVar36 + -6) {
              pbVar26 = (byte *)&local_188;
              bVar42 = (byte)local_188;
              do {
                if ((bVar42 == 0x53) &&
                   (iVar11 = strncmp((char *)pbVar26,"StartData",9), iVar11 == 0)) {
                  lVar17 = 10;
LAB_00e43bc4:
                  uVar10 = FUN_00e1bb5c(lVar39,lVar15);
                  if (uVar10 != 0) goto joined_r0x00e44544;
                  pbVar26 = pbVar26 + lVar16 + (lVar17 - (long)&local_188);
                  lVar16 = (long)pbVar26 - lVar15;
                  uVar10 = FUN_00e1d5c4(lVar39,lVar16,&local_1c8);
                  pcVar24 = local_1c8;
                  if (uVar10 != 0) goto joined_r0x00e44544;
                  local_250 = local_1c8 + lVar16;
                  local_1a0 = CONCAT44(local_1a0._4_4_,0xffffffff);
                  local_260 = local_1c8;
                  pcStack_258 = local_1c8;
                  local_1c0 = lVar16;
                  pbStack_1b8 = pbVar26;
                  (*local_220)(&local_260);
                  (*local_228)(&local_260);
                  pcVar30 = local_260;
                  (*local_220)(&local_260);
                  (*local_228)(&local_260);
                  pcVar40 = local_250 + -6;
                  if (pcVar40 < local_260) goto LAB_00e43cf4;
                  pcVar44 = local_250 + -9;
                  goto LAB_00e43c70;
                }
                pbVar35 = pbVar26 + 1;
                bVar42 = *pbVar35;
                if ((bVar42 == 0x73) && (iVar11 = strncmp((char *)pbVar26,"/sfnts",6), iVar11 == 0))
                {
                  lVar17 = 7;
                  goto LAB_00e43bc4;
                }
                pbVar26 = pbVar35;
              } while (pbVar35 < pbVar36 + -6);
            }
            if (lVar17 + uVar14 < 9) {
              uVar10 = 3;
              break;
            }
            local_180 = *(byte *)((long)&local_188 + uVar14 + lVar17 + -1);
            local_188 = *(undefined8 **)((long)&local_188 + uVar14 + lVar17 + -9);
            lVar34 = *(long *)(lVar39 + 8);
            lVar16 = lVar16 + 0x100;
            lVar17 = FUN_00e1d4a0(lVar39);
            uVar14 = lVar34 - lVar17;
            if (0xff < uVar14) {
              uVar14 = 0x100;
            }
            uVar10 = FUN_00e1bbd0(lVar39,auStack_17f,uVar14);
            lVar17 = 9;
          } while (uVar10 == 0);
        }
        goto joined_r0x00e44544;
      }
      uVar10 = 2;
    }
    goto joined_r0x00e44544;
  }
  goto LAB_00e441f4;
  while( true ) {
    if (((local_260 <= pcVar44) && (*local_260 == 'S')) &&
       (iVar11 = strncmp(local_260,"StartData",9), iVar11 == 0)) {
      iVar11 = strncmp(pcVar24,"(Hex)",5);
      uVar14 = local_1b0;
      if ((iVar11 != 0) || (uVar14 = strtol(pcVar30,(char **)0x0,10), -1 < (long)uVar14)) {
        local_1b0 = uVar14;
        pcVar40 = local_1c8 + local_1c0;
        local_264 = 0;
        local_248 = local_248 & 0xffffffff00000000;
        pcVar24 = local_1c8;
        local_250 = pcVar40;
        goto LAB_00e43da8;
      }
      uVar10 = 3;
      goto joined_r0x00e44544;
    }
    if ((pcVar9[1] == 's') && (iVar11 = strncmp(pcVar9,"/sfnts",6), iVar11 == 0)) {
      uVar10 = 2;
      goto joined_r0x00e44544;
    }
    (*local_220)(&local_260);
    (*local_228)(&local_260);
    pcVar24 = pcVar30;
    pcVar30 = pcVar9;
    if (pcVar40 < local_260) break;
LAB_00e43c70:
    pcVar9 = local_260;
    uVar10 = (uint)local_248;
    if ((uint)local_248 != 0) goto joined_r0x00e44544;
  }
LAB_00e43cf4:
  FUN_00e1d86c(lVar39,&local_1c8);
  uVar10 = FUN_00e1bb5c(lVar39,pbVar26);
  if (uVar10 != 0) goto joined_r0x00e44544;
  goto LAB_00e43aa8;
LAB_00e43da8:
  do {
    local_260 = pcVar24;
    (*local_228)(&local_260);
    pcVar9 = local_260;
    pcVar44 = local_260;
    if (pcVar40 <= local_260) {
      pcVar44 = pcVar40 + -1;
    }
    if (pcVar24 < pcVar44 + -0x11) {
      do {
        if (((*pcVar24 == '%') && (iVar11 = strncmp(pcVar24,"%ADOBeginFontDict",0x11), iVar11 == 0))
           && (0 < *(int *)(param_2 + 0x47))) {
          local_1a0 = CONCAT44(local_1a0._4_4_,(int)local_1a0 + 1);
        }
        pcVar24 = pcVar24 + 1;
      } while (pcVar44 + -0x11 != pcVar24);
    }
    if (((pcVar40 <= pcVar9) || ((*local_220)(&local_260), pcVar40 <= local_260)) ||
       ((uint)local_248 != 0)) goto LAB_00e44100;
    if ((pcVar9 + 2 < pcVar40) && (*pcVar9 == '/')) {
      pcVar24 = pcVar9 + 1;
      uVar10 = (uint)((long)local_260 - (long)pcVar24);
      if (0x14 < uVar10 - 1) goto LAB_00e440ec;
      uVar14 = (long)local_260 - (long)pcVar24 & 0xffffffff;
      ppuVar43 = &PTR_s_CIDFontName_01c94410;
      if (uVar10 < 2) {
        do {
          while( true ) {
            pcVar44 = *ppuVar43;
            if (pcVar44 == (char *)0x0) goto LAB_00e440ec;
            if ((*pcVar24 == *pcVar44) && (sVar18 = strlen(pcVar44), uVar14 == sVar18)) break;
            ppuVar43 = ppuVar43 + 6;
          }
          if (*(int *)((long)ppuVar43 + 0xc) == 0xb) {
            (*(code *)ppuVar43[2])(param_2,&local_260);
            uVar10 = (uint)local_248;
          }
          else {
            puVar19 = param_2 + 0x21;
            switch(*(undefined4 *)(ppuVar43 + 1)) {
            case 0:
              break;
            default:
              if (((int)local_1a0 < 0) || (*(int *)(param_2 + 0x47) <= (int)local_1a0)) {
                uVar10 = 0xa0;
                goto LAB_00e43f7c;
              }
              puVar19 = (undefined8 *)(param_2[0x48] + (long)(int)local_1a0 * 0x150);
              break;
            case 2:
              puVar19 = param_2 + 0x4a;
              break;
            case 3:
              puVar19 = param_2 + 0x27;
              break;
            case 5:
              puVar19 = param_2 + 0x2e;
            }
            pcVar23 = local_1e0;
            if (*(int *)((long)ppuVar43 + 0xc) - 9U < 2) {
              pcVar23 = pcStack_1d8;
            }
            local_188 = puVar19;
            uVar10 = (*pcVar23)(&local_260,ppuVar43,&local_188,0,0);
          }
LAB_00e43f7c:
          iVar11 = 7;
          local_248 = CONCAT44(local_248._4_4_,uVar10);
          uVar12 = (uint)pcVar30;
          if (uVar10 != 0) {
            iVar11 = 1;
            uVar12 = uVar10;
          }
          pcVar30 = (char *)(ulong)uVar12;
        } while (iVar11 == 0);
      }
      else {
        do {
          while( true ) {
            pcVar44 = *ppuVar43;
            if (pcVar44 == (char *)0x0) goto LAB_00e440ec;
            if ((*pcVar24 == *pcVar44) && (sVar18 = strlen(pcVar44), uVar14 == sVar18)) break;
LAB_00e44010:
            ppuVar43 = ppuVar43 + 6;
          }
          uVar27 = 1;
          do {
            if (pcVar24[uVar27] != pcVar44[uVar27]) goto LAB_00e44010;
            uVar12 = (int)uVar27 + 1;
            uVar27 = (ulong)uVar12;
          } while (uVar12 < uVar10);
          if (*(int *)((long)ppuVar43 + 0xc) == 0xb) {
            (*(code *)ppuVar43[2])(param_2,&local_260);
            uVar12 = (uint)local_248;
          }
          else {
            puVar19 = param_2 + 0x2e;
            switch(*(undefined4 *)(ppuVar43 + 1)) {
            case 0:
              puVar19 = param_2 + 0x21;
              break;
            default:
              if (((int)local_1a0 < 0) || (*(int *)(param_2 + 0x47) <= (int)local_1a0)) {
                uVar12 = 0xa0;
                goto LAB_00e440b8;
              }
              puVar19 = (undefined8 *)(param_2[0x48] + (long)(int)local_1a0 * 0x150);
              break;
            case 2:
              puVar19 = param_2 + 0x4a;
              break;
            case 3:
              puVar19 = param_2 + 0x27;
              break;
            case 5:
              break;
            }
            pcVar23 = local_1e0;
            if (*(int *)((long)ppuVar43 + 0xc) - 9U < 2) {
              pcVar23 = pcStack_1d8;
            }
            local_188 = puVar19;
            uVar12 = (*pcVar23)(&local_260,ppuVar43,&local_188,0,0);
          }
LAB_00e440b8:
          iVar11 = 7;
          uVar2 = (uint)pcVar30;
          if (uVar12 != 0) {
            iVar11 = 1;
            uVar2 = uVar12;
          }
          pcVar30 = (char *)(ulong)uVar2;
          local_248 = CONCAT44(local_248._4_4_,uVar12);
        } while (iVar11 == 0);
      }
      if (iVar11 == 7) goto LAB_00e440ec;
    }
    else {
LAB_00e440ec:
      iVar11 = 0;
      pcVar24 = local_260;
    }
  } while (iVar11 == 0);
  local_264 = (uint)pcVar30;
  if (iVar11 == 2) {
LAB_00e44100:
    if (*(int *)(param_2 + 0x47) == 0) {
      local_264 = 3;
      uVar10 = local_264;
      goto joined_r0x00e44544;
    }
    local_264 = (uint)local_248;
  }
  uVar10 = local_264;
  if ((-1 < (int)param_3) && (local_264 == 0)) {
    puVar19 = (undefined8 *)FUN_00e1388c(uVar38,0x50,&local_264);
    param_2[0x4e] = puVar19;
    uVar10 = local_264;
    if (local_264 == 0) {
      if (local_1b0 == 0) {
        puVar25 = (undefined8 *)param_2[0x18];
        uVar38 = *puVar25;
        puVar19[1] = puVar25[1];
        *puVar19 = uVar38;
        uVar38 = puVar25[6];
        uVar45 = puVar25[9];
        uVar21 = puVar25[8];
        uVar47 = puVar25[3];
        uVar46 = puVar25[2];
        uVar49 = puVar25[5];
        uVar48 = puVar25[4];
        puVar19[7] = puVar25[7];
        puVar19[6] = uVar38;
        puVar19[9] = uVar45;
        puVar19[8] = uVar21;
        puVar19[3] = uVar47;
        puVar19[2] = uVar46;
        puVar19[5] = uVar49;
        puVar19[4] = uVar48;
        iVar11 = *(int *)(param_2 + 0x45);
        param_2[0x49] = pbStack_1b8;
        local_264 = 0;
        pbVar36 = pbStack_1b8;
joined_r0x00e44428:
        if ((((iVar11 < 0) || (iVar13 = *(int *)((long)param_2 + 0x22c), iVar13 < 1)) ||
            (4 < iVar11)) || (4 < iVar13)) {
          local_264 = 3;
          uVar10 = local_264;
        }
        else {
          lVar39 = param_2[0x4e];
          iVar4 = *(int *)(param_2 + 0x47);
          uVar14 = *(long *)(lVar39 + 8) - (long)pbVar36;
          if (0 < iVar4) {
            lVar15 = 0;
            puVar20 = (uint *)(param_2[0x48] + 0x148);
            do {
              if (puVar20[-0x34] < 0x3e9) {
                if (puVar20[-0x33] < 0x3e9) goto LAB_00e44494;
LAB_00e444ac:
                puVar20[-0x33] = 1;
                uVar10 = *puVar20;
              }
              else {
                puVar20[-0x34] = 7;
                if (1000 < puVar20[-0x33]) goto LAB_00e444ac;
LAB_00e44494:
                uVar10 = *puVar20;
              }
              if ((int)uVar10 < 0) goto LAB_00e44528;
              uVar12 = puVar20[-4];
              if (((uVar10 == 0) && (uVar12 != 0)) ||
                 ((4 < (int)uVar10 || ((uVar14 < *(ulong *)(puVar20 + -2) || ((int)uVar12 < 0))))))
              goto LAB_00e44528;
              if (uVar10 != 0) {
                uVar27 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar27 = (uVar14 - *(ulong *)(puVar20 + -2)) / (ulong)uVar10;
                }
                if (uVar27 < uVar12) goto LAB_00e44528;
              }
              lVar15 = lVar15 + 1;
              puVar20 = puVar20 + 0x54;
            } while (lVar15 < iVar4);
          }
          if (uVar14 < (ulong)param_2[0x44]) {
LAB_00e44528:
            uVar10 = 3;
          }
          else {
            iVar13 = iVar13 + iVar11;
            if (iVar13 != 0) {
              uVar27 = 0;
              if ((long)iVar13 != 0) {
                uVar27 = (uVar14 - param_2[0x44]) / (ulong)(long)iVar13;
              }
              if (uVar27 < (ulong)param_2[0x46]) goto LAB_00e44528;
            }
            uVar38 = param_2[0x17];
            lVar15 = param_2[0x20];
            puVar20 = (uint *)FUN_00e13bcc(uVar38,0x10,0,(long)iVar4,0,&local_188);
            param_2[0x4b] = puVar20;
            puVar41 = (ulong *)0x0;
            if ((uint)local_188 == 0) {
              iVar11 = *(int *)(param_2 + 0x47);
              if (iVar11 < 1) {
                puVar41 = (ulong *)0x0;
              }
              else {
                lVar16 = 0;
                puVar41 = (ulong *)0x0;
                uVar10 = 0;
                local_2a8 = (ulong *)0x0;
                do {
                  lVar34 = param_2[0x48];
                  lVar17 = lVar34 + lVar16 * 0x150;
                  uVar12 = *(uint *)(lVar17 + 0x138);
                  if (uVar12 != 0) {
                    iVar11 = *(int *)(lVar17 + 4);
                    uVar2 = uVar12 + 1;
                    if (uVar10 < uVar2) {
                      uVar3 = uVar12 + 4 & 0xfffffffc;
                      if (uVar10 < uVar3) {
                        puVar41 = (ulong *)FUN_00e13bcc(uVar38,8,uVar10,uVar3,local_2a8,&local_188);
                        if ((uint)local_188 == 0) {
                          uVar10 = uVar12 + 4 & 0xfffffffc;
                          local_2a8 = puVar41;
                          goto LAB_00e447b0;
                        }
                      }
                      else {
                        uVar22 = 0xa0;
LAB_00e44a14:
                        local_188 = (undefined8 *)CONCAT44(local_188._4_4_,uVar22);
                      }
                    }
                    else {
LAB_00e447b0:
                      iVar13 = FUN_00e1bb5c(lVar39,*(long *)(lVar34 + lVar16 * 0x150 + 0x140) +
                                                   param_2[0x49]);
                      local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar13);
                      if (iVar13 == 0) {
                        lVar34 = lVar34 + lVar16 * 0x150;
                        iVar13 = FUN_00e1d718(lVar39,*(int *)(lVar34 + 0x148) * uVar2);
                        local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar13);
                        if (iVar13 == 0) {
                          uVar3 = *(uint *)(lVar34 + 0x148);
                          if ((uVar3 & 0xff) == 0) {
                            uVar14 = 0;
                            do {
                              puVar41[uVar14] = 0;
                              uVar3 = (int)uVar14 + 1;
                              uVar14 = (ulong)uVar3;
                            } while (uVar3 <= uVar12);
                          }
                          else {
                            lVar17 = *(long *)(lVar39 + 0x40);
                            uVar29 = 0;
                            do {
                              lVar34 = 0;
                              uVar14 = 0;
                              uVar32 = uVar3;
                              do {
                                pbVar36 = (byte *)(lVar17 + lVar34);
                                uVar32 = uVar32 - 1;
                                lVar34 = lVar34 + 1;
                                uVar14 = (ulong)*pbVar36 | uVar14 << 8;
                              } while ((uVar32 & 0xff) != 0);
                              puVar41[uVar29] = uVar14;
                              uVar29 = uVar29 + 1;
                              lVar17 = lVar17 + ((ulong)(uVar3 - 1) & 0xff) + 1;
                            } while (uVar29 <= uVar12);
                          }
                          FUN_00e1d90c(lVar39);
                          uVar37 = *puVar41;
                          uVar27 = 1;
                          uVar14 = uVar37;
                          do {
                            puVar1 = puVar41 + uVar27;
                            if (*puVar1 < uVar14) goto LAB_00e44a10;
                            uVar3 = (int)uVar27 + 1;
                            uVar27 = (ulong)uVar3;
                            uVar14 = *puVar1;
                          } while (uVar3 <= uVar12);
                          uVar14 = puVar41[uVar12];
                          if ((ulong)(*(long *)(lVar39 + 8) - param_2[0x49]) < uVar14) {
LAB_00e44a10:
                            uVar22 = 3;
                            goto LAB_00e44a14;
                          }
                          uVar21 = FUN_00e13bcc(uVar38,8,0,uVar2,0,&local_188);
                          *(undefined8 *)(puVar20 + 2) = uVar21;
                          if ((uint)local_188 == 0) {
                            lVar17 = uVar14 - uVar37;
                            uVar21 = FUN_00e1388c(uVar38,lVar17,&local_188);
                            **(undefined8 **)(puVar20 + 2) = uVar21;
                            if ((uint)local_188 == 0) {
                              iVar13 = FUN_00e1bb5c(lVar39,*puVar41 + param_2[0x49]);
                              local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar13);
                              if (iVar13 == 0) {
                                iVar13 = FUN_00e1bbd0(lVar39,**(undefined8 **)(puVar20 + 2),lVar17);
                                local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar13);
                                if (iVar13 == 0) {
                                  uVar27 = *puVar41;
                                  uVar37 = 1;
                                  uVar14 = uVar27;
                                  do {
                                    lVar17 = uVar37 * 8;
                                    iVar13 = (int)uVar37;
                                    uVar33 = puVar41[uVar37];
                                    uVar2 = iVar13 + 1;
                                    uVar37 = (ulong)uVar2;
                                    *(ulong *)(*(long *)(puVar20 + 2) + lVar17) =
                                         *(long *)(*(long *)(puVar20 + 2) + (ulong)(iVar13 - 1) * 8)
                                         + (uVar33 - uVar14);
                                    uVar14 = uVar33;
                                  } while (uVar2 <= uVar12);
                                  if ((-1 < iVar11) &&
                                     ((**(code **)(lVar15 + 0x20))
                                                (**(undefined8 **)(puVar20 + 2),puVar41[1] - uVar27,
                                                 0x10ea), uVar12 != 1)) {
                                    lVar17 = 0;
                                    do {
                                      (**(code **)(lVar15 + 0x20))
                                                (*(undefined8 *)
                                                  (*(long *)(puVar20 + 2) + lVar17 * 8 + 8),
                                                 puVar41[lVar17 + 2] - puVar41[lVar17 + 1],0x10ea);
                                      lVar17 = lVar17 + 1;
                                    } while ((ulong)uVar12 - 1 != lVar17);
                                  }
                                  *puVar20 = uVar12;
                                  iVar11 = *(int *)(param_2 + 0x47);
                                  goto LAB_00e449fc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    lVar39 = param_2[0x4b];
                    if (lVar39 != 0) {
                      if (0 < *(int *)(param_2 + 0x47)) {
                        lVar15 = 0;
                        lVar16 = 8;
                        do {
                          if (*(undefined8 **)(lVar39 + lVar16) == (undefined8 *)0x0) {
                            puVar19 = (undefined8 *)(lVar39 + lVar15 * 0x10 + 8);
                          }
                          else {
                            FUN_00e139fc(uVar38,**(undefined8 **)(lVar39 + lVar16));
                            **(undefined8 **)(param_2[0x4b] + lVar16) = 0;
                            puVar19 = (undefined8 *)(param_2[0x4b] + lVar16);
                          }
                          FUN_00e139fc(uVar38,*puVar19);
                          lVar15 = lVar15 + 1;
                          lVar39 = param_2[0x4b];
                          *(undefined8 *)(lVar39 + lVar16) = 0;
                          lVar16 = lVar16 + 0x10;
                        } while (lVar15 < *(int *)(param_2 + 0x47));
                      }
                      FUN_00e139fc(uVar38);
                      param_2[0x4b] = 0;
                    }
                    break;
                  }
LAB_00e449fc:
                  lVar16 = lVar16 + 1;
                  puVar20 = puVar20 + 4;
                } while (lVar16 < iVar11);
              }
            }
            FUN_00e139fc(uVar38,puVar41);
            uVar10 = (uint)local_188;
          }
        }
      }
      else {
        uVar14 = *(long *)(param_2[0x18] + 8) - (long)pbStack_1b8;
        if (uVar14 < local_1b0) {
          local_1b0 = uVar14;
        }
        pcVar24 = (char *)FUN_00e1388c(uVar38,local_1b0,&local_264);
        uVar14 = local_1b0;
        param_2[0x4d] = pcVar24;
        uVar10 = local_264;
        if (local_264 == 0) {
          lVar39 = param_2[0x18];
          uVar10 = FUN_00e1bb5c(lVar39,pbStack_1b8);
          if (uVar10 == 0) {
            if ((long)uVar14 < 1) {
LAB_00e44678:
              local_264 = 0;
              FUN_00e14c44(param_2[0x4e],param_2[0x4d],local_1b0);
              pbVar36 = (byte *)0x0;
              iVar11 = *(int *)(param_2 + 0x45);
              param_2[0x49] = 0;
              goto joined_r0x00e44428;
            }
            pcVar30 = pcVar24 + uVar14;
            cVar31 = '\x01';
            while( true ) {
              lVar15 = FUN_00e1d4a0(lVar39);
              uVar14 = *(long *)(lVar39 + 8) - lVar15;
              if (uVar14 == 0) break;
              if (0xff < uVar14) {
                uVar14 = 0x100;
              }
              uVar10 = FUN_00e1bbd0(lVar39,&local_188,uVar14);
              if (uVar10 != 0) goto joined_r0x00e44544;
              pbVar36 = (byte *)&local_188;
              lVar16 = FUN_00e1d4a0(lVar39);
              pbVar26 = pbVar36 + (lVar16 - lVar15);
              do {
                bVar42 = *pbVar36;
                uVar12 = bVar42 - 0x30;
                if ((uVar12 < 10) || (uVar12 = bVar42 - 0x61, uVar12 < 6)) {
                  cVar28 = (char)uVar12;
                  bVar8 = false;
                  if (cVar31 == '\0') goto LAB_00e44658;
LAB_00e44638:
                  *pcVar24 = (char)(uVar12 << 4);
                  if (bVar8) goto LAB_00e44678;
LAB_00e44668:
                  cVar31 = '\x01' - cVar31;
                  if (pcVar30 <= pcVar24) goto LAB_00e44678;
                }
                else {
                  uVar12 = (uint)bVar42;
                  if (uVar12 - 0x41 < 6) {
                    bVar8 = false;
                    uVar12 = uVar12 - 0x37;
                    cVar28 = (char)uVar12;
joined_r0x00e44654:
                    if (cVar31 != '\0') goto LAB_00e44638;
LAB_00e44658:
                    *pcVar24 = *pcVar24 + cVar28;
                    pcVar24 = pcVar24 + 1;
                    if (!bVar8) goto LAB_00e44668;
                    goto LAB_00e44678;
                  }
                  uVar10 = 0xa0;
                  if (0x3e < uVar12) goto joined_r0x00e44544;
                  if ((1L << ((ulong)bVar42 & 0x3f) & 0x100003601U) == 0) {
                    if ((ulong)bVar42 == 0x3e) {
                      uVar12 = 0;
                      cVar28 = '\0';
                      bVar8 = true;
                      goto joined_r0x00e44654;
                    }
                    goto joined_r0x00e44544;
                  }
                }
                pbVar36 = pbVar36 + 1;
              } while (pbVar36 < pbVar26);
            }
            uVar10 = 0xa0;
          }
        }
      }
    }
  }
joined_r0x00e44544:
  local_264 = uVar10;
  if (local_1c8 != (char *)0x0) {
    FUN_00e1d86c(local_1d0,&local_1c8);
  }
  (*local_230)(&local_260);
  uVar14 = (ulong)local_264;
  if ((-1 < (int)param_3) && (local_264 == 0)) {
    if ((param_3 & 0xffff) == 0) {
      uVar14 = param_2[2];
      param_2[4] = param_2[0x46];
      *(undefined4 *)(param_2 + 9) = 0;
      param_2[1] = 0;
      param_2[2] = uVar14 | 0x811;
      if (*(char *)(param_2 + 0x2d) != '\0') {
        param_2[2] = uVar14 | 0x815;
      }
      pcVar24 = (char *)param_2[0x2a];
      param_2[5] = pcVar24;
      param_2[6] = "Regular";
      if (pcVar24 == (char *)0x0) {
        if (param_2[0x21] != 0) {
          param_2[5] = param_2[0x21];
        }
      }
      else {
        pcVar30 = (char *)param_2[0x29];
        if (pcVar30 != (char *)0x0) {
          for (; cVar31 = *pcVar30, cVar31 != '\0'; pcVar30 = pcVar30 + 1) {
            while (cVar28 = *pcVar24, cVar28 != cVar31) {
              if ((cVar31 == '-') || (cVar31 == ' ')) {
                pcVar30 = pcVar30 + 1;
                cVar31 = *pcVar30;
              }
              else {
                if ((cVar28 != ' ') && (cVar28 != '-')) {
                  if (cVar28 == '\0') {
                    param_2[6] = pcVar30;
                  }
                  goto LAB_00e442e0;
                }
                pcVar24 = pcVar24 + 1;
                cVar31 = *pcVar30;
              }
              if (cVar31 == '\0') goto LAB_00e442e0;
            }
            pcVar24 = pcVar24 + 1;
          }
        }
      }
LAB_00e442e0:
      pcVar24 = (char *)param_2[0x2b];
      lVar39 = param_2[0x2c];
      param_2[3] = (ulong)(lVar39 != 0);
      if ((pcVar24 != (char *)0x0) &&
         ((iVar11 = strcmp(pcVar24,"Bold"), iVar11 == 0 ||
          (iVar11 = strcmp(pcVar24,"Black"), iVar11 == 0)))) {
        param_2[3] = (ulong)(lVar39 != 0) | 2;
      }
      uVar10 = (uint)*(ushort *)(param_2 + 0x11);
      param_2[0xd] = (long)param_2[0x2e] >> 0x10;
      param_2[0xe] = (long)param_2[0x2f] >> 0x10;
      *(undefined4 *)(param_2 + 7) = 0;
      param_2[8] = 0;
      param_2[0xf] = param_2[0x30] + 0xffff >> 0x10;
      param_2[0x10] = param_2[0x31] + 0xffff >> 0x10;
      if (*(ushort *)(param_2 + 0x11) == 0) {
        uVar10 = 1000;
        *(undefined2 *)(param_2 + 0x11) = 1000;
      }
      sVar5 = (short)((ulong)param_2[0x2f] >> 0x10);
      *(short *)((long)param_2 + 0x8c) = sVar5;
      sVar7 = (short)((ulong)(param_2[0x31] + 0xffff) >> 0x10);
      uVar12 = (int)sVar7 - (int)sVar5;
      uVar10 = (uVar10 * 0xc) / 10;
      if ((int)uVar12 <= (int)(short)uVar10) {
        uVar12 = uVar10;
      }
      *(short *)((long)param_2 + 0x8a) = sVar7;
      *(short *)((long)param_2 + 0x8e) = (short)uVar12;
      uVar14 = 0;
      *(undefined4 *)((long)param_2 + 0x94) = *(undefined4 *)((long)param_2 + 0x16a);
      if (*(long *)(lVar6 + 0x28) == local_78) {
        return;
      }
      goto LAB_00e43a78;
    }
    uVar14 = 6;
  }
LAB_00e441f4:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
LAB_00e43a78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

