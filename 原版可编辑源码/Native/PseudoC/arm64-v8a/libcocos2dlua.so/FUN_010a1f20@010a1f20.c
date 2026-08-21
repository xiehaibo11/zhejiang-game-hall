
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_010a1f20(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 uVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  byte *pbVar41;
  long lVar42;
  uint local_160c;
  uint local_15fc;
  long local_15f8 [9];
  uint local_15b0;
  long local_1f8 [5];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_160;
  long *local_158;
  
  uVar36 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 9) = (uint)*(ushort *)(param_2 + 0x88);
  iVar14 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar14 != 0) goto LAB_010a2d8c;
  lVar38 = *(long *)(param_2 + 0xb8);
  memset(local_1f8 + 1,0,0xb0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x147) = 0;
  lVar39 = *(long *)(af_script_classes + (ulong)*(uint *)(*param_1 + 8) * 8);
  local_1f8[0] = lVar38;
  iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],*(undefined4 *)(lVar39 + 0x10));
  if ((((iVar14 == 0) &&
       ((*(int *)(lVar39 + 0x14) == 0 ||
        ((iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8]), iVar14 == 0 &&
         ((*(int *)(lVar39 + 0x18) == 0 ||
          (iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8]), iVar14 == 0)))))))) ||
      (iVar14 = FT_Load_Glyph(param_2,iVar14,1), iVar14 != 0)) ||
     (lVar38 = *(long *)(param_2 + 0x98), *(short *)(lVar38 + 0xca) < 1)) {
LAB_010a2214:
    if ((int)param_1[0xc] == 0) goto LAB_010a2224;
LAB_010a221c:
    uVar24 = param_1[0xd];
  }
  else {
    memset(local_15f8,0,0x1400);
    local_15b0 = *(uint *)(param_1 + 9);
    local_160 = 0;
    local_15f8[3] = 0x10000;
    local_15f8[2] = 0x10000;
    local_15f8[4] = 0;
    local_15f8[5] = 0;
    local_15f8[6] = 0;
    local_15f8[1] = param_2;
    local_158 = local_15f8;
    iVar14 = FUN_010a4adc(local_1f8,lVar38 + 200);
    if (iVar14 != 0) goto LAB_010a2214;
    local_15fc = 0;
    iVar14 = FUN_010a50f8(local_1f8,0);
    if (iVar14 != 0) goto LAB_010a2214;
    FUN_010a5544(local_1f8,0,0,0);
    if (0 < (int)local_1b0) {
      local_15fc = 0;
      uVar24 = local_1a8;
      do {
        uVar30 = *(ulong *)(uVar24 + 0x20);
        if ((((uVar30 != 0) && (uVar24 < uVar30)) && (uVar24 == *(ulong *)(uVar30 + 0x20))) &&
           (local_15fc < 0x10)) {
          uVar18 = (ulong)local_15fc;
          local_15fc = local_15fc + 1;
          lVar39 = (long)*(short *)(uVar24 + 2) - (long)*(short *)(uVar30 + 2);
          lVar38 = -lVar39;
          if (-1 < lVar39) {
            lVar38 = lVar39;
          }
          param_1[uVar18 * 3 + 0xd] = lVar38;
        }
        uVar24 = uVar24 + 0x58;
      } while (uVar24 < local_1a8 + (long)(int)local_1b0 * 0x58);
    }
    FUN_010a5784(&local_15fc,param_1 + 0xd,(ulong)local_15b0 / 100);
    *(uint *)(param_1 + 0xc) = local_15fc;
    local_15fc = 0;
    iVar14 = FUN_010a50f8(local_1f8,1);
    if (iVar14 != 0) goto LAB_010a2214;
    FUN_010a5544(local_1f8,0,0,1);
    if (0 < (int)local_188) {
      local_15fc = 0;
      uVar24 = local_180;
      do {
        uVar30 = *(ulong *)(uVar24 + 0x20);
        if (((uVar30 != 0) && (uVar24 < uVar30)) &&
           ((uVar24 == *(ulong *)(uVar30 + 0x20) && (local_15fc < 0x10)))) {
          uVar18 = (ulong)local_15fc;
          local_15fc = local_15fc + 1;
          lVar39 = (long)*(short *)(uVar24 + 2) - (long)*(short *)(uVar30 + 2);
          lVar38 = -lVar39;
          if (-1 < lVar39) {
            lVar38 = lVar39;
          }
          param_1[uVar18 * 3 + 0x148] = lVar38;
        }
        uVar24 = uVar24 + 0x58;
      } while (uVar24 < local_180 + (long)(int)local_188 * 0x58);
    }
    FUN_010a5784(&local_15fc,param_1 + 0x148,(ulong)local_15b0 / 100);
    *(uint *)(param_1 + 0x147) = local_15fc;
    if ((int)param_1[0xc] != 0) goto LAB_010a221c;
LAB_010a2224:
    uVar24 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  lVar38 = local_1f8[0];
  param_1[0x3d] = (long)uVar24 / 5;
  param_1[0x3e] = uVar24;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if ((int)param_1[0x147] == 0) {
    uVar24 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar24 = param_1[0x148];
  }
  param_1[0x179] = uVar24;
  param_1[0x178] = (long)uVar24 / 5;
  *(undefined1 *)(param_1 + 0x17a) = 0;
  if (local_1f8[0] != 0) {
    local_1b0 = 0;
    ft_mem_free(local_1f8[0],local_1a8);
    local_1a8 = 0;
    uStack_1a0 = 0;
    ft_mem_free(lVar38,local_198);
    local_198 = 0;
    local_188 = 0;
    ft_mem_free(lVar38,local_180);
    local_180 = 0;
    uStack_178 = 0;
    ft_mem_free(lVar38,local_170);
    local_170 = 0;
    ft_mem_free(lVar38,local_1b8);
    local_1c0 = 0;
    local_1b8 = 0;
    ft_mem_free(lVar38,local_1c8);
    local_1f8[0] = 0;
    local_1d0 = 0;
    local_1c8 = 0;
  }
  puVar40 = (uint *)(af_blue_stringsets + (ulong)*(uint *)(*param_1 + 0xc) * 8);
  uVar27 = *puVar40;
  if (uVar27 != 0x284) {
LAB_010a2344:
    pbVar41 = &af_blue_strings + uVar27;
    uVar27 = (uint)*pbVar41;
    if (*pbVar41 != 0) {
      uVar29 = 0;
      local_160c = 0;
LAB_010a2564:
      pbVar25 = pbVar41 + 1;
      uVar24 = (ulong)uVar27;
      if ((char)uVar27 < '\0') {
        if (uVar27 < 0xe0) {
          iVar14 = 1;
          uVar30 = 0x1f;
        }
        else {
          uVar30 = 0xf;
          if (0xef < uVar27) {
            uVar30 = 7;
          }
          iVar14 = 2;
          if (0xef < uVar27) {
            iVar14 = 3;
          }
        }
        uVar24 = uVar30 & uVar24;
        uVar27 = iVar14 - 1;
        do {
          iVar14 = iVar14 + -1;
          uVar24 = (ulong)*pbVar25 & 0x3f | uVar24 << 6;
          pbVar25 = pbVar25 + 1;
        } while (iVar14 != 0);
        pbVar25 = pbVar41 + (ulong)uVar27 + 2;
      }
      iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],uVar24);
      if (((iVar14 != 0) && (iVar14 = FT_Load_Glyph(param_2,iVar14,1), iVar14 == 0)) &&
         (lVar38 = *(long *)(param_2 + 0x98), 0 < *(short *)(lVar38 + 0xca))) {
        if (0 < *(short *)(lVar38 + 200)) {
          lVar5 = *(long *)(lVar38 + 0xd0);
          lVar6 = *(long *)(lVar38 + 0xd8);
          uVar24 = 0;
          lVar39 = 0;
          uVar26 = 0;
          uVar28 = 0;
          uVar27 = 0;
          uVar30 = 0xffffffff;
          do {
            sVar8 = *(short *)(*(long *)(lVar38 + 0xe0) + uVar24 * 2);
            uVar31 = (uint)sVar8;
            if ((int)uVar27 < (int)sVar8) {
              lVar17 = (long)(int)uVar27;
              if ((puVar40[1] & 1) == 0) {
                lVar19 = lVar17 + -1;
                uVar18 = uVar30;
                plVar21 = (long *)(lVar5 + 8 + lVar17 * 0x10);
                lVar17 = lVar39;
                do {
                  lVar39 = *plVar21;
                  uVar16 = (uint)uVar18;
                  lVar19 = lVar19 + 1;
                  uVar34 = (uint)lVar19;
                  if (-1 < (int)uVar16 && lVar17 <= lVar39) {
                    uVar34 = uVar16;
                  }
                  uVar18 = (ulong)uVar34;
                  if (-1 < (int)uVar16 && lVar17 <= lVar39) {
                    lVar39 = lVar17;
                  }
                  plVar21 = plVar21 + 2;
                  lVar17 = lVar39;
                } while (lVar19 < (int)uVar31);
              }
              else {
                lVar19 = lVar17 + -1;
                uVar18 = uVar30;
                plVar21 = (long *)(lVar5 + 8 + lVar17 * 0x10);
                lVar17 = lVar39;
                do {
                  lVar39 = *plVar21;
                  uVar16 = (uint)uVar18;
                  lVar19 = lVar19 + 1;
                  uVar34 = (uint)lVar19;
                  if (-1 < (int)uVar16 && lVar39 <= lVar17) {
                    uVar34 = uVar16;
                  }
                  uVar18 = (ulong)uVar34;
                  if (-1 < (int)uVar16 && lVar39 <= lVar17) {
                    lVar39 = lVar17;
                  }
                  plVar21 = plVar21 + 2;
                  lVar17 = lVar39;
                } while (lVar19 < (int)uVar31);
              }
              if (uVar34 != (uint)uVar30) {
                uVar26 = uVar27;
                uVar28 = uVar31;
              }
              uVar30 = (ulong)uVar34;
            }
            uVar24 = uVar24 + 1;
            uVar27 = uVar31 + 1;
          } while (uVar24 != ((long)*(short *)(lVar38 + 200) & 0xffffffffU));
          uVar27 = (uint)uVar30;
          if ((int)uVar27 < 0) goto LAB_010a28b8;
          plVar21 = (long *)(lVar5 + (long)(int)uVar27 * 0x10);
          lVar38 = *plVar21;
          uVar31 = uVar27;
          if ((*(byte *)(lVar6 + (int)uVar27) & 3) != 1) {
            uVar31 = 0xffffffff;
          }
          uVar24 = (ulong)uVar31;
          uVar32 = uVar30;
          uVar18 = uVar24;
          do {
            uVar31 = (int)uVar32 - 1;
            if ((int)uVar32 <= (int)uVar26) {
              uVar31 = uVar28;
            }
            lVar19 = *(long *)(lVar5 + (long)(int)uVar31 * 0x10 + 8) - lVar39;
            lVar17 = -lVar19;
            if (-1 < lVar19) {
              lVar17 = lVar19;
            }
            uVar22 = uVar30;
            if (5 < lVar17) {
              lVar37 = *(long *)(lVar5 + (long)(int)uVar31 * 0x10) - lVar38;
              lVar19 = -lVar37;
              if (-1 < lVar37) {
                lVar19 = lVar37;
              }
              uVar33 = uVar32;
              if (lVar19 <= lVar17 * 0x14) break;
            }
            bVar13 = (*(byte *)(lVar6 + (int)uVar31) & 3) != 1;
            uVar34 = uVar31;
            if (bVar13) {
              uVar34 = (uint)uVar24;
            }
            uVar24 = (ulong)uVar34;
            uVar34 = uVar31;
            if (bVar13 || -1 < (int)(uint)uVar18) {
              uVar34 = (uint)uVar18;
            }
            uVar18 = (ulong)uVar34;
            uVar32 = (ulong)uVar31;
            uVar33 = uVar30;
          } while (uVar31 != uVar27);
          do {
            uVar31 = uVar26;
            if ((int)uVar22 < (int)uVar28) {
              uVar31 = (int)uVar22 + 1;
            }
            plVar3 = (long *)(lVar5 + (long)(int)uVar31 * 0x10);
            lVar19 = plVar3[1] - lVar39;
            lVar17 = -lVar19;
            if (-1 < lVar19) {
              lVar17 = lVar19;
            }
            if (5 < lVar17) {
              lVar37 = *plVar3 - lVar38;
              lVar19 = -lVar37;
              if (-1 < lVar37) {
                lVar19 = lVar37;
              }
              uVar32 = uVar22;
              if (lVar19 <= lVar17 * 0x14) break;
            }
            bVar13 = (*(byte *)(lVar6 + (int)uVar31) & 3) != 1;
            uVar34 = uVar31;
            if (bVar13) {
              uVar34 = (uint)uVar18;
            }
            uVar18 = (ulong)uVar34;
            uVar34 = uVar31;
            if (bVar13 || -1 < (int)(uint)uVar24) {
              uVar34 = (uint)uVar24;
            }
            uVar24 = (ulong)uVar34;
            uVar32 = uVar30;
            uVar22 = (ulong)uVar31;
          } while (uVar31 != uVar27);
          uVar31 = (uint)uVar33;
          if (((ushort)puVar40[1] >> 3 & 1) == 0) {
LAB_010a2838:
            uVar9 = (uint)uVar18 | (uint)uVar24;
          }
          else {
            lVar19 = *(long *)(lVar5 + (-(uVar32 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) -
                     *(long *)(lVar5 + (-(uVar33 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4));
            uVar22 = (ulong)*(uint *)(param_1 + 9) / 0x19;
            lVar17 = -lVar19;
            if (-1 < lVar19) {
              lVar17 = lVar19;
            }
            if (((long)uVar22 <= lVar17) ||
               ((int)(uVar28 - uVar26) < (int)((2 - uVar31) + (int)uVar32))) goto LAB_010a2838;
            do {
              uVar34 = (int)uVar30 - 1;
              if ((int)uVar30 <= (int)uVar26) {
                uVar34 = uVar28;
              }
              uVar30 = (ulong)uVar34;
              lVar17 = *(long *)(lVar5 + (-(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000 |
                                         uVar30 << 4));
            } while ((lVar17 == lVar38) && (uVar34 != uVar27));
            if (uVar34 == uVar27) goto LAB_010a28a0;
            bVar13 = false;
            uVar15 = 0;
            uVar30 = 0;
            uVar20 = uVar32;
            uVar35 = uVar32;
            do {
              while( true ) {
                uVar27 = (uint)uVar20;
                if (!bVar13) {
                  bVar13 = true;
                  uVar34 = uVar27;
                  if ((*(byte *)(lVar6 + (int)uVar27) & 3) != 1) {
                    uVar34 = 0xffffffff;
                  }
                  uVar15 = (ulong)uVar34;
                  uVar30 = uVar15;
                  uVar35 = uVar20;
                }
                uVar16 = (uint)uVar35;
                plVar1 = (long *)(lVar5 + (long)(int)uVar16 * 0x10);
                lVar38 = plVar1[1];
                uVar34 = uVar26;
                if ((int)uVar27 < (int)uVar28) {
                  uVar34 = uVar27 + 1;
                }
                uVar20 = (ulong)uVar34;
                lVar37 = lVar39 - lVar38;
                lVar19 = -lVar37;
                if (-1 < lVar37) {
                  lVar19 = lVar37;
                }
                if (lVar19 <= (long)(ulong)(*(uint *)(param_1 + 9) >> 2)) break;
LAB_010a23f4:
                bVar13 = false;
                if (uVar34 == uVar31) goto LAB_010a2494;
              }
              plVar2 = (long *)(lVar5 + (long)(int)uVar34 * 0x10);
              lVar37 = plVar2[1] - lVar38;
              lVar19 = -lVar37;
              if (-1 < lVar37) {
                lVar19 = lVar37;
              }
              if (lVar19 < 6) {
                lVar37 = *plVar1;
                lVar42 = *plVar2;
              }
              else {
                lVar42 = *plVar2;
                lVar37 = *plVar1;
                lVar10 = lVar42 - lVar37;
                lVar11 = -lVar10;
                if (-1 < lVar10) {
                  lVar11 = lVar10;
                }
                if (lVar11 <= lVar19 * 0x14) goto LAB_010a23f4;
              }
              bVar12 = (*(byte *)(lVar6 + (int)uVar34) & 3) != 1;
              uVar27 = uVar34;
              if (bVar12) {
                uVar27 = (uint)uVar30;
              }
              uVar30 = (ulong)uVar27;
              uVar27 = uVar34;
              if (bVar12 || -1 < (int)(uint)uVar15) {
                uVar27 = (uint)uVar15;
              }
              uVar15 = (ulong)uVar27;
              lVar11 = lVar42 - lVar37;
              if (lVar17 < *plVar21 == (lVar11 != 0 && lVar37 <= lVar42)) {
                lVar42 = -lVar11;
                if (-1 < lVar11) {
                  lVar42 = lVar11;
                }
                if ((long)uVar22 <= lVar42) {
                  uVar18 = uVar30;
                  goto LAB_010a24e0;
                }
              }
            } while (uVar34 != uVar31);
LAB_010a2494:
            uVar9 = (uint)uVar18 | (uint)uVar24;
          }
          goto joined_r0x010a284c;
        }
        lVar39 = 0;
        goto LAB_010a28b8;
      }
      goto LAB_010a28a0;
    }
    goto LAB_010a2aa4;
  }
LAB_010a2ab0:
  iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x30);
                    /* try { // try from 010a2ac0 to 011a2ac7 has its CatchHandler @ 010a2b94 */
  if (iVar14 == 0) {
    bVar13 = false;
    lVar38 = 0;
  }
  else {
                    /* try { // try from 010a2ac8 to 011a2bbb has its CatchHandler @ 010a296c */
    iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8);
    bVar13 = iVar14 == 0;
    lVar38 = local_15f8[0];
    if (!bVar13) {
      lVar38 = 0;
    }
  }
  iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x31);
  if ((iVar14 == 0) || (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 != 0)) {
LAB_010a2b28:
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x32);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x33);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
                    /* catch() { ... } // from try @ 010a2ac0 with catch @ 010a2b94 */
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x34);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
                    /* try { // try from 010a2bbc to 011a2d2f has its CatchHandler @ 010a2bbc
                       catch() { ... } // from try @ 010a2bbc with catch @ 010a2bbc
                       catch() { ... } // from try @ 010a2d38 with catch @ 010a2bbc */
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x35);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
                    /* try { // try from 010a2d30 to 011a2d37 has its CatchHandler @ 010a2e00 */
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x36);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
                    /* try { // try from 010a2d38 to 011a2e13 has its CatchHandler @ 010a2bbc */
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
                    /* catch() { ... } // from try @ 010a2d30 with catch @ 010a2e00 */
      }
    }
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x37);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x38);
    if ((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), iVar14 == 0)) {
      if (bVar13) {
        if (local_15f8[0] != lVar38) goto LAB_010a2d80;
        bVar13 = true;
      }
      else {
        bVar13 = true;
        lVar38 = local_15f8[0];
      }
    }
    iVar14 = FT_Get_Char_Index(*(undefined8 *)param_1[8],0x39);
    if ((((iVar14 != 0) && (iVar14 = FT_Get_Advance(param_2,iVar14,0x803,local_15f8), bVar13)) &&
        (iVar14 == 0)) && (local_15f8[0] != lVar38)) goto LAB_010a2d80;
    uVar23 = 1;
  }
  else {
    if (!bVar13) {
      bVar13 = true;
      lVar38 = local_15f8[0];
      goto LAB_010a2b28;
    }
    if (local_15f8[0] == lVar38) {
      bVar13 = true;
      goto LAB_010a2b28;
    }
LAB_010a2d80:
    uVar23 = 0;
  }
  *(undefined1 *)(param_1 + 7) = uVar23;
