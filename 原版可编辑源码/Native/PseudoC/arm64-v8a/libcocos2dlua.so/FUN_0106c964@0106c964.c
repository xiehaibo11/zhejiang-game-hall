
uint FUN_0106c964(undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  uint local_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  long local_68;
  
                    /* try { // try from 0106c96c to 0116c9f3 has its CatchHandler @ 0106ca04 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar10 = FT_Get_Module_Interface(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),&DAT_0145cf10);
  if (lVar10 == 0) {
    uVar7 = 0xb;
    goto LAB_0106cdb0;
  }
  uVar7 = FT_Stream_Seek(param_1,0);
                    /* try { // try from 0106c9f4 to 0116ca1f has its CatchHandler @ 0106c8d0 */
  if ((uVar7 != 0) ||
     (uVar7 = (**(code **)(lVar10 + 8))(param_1,param_2,param_3,param_4,param_5), uVar7 != 0))
  goto LAB_0106cdb0;
  lVar12 = *(long *)(param_2 + 0x118);
  lVar25 = *(long *)(param_2 + 0xc0);
                    /* catch() { ... } // from try @ 0106c96c with catch @ 0106ca04 */
  if ((lVar12 != 0x10000) && ((lVar12 != 0x74727565 && (lVar12 != 0x20000)))) {
    uVar7 = 2;
    goto LAB_0106cdb0;
  }
  *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x800;
  if (param_3 < 0) {
    uVar7 = 0;
    goto LAB_0106cdb0;
  }
  uVar7 = (**(code **)(lVar10 + 0x10))(lVar25,param_2,param_3,param_4,param_5);
  if (uVar7 != 0) goto LAB_0106cdb0;
  pcVar19 = *(char **)(param_2 + 0x28);
                    /* try { // try from 0106caec to 0116cb83 has its CatchHandler @ 0106caec
                       catch(type#1 @ 00000000) { ... } // from try @ 0106caec with catch @ 0106caec
                       catch(type#1 @ 00000000) { ... } // from try @ 0106cb8c with catch @ 0106caec
                       catch(type#1 @ 00000000) { ... } // from try @ 0106cd10 with catch @ 0106caec
                       catch(type#1 @ 00000000) { ... } // from try @ 0106ce40 with catch @ 0106caec
                        */
  if ((pcVar19 != (char *)0x0) &&
     ((((((pcVar11 = strstr(pcVar19,"DFKaiSho-SB"), pcVar11 != (char *)0x0 ||
          (pcVar11 = strstr(pcVar19,"DFKaiShu"), pcVar11 != (char *)0x0)) ||
         (pcVar11 = strstr(pcVar19,"DFKai-SB"), pcVar11 != (char *)0x0)) ||
        ((pcVar11 = strstr(pcVar19,"HuaTianKaiTi?"), pcVar11 != (char *)0x0 ||
         (pcVar11 = strstr(pcVar19,"HuaTianSongTi?"), pcVar11 != (char *)0x0)))) ||
       (pcVar11 = strstr(pcVar19,"Ming(for ISO10646)"), pcVar11 != (char *)0x0)) ||
      (((pcVar11 = strstr(pcVar19,"MingLiU"), pcVar11 != (char *)0x0 ||
        (pcVar11 = strstr(pcVar19,"PMingLiU"), pcVar11 != (char *)0x0)) ||
       (pcVar19 = strstr(pcVar19,"MingLi43"), pcVar19 != (char *)0x0)))))) goto LAB_0106cf18;
  memset(&local_b0,0,0x44);
  uVar7 = (uint)*(ushort *)(param_2 + 0x120);
  if (*(ushort *)(param_2 + 0x120) == 0) {
LAB_0106ce04:
                    /* try { // try from 0106ce38 to 0116ce3f has its CatchHandler @ 0106ce4c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ccec with catch @ 0106ce40
                       try { // try from 0106ce40 to 0116cf7f has its CatchHandler @ 0106caec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106cc78 with catch @ 0106ce44
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106cc00 with catch @ 0106ce48
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106cb84 with catch @ 0106ce4c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106ce38 with catch @ 0106ce4c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ccf4 with catch @ 0106ce5c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106cc84 with catch @ 0106ce90
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106cc08 with catch @ 0106cefc
                        */
    if (((((local_a8 == 3) ||
          (((local_a4 == 3 || (local_a0 == 3)) || (local_9c = local_9c + 1, local_9c == 3)))) ||
         ((local_98 = local_98 + 1, local_98 == 3 || (local_94 = local_94 + 1, local_94 == 3)))) ||
        (local_90 = local_90 + 1, local_90 == 3)) ||
       ((((local_8c = local_8c + 1, local_8c == 3 || (local_88 = local_88 + 1, local_88 == 3)) ||
         ((local_84 = local_84 + 1, local_84 == 3 ||
          (((local_80 = local_80 + 1, local_80 == 3 || (local_7c = local_7c + 1, local_7c == 3)) ||
           (local_78 = local_78 + 1, local_78 == 3)))))) ||
        ((local_74 = local_74 + 1, local_74 == 3 || (local_70 = local_70 + 1, local_70 == 3))))))
    goto LAB_0106cf18;
  }
  else {
    uVar16 = 0;
    bVar6 = false;
    do {
      lVar10 = *(long *)(param_2 + 0x128);
      uVar21 = (ulong)(uVar16 & 0xffff);
      lVar12 = *(long *)(lVar10 + uVar21 * 0x20);
      if (lVar12 == 0x63767420) {
        lVar12 = 0;
        bVar6 = true;
LAB_0106cb84:
                    /* try { // try from 0106cb84 to 0116cb8b has its CatchHandler @ 0106ce4c */
        lVar23 = 0;
        uVar15 = 0;
                    /* try { // try from 0106cb8c to 0116cbff has its CatchHandler @ 0106caec */
        while( true ) {
          if (*(long *)(lVar10 + uVar21 * 0x20 + 0x18) ==
              *(long *)(&UNK_0145d300 + lVar23 * 0x30 + lVar12 * 0x10)) {
            if (uVar15 == 0) {
              uVar15 = 0;
              if (*(code **)(param_2 + 0x330) != (code *)0x0) {
                    /* try { // try from 0106cc00 to 0116cc07 has its CatchHandler @ 0106ce48 */
                iVar9 = (**(code **)(param_2 + 0x330))
                                  (param_2,*(undefined8 *)(lVar10 + uVar21 * 0x20),
                                   *(undefined8 *)(param_2 + 0xc0),0);
                    /* try { // try from 0106cc08 to 0116cc0b has its CatchHandler @ 0106cefc */
                uVar15 = 0;
                if (iVar9 == 0) {
                  uVar20 = *(undefined8 *)(param_2 + 0xc0);
                  uVar15 = *(ulong *)(*(long *)(param_2 + 0x128) + uVar21 * 0x20 + 0x18);
                  iVar9 = FT_Stream_EnterFrame(uVar20,uVar15);
                  if (iVar9 == 0) {
                    uVar7 = 0;
                    uVar13 = uVar15;
                    if (3 < uVar15) {
                      do {
                        iVar9 = FT_Stream_GetULong(uVar20);
                        uVar13 = uVar13 - 4;
                        uVar7 = uVar7 + iVar9;
                      } while (3 < uVar13);
                      uVar15 = uVar15 & 3;
                    }
                    if (uVar15 != 0) {
                      uVar24 = 0x18;
                      do {
                    /* try { // try from 0106cc78 to 0116cc7f has its CatchHandler @ 0106ce44 */
                        uVar8 = FT_Stream_GetChar(uVar20);
                    /* try { // try from 0106cc84 to 0116cc8b has its CatchHandler @ 0106ce90 */
                        uVar15 = uVar15 - 1;
                        uVar7 = ((uVar8 & 0xff) << (ulong)(uVar24 & 0x1f)) + uVar7;
                        uVar24 = uVar24 - 8;
                      } while (uVar15 != 0);
                    }
                    FT_Stream_ExitFrame(uVar20);
                  }
                  else {
                    uVar7 = 0;
                  }
                  uVar15 = (ulong)uVar7;
                }
              }
            }
            iVar9 = *(int *)((long)&local_b0 + lVar23 * 4);
            if (*(ulong *)(&UNK_0145d2f8 + lVar12 * 0x10 + lVar23 * 0x30) == uVar15) {
              iVar9 = iVar9 + 1;
              *(int *)((long)&local_b0 + lVar23 * 4) = iVar9;
            }
            if (iVar9 == 3) goto LAB_0106cf18;
          }
          if (0xf < lVar23) break;
          lVar10 = *(long *)(param_2 + 0x128);
          lVar23 = lVar23 + 1;
        }
        uVar7 = (uint)*(ushort *)(param_2 + 0x120);
      }
      else {
        if (lVar12 == 0x70726570) {
          lVar12 = 2;
          goto LAB_0106cb84;
        }
        if (lVar12 == 0x6670676d) {
          lVar12 = 1;
          goto LAB_0106cb84;
        }
      }
      uVar16 = (uVar16 & 0xffff) + 1;
    } while ((uVar16 & 0xffff) < uVar7);
    if (bVar6) {
                    /* try { // try from 0106ccec to 0116ccef has its CatchHandler @ 0106ce40 */
                    /* try { // try from 0106ccf4 to 0116cd0f has its CatchHandler @ 0106ce5c */
                    /* try { // try from 0106cd10 to 0116ce37 has its CatchHandler @ 0106caec */
      if ((((int)local_b0 != 3) &&
          (((local_b0._4_4_ != 3 && (local_a8 != 3)) &&
           ((local_a4 != 3 &&
            ((((local_a0 != 3 && (local_9c != 3)) && (local_98 != 3)) &&
             ((local_94 != 3 && (local_90 != 3)))))))))) &&
         ((local_8c != 3 &&
          ((((local_88 != 3 && (local_84 != 3)) &&
            ((local_80 != 3 && (((local_7c != 3 && (local_78 != 3)) && (local_74 != 3)))))) &&
           (local_70 != 3)))))) goto LAB_0106cf24;
    }
    else if (((int)local_b0 != 3) && (local_b0._4_4_ != 3)) goto LAB_0106ce04;
LAB_0106cf18:
    *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x2000;
  }
LAB_0106cf24:
  uVar20 = *(undefined8 *)(lVar25 + 0x38);
  local_b4 = (**(code **)(param_2 + 0x330))(param_2,0x68646d78,lVar25,&local_b0);
  if ((local_b4 == 0) && (7 < local_b0)) {
    puVar2 = (undefined8 *)(param_2 + 0x488);
    local_b4 = FT_Stream_ExtractFrame(lVar25,local_b0,puVar2);
    uVar21 = local_b0;
    uVar7 = local_b4;
    if (local_b4 != 0) goto LAB_0106cdb0;
    puVar22 = (undefined1 *)*puVar2;
                    /* try { // try from 0106cfa0 to 0116cfe7 has its CatchHandler @ 0106cfa0
                       catch() { ... } // from try @ 0106cfa0 with catch @ 0106cfa0
                       catch() { ... } // from try @ 0106d1b8 with catch @ 0106cfa0 */
    uVar13 = (ulong)(byte)puVar22[4] << 0x18 | (ulong)(byte)puVar22[5] << 0x10 |
             (ulong)(byte)puVar22[6] << 8 | (ulong)(byte)puVar22[7];
    uVar15 = (ulong)CONCAT11(puVar22[6],puVar22[7]);
    if (uVar13 < 0xffff0000) {
      uVar15 = uVar13;
    }
    if (CONCAT11(*puVar22,puVar22[1]) == 0) {
      uVar7 = (uint)CONCAT11(puVar22[2],puVar22[3]);
      if ((0xff < uVar7) || (0xfffd < uVar15 - 4)) goto LAB_0106d044;
                    /* try { // try from 0106cfe8 to 0116d00b has its CatchHandler @ 0106d1dc */
      uVar20 = ft_mem_realloc(uVar20,1,0,(ulong)uVar7,0,&local_b4);
      *(undefined8 *)(param_2 + 0x4a8) = uVar20;
      if (local_b4 == 0) {
        if (uVar7 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
                    /* try { // try from 0106d014 to 0116d037 has its CatchHandler @ 0106d1d8 */
          puVar17 = puVar22 + 8;
          do {
            if (puVar22 + uVar21 < puVar17 + uVar15) break;
            *(undefined1 *)(*(long *)(param_2 + 0x4a8) + uVar13) = *puVar17;
            uVar13 = uVar13 + 1;
            puVar17 = puVar17 + uVar15;
          } while (uVar13 < uVar7);
        }
        *(int *)(param_2 + 0x498) = (int)uVar13;
        *(ulong *)(param_2 + 0x4a0) = uVar15;
                    /* try { // try from 0106d1b8 to 0116d25f has its CatchHandler @ 0106cfa0 */
        *(ulong *)(param_2 + 0x490) = local_b0;
        goto LAB_0106d064;
      }
    }
    else {
LAB_0106d044:
      local_b4 = 3;
    }
    FT_Stream_ReleaseFrame(lVar25,puVar2);
    *(undefined8 *)(param_2 + 0x490) = 0;
    uVar7 = local_b4;
    if (local_b4 != 0) goto LAB_0106cdb0;
  }
LAB_0106d064:
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0xf0) + 0x60) == 0) {
      uVar7 = (**(code **)(param_2 + 0x330))
                        (param_2,0x676c7966,lVar25,(undefined8 *)(param_2 + 0x440));
      if ((uVar7 & 0xff) == 0x8e) {
        *(undefined8 *)(param_2 + 0x440) = 0;
LAB_0106d128:
        iVar9 = (**(code **)(param_2 + 0x330))(param_2,0x6c6f6361,lVar25,&local_b0);
        if (iVar9 == 0) {
          if (*(short *)(param_2 + 0x186) == 0) {
            if (local_b0 >> 0x11 != 0) goto LAB_0106d1d0;
                    /* catch() { ... } // from try @ 0106d014 with catch @ 0106d1d8 */
            lVar10 = 1;
          }
          else {
            if (local_b0 >> 0x12 != 0) {
LAB_0106d1d0:
              uVar7 = 8;
                    /* catch() { ... } // from try @ 0106d1a4 with catch @ 0106d1d4 */
              goto LAB_0106d2b4;
            }
            lVar10 = 2;
                    /* try { // try from 0106d168 to 0116d173 has its CatchHandler @ 0106d204 */
          }
                    /* catch() { ... } // from try @ 0106cfe8 with catch @ 0106d1dc */
          uVar21 = local_b0 >> lVar10;
                    /* catch() { ... } // from try @ 0106d0c0 with catch @ 0106d1e4 */
          *(ulong *)(param_2 + 0x478) = uVar21;
          if ((uVar21 <= *(ulong *)(param_2 + 0x20)) &&
             (uVar15 = *(ulong *)(param_2 + 0x20) + 1, uVar21 != uVar15)) {
            uVar21 = *(ulong *)(param_2 + 0x128);
            uVar4 = *(ushort *)(param_2 + 0x120);
                    /* catch() { ... } // from try @ 0106d168 with catch @ 0106d204 */
                    /* catch() { ... } // from try @ 0106d098 with catch @ 0106d208 */
            uVar13 = uVar21 + (ulong)uVar4 * 0x20;
            lVar12 = FT_Stream_Pos(lVar25);
            if ((ulong)uVar4 == 0) {
              lVar23 = 0x7fffffff;
            }
            else {
                    /* catch() { ... } // from try @ 0106d0e8 with catch @ 0106d218 */
              uVar3 = uVar13;
              if (uVar13 <= uVar21 + 0x20) {
                uVar3 = uVar21 + 0x20;
              }
              lVar14 = 0x7fffffff;
              uVar18 = uVar21;
              do {
                plVar1 = (long *)(uVar18 + 0x10);
                uVar18 = uVar18 + 0x20;
                lVar23 = *plVar1 - lVar12;
                if (lVar14 <= lVar23 || lVar23 < 1) {
                  lVar23 = lVar14;
                }
                lVar14 = lVar23;
              } while (uVar18 < uVar13);
              uVar21 = uVar21 + (uVar3 + ~uVar21 & 0xffffffffffffffe0) + 0x20;
                    /* try { // try from 0106d260 to 0116d2f7 has its CatchHandler @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d260 with catch @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d300 with catch @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d3e8 with catch @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d4e0 with catch @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d548 with catch @ 0106d260
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d664 with catch @ 0106d260
                        */
            }
            uVar15 = uVar15 << lVar10;
            if (uVar21 == uVar13) {
              lVar23 = *(long *)(lVar25 + 8) - lVar12;
            }
            if ((long)uVar15 <= lVar23) {
              *(long *)(param_2 + 0x478) = *(long *)(param_2 + 0x20) + 1;
              local_b0 = uVar15;
            }
          }
          uVar7 = FT_Stream_ExtractFrame(lVar25,local_b0,param_2 + 0x480);
          if (uVar7 == 0) goto LAB_0106d080;
        }
        else {
          uVar7 = 0x90;
        }
      }
      else if (uVar7 == 0) goto LAB_0106d128;
    }
    else {
LAB_0106d080:
      uVar7 = FUN_010738d0(param_2,lVar25);
      if (uVar7 == 0) {
                    /* try { // try from 0106d098 to 0116d0a7 has its CatchHandler @ 0106d208 */
        iVar9 = (**(code **)(param_2 + 0x330))(param_2,0x6670676d,lVar25,&local_b0);
        if (iVar9 == 0) {
          *(ulong *)(param_2 + 0x3f0) = local_b0;
          uVar7 = FT_Stream_ExtractFrame(lVar25,local_b0,param_2 + 0x3f8);
          if (uVar7 != 0) goto LAB_0106d2b4;
        }
        else {
          *(undefined8 *)(param_2 + 0x3f8) = 0;
          *(undefined8 *)(param_2 + 0x3f0) = 0;
        }
                    /* try { // try from 0106d0c0 to 0116d0c7 has its CatchHandler @ 0106d1e4 */
        iVar9 = (**(code **)(param_2 + 0x330))(param_2,0x70726570,lVar25,&local_b0);
        if (iVar9 == 0) {
          *(ulong *)(param_2 + 0x400) = local_b0;
          uVar7 = FT_Stream_ExtractFrame(lVar25,local_b0,param_2 + 0x408);
                    /* try { // try from 0106d1a4 to 0116d1b7 has its CatchHandler @ 0106d1d4 */
        }
        else {
          uVar7 = 0;
          *(undefined8 *)(param_2 + 0x408) = 0;
          *(undefined8 *)(param_2 + 0x400) = 0;
                    /* try { // try from 0106d0e8 to 0116d0f7 has its CatchHandler @ 0106d218 */
        }
      }
    }
