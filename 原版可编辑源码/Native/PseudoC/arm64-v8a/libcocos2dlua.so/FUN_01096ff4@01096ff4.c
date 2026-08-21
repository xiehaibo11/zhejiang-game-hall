
void FUN_01096ff4(byte *param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  char acStack_e8 [128];
  long local_68;
  
                    /* try { // try from 01096ff4 to 01196fff has its CatchHandler @ 0109712c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar5 = strncmp((char *)param_1,"ENDPROPERTIES",0xd);
                    /* try { // try from 01097040 to 01197047 has its CatchHandler @ 01097108 */
                    /* catch() { ... } // from try @ 01096eac with catch @ 01097150 */
                    /* catch() { ... } // from try @ 01096e64 with catch @ 01097154 */
                    /* catch() { ... } // from try @ 01096e5c with catch @ 01097158 */
                    /* catch() { ... } // from try @ 01096e14 with catch @ 0109715c */
                    /* catch() { ... } // from try @ 01096e0c with catch @ 01097160 */
                    /* catch() { ... } // from try @ 01096dc4 with catch @ 01097164 */
  if (((iVar5 == 0) && (param_1[0xd] < 0x21)) &&
     ((1L << ((ulong)param_1[0xd] & 0x3f) & 0x100002601U) != 0)) {
    uVar18 = param_5[7];
                    /* catch() { ... } // from try @ 01096dbc with catch @ 0109717c */
    if ((uVar18 != 0) && (*(long *)(uVar18 + 0x80) != 0)) {
      uVar13 = (ulong)*(int *)(*(long *)(uVar18 + 0xe8) + 4);
      puVar20 = *(undefined8 **)(*(long *)(uVar18 + 0xe8) + 0x10);
                    /* catch() { ... } // from try @ 01096d3c with catch @ 01097198 */
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = 0xd37fb470fb72ca / uVar13;
      }
      puVar19 = puVar20 + (0xd37fb470fb72ca - uVar8 * uVar13);
      puVar16 = (undefined8 *)*puVar19;
      if (puVar16 != (undefined8 *)0x0) {
        do {
                    /* try { // try from 010971d0 to 0119729b has its CatchHandler @ 010971d0
                       catch(type#1 @ 00000000) { ... } // from try @ 010971d0 with catch @ 010971d0
                       catch(type#1 @ 00000000) { ... } // from try @ 010972fc with catch @ 010971d0
                        */
          if ((*(char *)*puVar16 == 'F') &&
             (iVar5 = strcmp((char *)*puVar16,"FONT_ASCENT"), iVar5 == 0)) {
            if (*(long *)(uVar18 + 0x90) + puVar16[1] * 0x18 != 0) goto LAB_0109723c;
            break;
          }
          puVar16 = puVar19 + -1;
          puVar19 = puVar20 + (uVar13 - 1);
          if (puVar20 <= puVar16) {
            puVar19 = puVar16;
          }
          puVar16 = (undefined8 *)*puVar19;
        } while (puVar16 != (undefined8 *)0x0);
      }
    }
    *(long *)(uVar18 + 0x40) = (long)(int)*(short *)(uVar18 + 0x10);
    sprintf(acStack_e8,"%hd");
    uVar6 = FUN_01097624(param_5[7],"FONT_ASCENT",acStack_e8);
    if ((int)uVar6 == 0) {
      uVar18 = param_5[7];
      *(undefined2 *)(uVar18 + 0x880f0) = 1;
LAB_0109723c:
      if (*(long *)(uVar18 + 0x80) != 0) {
        uVar13 = (ulong)*(int *)(*(long *)(uVar18 + 0xe8) + 4);
        puVar20 = *(undefined8 **)(*(long *)(uVar18 + 0xe8) + 0x10);
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = 0x199c76da36222caa / uVar13;
        }
        puVar19 = puVar20 + (0x199c76da36222caa - uVar8 * uVar13);
        puVar16 = (undefined8 *)*puVar19;
        if (puVar16 != (undefined8 *)0x0) {
          do {
                    /* try { // try from 0109729c to 011972c7 has its CatchHandler @ 010972e4 */
            if ((*(char *)*puVar16 == 'F') &&
               (iVar5 = strcmp((char *)*puVar16,"FONT_DESCENT"), iVar5 == 0)) {
              if (*(long *)(uVar18 + 0x90) + puVar16[1] * 0x18 != 0) goto LAB_010972fc;
              break;
            }
            puVar16 = puVar19 + -1;
            puVar19 = puVar20 + (uVar13 - 1);
            if (puVar20 <= puVar16) {
              puVar19 = puVar16;
            }
            puVar16 = (undefined8 *)*puVar19;
          } while (puVar16 != (undefined8 *)0x0);
        }
      }
      *(long *)(uVar18 + 0x48) = (long)(int)*(short *)(uVar18 + 0x12);
      sprintf(acStack_e8,"%hd");
      uVar6 = FUN_01097624(param_5[7],"FONT_DESCENT",acStack_e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109729c with catch @ 010972e4
                        */
      if ((int)uVar6 == 0) {
                    /* try { // try from 010972f8 to 011972fb has its CatchHandler @ 01097460 */
        *(undefined2 *)(param_5[7] + 0x880f0) = 1;
LAB_010972fc:
                    /* try { // try from 010972fc to 01197473 has its CatchHandler @ 010971d0 */
        uVar6 = 0;
        *param_5 = *param_5 & 0xffffffffffffffef;
        *param_4 = FUN_01098084;
      }
    }
    goto LAB_010975f0;
  }
                    /* try { // try from 01097048 to 01197053 has its CatchHandler @ 01097104 */
  iVar5 = strncmp((char *)param_1,"_XFREE86_GLYPH_RANGES",0x15);
  if (((iVar5 == 0) && (param_1[0x15] < 0x21)) &&
     ((1L << ((ulong)param_1[0x15] & 0x3f) & 0x100002601U) != 0)) {
    uVar6 = 0;
    goto LAB_010975f0;
  }
  iVar5 = strncmp((char *)param_1,"COMMENT",7);
  if (iVar5 == 0) {
    pbVar15 = param_1 + 7;
    bVar14 = *pbVar15;
    if (0x20 < bVar14) goto LAB_01097074;
    if ((1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar14 != 0) goto LAB_01097074;
    }
    else {
      pbVar15 = param_1 + 8;
      param_1[7] = 0;
    }
LAB_010975e4:
                    /* try { // try from 010975e4 to 011975ef has its CatchHandler @ 0109794c */
    uVar18 = param_5[7];
  }
  else {
LAB_01097074:
    uVar18 = param_5[7];
    uVar17 = (uint)*param_1;
    pbVar15 = param_1;
    if (*param_1 != 0) {
      do {
                    /* try { // try from 01097088 to 0119708f has its CatchHandler @ 01097100 */
                    /* try { // try from 01097090 to 011970b7 has its CatchHandler @ 01096bfc */
        if ((uVar17 == 9) || (uVar17 == 0x20)) {
          *pbVar15 = 0;
          goto joined_r0x0109734c;
        }
        pbVar15 = pbVar15 + 1;
        uVar17 = (uint)*pbVar15;
      } while (uVar17 != 0);
    }
    uVar17 = 0xffffffff;
joined_r0x0109734c:
    if (param_1 == (byte *)0x0) {
LAB_01097350:
      ppuVar9 = (undefined **)0x0;
      if (uVar17 == 0xffffffff) goto LAB_01097424;
LAB_0109735c:
      *pbVar15 = (byte)uVar17;
      if (ppuVar9 != (undefined **)0x0) goto LAB_0109742c;
LAB_01097438:
      if ((uVar17 & 0xff) == 0) {
        bVar14 = 0;
        goto LAB_01097580;
      }
      *pbVar15 = 0;
      do {
        pbVar15 = pbVar15 + 1;
        bVar14 = *pbVar15;
LAB_01097580:
      } while ((bVar14 == 9) || (pbVar7 = param_1 + param_2, bVar14 == 0x20));
      if (bVar14 == 0x22) {
        pbVar15 = pbVar15 + 1;
      }
      while (pbVar15 < pbVar7) {
        bVar14 = pbVar7[-1];
        if ((bVar14 != 9) && (bVar14 != 0x20)) {
          if (bVar14 == 0x22) {
            pbVar7[-1] = 0;
          }
          break;
        }
        pbVar7[-1] = 0;
        pbVar7 = pbVar7 + -1;
      }
      goto LAB_010975e4;
    }
    bVar14 = *param_1;
    uVar12 = (uint)bVar14;
    if (uVar12 == 0) goto LAB_01097350;
                    /* try { // try from 010970b8 to 011970bf has its CatchHandler @ 010970fc */
    puVar20 = *(undefined8 **)(uVar18 + 0x88120);
                    /* try { // try from 010970c0 to 011971cf has its CatchHandler @ 01096bfc */
    uVar8 = 0;
    lVar10 = 1;
    do {
      uVar13 = (ulong)uVar12;
      uVar12 = (uint)param_1[lVar10];
      uVar8 = uVar8 * 0x1f + uVar13;
      lVar10 = lVar10 + 1;
    } while (uVar12 != 0);
    uVar11 = (ulong)*(int *)(uVar18 + 0x88114);
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar8 / uVar11;
    }
                    /* catch() { ... } // from try @ 010970b8 with catch @ 010970fc */
    puVar19 = puVar20 + (uVar8 - uVar13 * uVar11);
                    /* catch() { ... } // from try @ 01097088 with catch @ 01097100 */
    puVar16 = (undefined8 *)*puVar19;
                    /* catch() { ... } // from try @ 01097048 with catch @ 01097104 */
    if (puVar16 == (undefined8 *)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 01097040 with catch @ 01097108 */
                    /* catch() { ... } // from try @ 01096d90 with catch @ 0109710c */
                    /* catch() { ... } // from try @ 01096cfc with catch @ 01097110 */
      do {
                    /* catch() { ... } // from try @ 01096cd8 with catch @ 01097124 */
                    /* catch() { ... } // from try @ 01096cb4 with catch @ 01097128 */
                    /* catch() { ... } // from try @ 01096ff4 with catch @ 0109712c */
        if ((*(byte *)*puVar16 == bVar14) &&
           (iVar5 = strcmp((char *)*puVar16,(char *)param_1), iVar5 == 0)) {
          uVar8 = puVar16[1];
          if (uVar8 < 0x53) {
            ppuVar9 = &PTR_s_ADD_STYLE_NAME_0172acf8 + uVar8 * 3;
          }
          else {
            ppuVar9 = (undefined **)(*(long *)(uVar18 + 0x88100) + uVar8 * 0x18 + -0x7c8);
          }
          goto LAB_01097418;
        }
                    /* catch() { ... } // from try @ 01096fec with catch @ 01097130 */
        puVar16 = puVar19 + -1;
                    /* catch() { ... } // from try @ 01096fa4 with catch @ 01097134 */
        puVar19 = puVar20 + (uVar11 - 1);
                    /* catch() { ... } // from try @ 01096f9c with catch @ 01097138 */
        if (puVar20 <= puVar16) {
          puVar19 = puVar16;
        }
                    /* catch() { ... } // from try @ 01096f54 with catch @ 0109713c */
        puVar16 = (undefined8 *)*puVar19;
                    /* catch() { ... } // from try @ 01096f4c with catch @ 01097140 */
      } while (puVar16 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 01096f04 with catch @ 01097144 */
                    /* catch() { ... } // from try @ 01096efc with catch @ 01097148 */
      ppuVar9 = (undefined **)0x0;
                    /* catch() { ... } // from try @ 01096eb4 with catch @ 0109714c */
    }
LAB_01097418:
    if (uVar17 != 0xffffffff) goto LAB_0109735c;
LAB_01097424:
    uVar17 = 0;
    if (ppuVar9 == (undefined **)0x0) goto LAB_01097438;
LAB_0109742c:
    if (*(int *)(ppuVar9 + 1) == 1) goto LAB_01097438;
    puVar1 = param_5 + 0x8809;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010972f8 with catch @ 01097460
                        */
    uVar6 = FUN_01096bfc(puVar1,&DAT_0145fc2e,param_1,param_2);
    if ((int)uVar6 != 0) goto LAB_010975f0;
    puVar20 = (undefined8 *)*puVar1;
    puVar2 = param_5 + 0x880b;
    uVar18 = *puVar2;
    param_1 = (byte *)*puVar20;
    if (uVar18 == 0) {
LAB_01097568:
      pbVar15 = (byte *)0x0;
    }
    else {
      uVar8 = uVar18 - 1;
      if (uVar8 == 0) {
                    /* try { // try from 01097498 to 0119749b has its CatchHandler @ 010974dc */
        *puVar2 = 0;
        pbVar15 = (byte *)0x0;
      }
      else {
        *puVar20 = puVar20[1];
        if (2 < uVar18) {
          lVar10 = 0;
          do {
            uVar13 = lVar10 + 3;
            lVar3 = *puVar1 + lVar10 * 8;
            lVar10 = lVar10 + 1;
            *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
          } while (uVar13 < uVar18);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01097498 with catch @ 010974dc
                        */
        *puVar2 = uVar8;
        if (uVar8 == 0) goto LAB_01097568;
        lVar10 = 0;
        uVar18 = 0;
        pbVar7 = *(byte **)*puVar1;
        bVar14 = *pbVar7;
        pbVar15 = pbVar7;
        while( true ) {
          if (bVar14 != 0) {
            do {
              pbVar15 = pbVar15 + 1;
              pbVar7[lVar10] = bVar14;
              bVar14 = *pbVar15;
              lVar10 = lVar10 + 1;
            } while (bVar14 != 0);
            uVar8 = *puVar2;
          }
          uVar18 = uVar18 + 1;
          if (uVar18 < uVar8) {
            pbVar7[lVar10] = 0x20;
            uVar8 = *puVar2;
            lVar10 = lVar10 + 1;
          }
          if (uVar8 <= uVar18) break;
          pbVar15 = *(byte **)(*puVar1 + uVar18 * 8);
          bVar14 = *pbVar15;
        }
        pbVar15 = &DAT_0145ff69;
        if (pbVar7 != &DAT_0145ff69) {
          pbVar7[lVar10] = 0;
          pbVar15 = pbVar7;
        }
      }
    }
    uVar18 = param_5[7];
  }
  uVar6 = FUN_01097624(uVar18,param_1,pbVar15);
LAB_010975f0:
                    /* try { // try from 010975f0 to 01197603 has its CatchHandler @ 010979d0 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* try { // try from 01097604 to 01197643 has its CatchHandler @ 010975a4 */
  return;
}

