
int FUN_0109562c(char *param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  size_t sVar13;
  undefined4 uVar14;
  long lVar15;
  undefined2 uVar16;
  ushort uVar17;
  uint uVar18;
  char *pcVar19;
  undefined *puVar20;
  uint uVar21;
  long lVar22;
  char cVar23;
  short sVar24;
  byte *pbVar25;
  long lVar26;
  short sVar27;
  ushort uVar28;
  ushort uVar29;
  undefined8 uVar30;
  ulong uVar31;
  char *pcVar32;
  uint uVar33;
  undefined **ppuVar34;
  ulong uVar35;
  int local_18c;
  long local_188 [4];
  int local_168 [66];
  
  lVar6 = tpidr_el0;
  lVar15 = *(long *)(lVar6 + 0x28);
  local_18c = 0;
  uVar35 = param_5[7];
  if (uVar35 == 0) {
    uVar30 = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010956cc with catch @ 01095678
                        */
    uVar30 = *(undefined8 *)(uVar35 + 0x880f8);
  }
  iVar8 = strncmp(param_1,"COMMENT",7);
  if (iVar8 == 0) {
    bVar4 = param_1[7];
    if ((bVar4 < 0x21) && ((1L << ((ulong)bVar4 & 0x3f) & 0x100002601U) != 0)) {
      iVar8 = 0;
      iVar9 = local_18c;
      if ((*(int *)(param_5[8] + 8) != 0) && (uVar35 != 0)) {
        local_168[0] = 0;
        lVar22 = -8;
        if (bVar4 == 0) {
          lVar22 = -7;
        }
        sVar13 = lVar22 + param_2;
        lVar22 = ft_mem_realloc(*(undefined8 *)(uVar35 + 0x880f8),1,*(long *)(uVar35 + 0xa0),
                                sVar13 + 1 + *(long *)(uVar35 + 0xa0),*(undefined8 *)(uVar35 + 0x98)
                                ,local_168);
        *(long *)(uVar35 + 0x98) = lVar22;
        iVar8 = local_168[0];
        iVar9 = local_168[0];
        if (local_168[0] == 0) {
          pbVar25 = (byte *)(param_1 + 7);
          if (bVar4 != 0) {
            pbVar25 = (byte *)(param_1 + 8);
          }
          pvVar12 = (void *)(lVar22 + *(long *)(uVar35 + 0xa0));
          memcpy(pvVar12,pbVar25,sVar13);
          *(undefined1 *)((long)pvVar12 + sVar13) = 10;
          *(size_t *)(uVar35 + 0xa0) = *(long *)(uVar35 + 0xa0) + sVar13 + 1;
          iVar8 = local_168[0];
          iVar9 = local_168[0];
        }
      }
      goto LAB_01095b0c;
    }
  }
  uVar33 = (uint)*param_5;
  if ((*param_5 & 1) == 0) {
    puVar1 = param_5 + 0x880d;
    uVar35 = *puVar1;
                    /* try { // try from 010956c4 to 011956cb has its CatchHandler @ 01095840 */
                    /* try { // try from 010956cc to 01195843 has its CatchHandler @ 01095678 */
    iVar8 = strncmp(param_1,"STARTFONT",9);
    if (((iVar8 == 0) && ((byte)param_1[9] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[9] & 0x3f) & 0x100002601U) != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010956c4 with catch @ 01095840
                        */
                    /* catch() { ... } // from try @ 01095888 with catch @ 01095844 */
      *param_5 = 1;
      param_5[7] = 0;
                    /* try { // try from 01095858 to 0119585b has its CatchHandler @ 010958c0 */
      uVar10 = ft_mem_alloc(uVar35,0x88128,&local_18c);
      iVar8 = local_18c;
      iVar9 = local_18c;
      if (local_18c == 0) {
                    /* try { // try from 01095868 to 01195887 has its CatchHandler @ 010958cc */
        param_5[7] = uVar10;
                    /* try { // try from 01095888 to 011958fb has its CatchHandler @ 01095844 */
        *(ulong *)(uVar10 + 0x880f8) = *puVar1;
        *puVar1 = 0;
        local_168[0] = 0;
        *(undefined8 *)(uVar10 + 0x88110) = 0xf100000050;
        *(undefined4 *)(uVar10 + 0x88118) = 0;
                    /* catch() { ... } // from try @ 01095858 with catch @ 010958c0 */
        uVar30 = ft_mem_realloc(uVar35,8,0,0xf1,0,local_168);
                    /* catch() { ... } // from try @ 01095868 with catch @ 010958cc */
        *(undefined8 *)(uVar10 + 0x88120) = uVar30;
        local_18c = local_168[0];
        iVar8 = local_168[0];
        iVar9 = local_18c;
        if (local_168[0] == 0) {
          uVar31 = 0;
          ppuVar34 = &PTR_s_ADD_STYLE_NAME_0172acf8;
          iVar8 = local_18c;
          do {
            local_18c = iVar8;
            local_18c = FUN_0109699c(*ppuVar34,uVar31,(undefined8 *)(uVar10 + 0x88110),uVar35);
            iVar8 = local_18c;
            iVar9 = local_18c;
            if (local_18c != 0) goto LAB_01095b0c;
            uVar31 = uVar31 + 1;
            ppuVar34 = ppuVar34 + 3;
            iVar8 = 0;
          } while (uVar31 < 0x53);
          puVar11 = (undefined8 *)ft_mem_alloc(uVar35,0x18,&local_18c);
          *(undefined8 **)(param_5[7] + 0xe8) = puVar11;
          iVar8 = local_18c;
          iVar9 = local_18c;
          if (local_18c == 0) {
            local_168[0] = 0;
            *puVar11 = 0xf100000050;
            *(undefined4 *)(puVar11 + 1) = 0;
            uVar30 = ft_mem_realloc(uVar35,8,0,0xf1,0,local_168);
            puVar11[2] = uVar30;
            local_18c = local_168[0];
            iVar8 = local_168[0];
            iVar9 = local_18c;
            if (local_168[0] == 0) {
              uVar35 = param_5[7];
              uVar14 = *(undefined4 *)(param_5[8] + 0xc);
              *(undefined8 *)(uVar35 + 0x38) = 0xffffffffffffffff;
              *(undefined4 *)(uVar35 + 0x30) = uVar14;
              iVar8 = local_168[0];
            }
          }
        }
      }
    }
    else {
      iVar8 = 0xb0;
      iVar9 = iVar8;
    }
    goto LAB_01095b0c;
  }
  iVar8 = strncmp(param_1,"STARTPROPERTIES",0xf);
  if (((iVar8 != 0) || (0x20 < (byte)param_1[0xf])) ||
     ((1L << ((ulong)(byte)param_1[0xf] & 0x3f) & 0x100002601U) == 0)) {
    iVar8 = strncmp(param_1,"FONTBOUNDINGBOX",0xf);
    if (((iVar8 == 0) && ((byte)param_1[0xf] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[0xf] & 0x3f) & 0x100002601U) != 0)) {
      if ((uVar33 >> 2 & 1) == 0) {
        iVar8 = 0xb2;
        iVar9 = iVar8;
      }
      else {
        iVar9 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
        iVar8 = iVar9;
        if (iVar9 == 0) {
          uVar35 = param_5[0x8809];
          pbVar25 = *(byte **)(uVar35 + 8);
          sVar24 = 0;
          if (pbVar25 != (byte *)0x0) {
            bVar4 = *pbVar25;
            if (bVar4 == 0) {
              sVar24 = 0;
            }
            else {
              if (bVar4 == 0x2d) {
                pbVar25 = pbVar25 + 1;
              }
              uVar10 = (ulong)*pbVar25;
              if (*pbVar25 == 0x30) {
                    /* catch() { ... } // from try @ 01095b1c with catch @ 01095ba4 */
                if ((pbVar25[1] | 0x20) == 0x78) {
                  pbVar25 = pbVar25 + 2;
                  uVar10 = (ulong)*pbVar25;
                  puVar20 = &DAT_0145ffea;
                  sVar24 = 0x10;
                }
                else {
                  puVar20 = &DAT_0146000a;
                  sVar24 = 10;
                  uVar10 = 0x30;
                }
              }
              else {
                puVar20 = &DAT_0146000a;
                sVar24 = 10;
              }
              sVar27 = 0;
              if ((1 << (ulong)((uint)uVar10 & 7) & (uint)(byte)puVar20[uVar10 >> 3]) != 0) {
                    /* try { // try from 01095f80 to 01195fcf has its CatchHandler @ 01095f80
                       catch(type#1 @ 00000000) { ... } // from try @ 01095f80 with catch @ 01095f80
                       catch(type#1 @ 00000000) { ... } // from try @ 01096010 with catch @ 01095f80
                       catch(type#1 @ 00000000) { ... } // from try @ 01096108 with catch @ 01095f80
                        */
                sVar27 = 0;
                do {
                  pbVar25 = pbVar25 + 1;
                  bVar3 = *pbVar25;
                  sVar27 = (ushort)(byte)(&DAT_0145ff6a)[uVar10] + sVar27 * sVar24;
                  uVar10 = (ulong)bVar3;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar20[bVar3 >> 3]) != 0);
              }
              sVar24 = -sVar27;
              if (bVar4 != 0x2d) {
                sVar24 = sVar27;
              }
            }
          }
          uVar10 = param_5[7];
          *(short *)(uVar10 + 8) = sVar24;
          pbVar25 = *(byte **)(uVar35 + 0x10);
                    /* try { // try from 01095fd0 to 01195fd7 has its CatchHandler @ 010960a4 */
          if (pbVar25 == (byte *)0x0) {
            uVar17 = 0;
          }
          else {
            bVar4 = *pbVar25;
                    /* try { // try from 01095fd8 to 0119600f has its CatchHandler @ 010960ac */
            uVar17 = (ushort)bVar4;
            if (bVar4 != 0) {
              if (bVar4 == 0x2d) {
                pbVar25 = pbVar25 + 1;
              }
              uVar31 = (ulong)*pbVar25;
              if (*pbVar25 == 0x30) {
                if ((pbVar25[1] | 0x20) == 0x78) {
                  pbVar25 = pbVar25 + 2;
                  uVar31 = (ulong)*pbVar25;
                  puVar20 = &DAT_0145ffea;
                  sVar24 = 0x10;
                    /* try { // try from 01096010 to 011960fb has its CatchHandler @ 01095f80 */
                }
                else {
                  puVar20 = &DAT_0146000a;
                  sVar24 = 10;
                  uVar31 = 0x30;
                }
              }
              else {
                puVar20 = &DAT_0146000a;
                sVar24 = 10;
              }
              uVar28 = 0;
              if ((1 << (ulong)((uint)uVar31 & 7) & (uint)(byte)puVar20[uVar31 >> 3]) != 0) {
                uVar28 = 0;
                do {
                  pbVar25 = pbVar25 + 1;
                  bVar3 = *pbVar25;
                  uVar28 = (ushort)(byte)(&DAT_0145ff6a)[uVar31] + uVar28 * sVar24;
                  uVar31 = (ulong)bVar3;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar20[bVar3 >> 3]) != 0);
              }
              uVar17 = -uVar28;
              if (bVar4 != 0x2d) {
                uVar17 = uVar28;
              }
            }
          }
          *(ushort *)(uVar10 + 10) = uVar17;
          pbVar25 = *(byte **)(uVar35 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01095fd0 with catch @ 010960a4
                        */
          if (pbVar25 == (byte *)0x0) {
            uVar28 = 0;
          }
          else {
            bVar4 = *pbVar25;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01095fd8 with catch @ 010960ac
                        */
            uVar28 = (ushort)bVar4;
            if (bVar4 != 0) {
              if (bVar4 == 0x2d) {
                pbVar25 = pbVar25 + 1;
              }
              uVar31 = (ulong)*pbVar25;
              if (*pbVar25 == 0x30) {
                if ((pbVar25[1] | 0x20) == 0x78) {
                  pbVar25 = pbVar25 + 2;
                  uVar31 = (ulong)*pbVar25;
                  puVar20 = &DAT_0145ffea;
                  sVar24 = 0x10;
                }
                else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010960fc with catch @ 01096100
                        */
                    /* try { // try from 01096104 to 01196107 has its CatchHandler @ 01096110 */
                  puVar20 = &DAT_0146000a;
                    /* try { // try from 01096108 to 01196113 has its CatchHandler @ 01095f80 */
                  sVar24 = 10;
                  uVar31 = 0x30;
                }
              }
              else {
                puVar20 = &DAT_0146000a;
                sVar24 = 10;
                    /* try { // try from 010960fc to 011960ff has its CatchHandler @ 01096100 */
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01096104 with catch @ 01096110
                        */
              uVar29 = 0;
              if ((1 << (ulong)((uint)uVar31 & 7) & (uint)(byte)puVar20[uVar31 >> 3]) != 0) {
                uVar29 = 0;
                do {
                  pbVar25 = pbVar25 + 1;
                  bVar3 = *pbVar25;
                  uVar29 = (ushort)(byte)(&DAT_0145ff6a)[uVar31] + uVar29 * sVar24;
                  uVar31 = (ulong)bVar3;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar20[bVar3 >> 3]) != 0);
              }
              uVar28 = -uVar29;
              if (bVar4 != 0x2d) {
                uVar28 = uVar29;
              }
            }
          }
          *(ushort *)(uVar10 + 0xc) = uVar28;
          pbVar25 = *(byte **)(uVar35 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            uVar28 = 0;
          }
          else {
            bVar4 = *pbVar25;
            uVar28 = (ushort)bVar4;
            if (bVar4 != 0) {
              if (bVar4 == 0x2d) {
                pbVar25 = pbVar25 + 1;
              }
              uVar35 = (ulong)*pbVar25;
              if (*pbVar25 == 0x30) {
                if ((pbVar25[1] | 0x20) == 0x78) {
                  pbVar25 = pbVar25 + 2;
                  uVar35 = (ulong)*pbVar25;
                  puVar20 = &DAT_0145ffea;
                  sVar24 = 0x10;
                }
                else {
                  puVar20 = &DAT_0146000a;
                  sVar24 = 10;
                  uVar35 = 0x30;
                }
              }
              else {
                puVar20 = &DAT_0146000a;
                sVar24 = 10;
              }
              uVar29 = 0;
              if ((1 << (ulong)((uint)uVar35 & 7) & (uint)(byte)puVar20[uVar35 >> 3]) != 0) {
                uVar29 = 0;
                do {
                  pbVar25 = pbVar25 + 1;
                  bVar3 = *pbVar25;
                  uVar29 = (ushort)(byte)(&DAT_0145ff6a)[uVar35] + uVar29 * sVar24;
                  uVar35 = (ulong)bVar3;
                } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar20[bVar3 >> 3]) != 0);
              }
              uVar28 = -uVar29;
                    /* try { // try from 01096240 to 0119628f has its CatchHandler @ 01096240
                       catch() { ... } // from try @ 01096240 with catch @ 01096240
                       catch() { ... } // from try @ 010962a0 with catch @ 01096240 */
              if (bVar4 != 0x2d) {
                uVar28 = uVar29;
              }
            }
          }
          *(ushort *)(uVar10 + 0xe) = uVar28;
          *(ushort *)(uVar10 + 0x10) = uVar28 + uVar17;
          *(ushort *)(uVar10 + 0x12) = -uVar28;
          *param_5 = *param_5 | 8;
          iVar8 = 0;
        }
      }
      goto LAB_01095b0c;
    }
    iVar8 = strncmp(param_1,"FONT",4);
    if (((iVar8 == 0) && ((byte)param_1[4] < 0x21)) &&
       ((1L << ((ulong)(byte)param_1[4] & 0x3f) & 0x100002601U) != 0)) {
      puVar1 = param_5 + 0x8809;
      local_18c = FUN_01096bfc(puVar1,&DAT_0145fc2e,param_1,param_2);
      iVar8 = local_18c;
      iVar9 = local_18c;
      if (local_18c != 0) goto LAB_01095b0c;
      puVar2 = param_5 + 0x880b;
      uVar35 = *puVar2;
      if (uVar35 != 0) {
        uVar10 = uVar35 - 1;
        if (uVar10 == 0) {
          *puVar2 = 0;
        }
        else {
          lVar22 = 0;
          do {
            uVar31 = lVar22 + 2;
            puVar11 = (undefined8 *)(*puVar1 + lVar22 * 8);
            lVar22 = lVar22 + 1;
            *puVar11 = puVar11[1];
          } while (uVar31 < uVar35);
          *puVar2 = uVar10;
          if (uVar10 != 0) {
            lVar22 = 0;
            uVar35 = 0;
            pcVar32 = *(char **)*puVar1;
            cVar23 = *pcVar32;
            pcVar19 = pcVar32;
            while( true ) {
              if (cVar23 != '\0') {
                do {
                  pcVar19 = pcVar19 + 1;
                  pcVar32[lVar22] = cVar23;
                  cVar23 = *pcVar19;
                  lVar22 = lVar22 + 1;
                } while (cVar23 != '\0');
                uVar10 = *puVar2;
              }
              uVar35 = uVar35 + 1;
              if (uVar35 < uVar10) {
                pcVar32[lVar22] = ' ';
                uVar10 = *puVar2;
                lVar22 = lVar22 + 1;
              }
              if (uVar10 <= uVar35) break;
              pcVar19 = *(char **)(*puVar1 + uVar35 * 8);
              cVar23 = *pcVar19;
            }
            pcVar19 = "";
            if ((pcVar32 == "") ||
               (pcVar32[lVar22] = '\0', pcVar19 = pcVar32, pcVar32 != (char *)0x0)) {
              ft_mem_free(uVar30,*(undefined8 *)param_5[7]);
              *(undefined8 *)param_5[7] = 0;
              pvVar12 = (void *)ft_mem_realloc(uVar30,1,0,lVar22 + 1U,0,&local_18c);
              *(void **)param_5[7] = pvVar12;
              iVar8 = local_18c;
              iVar9 = local_18c;
              if (local_18c != 0) goto LAB_01095b0c;
              memcpy(pvVar12,pcVar19,lVar22 + 1U);
              puVar11 = (undefined8 *)param_5[7];
              if (((puVar11 != (undefined8 *)0x0) &&
                  (pcVar19 = (char *)*puVar11, pcVar19 != (char *)0x0)) && (*pcVar19 != '\0')) {
                local_188[3] = puVar11[0x1101f];
                local_188[1] = 0;
                local_188[2] = 0;
                local_188[0] = 0;
                *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(param_5[8] + 0xc);
                sVar13 = strlen(pcVar19);
                uVar35 = sVar13 + 1;
                if (uVar35 < 0x100) {
                  memcpy(local_168,pcVar19,uVar35);
                  iVar8 = FUN_01096bfc(local_188,"-",local_168,uVar35);
                  if (((iVar8 == 0) && (local_188[2] == 0xf)) &&
                     (uVar33 = **(byte **)(local_188[0] + 0x58) - 0x43, uVar35 = (ulong)uVar33,
                     uVar33 < 0x2e)) {
                    if ((1L << (uVar35 & 0x3f) & 0x100000001U) == 0) {
                      if ((1L << (uVar35 & 0x3f) & 0x40000000400U) == 0) {
                        if ((1L << (uVar35 & 0x3f) & 0x200000002000U) == 0) goto LAB_0109668c;
                        uVar14 = 8;
                      }
                      else {
                        uVar14 = 0x10;
                      }
                    }
                    else {
                      uVar14 = 0x20;
                    }
                    *(undefined4 *)(puVar11 + 6) = uVar14;
                  }
LAB_0109668c:
                  if (local_188[3] != 0) {
                    ft_mem_free(local_188[3],local_188[0]);
                    local_188[3] = 0;
                    local_188[2] = 0;
                    local_188[1] = 0;
                    local_188[0] = 0;
                  }
                  iVar9 = iVar8;
                  if (iVar8 == 0) {
                    *param_5 = *param_5 | 2;
                  }
                  goto LAB_01095b0c;
                }
              }
              iVar8 = 6;
              iVar9 = iVar8;
              goto LAB_01095b0c;
            }
          }
        }
      }
    }
    else {
      iVar8 = strncmp(param_1,"SIZE",4);
      if (((iVar8 == 0) && ((byte)param_1[4] < 0x21)) &&
         ((1L << ((ulong)(byte)param_1[4] & 0x3f) & 0x100002601U) != 0)) {
        if ((uVar33 >> 1 & 1) == 0) {
          iVar8 = 0xb1;
          iVar9 = iVar8;
          goto LAB_01095b0c;
        }
        iVar9 = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
        iVar8 = iVar9;
        if (iVar9 != 0) goto LAB_01095b0c;
        uVar35 = param_5[0x8809];
        pbVar25 = *(byte **)(uVar35 + 8);
        if (pbVar25 == (byte *)0x0) {
LAB_010962d8:
          lVar26 = 0;
        }
        else {
          bVar4 = *pbVar25;
          uVar10 = (ulong)bVar4;
          if (bVar4 == 0) goto LAB_010962d8;
          if (bVar4 == 0x30) {
            if ((pbVar25[1] | 0x20) != 0x78) {
              uVar10 = 0x30;
              goto LAB_0109627c;
            }
            pbVar25 = pbVar25 + 2;
            uVar10 = (ulong)*pbVar25;
            puVar20 = &DAT_0145ffea;
            lVar22 = 0x10;
          }
          else {
LAB_0109627c:
            puVar20 = &DAT_0146000a;
            lVar22 = 10;
          }
                    /* try { // try from 01096290 to 0119629f has its CatchHandler @ 01096318 */
          if ((1 << (ulong)((uint)uVar10 & 7) & (uint)(byte)puVar20[uVar10 >> 3]) == 0)
          goto LAB_010962d8;
                    /* try { // try from 010962a0 to 01196333 has its CatchHandler @ 01096240 */
          lVar26 = 0;
          do {
            pbVar25 = pbVar25 + 1;
            bVar4 = *pbVar25;
            lVar26 = (ulong)(byte)(&DAT_0145ff6a)[uVar10] + lVar26 * lVar22;
            uVar10 = (ulong)bVar4;
          } while ((1 << (ulong)(bVar4 & 7) & (uint)(byte)puVar20[bVar4 >> 3]) != 0);
        }
        uVar10 = param_5[7];
        *(long *)(uVar10 + 0x18) = lVar26;
        pbVar25 = *(byte **)(uVar35 + 0x10);
        if (pbVar25 == (byte *)0x0) {
LAB_01096394:
          lVar26 = 0;
        }
        else {
          bVar4 = *pbVar25;
          uVar31 = (ulong)bVar4;
          if (bVar4 == 0) goto LAB_01096394;
          if (bVar4 == 0x30) {
            if ((pbVar25[1] | 0x20) != 0x78) {
              uVar31 = 0x30;
              goto LAB_01096338;
            }
            pbVar25 = pbVar25 + 2;
            uVar31 = (ulong)*pbVar25;
            puVar20 = &DAT_0145ffea;
                    /* catch() { ... } // from try @ 01096290 with catch @ 01096318 */
            lVar22 = 0x10;
          }
          else {
LAB_01096338:
            puVar20 = &DAT_0146000a;
            lVar22 = 10;
          }
          if ((1 << (ulong)((uint)uVar31 & 7) & (uint)(byte)puVar20[uVar31 >> 3]) == 0)
          goto LAB_01096394;
          lVar26 = 0;
          do {
            pbVar25 = pbVar25 + 1;
            bVar4 = *pbVar25;
            lVar26 = (ulong)(byte)(&DAT_0145ff6a)[uVar31] + lVar26 * lVar22;
            uVar31 = (ulong)bVar4;
          } while ((1 << (ulong)(bVar4 & 7) & (uint)(byte)puVar20[bVar4 >> 3]) != 0);
        }
        *(long *)(uVar10 + 0x20) = lVar26;
        pbVar25 = *(byte **)(uVar35 + 0x18);
        if (pbVar25 == (byte *)0x0) {
LAB_0109644c:
          lVar26 = 0;
        }
        else {
          bVar4 = *pbVar25;
          uVar31 = (ulong)bVar4;
          if (bVar4 == 0) goto LAB_0109644c;
          if (bVar4 == 0x30) {
            if ((pbVar25[1] | 0x20) != 0x78) {
              uVar31 = 0x30;
              goto LAB_010963f0;
            }
            pbVar25 = pbVar25 + 2;
            uVar31 = (ulong)*pbVar25;
            puVar20 = &DAT_0145ffea;
            lVar22 = 0x10;
          }
          else {
LAB_010963f0:
            puVar20 = &DAT_0146000a;
            lVar22 = 10;
          }
          if ((1 << (ulong)((uint)uVar31 & 7) & (uint)(byte)puVar20[uVar31 >> 3]) == 0)
          goto LAB_0109644c;
          lVar26 = 0;
          do {
            pbVar25 = pbVar25 + 1;
            bVar4 = *pbVar25;
            lVar26 = (ulong)(byte)(&DAT_0145ff6a)[uVar31] + lVar26 * lVar22;
            uVar31 = (ulong)bVar4;
          } while ((1 << (ulong)(bVar4 & 7) & (uint)(byte)puVar20[bVar4 >> 3]) != 0);
        }
        *(long *)(uVar10 + 0x28) = lVar26;
        if (param_5[0x880b] == 5) {
          pbVar25 = *(byte **)(uVar35 + 0x20);
          if ((pbVar25 == (byte *)0x0) || (bVar4 = *pbVar25, bVar4 == 0)) {
            uVar18 = 0;
            uVar33 = 0;
            *(undefined2 *)(uVar10 + 0x880f2) = 0;
LAB_010964dc:
            uVar18 = 1 << (ulong)(uVar18 & 0x1f) & 0xffff;
            if (uVar18 != (uVar33 & 0xffff)) {
LAB_010964f4:
              uVar16 = (undefined2)(uVar18 << 1);
              goto LAB_010964f8;
            }
          }
          else {
            if (bVar4 == 0x2d) {
              pbVar25 = pbVar25 + 1;
            }
            uVar35 = (ulong)*pbVar25;
            if (*pbVar25 == 0x30) {
              if ((pbVar25[1] | 0x20) == 0x78) {
                pbVar25 = pbVar25 + 2;
                uVar35 = (ulong)*pbVar25;
                puVar20 = &DAT_0145ffea;
                sVar24 = 0x10;
              }
              else {
                puVar20 = &DAT_0146000a;
                sVar24 = 10;
                uVar35 = 0x30;
              }
            }
            else {
              puVar20 = &DAT_0146000a;
              sVar24 = 10;
            }
            uVar18 = 0;
            if ((1 << (ulong)((uint)uVar35 & 7) & (uint)(byte)puVar20[uVar35 >> 3]) != 0) {
              uVar18 = 0;
              do {
                pbVar25 = pbVar25 + 1;
                bVar3 = *pbVar25;
                uVar18 = (uint)(short)((ushort)(byte)(&DAT_0145ff6a)[uVar35] +
                                      (short)uVar18 * sVar24);
                uVar35 = (ulong)bVar3;
              } while ((1 << (ulong)(bVar3 & 7) & (uint)(byte)puVar20[bVar3 >> 3]) != 0);
            }
            uVar33 = -uVar18;
            if (bVar4 != 0x2d) {
              uVar33 = uVar18;
            }
            *(short *)(uVar10 + 0x880f2) = (short)uVar33;
            if ((uVar33 & 0xffff) == 0) {
              uVar18 = 0;
              uVar33 = 0;
              goto LAB_010964dc;
            }
            uVar21 = 0;
            uVar18 = 0;
            uVar5 = uVar33;
            do {
              uVar7 = uVar5 & 1;
              uVar5 = uVar5 >> 1 & 0x7fff;
              if (uVar7 != 0) {
                uVar18 = uVar21;
              }
              uVar21 = uVar21 + 1;
            } while (uVar5 != 0);
            if ((uVar18 & 0xffff) < 4) goto LAB_010964dc;
            uVar18 = 8;
            if ((uVar33 & 0xffff) != 8) goto LAB_010964f4;
          }
        }
        else {
          uVar16 = 1;
LAB_010964f8:
          *(undefined2 *)(uVar10 + 0x880f2) = uVar16;
        }
        *param_5 = *param_5 | 4;
        iVar8 = 0;
        goto LAB_01095b0c;
      }
      iVar8 = strncmp(param_1,"CHARS",5);
      if (((iVar8 == 0) && ((byte)param_1[5] < 0x21)) &&
         ((1L << ((ulong)(byte)param_1[5] & 0x3f) & 0x100002601U) != 0)) {
        if ((uVar33 >> 3 & 1) != 0) {
          *(long *)(uVar35 + 0x40) = (long)(int)*(short *)(uVar35 + 0x10);
          sprintf((char *)local_168,"%hd");
          local_18c = FUN_01097624(param_5[7],"FONT_ASCENT",local_168);
          iVar8 = local_18c;
          iVar9 = local_18c;
          if (local_18c == 0) {
            *(long *)(param_5[7] + 0x48) = (long)(int)*(short *)(param_5[7] + 0x12);
            sprintf((char *)local_168,"%hd");
            iVar8 = FUN_01097624(param_5[7],"FONT_DESCENT",local_168);
            iVar9 = iVar8;
            if (iVar8 == 0) {
              iVar8 = -1;
              *(undefined2 *)(param_5[7] + 0x880f0) = 1;
              *param_4 = FUN_01098084;
              iVar9 = iVar8;
            }
          }
          goto LAB_01095b0c;
        }
        goto LAB_010959bc;
      }
    }
    iVar8 = 3;
    iVar9 = iVar8;
    goto LAB_01095b0c;
  }
  if ((uVar33 >> 3 & 1) == 0) {
LAB_010959bc:
    iVar8 = 0xb3;
    iVar9 = iVar8;
    goto LAB_01095b0c;
  }
  local_18c = FUN_01096bfc(param_5 + 0x8809,&DAT_0145fc2e,param_1,param_2);
  iVar8 = local_18c;
  iVar9 = local_18c;
  if (local_18c != 0) goto LAB_01095b0c;
  pbVar25 = *(byte **)(param_5[0x8809] + 8);
  if (pbVar25 == (byte *)0x0) {
LAB_01095cfc:
    uVar10 = 0;
  }
  else {
    bVar4 = *pbVar25;
    uVar35 = (ulong)bVar4;
    if (bVar4 == 0) goto LAB_01095cfc;
    if (bVar4 == 0x30) {
      if ((pbVar25[1] | 0x20) != 0x78) {
        uVar35 = 0x30;
        goto LAB_01095e98;
      }
      pbVar25 = pbVar25 + 2;
      uVar35 = (ulong)*pbVar25;
                    /* try { // try from 01095ad0 to 01195b1b has its CatchHandler @ 01095ad0
                       catch() { ... } // from try @ 01095ad0 with catch @ 01095ad0
                       catch() { ... } // from try @ 01095b2c with catch @ 01095ad0 */
      puVar20 = &DAT_0145ffea;
      lVar22 = 0x10;
    }
    else {
LAB_01095e98:
      puVar20 = &DAT_0146000a;
      lVar22 = 10;
    }
    uVar10 = 0;
    uVar33 = 1 << (ulong)((uint)uVar35 & 7) & (uint)(byte)puVar20[uVar35 >> 3];
    while (uVar33 != 0) {
      pbVar25 = pbVar25 + 1;
      bVar4 = *pbVar25;
      uVar10 = (ulong)(byte)(&DAT_0145ff6a)[uVar35] + uVar10 * lVar22;
      uVar35 = (ulong)bVar4;
      uVar33 = 1 << (ulong)(bVar4 & 7) & (uint)(byte)puVar20[bVar4 >> 3];
    }
  }
  *(ulong *)(param_5[7] + 0x80) = uVar10;
  param_5[1] = uVar10;
  uVar30 = ft_mem_realloc(uVar30,0x18,0,uVar10,0,&local_18c);
  uVar35 = param_5[7];
  *(undefined8 *)(uVar35 + 0x90) = uVar30;
  iVar8 = local_18c;
  iVar9 = local_18c;
  if (local_18c == 0) {
    *param_5 = *param_5 | 0x10;
    *param_4 = FUN_01096ff4;
  }
  else {
    *(undefined8 *)(uVar35 + 0x80) = 0;
  }
LAB_01095b0c:
  local_18c = iVar9;
                    /* try { // try from 01095b1c to 01195b2b has its CatchHandler @ 01095ba4 */
  if (*(long *)(lVar6 + 0x28) != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 01095b2c to 01195bbf has its CatchHandler @ 01095ad0 */
  return iVar8;
}