LAB_0106d2b4:
    if ((((*(long *)(*(long *)(param_2 + 0xf0) + 0x60) == 0) && (*(int *)(param_2 + 0x38) != 0)) &&
        (*(long *)(param_2 + 0x480) != 0)) && (*(long *)(param_2 + 0x478) != 0)) {
      uVar16 = 0;
      uVar15 = 0;
      uVar21 = 0;
      do {
        FUN_01074238(param_2,uVar21 & 0xffffffff,&local_b4);
        if ((local_b4 != 0) && (uVar16 = uVar16 + 1, uVar15 = uVar21, 1 < uVar16))
        goto LAB_0106d2c0;
        uVar21 = uVar21 + 1;
                    /* try { // try from 0106d35c to 0116d363 has its CatchHandler @ 0106d66c */
      } while (uVar21 < *(ulong *)(param_2 + 0x478));
                    /* try { // try from 0106d364 to 0116d367 has its CatchHandler @ 0106d738 */
      if ((uVar16 == 1) &&
         ((uVar15 == 0 ||
          (((iVar9 = FT_Get_Glyph_Name(param_2,uVar15 & 0xffffffff,&local_b0,8), iVar9 == 0 &&
            ((char)local_b0 == '.')) && (iVar9 = strncmp((char *)&local_b0,".notdef",8), iVar9 == 0)
           ))))) {
        *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffe;
      }
    }
  }
LAB_0106d2c0:
  *(code **)(param_2 + 0x338) = FUN_01076a4c;
                    /* try { // try from 0106d2f8 to 0116d2ff has its CatchHandler @ 0106d688 */
  *(code **)(param_2 + 0x350) = FUN_01076b28;
  *(code **)(param_2 + 0x348) = FUN_01076aa0;
  *(code **)(param_2 + 0x358) = FUN_01076ed8;
                    /* try { // try from 0106d300 to 0116d35b has its CatchHandler @ 0106d260 */
  *(code **)(param_2 + 0x340) = FUN_010770f4;
LAB_0106cdb0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