LAB_010a2d8c:
  FT_Set_Charmap(param_2,uVar36);
  return 0;
LAB_010a24e0:
  do {
    uVar27 = uVar26;
    if ((int)uVar20 < (int)uVar28) {
      uVar27 = (int)uVar20 + 1;
    }
    uVar20 = (ulong)uVar27;
    lVar39 = *(long *)(lVar5 + (long)(int)uVar27 * 0x10 + 8) - lVar38;
    lVar17 = -lVar39;
    if (-1 < lVar39) {
      lVar17 = lVar39;
    }
    uVar34 = (uint)uVar15;
    lVar39 = lVar38;
    if (5 < lVar17) {
      lVar42 = *plVar3 - lVar37;
      lVar17 = -lVar42;
      if (-1 < lVar42) {
        lVar17 = lVar42;
      }
      if (lVar17 <= lVar19 * 0x14) {
        uVar4 = uVar27 - 1;
        if ((int)uVar27 <= (int)uVar26) {
          uVar4 = uVar28;
        }
        uVar9 = (uint)uVar18 | uVar34;
        uVar31 = uVar16;
        uVar24 = uVar15;
        goto joined_r0x010a255c;
      }
    }
    uVar9 = uVar27;
    if ((*(byte *)(lVar6 + (int)uVar27) & 3) != 1 || -1 < (int)uVar34) {
      uVar9 = uVar34;
    }
    uVar15 = (ulong)uVar9;
    uVar18 = uVar20;
  } while (uVar27 != uVar31);
  uVar9 = uVar31 | uVar9;
  uVar24 = uVar15;
  uVar18 = uVar33;
  uVar32 = uVar33;
  uVar31 = uVar16;
  uVar33 = uVar35;
joined_r0x010a284c:
  uVar4 = (uint)uVar32;
  uVar16 = (uint)uVar33;
joined_r0x010a255c:
  if ((int)uVar9 < 0) {
LAB_010a287c:
    if (((*(byte *)(lVar6 + (int)uVar31) & 3) == 1) && ((*(byte *)(lVar6 + (int)uVar4) & 3) == 1))
    goto LAB_010a28b8;
    if (((ushort)puVar40[1] >> 1 & 1) != 0) {
LAB_010a28a0:
      bVar7 = *pbVar25;
      goto joined_r0x010a28f8;
    }
    plVar21 = local_1f8;
    uVar26 = local_160c;
    uVar27 = uVar29;
    local_160c = local_160c + 1;
  }
  else {
    lVar38 = *(long *)(lVar5 + (-(uVar18 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) -
             *(long *)(lVar5 + (-(uVar24 >> 0x1f) & 0xfffffff000000000 | uVar24 << 4));
    uVar26 = (uint)lVar38;
    uVar27 = -uVar26;
    if (-1 < lVar38) {
      uVar27 = uVar26;
    }
    uVar31 = uVar16;
    if (uVar27 <= *(uint *)(param_1 + 9) >> 3) goto LAB_010a287c;
LAB_010a28b8:
    plVar21 = local_15f8;
    uVar27 = uVar29 + 1;
    uVar26 = uVar29;
  }
  bVar7 = *pbVar25;
  plVar21[(int)uVar26] = lVar39;
  uVar29 = uVar27;
joined_r0x010a28f8:
  uVar27 = (uint)bVar7;
  pbVar41 = pbVar25;
  if (uVar27 == 0) goto LAB_010a2908;
  goto LAB_010a2564;
LAB_010a2908:
  if (uVar29 == 0 && local_160c == 0) goto LAB_010a2aa4;
  if (1 < local_160c) {
    uVar30 = 0;
    uVar24 = 1;
    do {
      lVar38 = local_1f8[uVar24];
      uVar18 = uVar30;
      do {
        if (local_1f8[uVar18 & 0xffffffff] <= lVar38) break;
        uVar32 = uVar18 - 1;
        local_1f8[uVar18 + 1] = local_1f8[uVar18 & 0xffffffff];
        local_1f8[uVar18 & 0xffffffff] = lVar38;
        uVar18 = uVar32;
      } while ((int)uVar32 != -1);
      uVar24 = uVar24 + 1;
      uVar30 = uVar30 + 1;
    } while (uVar24 != local_160c);
  }
  if (1 < uVar29) {
                    /* try { // try from 010a296c to 011a2abf has its CatchHandler @ 010a296c
                       catch() { ... } // from try @ 010a296c with catch @ 010a296c
                       catch() { ... } // from try @ 010a2ac8 with catch @ 010a296c */
    uVar30 = 0;
    uVar24 = 1;
    do {
      lVar38 = local_15f8[uVar24];
      uVar18 = uVar30;
      do {
        if (local_15f8[uVar18 & 0xffffffff] <= lVar38) break;
        uVar32 = uVar18 - 1;
        local_15f8[uVar18 + 1] = local_15f8[uVar18 & 0xffffffff];
        local_15f8[uVar18 & 0xffffffff] = lVar38;
        uVar18 = uVar32;
      } while ((int)uVar32 != -1);
      uVar24 = uVar24 + 1;
      uVar30 = uVar30 + 1;
    } while (uVar24 != uVar29);
  }
  uVar24 = (ulong)*(uint *)((long)param_1 + 0xbd4);
  plVar21 = param_1 + uVar24 * 7 + 0x17b;
  plVar3 = param_1 + uVar24 * 7 + 0x17e;
  *(uint *)((long)param_1 + 0xbd4) = *(uint *)((long)param_1 + 0xbd4) + 1;
  if (uVar29 == 0) {
    if ((int)local_160c < 0) {
      local_160c = local_160c + 1;
    }
    lVar38 = local_1f8[(int)local_160c >> 1];
LAB_010a2a64:
    *plVar3 = lVar38;
    *plVar21 = lVar38;
LAB_010a2a6c:
    uVar27 = (uint)(ushort)puVar40[1];
  }
  else {
    if ((int)uVar29 < 0) {
      uVar29 = uVar29 + 1;
    }
    lVar38 = local_15f8[(int)uVar29 >> 1];
    if (local_160c == 0) goto LAB_010a2a64;
    if ((int)local_160c < 0) {
      local_160c = local_160c + 1;
    }
    *plVar21 = lVar38;
    lVar39 = local_1f8[(int)local_160c >> 1];
    *plVar3 = lVar39;
    if (lVar39 == lVar38) goto LAB_010a2a6c;
    uVar27 = (uint)(ushort)puVar40[1];
    if (((ushort)puVar40[1] & 1) != (ushort)(lVar38 <= lVar39)) {
      lVar39 = lVar39 + lVar38;
      if (lVar39 < 0) {
        lVar39 = lVar39 + 1;
      }
      *plVar3 = lVar39 >> 1;
      *plVar21 = lVar39 >> 1;
    }
  }
  uVar27 = (uVar27 & 1) << 1;
  *(uint *)(param_1 + uVar24 * 7 + 0x181) = uVar27;
  uVar29 = puVar40[1];
  if (((ushort)uVar29 >> 1 & 1) != 0) {
    uVar27 = uVar27 | 4;
    *(uint *)(param_1 + uVar24 * 7 + 0x181) = uVar27;
  }
  if (((ushort)uVar29 >> 2 & 1) != 0) {
    *(uint *)(param_1 + uVar24 * 7 + 0x181) = uVar27 | 8;
  }
LAB_010a2aa4:
  puVar40 = puVar40 + 2;
  uVar27 = *puVar40;
  if (uVar27 == 0x284) goto LAB_010a2ab0;
  goto LAB_010a2344;
}

