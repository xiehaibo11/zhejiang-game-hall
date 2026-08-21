
/* WARNING: Removing unreachable block (ram,0x01070be4) */
/* WARNING: Removing unreachable block (ram,0x01070f94) */
/* WARNING: Removing unreachable block (ram,0x01070184) */
/* WARNING: Type propagation algorithm not settling */

int TT_RunIns(long param_1)

{
  bool bVar1;
  long *plVar2;
  ushort *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ushort uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  undefined2 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  byte bVar24;
  ushort uVar25;
  undefined4 uVar26;
  long lVar27;
  code *pcVar28;
  int *piVar29;
  int *piVar30;
  undefined8 *puVar31;
  int *piVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  code *pcVar40;
  long *plVar41;
  short sVar42;
  ushort uVar43;
  undefined8 uVar44;
  ulong uVar45;
  long lVar46;
  undefined4 *puVar47;
  long lVar48;
  int iVar49;
  uint uVar50;
  undefined4 *puVar51;
  short sVar52;
  long lVar53;
  ulong uVar54;
  long lVar55;
  long lVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined8 local_150;
  long local_128;
  long local_110;
  long local_108;
  uint *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  uint *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_98;
  undefined4 uStack_94;
  ushort local_64 [2];
  
                    /* try { // try from 0106de70 to 0116decb has its CatchHandler @ 0106dce8 */
  bVar16 = *(short *)(param_1 + 0x188) != *(short *)(param_1 + 0x18a);
  pcVar40 = FUN_0107276c;
  if (bVar16) {
    pcVar40 = FUN_01072360;
  }
                    /* try { // try from 0106decc to 0116ded3 has its CatchHandler @ 0106e0f0 */
  pcVar28 = FUN_01072780;
  pcVar15 = FUN_01072774;
  if (bVar16) {
    pcVar28 = FUN_01072548;
    pcVar15 = FUN_01072450;
  }
  pcVar7 = FUN_0107278c;
  if (bVar16) {
    pcVar7 = FUN_01072654;
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(code **)(param_1 + 0x400) = pcVar40;
  *(code **)(param_1 + 0x408) = pcVar15;
  *(code **)(param_1 + 0x410) = pcVar28;
  *(code **)(param_1 + 0x418) = pcVar7;
  sVar52 = *(short *)(param_1 + 0x21e);
  if ((long)sVar52 == 0x4000) {
    sVar42 = *(short *)(param_1 + 0x21a);
    lVar27 = (long)sVar42;
  }
  else if ((long)*(short *)(param_1 + 0x220) == 0x4000) {
    lVar27 = (long)*(short *)(param_1 + 0x21c);
    sVar42 = *(short *)(param_1 + 0x21a);
  }
  else {
    sVar42 = *(short *)(param_1 + 0x21a);
    lVar27 = (long)sVar42 * (long)sVar52 +
             (long)*(short *)(param_1 + 0x21c) * (long)*(short *)(param_1 + 0x220) >> 0xe;
  }
  *(long *)(param_1 + 0x3c8) = lVar27;
  if (sVar42 == 0x4000) {
    pcVar40 = FUN_010770fc;
                    /* try { // try from 0106df60 to 0116df67 has its CatchHandler @ 0106e0f8 */
  }
  else {
                    /* try { // try from 0106df68 to 0116dfab has its CatchHandler @ 0106dce8 */
    pcVar40 = FUN_01077104;
    if (*(short *)(param_1 + 0x21c) != 0x4000) {
      pcVar40 = FUN_0107710c;
    }
  }
  *(code **)(param_1 + 0x3d8) = pcVar40;
  pcVar40 = FUN_010770fc;
  if (*(short *)(param_1 + 0x216) != 0x4000) {
                    /* try { // try from 0106dfac to 0116dfaf has its CatchHandler @ 0106e0ec */
    pcVar40 = FUN_01077104;
                    /* try { // try from 0106dfb4 to 0116dfcf has its CatchHandler @ 0106e120 */
    if (*(short *)(param_1 + 0x218) != 0x4000) {
      pcVar40 = FUN_01077188;
    }
  }
                    /* try { // try from 0106dfd0 to 0116e0d7 has its CatchHandler @ 0106dce8 */
  *(code **)(param_1 + 0x3e0) = pcVar40;
  *(code **)(param_1 + 0x3f8) = FUN_010772b0;
  *(code **)(param_1 + 0x3f0) = FUN_01077204;
  if (lVar27 == 0x4000) {
    if (sVar52 == 0x4000) {
      pcVar40 = FUN_0107733c;
      pcVar28 = FUN_01077368;
    }
    else {
      if (*(short *)(param_1 + 0x220) != 0x4000) goto LAB_0106e028;
      pcVar40 = FUN_01077384;
      pcVar28 = FUN_010773b0;
    }
    *(code **)(param_1 + 0x3f8) = pcVar28;
    *(code **)(param_1 + 0x3f0) = pcVar40;
  }
LAB_0106e028:
  lVar46 = -lVar27;
  if (-1 < lVar27) {
    lVar46 = lVar27;
  }
  if (lVar46 < 0x400) {
    *(undefined8 *)(param_1 + 0x3c8) = 0x4000;
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if ((*(uint *)(param_1 + 0x238) & 0xff) < 8) {
    *(undefined **)(param_1 + 0x3d0) = (&PTR_FUN_01728440)[(char)*(uint *)(param_1 + 0x238)];
  }
  local_d0 = (undefined8 *)(param_1 + 0x88);
  local_108 = param_1 + 0x58;
  local_e0 = (undefined8 *)(param_1 + 0x48);
  local_110 = param_1 + 0x68;
  local_c8 = (uint *)(param_1 + 0x21a);
  local_e8 = (uint *)(param_1 + 0x216);
  local_100 = (uint *)(param_1 + 0x21e);
  local_f0 = (undefined8 *)(param_1 + 0x148);
  local_f8 = (undefined8 *)(param_1 + 0x108);
  local_d8 = (undefined8 *)(param_1 + 200);
  lVar46 = *(long *)(param_1 + 0x280);
  lVar27 = 0;
  puVar3 = (ushort *)(param_1 + 0x21e);
                    /* try { // try from 0106e0d8 to 0116e0df has its CatchHandler @ 0106e110 */
                    /* try { // try from 0106e0e0 to 0116e0e7 has its CatchHandler @ 0106e108 */
                    /* try { // try from 0106e0e8 to 0116e0eb has its CatchHandler @ 0106e0f8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106dfac with catch @ 0106e0ec
                       try { // try from 0106e0ec to 0116e22b has its CatchHandler @ 0106dce8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106decc with catch @ 0106e0f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106dde4 with catch @ 0106e0f4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106df60 with catch @ 0106e0f8
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e0e8 with catch @ 0106e0f8
                        */
  do {
    puVar31 = local_d0;
    lVar35 = *(long *)(param_1 + 0x278);
    bVar57 = *(byte *)(lVar35 + lVar46);
    uVar45 = (ulong)bVar57;
    iVar36 = (int)(char)(&DAT_0145cfd8)[uVar45];
    uVar66 = (uint)bVar57;
    *(byte *)(param_1 + 0x290) = bVar57;
    *(int *)(param_1 + 0x294) = iVar36;
    if ((uVar45 | 1) == 0x41) {
      lVar48 = *(long *)(param_1 + 0x288);
                    /* catch() { ... } // from try @ 0107203c with catch @ 01072284 */
      if (lVar46 + 1 < lVar48) {
                    /* catch() { ... } // from try @ 01071e80 with catch @ 0107228c */
        iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
        *(int *)(param_1 + 0x294) = iVar36;
        goto LAB_010722a0;
      }
      goto LAB_010722cc;
    }
    lVar48 = *(long *)(param_1 + 0x288);
LAB_010722a0:
                    /* catch() { ... } // from try @ 01071ff8 with catch @ 010722a8 */
    if (lVar48 < lVar46 + iVar36) goto LAB_010722cc;
    bVar24 = (&DAT_0145d0d8)[uVar45];
    lVar46 = *(long *)(param_1 + 0x20) - (ulong)(bVar24 >> 4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106de68 with catch @ 0106e108
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e0e0 with catch @ 0106e108
                        */
    *(long *)(param_1 + 0x38) = lVar46;
    if (lVar46 < 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106dd80 with catch @ 0106e110
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e0d8 with catch @ 0106e110
                        */
      if (*(char *)(param_1 + 0x3c1) == '\0') {
        if (0xf < bVar24) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106dfb4 with catch @ 0106e120
                        */
          lVar46 = *(long *)(param_1 + 0x30);
          bVar12 = bVar24 >> 4;
          uVar61 = (uint)bVar12;
          uVar50 = uVar61;
          if (bVar12 < 2) {
            uVar50 = 1;
          }
          if (uVar50 < 4) {
            uVar65 = 0;
          }
          else {
            uVar62 = uVar50 & 0xc;
            if (uVar62 == 0) {
              uVar65 = 0;
            }
            else {
              if (uVar61 < 2) {
                uVar61 = 1;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ded8 with catch @ 0106e154
                        */
              uVar65 = 0;
              if ((uVar61 - 1 != 0xffffffff) && (uVar61 - 1 >> 0x10 == 0)) {
                uVar61 = 0;
                do {
                  uVar65 = uVar61 & 0xfffc;
                  uVar61 = uVar61 + 4;
                  puVar11 = (undefined8 *)(lVar46 + (ulong)uVar65 * 8);
                  puVar11[1] = 0;
                  *puVar11 = 0;
                  puVar11[3] = 0;
                  puVar11[2] = 0;
                } while (uVar62 != uVar61);
                uVar65 = uVar62;
                if (uVar50 == uVar62) goto LAB_0106e1ac;
              }
            }
          }
          do {
            uVar50 = uVar65 + 1;
            *(undefined8 *)(lVar46 + (ulong)(uVar65 & 0xffff) * 8) = 0;
            uVar65 = uVar50;
          } while ((uVar50 & 0xffff) < (uint)bVar12);
        }
LAB_0106e1ac:
        lVar46 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        goto LAB_0106e1b4;
      }
      iVar63 = 0x81;
      goto switchD_0106e1f0_caseD_4f;
    }
LAB_0106e1b4:
    uVar61 = *(uint *)(param_1 + 0x28);
    uVar50 = (int)lVar46 + (bVar24 & 0xf);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ddec with catch @ 0106e1c0
                        */
    *(uint *)(param_1 + 0x40) = uVar50;
    if (uVar61 < uVar50) {
LAB_010722b8:
      iVar63 = 0x82;
      goto switchD_0106e1f0_caseD_4f;
    }
    lVar48 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x298) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar4 = (ulong *)(lVar48 + lVar46 * 8);
    uVar43 = (ushort)bVar57;
    iVar63 = 0x87;
    switch(uVar45) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar25 = (uVar43 & 1) << 0xe;
      uVar9 = uVar25 ^ 0x4000;
      if (uVar43 < 4) {
        *(ushort *)(param_1 + 0x21a) = uVar25;
        *(ushort *)(param_1 + 0x21c) = uVar9;
        *(ushort *)(param_1 + 0x216) = uVar25;
        *(ushort *)(param_1 + 0x218) = uVar9;
      }
      if ((bVar57 >> 1 & 1) == 0) {
        *(ushort *)(param_1 + 0x21e) = uVar25;
        *(ushort *)(param_1 + 0x220) = uVar9;
      }
      else {
        uVar25 = *puVar3;
      }
      if (uVar25 == 0x4000) {
        sVar52 = (short)*local_c8;
        lVar46 = (long)sVar52;
      }
      else if ((long)*(short *)(param_1 + 0x220) == 0x4000) {
        lVar46 = (long)*(short *)(param_1 + 0x21c);
        sVar52 = *(short *)(param_1 + 0x21a);
      }
      else {
        sVar52 = *(short *)(param_1 + 0x21a);
        lVar46 = (long)sVar52 * (long)(short)uVar25 +
                 (long)*(short *)(param_1 + 0x21c) * (long)*(short *)(param_1 + 0x220) >> 0xe;
      }
      *(long *)(param_1 + 0x3c8) = lVar46;
      if (sVar52 == 0x4000) {
        pcVar40 = FUN_010770fc;
      }
      else {
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x21c) != 0x4000) {
          pcVar40 = FUN_0107710c;
        }
      }
      *(code **)(param_1 + 0x3d8) = pcVar40;
      if (*(short *)(param_1 + 0x216) == 0x4000) {
        pcVar40 = FUN_010770fc;
      }
      else {
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x218) != 0x4000) {
          pcVar40 = FUN_01077188;
        }
      }
      *(code **)(param_1 + 0x3e0) = pcVar40;
      *(code **)(param_1 + 0x3f8) = FUN_010772b0;
      *(code **)(param_1 + 0x3f0) = FUN_01077204;
      if (lVar46 == 0x4000) {
        if (uVar25 == 0x4000) {
LAB_0106ea38:
          pcVar40 = FUN_0107733c;
          pcVar28 = FUN_01077368;
        }
        else {
          if (*(short *)(param_1 + 0x220) != 0x4000) goto LAB_0106eac0;
LAB_0106eaa4:
          pcVar40 = FUN_01077384;
          pcVar28 = FUN_010773b0;
        }
        *(code **)(param_1 + 0x3f8) = pcVar28;
        *(code **)(param_1 + 0x3f0) = pcVar40;
      }
      goto LAB_0106eac0;
    case 6:
    case 7:
                    /* try { // try from 0106e3b8 to 0116e3bf has its CatchHandler @ 0106e584 */
                    /* try { // try from 0106e3c4 to 0116e3cb has its CatchHandler @ 0106e5d0 */
      if ((((uint)puVar4[1] & 0xffff) < (uint)*(ushort *)(param_1 + 0xd4)) &&
         ((ushort)*puVar4 < *(ushort *)(param_1 + 0x94))) {
        plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)(ushort)*puVar4 * 0x10);
        plVar6 = (long *)(*(long *)(param_1 + 0xe0) + (puVar4[1] & 0xffff) * 0x10);
        lVar48 = *plVar41 - *plVar6;
        lVar34 = plVar41[1] - plVar6[1];
        lVar46 = 0x4000;
        if (lVar34 != 0 || lVar48 != 0) {
          lVar46 = lVar48;
        }
        lVar35 = lVar46;
                    /* try { // try from 0106e42c to 0116e42f has its CatchHandler @ 0106e580 */
        if ((bVar57 & 1) != 0 && (lVar34 != 0 || lVar48 != 0)) {
          lVar35 = -lVar34;
          lVar34 = lVar46;
        }
                    /* try { // try from 0106e434 to 0116e44f has its CatchHandler @ 0106e59c */
        lVar46 = -lVar35;
        if (-1 < lVar35) {
          lVar46 = lVar35;
        }
        if (lVar46 < 0x4000) {
          lVar46 = -lVar34;
          if (-1 < lVar34) {
            lVar46 = lVar34;
          }
                    /* try { // try from 0106e450 to 0116e577 has its CatchHandler @ 0106e22c */
          if (lVar46 < 0x4000) {
            if (lVar34 == 0 && lVar35 == 0) goto LAB_0106ebdc;
            lVar35 = lVar35 << 0xe;
            lVar34 = lVar34 << 0xe;
          }
        }
        goto LAB_0106ebac;
      }
      goto LAB_010701ec;
    case 8:
    case 9:
      if ((((uint)puVar4[1] & 0xffff) < (uint)*(ushort *)(param_1 + 0xd4)) &&
         ((ushort)*puVar4 < *(ushort *)(param_1 + 0x94))) {
        plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)(ushort)*puVar4 * 0x10);
        plVar6 = (long *)(*(long *)(param_1 + 0xe0) + (puVar4[1] & 0xffff) * 0x10);
        lVar48 = *plVar41 - *plVar6;
        lVar34 = plVar41[1] - plVar6[1];
        lVar46 = 0x4000;
        if (lVar34 != 0 || lVar48 != 0) {
          lVar46 = lVar48;
        }
        lVar35 = lVar46;
        if ((bVar57 & 1) != 0 && (lVar34 != 0 || lVar48 != 0)) {
          lVar35 = -lVar34;
          lVar34 = lVar46;
        }
        lVar46 = -lVar35;
        if (-1 < lVar35) {
          lVar46 = lVar35;
        }
        if (lVar46 < 0x4000) {
          lVar46 = -lVar34;
          if (-1 < lVar34) {
            lVar46 = lVar34;
          }
          if (lVar46 < 0x4000) {
            if (lVar34 == 0 && lVar35 == 0) goto LAB_0106ecb4;
            lVar35 = lVar35 << 0xe;
            lVar34 = lVar34 << 0xe;
          }
        }
        goto LAB_0106ec84;
      }
      goto LAB_010701ec;
    case 10:
                    /* catch() { ... } // from try @ 0106e958 with catch @ 0106eb64 */
      lVar48 = *puVar4 << 0x30;
      sVar52 = (short)*puVar4;
      lVar35 = (long)sVar52;
      lVar46 = -lVar35;
      if (-1 < lVar48) {
        lVar46 = lVar35;
      }
      sVar42 = (short)puVar4[1];
      lVar34 = (long)sVar42;
      if (lVar46 < 0x4000) {
        lVar38 = puVar4[1] << 0x30;
        lVar46 = -lVar34;
        if (-1 < lVar38) {
          lVar46 = lVar34;
        }
                    /* catch() { ... } // from try @ 0106e94c with catch @ 0106eb98 */
        if (0x3fff < lVar46) goto LAB_0106ebac;
        if (sVar52 != 0 || sVar42 != 0) {
          lVar35 = lVar48 >> 0x22;
                    /* catch() { ... } // from try @ 0106e934 with catch @ 0106eba8 */
          lVar34 = lVar38 >> 0x22;
          goto LAB_0106ebac;
        }
      }
      else {
LAB_0106ebac:
        lVar46 = FT_Hypot(lVar35,lVar34);
        uVar19 = FT_DivFix(lVar35,lVar46 << 2);
        *(undefined2 *)(param_1 + 0x21a) = uVar19;
        uVar19 = FT_DivFix(lVar34,lVar46 << 2);
        *(undefined2 *)(param_1 + 0x21c) = uVar19;
      }
LAB_0106ebdc:
      uVar66 = *local_c8;
      *local_e8 = uVar66;
      lVar46 = (long)(short)*puVar3;
      if (lVar46 == 0x4000) {
        lVar35 = (long)(short)uVar66;
                    /* catch() { ... } // from try @ 0106e924 with catch @ 0106ec2c */
      }
      else if ((long)*(short *)(param_1 + 0x220) == 0x4000) {
        lVar35 = (long)*(short *)(param_1 + 0x21c);
      }
      else {
                    /* try { // try from 01070be8 to 01170c1f has its CatchHandler @ 01070be8
                       catch() { ... } // from try @ 01070be8 with catch @ 01070be8
                       catch() { ... } // from try @ 01070c54 with catch @ 01070be8 */
        lVar35 = (short)uVar66 * lVar46 +
                 (long)*(short *)(param_1 + 0x21c) * (long)*(short *)(param_1 + 0x220) >> 0xe;
      }
      *(long *)(param_1 + 0x3c8) = lVar35;
      if ((uVar66 & 0xffff) == 0x4000) {
        *(code **)(param_1 + 0x3d8) = FUN_010770fc;
        pcVar40 = FUN_010770fc;
                    /* try { // try from 01070c20 to 01170c2b has its CatchHandler @ 01070d28 */
      }
      else {
                    /* try { // try from 01070c44 to 01170c53 has its CatchHandler @ 01070d24 */
        pcVar28 = FUN_01077104;
        if (*(short *)(param_1 + 0x21c) != 0x4000) {
          pcVar28 = FUN_0107710c;
        }
        pcVar40 = FUN_01077104;
        if (uVar66 >> 0x10 != 0x4000) {
          pcVar40 = FUN_01077188;
        }
                    /* try { // try from 01070c54 to 01170d43 has its CatchHandler @ 01070be8 */
        *(code **)(param_1 + 0x3d8) = pcVar28;
      }
      goto LAB_01070cec;
    case 0xb:
      lVar48 = *puVar4 << 0x30;
      sVar52 = (short)*puVar4;
      lVar35 = (long)sVar52;
      lVar46 = -lVar35;
      if (-1 < lVar48) {
        lVar46 = lVar35;
      }
      sVar42 = (short)puVar4[1];
      lVar34 = (long)sVar42;
      if (lVar46 < 0x4000) {
                    /* catch() { ... } // from try @ 0106e908 with catch @ 0106ec60 */
        lVar38 = puVar4[1] << 0x30;
        lVar46 = -lVar34;
        if (-1 < lVar38) {
          lVar46 = lVar34;
        }
        if (0x3fff < lVar46) goto LAB_0106ec84;
        if (sVar52 != 0 || sVar42 != 0) {
          lVar35 = lVar48 >> 0x22;
          lVar34 = lVar38 >> 0x22;
          goto LAB_0106ec84;
        }
      }
      else {
LAB_0106ec84:
        lVar46 = FT_Hypot(lVar35,lVar34);
        uVar19 = FT_DivFix(lVar35,lVar46 << 2);
        *(undefined2 *)(param_1 + 0x21e) = uVar19;
        uVar19 = FT_DivFix(lVar34,lVar46 << 2);
        *(undefined2 *)(param_1 + 0x220) = uVar19;
      }
LAB_0106ecb4:
      lVar46 = (long)(short)*puVar3;
      if (lVar46 == 0x4000) {
        sVar52 = (short)*local_c8;
        lVar35 = (long)sVar52;
                    /* catch() { ... } // from try @ 0106e718 with catch @ 0106ecec */
      }
      else if ((long)*(short *)(param_1 + 0x220) == 0x4000) {
        lVar35 = (long)*(short *)(param_1 + 0x21c);
        sVar52 = *(short *)(param_1 + 0x21a);
      }
      else {
        sVar52 = *(short *)(param_1 + 0x21a);
        lVar35 = sVar52 * lVar46 +
                 (long)*(short *)(param_1 + 0x21c) * (long)*(short *)(param_1 + 0x220) >> 0xe;
      }
LAB_01070c80:
      *(long *)(param_1 + 0x3c8) = lVar35;
      if (sVar52 == 0x4000) {
        pcVar40 = FUN_010770fc;
      }
      else {
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x21c) != 0x4000) {
          pcVar40 = FUN_0107710c;
        }
      }
      *(code **)(param_1 + 0x3d8) = pcVar40;
      if (*(short *)(param_1 + 0x216) == 0x4000) {
        pcVar40 = FUN_010770fc;
      }
      else {
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x218) != 0x4000) {
          pcVar40 = FUN_01077188;
        }
      }
LAB_01070cec:
      *(code **)(param_1 + 0x3e0) = pcVar40;
      *(code **)(param_1 + 0x3f8) = FUN_010772b0;
      *(code **)(param_1 + 0x3f0) = FUN_01077204;
      if (lVar35 == 0x4000) {
        if ((int)lVar46 == 0x4000) {
          pcVar40 = FUN_0107733c;
          pcVar28 = FUN_01077368;
        }
        else {
                    /* catch() { ... } // from try @ 01070c44 with catch @ 01070d24 */
                    /* catch() { ... } // from try @ 01070c20 with catch @ 01070d28 */
          if (*(short *)(param_1 + 0x220) != 0x4000) goto LAB_01070d4c;
          pcVar40 = FUN_01077384;
          pcVar28 = FUN_010773b0;
        }
                    /* catch() { ... } // from try @ 01070e28 with catch @ 01070d44
                       catch() { ... } // from try @ 01070f88 with catch @ 01070d44
                       catch() { ... } // from try @ 01071088 with catch @ 01070d44 */
        *(code **)(param_1 + 0x3f8) = pcVar28;
        *(code **)(param_1 + 0x3f0) = pcVar40;
      }
LAB_01070d4c:
      lVar48 = -lVar35;
      if (-1 < lVar35) {
        lVar48 = lVar35;
      }
      goto joined_r0x01070d58;
    case 0xc:
      uVar43 = (ushort)*local_c8;
      sVar52 = *(short *)((long)local_c8 + 2);
                    /* catch() { ... } // from try @ 0106e708 with catch @ 0106ed0c */
      goto LAB_0106ed18;
    case 0xd:
      uVar43 = *puVar3;
      sVar52 = *(short *)(param_1 + 0x220);
LAB_0106ed18:
      uVar54 = (ulong)sVar52;
      uVar45 = (ulong)(short)uVar43;
LAB_01070194:
      puVar4[1] = uVar54;
      *puVar4 = uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0xe:
                    /* try { // try from 0106ed28 to 0116ed6b has its CatchHandler @ 0106ed28
                       catch() { ... } // from try @ 0106ed28 with catch @ 0106ed28
                       catch() { ... } // from try @ 0106ede0 with catch @ 0106ed28
                       catch() { ... } // from try @ 0106ee6c with catch @ 0106ed28
                       catch() { ... } // from try @ 0106ef5c with catch @ 0106ed28
                       catch() { ... } // from try @ 0106efe8 with catch @ 0106ed28
                       catch() { ... } // from try @ 0106f0dc with catch @ 0106ed28
                       catch() { ... } // from try @ 0106f184 with catch @ 0106ed28
                       catch() { ... } // from try @ 0106f1ec with catch @ 0106ed28
                       catch() { ... } // from try @ 0106f368 with catch @ 0106ed28 */
      uVar66 = *local_c8;
      *local_100 = uVar66;
      if ((uVar66 & 0xffff) == 0x4000) {
        lVar46 = 0x4000;
        *(undefined8 *)(param_1 + 0x3c8) = 0x4000;
        pcVar40 = FUN_010770fc;
      }
      else {
        if (uVar66 >> 0x10 == 0x4000) {
          lVar46 = (long)*(short *)(param_1 + 0x21c);
        }
        else {
          lVar46 = (long)(short)uVar66 * (long)(short)uVar66 +
                   (long)*(short *)(param_1 + 0x21c) * (long)(short)(uVar66 >> 0x10) >> 0xe;
        }
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x21c) != 0x4000) {
          pcVar40 = FUN_0107710c;
        }
        *(long *)(param_1 + 0x3c8) = lVar46;
      }
      *(code **)(param_1 + 0x3d8) = pcVar40;
      if (*(short *)(param_1 + 0x216) == 0x4000) {
        pcVar40 = FUN_010770fc;
      }
      else {
        pcVar40 = FUN_01077104;
        if (*(short *)(param_1 + 0x218) != 0x4000) {
          pcVar40 = FUN_01077188;
        }
      }
      *(code **)(param_1 + 0x3e0) = pcVar40;
      *(code **)(param_1 + 0x3f8) = FUN_010772b0;
      *(code **)(param_1 + 0x3f0) = FUN_01077204;
      if (lVar46 == 0x4000) {
        if ((uVar66 & 0xffff) == 0x4000) goto LAB_0106ea38;
        if (uVar66 >> 0x10 == 0x4000) goto LAB_0106eaa4;
      }
LAB_0106eac0:
      lVar48 = -lVar46;
      if (-1 < lVar46) {
        lVar48 = lVar46;
      }
joined_r0x01070d58:
      if (lVar48 < 0x400) {
        *(undefined8 *)(param_1 + 0x3c8) = 0x4000;
      }
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0xf:
      uVar45 = puVar4[3];
                    /* try { // try from 0106ed6c to 0116ed77 has its CatchHandler @ 0106f528 */
      if ((((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0x54)) &&
         (uVar54 = puVar4[4], ((uint)uVar54 & 0xffff) < (uint)*(ushort *)(param_1 + 0x54))) {
        uVar20 = puVar4[1];
        if ((((uint)uVar20 & 0xffff) < (uint)*(ushort *)(param_1 + 0x94)) &&
           ((uVar33 = puVar4[2], ((uint)uVar33 & 0xffff) < (uint)*(ushort *)(param_1 + 0x94) &&
            (((uint)*puVar4 & 0xffff) < (uint)*(ushort *)(param_1 + 0xd4))))) {
          uVar37 = *puVar4 & 0xffff;
                    /* try { // try from 0106edd8 to 0116eddf has its CatchHandler @ 0106f3d0 */
          plVar41 = (long *)(*(long *)(param_1 + 0x60) + (uVar54 & 0xffff) * 0x10);
          plVar6 = (long *)(*(long *)(param_1 + 0x60) + (uVar45 & 0xffff) * 0x10);
                    /* try { // try from 0106ede0 to 0116ee63 has its CatchHandler @ 0106ed28 */
          plVar5 = (long *)(*(long *)(param_1 + 0xa0) + (uVar33 & 0xffff) * 0x10);
          plVar2 = (long *)(*(long *)(param_1 + 0xa0) + (uVar20 & 0xffff) * 0x10);
          lVar48 = *plVar6;
          lVar38 = plVar6[1];
          lVar34 = *plVar2;
          lVar8 = plVar2[1];
          lVar39 = plVar41[1] - lVar38;
          lVar23 = -lVar39;
          lVar56 = *plVar5 - lVar34;
          lVar53 = plVar5[1] - lVar8;
          lVar55 = *plVar41 - lVar48;
          *(byte *)(*(long *)(param_1 + 0xf0) + uVar37) =
               *(byte *)(*(long *)(param_1 + 0xf0) + uVar37) | 0x18;
          lVar35 = FT_MulDiv(lVar56,lVar23,0x40);
          lVar46 = FT_MulDiv(lVar53,lVar55,0x40);
          lVar46 = lVar46 + lVar35;
                    /* try { // try from 0106ee64 to 0116ee6b has its CatchHandler @ 0106f3c0 */
          lVar35 = -lVar46;
          if (-1 < lVar46) {
            lVar35 = lVar46;
          }
                    /* try { // try from 0106ee6c to 0116eec7 has its CatchHandler @ 0106ed28 */
          lVar21 = FT_MulDiv(lVar56,lVar55,0x40);
          lVar39 = FT_MulDiv(lVar53,lVar39,0x40);
          lVar39 = lVar39 + lVar21;
          lVar21 = -lVar39;
          if (-1 < lVar39) {
            lVar21 = lVar39;
          }
          if (lVar35 * 0x13 - lVar21 == 0 || lVar35 * 0x13 < lVar21) {
                    /* try { // try from 01071ef0 to 01171efb has its CatchHandler @ 010722b0 */
            plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (uVar20 & 0xffff) * 0x10);
            plVar6 = (long *)(*(long *)(param_1 + 0xa0) + (uVar33 & 0xffff) * 0x10);
            plVar5 = (long *)(*(long *)(param_1 + 0x60) + (uVar45 & 0xffff) * 0x10);
            plVar2 = (long *)(*(long *)(param_1 + 0x60) + (uVar54 & 0xffff) * 0x10);
            lVar48 = *(long *)(param_1 + 0xe0);
            lVar46 = *plVar6 + *plVar41 + *plVar5 + *plVar2;
                    /* try { // try from 01071f3c to 01171f47 has its CatchHandler @ 010722d4 */
            lVar35 = lVar46 + 3;
            if (-1 < lVar46) {
              lVar35 = lVar46;
            }
            *(long *)(lVar48 + uVar37 * 0x10) = lVar35 >> 2;
                    /* try { // try from 01071f50 to 01171f77 has its CatchHandler @ 01072368 */
            lVar35 = plVar6[1] + plVar41[1] + plVar5[1] + plVar2[1];
            lVar46 = lVar35 + 3;
            if (-1 < lVar35) {
              lVar46 = lVar35;
            }
            lVar46 = lVar46 >> 2;
          }
          else {
                    /* try { // try from 0106eec8 to 0116eecf has its CatchHandler @ 0106f370 */
            lVar35 = FT_MulDiv(lVar48 - lVar34,lVar23,0x40);
                    /* try { // try from 0106eed0 to 0116eed3 has its CatchHandler @ 0106f4ac */
            lVar48 = FT_MulDiv(lVar38 - lVar8,lVar55,0x40);
            lVar34 = FT_MulDiv(lVar48 + lVar35,lVar56,lVar46);
            lVar46 = FT_MulDiv(lVar48 + lVar35,lVar53,lVar46);
            plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (uVar20 & 0xffff) * 0x10);
            lVar48 = *(long *)(param_1 + 0xe0);
            *(long *)(lVar48 + uVar37 * 0x10) = *plVar41 + lVar34;
            lVar46 = plVar41[1] + lVar46;
          }
          *(long *)(lVar48 + uVar37 * 0x10 + 8) = lVar46;
          goto LAB_01071548;
        }
      }
      cVar18 = *(char *)(param_1 + 0x3c1);
                    /* try { // try from 01070340 to 0117045f has its CatchHandler @ 01070340
                       catch() { ... } // from try @ 01070340 with catch @ 01070340
                       catch() { ... } // from try @ 01070468 with catch @ 01070340
                       catch() { ... } // from try @ 01070560 with catch @ 01070340
                       catch() { ... } // from try @ 01070638 with catch @ 01070340
                       catch() { ... } // from try @ 01070708 with catch @ 01070340
                       catch() { ... } // from try @ 01070830 with catch @ 01070340 */
      goto joined_r0x0106ea90;
    case 0x10:
      *(short *)(param_1 + 0x210) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x11:
      *(short *)(param_1 + 0x212) = (short)*puVar4;
                    /* try { // try from 0106ef54 to 0116ef5b has its CatchHandler @ 0106f3b4 */
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x12:
      *(short *)(param_1 + 0x214) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x13:
      puVar31 = local_f8;
      if (((uint)*puVar4 != 1) && (puVar31 = local_f0, (uint)*puVar4 != 0)) goto LAB_010701ec;
      uVar44 = puVar31[6];
      local_e0[7] = puVar31[7];
      local_e0[6] = uVar44;
      uVar44 = puVar31[4];
      local_e0[5] = puVar31[5];
      local_e0[4] = uVar44;
      uVar44 = puVar31[2];
      local_e0[3] = puVar31[3];
      local_e0[2] = uVar44;
      uVar44 = *puVar31;
      local_e0[1] = puVar31[1];
      *local_e0 = uVar44;
                    /* try { // try from 01070d8c to 01170d93 has its CatchHandler @ 010710b8 */
      *(short *)(param_1 + 0x264) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x14:
      puVar31 = local_f8;
      if (((uint)*puVar4 != 1) && (puVar31 = local_f0, (uint)*puVar4 != 0)) goto LAB_010701ec;
      uVar44 = puVar31[6];
      local_d0[7] = puVar31[7];
      local_d0[6] = uVar44;
      uVar44 = puVar31[4];
      local_d0[5] = puVar31[5];
      local_d0[4] = uVar44;
                    /* try { // try from 01070db4 to 01170dbf has its CatchHandler @ 010710a8 */
      uVar44 = puVar31[2];
      local_d0[3] = puVar31[3];
      local_d0[2] = uVar44;
      uVar44 = *puVar31;
      local_d0[1] = puVar31[1];
      *local_d0 = uVar44;
      *(short *)(param_1 + 0x266) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x15:
      puVar31 = local_f8;
      if (((uint)*puVar4 != 1) && (puVar31 = local_f0, (uint)*puVar4 != 0)) goto LAB_010701ec;
      uVar44 = puVar31[6];
      local_d8[7] = puVar31[7];
      local_d8[6] = uVar44;
      uVar44 = puVar31[4];
      local_d8[5] = puVar31[5];
      local_d8[4] = uVar44;
      uVar44 = puVar31[2];
      local_d8[3] = puVar31[3];
      local_d8[2] = uVar44;
      uVar44 = *puVar31;
      local_d8[1] = puVar31[1];
      *local_d8 = uVar44;
      *(short *)(param_1 + 0x268) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x16:
      puVar31 = local_f8;
      if (((uint)*puVar4 != 1) && (puVar31 = local_f0, (uint)*puVar4 != 0)) goto LAB_010701ec;
      uVar44 = puVar31[6];
                    /* try { // try from 01070e20 to 01170e27 has its CatchHandler @ 0107108c */
      local_e0[7] = puVar31[7];
      local_e0[6] = uVar44;
      uVar44 = puVar31[4];
                    /* try { // try from 01070e28 to 01170e63 has its CatchHandler @ 01070d44 */
      local_e0[5] = puVar31[5];
      local_e0[4] = uVar44;
      uVar44 = puVar31[2];
      local_e0[3] = puVar31[3];
      local_e0[2] = uVar44;
      uVar44 = *puVar31;
      local_e0[1] = puVar31[1];
      *local_e0 = uVar44;
      uVar44 = local_e0[6];
      local_d0[7] = local_e0[7];
      local_d0[6] = uVar44;
      uVar44 = local_e0[4];
      local_d0[5] = local_e0[5];
      local_d0[4] = uVar44;
      uVar44 = local_e0[2];
      local_d0[3] = local_e0[3];
      local_d0[2] = uVar44;
      uVar44 = *local_e0;
      local_d0[1] = local_e0[1];
      *local_d0 = uVar44;
      uVar44 = local_e0[6];
                    /* try { // try from 01070e64 to 01170e6f has its CatchHandler @ 01071090 */
      local_d8[7] = local_e0[7];
      local_d8[6] = uVar44;
      uVar44 = local_e0[4];
      local_d8[5] = local_e0[5];
      local_d8[4] = uVar44;
      uVar44 = local_e0[2];
      local_d8[3] = local_e0[3];
      local_d8[2] = uVar44;
      uVar44 = *local_e0;
      local_d8[1] = local_e0[1];
      *local_d8 = uVar44;
      uVar19 = (undefined2)*puVar4;
      *(undefined2 *)(param_1 + 0x264) = uVar19;
      *(undefined2 *)(param_1 + 0x266) = uVar19;
      *(undefined2 *)(param_1 + 0x268) = uVar19;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x17:
      if (-1 < (long)*puVar4) {
        *(ulong *)(param_1 + 0x228) = *puVar4;
                    /* try { // try from 0106efe0 to 0116efe7 has its CatchHandler @ 0106f3a0 */
        iVar63 = *(int *)(param_1 + 0x18);
        break;
      }
      goto LAB_01072338;
    case 0x18:
      uVar26 = 1;
      pcVar40 = FUN_010727a4;
      goto LAB_0106fff4;
    case 0x19:
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(code **)(param_1 + 0x3d0) = FUN_010727d8;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x1a:
      *(ulong *)(param_1 + 0x230) = *puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x1b:
      lVar46 = *(long *)(param_1 + 0x280);
      lVar48 = *(long *)(param_1 + 0x288);
      iVar63 = 1;
LAB_0106f038:
      do {
        lVar46 = lVar46 + iVar36;
        *(long *)(param_1 + 0x280) = lVar46;
                    /* try { // try from 0106f044 to 0116f04b has its CatchHandler @ 0106f36c */
        if (lVar48 <= lVar46) goto LAB_010722cc;
        bVar57 = *(byte *)(lVar35 + lVar46);
        iVar36 = (int)(char)(&DAT_0145cfd8)[bVar57];
                    /* try { // try from 0106f050 to 0116f057 has its CatchHandler @ 0106f418 */
        *(byte *)(param_1 + 0x290) = bVar57;
        *(int *)(param_1 + 0x294) = iVar36;
        if (((ulong)bVar57 | 1) == 0x41) {
          if (lVar48 <= lVar46 + 1) goto LAB_010722cc;
          iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
          *(int *)(param_1 + 0x294) = iVar36;
        }
        if (lVar48 < lVar46 + iVar36) goto LAB_010722cc;
        if (bVar57 == 0x59) {
          iVar49 = -1;
        }
        else {
          if (bVar57 != 0x58) goto LAB_0106f038;
          iVar49 = 1;
        }
        iVar63 = iVar49 + iVar63;
      } while (iVar63 != 0);
      goto switchD_0106e1f0_caseD_21;
    case 0x1c:
switchD_0106e1f0_caseD_1c:
      uVar45 = *puVar4;
      if (uVar45 == 0 && lVar46 == 0) {
                    /* try { // try from 0106ff74 to 0116ff7b has its CatchHandler @ 010701bc */
        *(undefined4 *)(param_1 + 0x18) = 0x84;
      }
                    /* try { // try from 0106ff7c to 0116ff7f has its CatchHandler @ 01070270 */
      lVar46 = *(long *)(param_1 + 0x280) + uVar45;
      *(long *)(param_1 + 0x280) = lVar46;
      if ((lVar46 < 0) ||
         ((0 < *(int *)(param_1 + 0x2e8) &&
          (*(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + (long)*(int *)(param_1 + 0x2e8) * 0x20 +
                              -8) + 0x10) < lVar46)))) {
LAB_0106ffb0:
        uVar26 = 0x84;
        goto LAB_0106ffb4;
      }
      goto LAB_0106ffb8;
    case 0x1d:
      *(ulong *)(param_1 + 0x240) = *puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x1e:
      *(ulong *)(param_1 + 0x248) = *puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
                    /* try { // try from 0106f0d4 to 0116f0db has its CatchHandler @ 0106f390 */
      break;
    case 0x1f:
                    /* try { // try from 0106f0dc to 0116f17b has its CatchHandler @ 0106ed28 */
      uVar44 = FT_MulFix(*puVar4,*(undefined8 *)(param_1 + 0x1e0));
      *(undefined8 *)(param_1 + 0x250) = uVar44;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x20:
      puVar4[1] = *puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      goto switchD_0106e1f0_caseD_21;
    case 0x22:
      *(undefined4 *)(param_1 + 0x40) = 0;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x23:
      uVar45 = *puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x24:
      uVar45 = *(ulong *)(param_1 + 0x20);
      goto LAB_01070a4c;
    case 0x25:
      uVar45 = *puVar4;
                    /* try { // try from 0106f17c to 0116f183 has its CatchHandler @ 0106f374 */
                    /* try { // try from 0106f184 to 0116f1c7 has its CatchHandler @ 0106ed28 */
      if (((long)uVar45 < 1) || (lVar46 < (long)uVar45)) {
        if (*(char *)(param_1 + 0x3c1) == '\0') {
LAB_01070990:
          uVar45 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
          uVar45 = 0;
        }
      }
      else {
        uVar45 = *(ulong *)(lVar48 + (lVar46 - uVar45) * 8);
      }
      goto LAB_01070a4c;
    case 0x26:
      uVar45 = *puVar4;
      if (((long)uVar45 < 1) || (lVar46 < (long)uVar45)) goto LAB_010701ec;
      puVar31 = (undefined8 *)(lVar48 + (lVar46 - uVar45) * 8);
      uVar44 = *puVar31;
                    /* try { // try from 0106f1c8 to 0116f1cb has its CatchHandler @ 0106f368 */
                    /* try { // try from 0106f1d0 to 0116f1eb has its CatchHandler @ 0106f3e0 */
      memmove(puVar31,puVar31 + 1,uVar45 * 8 - 8);
                    /* try { // try from 0106f1ec to 0116f33f has its CatchHandler @ 0106ed28 */
      *(undefined8 *)(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38) * 8 + -8) = uVar44;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x27:
      uVar45 = *puVar4;
      uVar66 = (uint)uVar45 & 0xffff;
      if (uVar66 < *(ushort *)(param_1 + 0x94)) {
        uVar54 = puVar4[1];
        uVar50 = (uint)uVar54 & 0xffff;
        if (uVar50 < *(ushort *)(param_1 + 0x54)) {
          plVar41 = (long *)(*(long *)(param_1 + 0x60) + (ulong)uVar50 * 0x10);
          plVar6 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)uVar66 * 0x10);
          lVar46 = (**(code **)(param_1 + 0x3d8))(param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1])
          ;
          if (lVar46 < 0) {
            lVar46 = lVar46 + 1;
          }
          (**(code **)(param_1 + 0x3f0))(param_1,local_d0,(uint)uVar45,lVar46 >> 1);
          (**(code **)(param_1 + 0x3f0))(param_1,local_e0,uVar54 & 0xffffffff,-(lVar46 >> 1));
          goto switchD_0106e1f0_caseD_21;
        }
      }
      goto LAB_010701ec;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
switchD_0106e1f0_caseD_28:
                    /* try { // try from 01071700 to 01171707 has its CatchHandler @ 010718e0 */
                    /* try { // try from 01071708 to 0117174b has its CatchHandler @ 01071434 */
      FUN_01072814(param_1);
      goto switchD_0106e1f0_caseD_21;
    case 0x29:
      if ((uint)*(ushort *)(param_1 + 0x54) <= ((uint)*puVar4 & 0xffff)) goto LAB_010701ec;
      uVar45 = *puVar4 & 0xffff;
      bVar57 = 0xf7;
      if (*(short *)(param_1 + 0x21e) == 0) {
        bVar57 = 0xff;
      }
      if (*(short *)(param_1 + 0x220) != 0) {
        bVar57 = bVar57 & 0xef;
      }
                    /* try { // try from 0106f340 to 0116f343 has its CatchHandler @ 0106f3d0 */
                    /* try { // try from 0106f344 to 0116f34b has its CatchHandler @ 0106f3c0 */
      *(byte *)(*(long *)(param_1 + 0x70) + uVar45) =
           bVar57 & *(byte *)(*(long *)(param_1 + 0x70) + uVar45);
      iVar63 = *(int *)(param_1 + 0x18);
                    /* try { // try from 0106f34c to 0116f34f has its CatchHandler @ 0106f3b4 */
      break;
    case 0x2a:
                    /* try { // try from 0106f358 to 0116f363 has its CatchHandler @ 0106f390 */
      uVar45 = puVar4[1];
      uVar66 = *(int *)(param_1 + 0x2e0) + 1;
                    /* try { // try from 0106f364 to 0116f367 has its CatchHandler @ 0106f374 */
      if (uVar45 < uVar66) {
                    /* catch() { ... } // from try @ 0106f1c8 with catch @ 0106f368
                       try { // try from 0106f368 to 0116f537 has its CatchHandler @ 0106ed28 */
        uVar50 = *(uint *)(param_1 + 0x2c0);
                    /* catch() { ... } // from try @ 0106f044 with catch @ 0106f36c */
        piVar32 = *(int **)(param_1 + 0x2c8);
                    /* catch() { ... } // from try @ 0106eec8 with catch @ 0106f370 */
                    /* catch() { ... } // from try @ 0106f17c with catch @ 0106f374
                       catch() { ... } // from try @ 0106f364 with catch @ 0106f374 */
        if ((uVar66 != uVar50) || (piVar30 = piVar32 + uVar45 * 10, uVar45 != (uint)piVar30[6])) {
                    /* catch() { ... } // from try @ 0106f0d4 with catch @ 0106f390
                       catch() { ... } // from try @ 0106f358 with catch @ 0106f390 */
          piVar29 = piVar32 + (ulong)uVar50 * 10;
          piVar30 = piVar32;
          if (uVar50 != 0) {
            do {
              piVar30 = piVar32;
                    /* catch() { ... } // from try @ 0106efe0 with catch @ 0106f3a0
                       catch() { ... } // from try @ 0106f350 with catch @ 0106f3a0 */
              if (uVar45 == (uint)piVar32[6]) break;
              piVar32 = piVar32 + 10;
              piVar30 = piVar32;
            } while (piVar32 < piVar29);
          }
                    /* catch() { ... } // from try @ 0106ef54 with catch @ 0106f3b4
                       catch() { ... } // from try @ 0106f34c with catch @ 0106f3b4 */
          if (piVar30 == piVar29) goto LAB_01072300;
        }
                    /* catch() { ... } // from try @ 0106ee64 with catch @ 0106f3c0
                       catch() { ... } // from try @ 0106f344 with catch @ 0106f3c0 */
        if ((char)piVar30[7] == '\0') goto LAB_01072300;
        iVar36 = *(int *)(param_1 + 0x2e8);
                    /* catch() { ... } // from try @ 0106edd8 with catch @ 0106f3d0
                       catch() { ... } // from try @ 0106f340 with catch @ 0106f3d0 */
        if (*(int *)(param_1 + 0x2ec) <= iVar36) goto LAB_010722b8;
        if ((long)*puVar4 < 1) goto switchD_0106e1f0_caseD_21;
                    /* catch() { ... } // from try @ 0106f1d0 with catch @ 0106f3e0 */
        puVar47 = (undefined4 *)(*(long *)(param_1 + 0x2f0) + (long)iVar36 * 0x20);
        *puVar47 = *(undefined4 *)(param_1 + 0x270);
        *(long *)(puVar47 + 2) = *(long *)(param_1 + 0x280) + 1;
        *(long *)(puVar47 + 4) = (long)(int)(uint)*puVar4;
        *(int **)(puVar47 + 6) = piVar30;
        *(int *)(param_1 + 0x2e8) = iVar36 + 1;
        iVar36 = *piVar30;
        uVar66 = iVar36 - 1;
                    /* catch() { ... } // from try @ 0106f050 with catch @ 0106f418 */
        if (uVar66 < 3) {
          lVar46 = *(long *)(param_1 + (long)(int)uVar66 * 0x10 + 0x300);
          if (lVar46 == 0) goto LAB_01070f98;
          lVar35 = param_1 + (long)(int)uVar66 * 0x10;
          uVar45 = *(ulong *)(piVar30 + 2);
          if (*(ulong *)(lVar35 + 0x308) < uVar45) goto LAB_0106f538;
          *(long *)(param_1 + 0x278) = lVar46;
          uVar44 = *(undefined8 *)(lVar35 + 0x308);
          *(ulong *)(param_1 + 0x280) = uVar45;
          *(int *)(param_1 + 0x270) = iVar36;
LAB_01071608:
          *(undefined1 *)(param_1 + 0x298) = 0;
          goto LAB_0107160c;
        }
        goto LAB_0106ffb0;
      }
      goto LAB_01072300;
    case 0x2b:
      uVar45 = *puVar4;
      uVar66 = *(int *)(param_1 + 0x2e0) + 1;
      if (uVar66 <= uVar45) goto LAB_01072300;
      uVar50 = *(uint *)(param_1 + 0x2c0);
      piVar32 = *(int **)(param_1 + 0x2c8);
      if ((uVar66 != uVar50) ||
         (piVar30 = piVar32 + uVar45 * 10, uVar45 != (uint)(piVar32 + uVar45 * 10)[6])) {
        piVar29 = piVar32 + (ulong)uVar50 * 10;
        if (uVar50 != 0) {
          do {
            if (uVar45 == (uint)piVar32[6]) break;
            piVar32 = piVar32 + 10;
                    /* catch() { ... } // from try @ 0106eed0 with catch @ 0106f4ac */
          } while (piVar32 < piVar29);
        }
        piVar30 = piVar32;
        if (piVar32 == piVar29) goto LAB_01072300;
      }
      if ((char)piVar30[7] == '\0') goto LAB_01072300;
      iVar36 = *(int *)(param_1 + 0x2e8);
      if (*(int *)(param_1 + 0x2ec) <= iVar36) goto LAB_010722b8;
      puVar47 = (undefined4 *)(*(long *)(param_1 + 0x2f0) + (long)iVar36 * 0x20);
      *puVar47 = *(undefined4 *)(param_1 + 0x270);
      lVar46 = *(long *)(param_1 + 0x280);
      *(undefined8 *)(puVar47 + 4) = 1;
      *(int **)(puVar47 + 6) = piVar30;
      *(long *)(puVar47 + 2) = lVar46 + 1;
      *(int *)(param_1 + 0x2e8) = iVar36 + 1;
      iVar36 = *piVar30;
      uVar66 = iVar36 - 1;
      if (2 < uVar66) goto LAB_0106ffb0;
      lVar46 = *(long *)(param_1 + (long)(int)uVar66 * 0x10 + 0x300);
      if (lVar46 == 0) {
LAB_01070f98:
        uVar26 = 0x8a;
      }
      else {
        lVar35 = param_1 + (long)(int)uVar66 * 0x10;
                    /* catch() { ... } // from try @ 0106ed6c with catch @ 0106f528 */
        uVar45 = *(ulong *)(piVar30 + 2);
        if (uVar45 <= *(ulong *)(lVar35 + 0x308)) {
          *(long *)(param_1 + 0x278) = lVar46;
                    /* try { // try from 010715fc to 01171607 has its CatchHandler @ 0107190c */
          uVar44 = *(undefined8 *)(lVar35 + 0x308);
          *(ulong *)(param_1 + 0x280) = uVar45;
          *(int *)(param_1 + 0x270) = iVar36;
          goto LAB_01071608;
        }
LAB_0106f538:
                    /* try { // try from 0106f538 to 0116f5cf has its CatchHandler @ 0106f538
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f538 with catch @ 0106f538
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f5d8 with catch @ 0106f538
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f75c with catch @ 0106f538
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f88c with catch @ 0106f538
                        */
        uVar26 = 0x83;
      }
LAB_0106ffb4:
      *(undefined4 *)(param_1 + 0x18) = uVar26;
LAB_0106ffb8:
      *(undefined1 *)(param_1 + 0x298) = 0;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x2c:
      puVar47 = *(undefined4 **)(param_1 + 0x2c8);
      uVar66 = *(uint *)(param_1 + 0x2c0);
      uVar45 = *puVar4;
      puVar51 = puVar47 + (ulong)uVar66 * 10;
      if (uVar66 != 0) {
        do {
          if (uVar45 == (uint)puVar47[6]) break;
          puVar47 = puVar47 + 10;
        } while (puVar47 < puVar51);
      }
      if (puVar47 == puVar51) {
        if (uVar66 < *(uint *)(param_1 + 0x2c4)) {
          *(uint *)(param_1 + 0x2c0) = uVar66 + 1;
          goto LAB_0106f58c;
        }
      }
      else {
LAB_0106f58c:
        if (uVar45 >> 0x10 == 0) {
          uVar26 = *(undefined4 *)(param_1 + 0x270);
          uVar66 = (uint)uVar45 & 0xffff;
          puVar47[6] = uVar66;
          *puVar47 = uVar26;
          lVar46 = *(long *)(param_1 + 0x280);
          *(undefined2 *)(puVar47 + 7) = 1;
          *(undefined8 *)(puVar47 + 8) = 0;
          *(long *)(puVar47 + 2) = lVar46 + 1;
          if (*(uint *)(param_1 + 0x2e0) < uVar45) {
            *(uint *)(param_1 + 0x2e0) = uVar66;
          }
          lVar48 = *(long *)(param_1 + 0x288);
          do {
                    /* try { // try from 0106f5d0 to 0116f5d7 has its CatchHandler @ 0106f898 */
            lVar46 = lVar46 + iVar36;
                    /* try { // try from 0106f5d8 to 0116f64b has its CatchHandler @ 0106f538 */
            *(long *)(param_1 + 0x280) = lVar46;
            if (lVar48 <= lVar46) goto LAB_010722cc;
            bVar57 = *(byte *)(lVar35 + lVar46);
            iVar36 = (int)(char)(&DAT_0145cfd8)[bVar57];
            *(byte *)(param_1 + 0x290) = bVar57;
            *(int *)(param_1 + 0x294) = iVar36;
            if (((ulong)bVar57 | 1) == 0x41) {
              if (lVar48 <= lVar46 + 1) goto LAB_010722cc;
              iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
              *(int *)(param_1 + 0x294) = iVar36;
            }
            if (lVar48 < lVar46 + iVar36) goto LAB_010722cc;
            iVar63 = 0x89;
            if ((bVar57 == 0x2c) || (bVar57 == 0x89)) goto switchD_0106e1f0_caseD_4f;
          } while (bVar57 != 0x2d);
          *(long *)(puVar47 + 4) = lVar46;
          iVar63 = *(int *)(param_1 + 0x18);
          break;
        }
      }
      iVar63 = 0x8c;
      goto switchD_0106e1f0_caseD_4f;
    case 0x2d:
      iVar36 = *(int *)(param_1 + 0x2e8);
                    /* try { // try from 0106f654 to 0116f657 has its CatchHandler @ 0106f948 */
      if (iVar36 < 1) {
        iVar63 = 0x88;
                    /* catch() { ... } // from try @ 01071cd8 with catch @ 01072354 */
        goto switchD_0106e1f0_caseD_4f;
      }
      *(int *)(param_1 + 0x2e8) = (int)((long)iVar36 + -1);
      piVar32 = (int *)(*(long *)(param_1 + 0x2f0) + ((long)iVar36 + -1) * 0x20);
      lVar46 = *(long *)(piVar32 + 4);
      *(long *)(piVar32 + 4) = lVar46 + -1;
      *(undefined1 *)(param_1 + 0x298) = 0;
      if (1 < lVar46) {
        *(int *)(param_1 + 0x2e8) = iVar36;
        *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(*(long *)(piVar32 + 6) + 8);
        iVar63 = *(int *)(param_1 + 0x18);
        break;
      }
      iVar36 = *piVar32;
      uVar66 = iVar36 - 1;
      if (2 < uVar66) goto LAB_01072338;
      lVar46 = *(long *)(param_1 + (long)(int)uVar66 * 0x10 + 0x300);
      if (lVar46 != 0) {
        lVar35 = param_1 + (long)(int)uVar66 * 0x10;
        uVar45 = *(ulong *)(piVar32 + 2);
                    /* try { // try from 01070ae0 to 01170b1b has its CatchHandler @ 01070ae0
                       catch() { ... } // from try @ 01070ae0 with catch @ 01070ae0
                       catch() { ... } // from try @ 01070b44 with catch @ 01070ae0 */
        if (*(ulong *)(lVar35 + 0x308) < uVar45) goto LAB_010722cc;
        *(long *)(param_1 + 0x278) = lVar46;
        uVar44 = *(undefined8 *)(lVar35 + 0x308);
        *(ulong *)(param_1 + 0x280) = uVar45;
        *(int *)(param_1 + 0x270) = iVar36;
LAB_0107160c:
        *(undefined8 *)(param_1 + 0x288) = uVar44;
                    /* try { // try from 01071610 to 011716c7 has its CatchHandler @ 01071930 */
        iVar63 = *(int *)(param_1 + 0x18);
        break;
      }
      goto LAB_01072340;
    case 0x2e:
    case 0x2f:
      uVar45 = *puVar4;
      if ((uint)*(ushort *)(param_1 + 0x54) <= ((uint)uVar45 & 0xffff)) goto LAB_010701ec;
      if ((bVar57 & 1) == 0) {
        lVar35 = 0;
      }
      else {
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x60) + (uVar45 & 0xffff) * 0x10);
        lVar46 = (**(code **)(param_1 + 0x3d8))(param_1,*puVar31,puVar31[1]);
        lVar35 = (**(code **)(param_1 + 0x3d0))(param_1,lVar46,*(undefined8 *)(param_1 + 0x1e8));
        lVar35 = lVar35 - lVar46;
      }
                    /* try { // try from 01070808 to 0117080f has its CatchHandler @ 01070834 */
                    /* try { // try from 01070810 to 0117081f has its CatchHandler @ 01070830 */
      (**(code **)(param_1 + 0x3f0))(param_1,local_e0,uVar45 & 0xffffffff,lVar35);
                    /* try { // try from 01070820 to 0117082f has its CatchHandler @ 0107086c */
      *(short *)(param_1 + 0x210) = (short)uVar45;
                    /* catch() { ... } // from try @ 01070810 with catch @ 01070830
                       try { // try from 01070830 to 011708eb has its CatchHandler @ 01070340 */
      *(short *)(param_1 + 0x212) = (short)uVar45;
                    /* catch() { ... } // from try @ 01070808 with catch @ 01070834 */
                    /* catch() { ... } // from try @ 01070558 with catch @ 01070838 */
                    /* catch() { ... } // from try @ 0107068c with catch @ 0107084c */
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x30:
    case 0x31:
      if (*(short *)(param_1 + 0x116) != 0) {
        if ((bVar57 & 1) == 0) {
          bVar57 = 0x10;
          local_b0 = *(long *)(param_1 + 0x118) + 8;
          lVar46 = *(long *)(param_1 + 0x120) + 8;
                    /* try { // try from 0106e578 to 0116e57f has its CatchHandler @ 0106e58c */
          local_a0 = *(long *)(param_1 + 0x128) + 8;
        }
        else {
          local_b0 = *(long *)(param_1 + 0x118);
          bVar57 = 8;
          lVar46 = *(long *)(param_1 + 0x120);
          local_a0 = *(long *)(param_1 + 0x128);
        }
                    /* try { // try from 01070514 to 0117051f has its CatchHandler @ 01070870 */
        lVar35 = local_b0;
        uVar43 = *(ushort *)(param_1 + 0x114);
        uVar66 = 0;
        sVar52 = 0;
        local_98 = (uint)uVar43;
        local_a8 = lVar46;
LAB_01070544:
                    /* try { // try from 01070558 to 0117055f has its CatchHandler @ 01070838 */
        uVar50 = (uint)*(ushort *)(*(long *)(param_1 + 0x138) + (long)sVar52 * 2) -
                 (uint)*(ushort *)(param_1 + 0x140);
                    /* try { // try from 01070560 to 0117062f has its CatchHandler @ 01070340 */
        if (uVar43 <= uVar50) {
          uVar50 = uVar43 - 1;
        }
        uVar61 = uVar66;
        if (uVar66 <= uVar50) {
          iVar36 = 0;
          uVar62 = uVar66;
          do {
            uVar65 = uVar66 + iVar36;
            uVar54 = (ulong)uVar65;
            uVar45 = uVar54;
            uVar61 = uVar65;
            if ((*(byte *)(*(long *)(param_1 + 0x130) + uVar54) & bVar57) != 0) goto LAB_01070618;
            iVar36 = iVar36 + 1;
            uVar62 = uVar62 + 1;
            uVar61 = uVar66 + iVar36;
          } while (uVar66 + iVar36 <= uVar50);
        }
        goto LAB_010706c0;
      }
      goto LAB_01071270;
    case 0x32:
    case 0x33:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e42c with catch @ 0106e580
                       try { // try from 0106e580 to 0116e6bf has its CatchHandler @ 0106e22c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e3b8 with catch @ 0106e584
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e340 with catch @ 0106e588
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e2c4 with catch @ 0106e58c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e578 with catch @ 0106e58c
                        */
      if (*(long *)(param_1 + 0x20) < *(long *)(param_1 + 0x228)) {
        if (*(char *)(param_1 + 0x3c1) != '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e434 with catch @ 0106e59c
                        */
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fff8 with catch @ 01070204
                        */
        cVar18 = FUN_01077554(param_1,&lStack_b8,&local_c0,&local_b0,local_64);
        if (cVar18 != '\0') goto switchD_0106e1f0_caseD_21;
        if (0 < *(long *)(param_1 + 0x228)) {
          do {
            lVar46 = *(long *)(param_1 + 0x38) + -1;
            *(long *)(param_1 + 0x38) = lVar46;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ff7c with catch @ 01070270
                        */
            uVar45 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar46 * 8);
            if (((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0xd4)) {
              if (*puVar3 != 0) {
                uVar54 = uVar45 & 0xffff;
                *(long *)(*(long *)(param_1 + 0xe0) + uVar54 * 0x10) =
                     *(long *)(*(long *)(param_1 + 0xe0) + uVar54 * 0x10) + lStack_b8;
                *(byte *)(*(long *)(param_1 + 0xf0) + uVar54) =
                     *(byte *)(*(long *)(param_1 + 0xf0) + uVar54) | 8;
              }
              if (*(short *)(param_1 + 0x220) != 0) {
                lVar46 = *(long *)(param_1 + 0xe0) + (uVar45 & 0xffff) * 0x10;
                *(long *)(lVar46 + 8) = *(long *)(lVar46 + 8) + local_c0;
                *(byte *)(*(long *)(param_1 + 0xf0) + (uVar45 & 0xffff)) =
                     *(byte *)(*(long *)(param_1 + 0xf0) + (uVar45 & 0xffff)) | 0x10;
              }
            }
            else if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_0107046c;
            lVar35 = *(long *)(param_1 + 0x228);
            lVar46 = lVar35 + -1;
            *(long *)(param_1 + 0x228) = lVar46;
          } while (lVar46 != 0 && 0 < lVar35);
        }
      }
      *(undefined8 *)(param_1 + 0x228) = 1;
      *(int *)(param_1 + 0x40) = (int)*(undefined8 *)(param_1 + 0x38);
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x34:
    case 0x35:
      uVar45 = *puVar4;
      if (*(short *)(param_1 + 0x268) == 0) {
        if ((uVar45 & 0xffff) == 0) goto LAB_010703b0;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e3c4 with catch @ 0106e5d0
                        */
        if (((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0xd6)) {
LAB_010703b0:
          cVar18 = FUN_01077554(param_1,&lStack_b8,&local_c0,&local_b0,local_64);
          if (cVar18 == '\0') {
            uVar66 = (uint)uVar45 & 0xffff;
            if ((uVar45 & 0xffff) != 0) {
              uVar66 = (*(ushort *)(*(long *)(param_1 + 0xf8) + (long)(short)uVar45 * 2 + -2) + 1) -
                       (uint)*(ushort *)(param_1 + 0x100);
            }
            if (*(short *)(param_1 + 0x268) == 0) {
              uVar50 = (uint)*(ushort *)(param_1 + 0xd4);
            }
            else {
              uVar50 = (*(ushort *)(*(long *)(param_1 + 0xf8) + (long)(short)uVar45 * 2) + 1) -
                       (uint)*(ushort *)(param_1 + 0x100);
                    /* try { // try from 01070460 to 01170467 has its CatchHandler @ 01070874 */
            }
            uVar45 = (ulong)(uVar66 & 0xffff);
            if ((uVar66 & 0xffff) < (uVar50 & 0xffff)) {
              lVar46 = uVar45 << 4;
              do {
                lVar35 = *(long *)(param_1 + 0xe0);
                    /* try { // try from 01071580 to 0117158f has its CatchHandler @ 01071920 */
                if ((local_64[0] != uVar45) || (CONCAT44(uStack_94,local_98) != lVar35)) {
                  if (*puVar3 != 0) {
                    /* try { // try from 01071598 to 011715a3 has its CatchHandler @ 0107191c */
                    *(long *)(lVar35 + lVar46) = *(long *)(lVar35 + lVar46) + lStack_b8;
                    *(byte *)(*(long *)(param_1 + 0xf0) + uVar45) =
                         *(byte *)(*(long *)(param_1 + 0xf0) + uVar45) | 8;
                  }
                  if (*(short *)(param_1 + 0x220) != 0) {
                    lVar35 = *(long *)(param_1 + 0xe0) + lVar46;
                    *(long *)(lVar35 + 8) = *(long *)(lVar35 + 8) + local_c0;
                    *(byte *)(*(long *)(param_1 + 0xf0) + uVar45) =
                         *(byte *)(*(long *)(param_1 + 0xf0) + uVar45) | 0x10;
                  }
                }
                uVar45 = uVar45 + 1;
                lVar46 = lVar46 + 0x10;
              } while ((uVar50 & 0xffff) != uVar45);
            }
          }
          goto switchD_0106e1f0_caseD_21;
        }
      }
LAB_01070464:
                    /* try { // try from 01070468 to 01170513 has its CatchHandler @ 01070340 */
      if (*(char *)(param_1 + 0x3c1) == '\0') goto switchD_0106e1f0_caseD_21;
LAB_0107046c:
      *(undefined4 *)(param_1 + 0x18) = 0x86;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x36:
    case 0x37:
      if (1 < (uint)*puVar4) goto LAB_01070464;
      cVar18 = FUN_01077554(param_1,&lStack_b8,&local_c0,&local_b0,local_64);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106e348 with catch @ 0106e63c
                        */
      if (cVar18 == '\0') {
        if (*(short *)(param_1 + 0x268) == 1) {
          if ((0 < (long)*(short *)(param_1 + 0xd6)) &&
             (uVar66 = *(ushort *)
                        (*(long *)(param_1 + 0xf8) + (long)*(short *)(param_1 + 0xd6) * 2 + -2) + 1,
             uVar45 = (ulong)uVar66, (uVar66 & 0xffff) != 0)) goto LAB_01071640;
        }
        else if ((*(short *)(param_1 + 0x268) == 0) &&
                (uVar45 = (ulong)*(ushort *)(param_1 + 0xd4), *(ushort *)(param_1 + 0xd4) != 0)) {
LAB_01071640:
          lVar46 = *(long *)(param_1 + 0xe0);
          uVar66 = (uint)uVar45;
          if (CONCAT44(uStack_94,local_98) == lVar46) {
            uVar45 = (ulong)local_64[0];
                    /* catch() { ... } // from try @ 01071778 with catch @ 01071908 */
            uVar54 = (ulong)(uVar66 & 0xffff);
                    /* catch() { ... } // from try @ 010715fc with catch @ 0107190c */
            plVar41 = (long *)(CONCAT44(uStack_94,local_98) + 8);
            do {
              if (uVar45 != 0) {
                if (*puVar3 != 0) {
                    /* catch() { ... } // from try @ 01071598 with catch @ 0107191c */
                    /* catch() { ... } // from try @ 01071580 with catch @ 01071920 */
                  plVar41[-1] = plVar41[-1] + lStack_b8;
                }
                if (*(short *)(param_1 + 0x220) != 0) {
                    /* catch() { ... } // from try @ 01071610 with catch @ 01071930
                       catch() { ... } // from try @ 0107174c with catch @ 01071930 */
                  *plVar41 = *plVar41 + local_c0;
                }
              }
              uVar54 = uVar54 - 1;
              plVar41 = plVar41 + 2;
              uVar45 = uVar45 - 1;
            } while (uVar54 != 0);
          }
          else {
            sVar52 = *(short *)(param_1 + 0x220);
            uVar54 = (ulong)(uVar66 & 0xffff);
            if (*(short *)(param_1 + 0x21e) == 0) {
              if (sVar52 != 0) {
                if ((uVar66 & 0xffff) < 2) {
                  lVar35 = 0;
                }
                else {
                  lVar35 = uVar54 - (uVar45 & 1);
                  if (lVar35 != 0) {
                    plVar41 = (long *)(lVar46 + 0x18);
                    lVar48 = lVar35;
                    do {
                      lVar48 = lVar48 + -2;
                      plVar41[-2] = plVar41[-2] + local_c0;
                      *plVar41 = *plVar41 + local_c0;
                      plVar41 = plVar41 + 4;
                    } while (lVar48 != 0);
                    if ((uVar45 & 1) == 0) goto switchD_0106e1f0_caseD_21;
                  }
                }
                lVar48 = uVar54 - lVar35;
                plVar41 = (long *)(lVar46 + lVar35 * 0x10 + 8);
                do {
                    /* try { // try from 01072248 to 01172433 has its CatchHandler @ 01071b74 */
                  lVar48 = lVar48 + -1;
                  *plVar41 = *plVar41 + local_c0;
                  plVar41 = plVar41 + 2;
                } while (lVar48 != 0);
              }
            }
            else {
              plVar41 = (long *)(lVar46 + 8);
              do {
                plVar41[-1] = plVar41[-1] + lStack_b8;
                if (sVar52 != 0) {
                  *plVar41 = *plVar41 + local_c0;
                }
                uVar54 = uVar54 - 1;
                plVar41 = plVar41 + 2;
              } while (uVar54 != 0);
            }
          }
        }
      }
      goto switchD_0106e1f0_caseD_21;
    case 0x38:
      if (*(long *)(param_1 + 0x228) < *(long *)(param_1 + 0x20)) {
        uVar50 = (uint)*puVar4;
        sVar52 = *(short *)(param_1 + 0x21e);
        sVar42 = *(short *)(param_1 + 0x220);
                    /* try { // try from 0106f6c4 to 0116f6cb has its CatchHandler @ 0106f890 */
                    /* try { // try from 0106f6d0 to 0116f6d7 has its CatchHandler @ 0106f8dc */
        uVar66 = -uVar50;
        if (-1 < (int)uVar50) {
          uVar66 = uVar50;
        }
        iVar36 = -(int)sVar52;
        if (-1 < sVar52) {
          iVar36 = (int)sVar52;
        }
        uVar65 = (uVar66 & 0xffff) * iVar36;
        uVar62 = (uVar66 >> 0x10) * iVar36;
        uVar61 = uVar62 * 0x10000 | 0x2000;
        uVar62 = uVar62 >> 0x10;
        if (CARRY4(uVar61,uVar65)) {
          uVar62 = uVar62 + 1;
        }
        iVar63 = (int)(CONCAT44(uVar62,uVar61 + uVar65) >> 0xe);
        iVar36 = -iVar63;
        if (-1 < (int)((int)sVar52 ^ uVar50)) {
          iVar36 = iVar63;
        }
        iVar63 = -(int)sVar42;
        if (-1 < sVar42) {
          iVar63 = (int)sVar42;
        }
        uVar62 = (uVar66 & 0xffff) * iVar63;
        uVar61 = (uVar66 >> 0x10) * iVar63;
        uVar66 = uVar61 * 0x10000 | 0x2000;
        uVar61 = uVar61 >> 0x10;
        if (CARRY4(uVar66,uVar62)) {
          uVar61 = uVar61 + 1;
        }
        iVar49 = (int)(CONCAT44(uVar61,uVar66 + uVar62) >> 0xe);
        iVar63 = -iVar49;
        if (-1 < (int)((int)sVar42 ^ uVar50)) {
          iVar63 = iVar49;
        }
                    /* try { // try from 0106f738 to 0116f73b has its CatchHandler @ 0106f88c */
        if (0 < *(long *)(param_1 + 0x228)) {
                    /* try { // try from 0106f740 to 0116f75b has its CatchHandler @ 0106f8a8 */
          while( true ) {
            *(long *)(param_1 + 0x38) = lVar46 + -1;
            uVar45 = *(ulong *)(lVar48 + (lVar46 + -1) * 8);
                    /* try { // try from 0106f75c to 0116f883 has its CatchHandler @ 0106f538 */
            if (((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0xd4)) {
              if (*puVar3 != 0) {
                uVar54 = uVar45 & 0xffff;
                *(long *)(*(long *)(param_1 + 0xe0) + uVar54 * 0x10) =
                     *(long *)(*(long *)(param_1 + 0xe0) + uVar54 * 0x10) + (long)iVar36;
                *(byte *)(*(long *)(param_1 + 0xf0) + uVar54) =
                     *(byte *)(*(long *)(param_1 + 0xf0) + uVar54) | 8;
              }
              if (*(short *)(param_1 + 0x220) != 0) {
                lVar46 = *(long *)(param_1 + 0xe0) + (uVar45 & 0xffff) * 0x10;
                *(long *)(lVar46 + 8) = *(long *)(lVar46 + 8) + (long)iVar63;
                *(byte *)(*(long *)(param_1 + 0xf0) + (uVar45 & 0xffff)) =
                     *(byte *)(*(long *)(param_1 + 0xf0) + (uVar45 & 0xffff)) | 0x10;
              }
            }
            else if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
            lVar35 = *(long *)(param_1 + 0x228);
            lVar46 = *(long *)(param_1 + 0x38);
            *(long *)(param_1 + 0x228) = lVar35 + -1;
            if (lVar35 < 2) break;
            lVar48 = *(long *)(param_1 + 0x30);
          }
        }
      }
      else {
LAB_0106f920:
        if (*(char *)(param_1 + 0x3c1) != '\0') {
          uVar26 = 0x86;
LAB_01070024:
          *(undefined4 *)(param_1 + 0x18) = uVar26;
        }
      }
      goto LAB_01070028;
    case 0x39:
      lVar46 = *(long *)(param_1 + 0x228);
      if (*(long *)(param_1 + 0x20) < lVar46) {
        cVar18 = *(char *)(param_1 + 0x3c1);
joined_r0x01071254:
        if (cVar18 != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      else {
        if ((*(short *)(param_1 + 0x264) == 0) || (*(short *)(param_1 + 0x266) == 0)) {
          bVar16 = true;
        }
        else {
                    /* try { // try from 0107097c to 01170983 has its CatchHandler @ 01070a04 */
          bVar16 = *(short *)(param_1 + 0x268) == 0;
        }
        uVar45 = (ulong)*(ushort *)(param_1 + 0x212);
        if (*(ushort *)(param_1 + 0x54) <= *(ushort *)(param_1 + 0x212)) {
          cVar18 = *(char *)(param_1 + 0x3c1);
          goto joined_r0x01071254;
        }
        uVar43 = *(ushort *)(param_1 + 0x214);
        plVar41 = &local_108;
        if (!bVar16) {
          plVar41 = &local_110;
        }
        lVar34 = *(long *)*plVar41;
        lVar35 = *(long *)(param_1 + 0x60);
        lVar48 = uVar45 * 0x10;
        plVar41 = (long *)(lVar34 + lVar48);
        if (uVar43 < *(ushort *)(param_1 + 0x94)) {
          if (bVar16) {
                    /* try { // try from 01070f80 to 01170f87 has its CatchHandler @ 01071094 */
            lVar46 = *(long *)(param_1 + 0x98);
LAB_01071850:
            plVar6 = (long *)(lVar46 + (ulong)uVar43 * 0x10);
            local_128 = (**(code **)(param_1 + 0x3e0))
                                  (param_1,*plVar6 - *plVar41,
                                   plVar6[1] - *(long *)(lVar34 + uVar45 * 0x10 + 8));
          }
          else {
            if (*(long *)(param_1 + 400) == *(long *)(param_1 + 0x198)) {
              lVar46 = *(long *)(param_1 + 0xa8);
              goto LAB_01071850;
            }
            uVar44 = FT_MulFix(*(long *)(*(long *)(param_1 + 0xa8) + (ulong)uVar43 * 0x10) -
                               *plVar41);
            uVar22 = FT_MulFix(*(long *)(*(long *)(param_1 + 0xa8) +
                                         (ulong)*(ushort *)(param_1 + 0x214) * 0x10 + 8) -
                               *(long *)(lVar34 + uVar45 * 0x10 + 8),
                               *(undefined8 *)(param_1 + 0x198));
            local_128 = (**(code **)(param_1 + 0x3e0))(param_1,uVar44,uVar22);
          }
          plVar6 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x214) * 0x10);
          local_150 = (**(code **)(param_1 + 0x3d8))
                                (param_1,*plVar6 - *(long *)(lVar35 + lVar48),
                                 plVar6[1] - *(long *)(lVar35 + uVar45 * 0x10 + 8));
          lVar46 = *(long *)(param_1 + 0x228);
                    /* try { // try from 01071b1c to 01171b2b has its CatchHandler @ 01071b2c */
                    /* catch() { ... } // from try @ 01071a6c with catch @ 01071b2c
                       catch() { ... } // from try @ 01071b1c with catch @ 01071b2c
                       try { // try from 01071b2c to 01171b47 has its CatchHandler @ 010719b0 */
        }
        else {
          local_150 = 0;
          local_128 = 0;
        }
        if (0 < lVar46) {
          plVar6 = (long *)(lVar34 + lVar48 + 8);
          do {
            lVar34 = *(long *)(param_1 + 0x38) + -1;
            *(long *)(param_1 + 0x38) = lVar34;
            uVar45 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar34 * 8);
                    /* try { // try from 01071b74 to 01171cd7 has its CatchHandler @ 01071b74
                       catch() { ... } // from try @ 01071b74 with catch @ 01071b74
                       catch() { ... } // from try @ 01072248 with catch @ 01071b74 */
            if ((uint)uVar45 < (uint)*(ushort *)(param_1 + 0xd4)) {
              uVar45 = uVar45 & 0xffffffff;
              if (bVar16) {
                lVar46 = *(long *)(param_1 + 0xd8);
LAB_01071bc4:
                plVar5 = (long *)(lVar46 + uVar45 * 0x10);
                lVar46 = (**(code **)(param_1 + 0x3e0))
                                   (param_1,*plVar5 - *plVar41,plVar5[1] - *plVar6);
              }
              else {
                if (*(long *)(param_1 + 400) == *(long *)(param_1 + 0x198)) {
                  lVar46 = *(long *)(param_1 + 0xe8);
                  goto LAB_01071bc4;
                }
                uVar44 = FT_MulFix(*(long *)(*(long *)(param_1 + 0xe8) + uVar45 * 0x10) - *plVar41);
                uVar22 = FT_MulFix(*(long *)(*(long *)(param_1 + 0xe8) + uVar45 * 0x10 + 8) -
                                   *plVar6,*(undefined8 *)(param_1 + 0x198));
                lVar46 = (**(code **)(param_1 + 0x3e0))(param_1,uVar44,uVar22);
              }
              plVar5 = (long *)(*(long *)(param_1 + 0xe0) + uVar45 * 0x10);
              lVar34 = (**(code **)(param_1 + 0x3d8))
                                 (param_1,*plVar5 - *(long *)(lVar35 + lVar48),
                                  plVar5[1] - *(long *)(lVar35 + lVar48 + 8));
              if ((local_128 != 0) && (lVar46 != 0)) {
                lVar46 = FT_MulDiv(lVar46,local_150,local_128);
              }
              (**(code **)(param_1 + 0x3f0))(param_1,local_d8,uVar45,lVar46 - lVar34);
              lVar46 = *(long *)(param_1 + 0x228);
                    /* try { // try from 01071cd8 to 01171ce3 has its CatchHandler @ 01072354 */
                    /* try { // try from 01071cf0 to 01171d13 has its CatchHandler @ 010723c0 */
            }
            else if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
            lVar34 = lVar46 + -1;
            *(long *)(param_1 + 0x228) = lVar34;
            bVar1 = 0 < lVar46;
            lVar46 = lVar34;
          } while (lVar34 != 0 && bVar1);
        }
      }
      *(undefined8 *)(param_1 + 0x228) = 1;
      *(int *)(param_1 + 0x40) = (int)*(undefined8 *)(param_1 + 0x38);
LAB_01071270:
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x3a:
    case 0x3b:
      uVar45 = *puVar4;
      uVar66 = (uint)uVar45 & 0xffff;
      if ((*(ushort *)(param_1 + 0x94) <= uVar66) ||
         (uVar54 = (ulong)*(ushort *)(param_1 + 0x210),
         *(ushort *)(param_1 + 0x54) <= *(ushort *)(param_1 + 0x210))) goto LAB_010701ec;
      if (*(short *)(param_1 + 0x266) == 0) {
        lVar46 = (uVar45 & 0xffff) * 0x10;
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x58) + uVar54 * 0x10);
        uVar44 = *puVar11;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x98) + lVar46);
        puVar10[1] = puVar11[1];
        *puVar10 = uVar44;
        (**(code **)(param_1 + 0x3f8))(param_1,local_d0,uVar45 & 0xffffffff,puVar4[1]);
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x98) + lVar46);
        uVar44 = *puVar11;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0xa0) + lVar46);
        puVar10[1] = puVar11[1];
        *puVar10 = uVar44;
        uVar54 = (ulong)*(ushort *)(param_1 + 0x210);
      }
      plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)uVar66 * 0x10);
      plVar6 = (long *)(*(long *)(param_1 + 0x60) + uVar54 * 0x10);
      lVar46 = (**(code **)(param_1 + 0x3d8))(param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
      (**(code **)(param_1 + 0x3f0))(param_1,puVar31,uVar45 & 0xffffffff,puVar4[1] - lVar46);
      *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(param_1 + 0x210);
      *(short *)(param_1 + 0x214) = (short)uVar45;
      if ((*(byte *)(param_1 + 0x290) & 1) == 0) goto switchD_0106e1f0_caseD_21;
      *(short *)(param_1 + 0x210) = (short)uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x3c:
      lVar35 = *(long *)(param_1 + 0x228);
      if ((*(long *)(param_1 + 0x20) < lVar35) ||
         (*(ushort *)(param_1 + 0x54) <= *(ushort *)(param_1 + 0x210))) goto LAB_0106f920;
      if (0 < lVar35) {
        while( true ) {
          *(long *)(param_1 + 0x38) = lVar46 + -1;
          uVar45 = *(ulong *)(lVar48 + (lVar46 + -1) * 8);
          uVar66 = (uint)uVar45 & 0xffff;
          if (uVar66 < *(ushort *)(param_1 + 0x94)) {
            plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)uVar66 * 0x10);
            plVar6 = (long *)(*(long *)(param_1 + 0x60) + (ulong)*(ushort *)(param_1 + 0x210) * 0x10
                             );
                    /* try { // try from 0106f884 to 0116f88b has its CatchHandler @ 0106f898 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f738 with catch @ 0106f88c
                       try { // try from 0106f88c to 0116f9cb has its CatchHandler @ 0106f538 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f6c4 with catch @ 0106f890
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f64c with catch @ 0106f894
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f5d0 with catch @ 0106f898
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f884 with catch @ 0106f898
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f740 with catch @ 0106f8a8
                        */
            lVar46 = (**(code **)(param_1 + 0x3d8))
                               (param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
            (**(code **)(param_1 + 0x3f0))(param_1,local_d0,uVar45 & 0xffffffff,-lVar46);
            lVar48 = *(long *)(param_1 + 0x228);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f6d0 with catch @ 0106f8dc
                        */
          }
          else {
            lVar48 = lVar35;
            if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
          }
          lVar46 = *(long *)(param_1 + 0x38);
          lVar35 = lVar48 + -1;
          *(long *)(param_1 + 0x228) = lVar35;
          if (lVar48 < 2) break;
          lVar48 = *(long *)(param_1 + 0x30);
        }
      }
      goto LAB_01070028;
    case 0x3d:
      uVar26 = 2;
      pcVar40 = FUN_01072924;
      goto LAB_0106fff4;
    case 0x3e:
    case 0x3f:
      uVar45 = *puVar4;
                    /* try { // try from 0106e6c0 to 0116e707 has its CatchHandler @ 0106e6c0
                       catch() { ... } // from try @ 0106e6c0 with catch @ 0106e6c0
                       catch() { ... } // from try @ 0106e78c with catch @ 0106e6c0
                       catch() { ... } // from try @ 0106e818 with catch @ 0106e6c0
                       catch() { ... } // from try @ 0106e8a4 with catch @ 0106e6c0
                       catch() { ... } // from try @ 0106e974 with catch @ 0106e6c0
                       catch() { ... } // from try @ 0106eb30 with catch @ 0106e6c0 */
      if ((((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0x54)) &&
         (puVar4[1] < *(ulong *)(param_1 + 0x2a0))) {
        lVar35 = *(long *)(param_1 + 0x240);
        lVar46 = (**(code **)(param_1 + 0x408))(param_1);
        if (*(short *)(param_1 + 0x264) == 0) {
          uVar50 = (uint)lVar46;
          uVar66 = -uVar50;
          if (-1 < (int)uVar50) {
            uVar66 = uVar50;
          }
          bVar57 = (byte)((ulong)lVar46 >> 0x18);
          iVar36 = MP_INT_ABS((int)(short)*puVar3);
          iVar63 = MP_INT_ABS((int)*(short *)(param_1 + 0x220));
          uVar61 = iVar36 * (uVar66 >> 0x10);
          uVar62 = iVar63 * (uVar66 >> 0x10);
          uVar50 = uVar61 * 0x10000 | 0x2000;
          uVar64 = uVar62 * 0x10000 | 0x2000;
          uVar65 = uVar50 + iVar36 * (uVar66 & 0xffff);
          uVar66 = uVar64 + iVar63 * (uVar66 & 0xffff);
          iVar36 = ((uVar61 >> 0x10) + (uint)(uVar65 < uVar50)) * 0x40000;
          iVar63 = ((uVar62 >> 0x10) + (uint)(uVar66 < uVar64)) * 0x40000;
          lVar48 = *(long *)(param_1 + 0x58);
          iVar36 = CONCAT13((char)((uint)iVar36 >> 0x18),
                            CONCAT12((byte)((uint)iVar36 >> 0x10) | (byte)(uVar65 >> 0x1e),
                                     (short)(uVar65 >> 0xe)));
          uVar54 = CONCAT17((char)((uint)iVar63 >> 0x18),
                            CONCAT16((byte)((uint)iVar63 >> 0x10) | (byte)(uVar66 >> 0x1e),
                                     CONCAT15((char)((uVar66 >> 0xe) >> 8),
                                              CONCAT14((char)(uVar66 >> 0xe),iVar36))));
          iVar36 = -iVar36;
          iVar63 = -(int)(uVar54 >> 0x20);
          uVar58 = (undefined1)((uint)iVar63 >> 8);
          uVar59 = (undefined1)((uint)iVar63 >> 0x10);
          uVar60 = (undefined1)((uint)iVar63 >> 0x18);
          uVar54 = CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14((char)iVar63,iVar36))))
                   ^ (CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14((char)iVar63,iVar36))
                                              )) ^ uVar54) &
                     CONCAT44(-(uint)(-1 < (char)(bVar57 ^ (byte)(*(short *)(param_1 + 0x220) >> 0xf
                                                                 ))),
                              -(uint)(-1 < (char)(bVar57 ^ (byte)((short)*puVar3 >> 0xf))));
          lVar34 = (uVar45 & 0xffff) * 0x10;
          plVar41 = (long *)(lVar48 + lVar34);
          plVar41[1] = (long)(int)(uVar54 >> 0x20);
          *plVar41 = (long)(int)uVar54;
          puVar31 = (undefined8 *)(lVar48 + lVar34);
          uVar44 = *puVar31;
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar34);
          puVar11[1] = puVar31[1];
          *puVar11 = uVar44;
        }
                    /* try { // try from 01071434 to 01171483 has its CatchHandler @ 01071434
                       catch() { ... } // from try @ 01071434 with catch @ 01071434
                       catch() { ... } // from try @ 010714f8 with catch @ 01071434
                       catch() { ... } // from try @ 01071708 with catch @ 01071434
                       catch() { ... } // from try @ 010717d4 with catch @ 01071434
                       catch() { ... } // from try @ 010718d0 with catch @ 01071434 */
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x60) + (uVar45 & 0xffff) * 0x10);
        lVar48 = (**(code **)(param_1 + 0x3d8))(param_1,*puVar31,puVar31[1]);
        if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
          lVar38 = lVar46 - lVar48;
          lVar34 = -lVar38;
          if (-1 < lVar38) {
            lVar34 = lVar38;
          }
          lVar38 = lVar48;
          if (lVar34 <= lVar35) {
            lVar38 = lVar46;
          }
          lVar46 = (**(code **)(param_1 + 0x3d0))(param_1,lVar38,*(undefined8 *)(param_1 + 0x1e8));
        }
                    /* try { // try from 01071484 to 0117148f has its CatchHandler @ 010718f8 */
        (**(code **)(param_1 + 0x3f0))(param_1,local_e0,uVar45 & 0xffffffff,lVar46 - lVar48);
      }
      else if (*(char *)(param_1 + 0x3c1) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      *(short *)(param_1 + 0x210) = (short)uVar45;
      *(short *)(param_1 + 0x212) = (short)uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x40:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106f654 with catch @ 0106f948
                        */
      bVar57 = *(byte *)(lVar35 + *(long *)(param_1 + 0x280) + 1);
      uVar66 = (uint)bVar57;
      if ((uVar61 + 1) - *(int *)(param_1 + 0x20) <= (uint)bVar57) goto LAB_010722b8;
      if (bVar57 != 0) {
        *puVar4 = (ulong)*(byte *)(lVar35 + *(long *)(param_1 + 0x280) + 2);
        if (bVar57 != 1) {
          uVar45 = 2;
          do {
            iVar36 = (int)uVar45;
            lVar46 = *(long *)(param_1 + 0x280) + uVar45;
            uVar61 = iVar36 + 1U & 0xffff;
            uVar45 = (ulong)uVar61;
            puVar4[iVar36 + -1] = (ulong)*(byte *)(lVar35 + lVar46 + 1);
          } while (uVar61 <= bVar57);
        }
      }
LAB_0106fa1c:
      *(uint *)(param_1 + 0x40) = uVar50 + uVar66;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x41:
      bVar57 = *(byte *)(lVar35 + *(long *)(param_1 + 0x280) + 1);
      uVar66 = (uint)bVar57;
      if ((uint)bVar57 < (uVar61 + 1) - *(int *)(param_1 + 0x20)) {
                    /* try { // try from 0106f9cc to 0116fa63 has its CatchHandler @ 0106f9cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0106f9cc with catch @ 0106f9cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0106fa6c with catch @ 0106f9cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0106fbf0 with catch @ 0106f9cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0106fd20 with catch @ 0106f9cc
                        */
        lVar46 = *(long *)(param_1 + 0x280) + 2;
        *(long *)(param_1 + 0x280) = lVar46;
        if (bVar57 != 0) {
          uVar43 = 0;
          while( true ) {
            *(long *)(param_1 + 0x280) = lVar46 + 2;
            puVar4[uVar43] =
                 (long)CONCAT11(*(undefined1 *)(lVar35 + lVar46),
                                ((undefined1 *)(lVar35 + lVar46))[1]);
            if ((ushort)bVar57 <= (ushort)(uVar43 + 1)) break;
            lVar46 = *(long *)(param_1 + 0x280);
            uVar43 = uVar43 + 1;
          }
        }
        *(undefined1 *)(param_1 + 0x298) = 0;
        goto LAB_0106fa1c;
      }
      goto LAB_010722b8;
    case 0x42:
      if ((ulong)*(ushort *)(param_1 + 0x330) <= *puVar4) goto LAB_010701ec;
      *(ulong *)(*(long *)(param_1 + 0x338) + *puVar4 * 8) = puVar4[1];
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x43:
                    /* try { // try from 0106fa64 to 0116fa6b has its CatchHandler @ 0106fd2c */
      if ((ulong)*(ushort *)(param_1 + 0x330) <= *puVar4) {
        if (*(char *)(param_1 + 0x3c1) == '\0') goto LAB_01070990;
        goto LAB_01072300;
      }
                    /* try { // try from 0106fa6c to 0116fadf has its CatchHandler @ 0106f9cc */
      uVar45 = *(ulong *)(*(long *)(param_1 + 0x338) + *puVar4 * 8);
      goto LAB_01070a4c;
    case 0x44:
      if (*(ulong *)(param_1 + 0x2a0) <= *puVar4) goto LAB_010701ec;
      (**(code **)(param_1 + 0x410))(param_1,*puVar4,puVar4[1]);
      goto switchD_0106e1f0_caseD_21;
    case 0x45:
      if (*puVar4 < *(ulong *)(param_1 + 0x2a0)) {
                    /* try { // try from 0106fae0 to 0116fae7 has its CatchHandler @ 0106fd28 */
        uVar45 = (**(code **)(param_1 + 0x408))(param_1);
      }
      else {
        if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
LAB_010709a0:
        uVar45 = 0;
      }
      goto LAB_0106fe10;
    case 0x46:
    case 0x47:
      if (*puVar4 < (ulong)*(ushort *)(param_1 + 0xd4)) {
                    /* try { // try from 0106e708 to 0116e713 has its CatchHandler @ 0106ed0c */
        if ((bVar57 & 1) == 0) {
                    /* try { // try from 0106e718 to 0116e723 has its CatchHandler @ 0106ecec */
          lVar46 = *(long *)(param_1 + 0xe0);
          pcVar40 = *(code **)(param_1 + 0x3d8);
        }
        else {
          lVar46 = *(long *)(param_1 + 0xd8);
          pcVar40 = *(code **)(param_1 + 0x3e0);
        }
        puVar31 = (undefined8 *)(lVar46 + *puVar4 * 0x10);
                    /* catch() { ... } // from try @ 01070630 with catch @ 0107086c
                       catch() { ... } // from try @ 01070820 with catch @ 0107086c */
                    /* catch() { ... } // from try @ 01070514 with catch @ 01070870 */
        uVar45 = (*pcVar40)(param_1,*puVar31,puVar31[1]);
                    /* catch() { ... } // from try @ 01070460 with catch @ 01070874 */
                    /* catch() { ... } // from try @ 010706a8 with catch @ 01070878 */
                    /* catch() { ... } // from try @ 01070700 with catch @ 0107087c */
      }
      else {
        if (*(char *)(param_1 + 0x3c1) == '\0') goto LAB_010709a0;
        uVar45 = 0;
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      goto LAB_0106fe10;
    case 0x48:
                    /* try { // try from 0106fae8 to 0116faeb has its CatchHandler @ 0106fddc */
      uVar45 = *puVar4;
      if ((uint)*(ushort *)(param_1 + 0xd4) <= ((uint)uVar45 & 0xffff)) goto LAB_010701ec;
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0xe0) + (uVar45 & 0xffff) * 0x10);
      lVar46 = (**(code **)(param_1 + 0x3d8))(param_1,*puVar31,puVar31[1]);
      (**(code **)(param_1 + 0x3f0))(param_1,local_d8,uVar45 & 0xffffffff,puVar4[1] - lVar46);
                    /* try { // try from 0106fb58 to 0116fb5f has its CatchHandler @ 0106fd24 */
                    /* try { // try from 0106fb64 to 0116fb6b has its CatchHandler @ 0106fd70 */
      if (*(short *)(param_1 + 0x268) != 0) goto switchD_0106e1f0_caseD_21;
      lVar46 = (uVar45 & 0xffff) * 0x10;
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0xe0) + lVar46);
      uVar44 = *puVar31;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0xd8) + lVar46);
      puVar11[1] = puVar31[1];
      *puVar11 = uVar44;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x49:
    case 0x4a:
      uVar43 = (ushort)*puVar4;
      uVar45 = (ulong)uVar43;
      if ((uint)uVar43 < (uint)*(ushort *)(param_1 + 0x54)) {
        uVar25 = (ushort)puVar4[1];
        uVar54 = (ulong)uVar25;
        if ((uint)*(ushort *)(param_1 + 0x94) <= (uint)uVar25) goto LAB_0106ea64;
        if ((bVar57 & 1) == 0) {
          if ((*(short *)(param_1 + 0x264) == 0) || (*(short *)(param_1 + 0x266) == 0)) {
            lVar46 = *(long *)(param_1 + 0x58);
            lVar35 = *(long *)(param_1 + 0x98);
                    /* try { // try from 010714f0 to 011714f7 has its CatchHandler @ 010718d8 */
            pcVar40 = *(code **)(param_1 + 0x3e0);
            goto LAB_010714f4;
          }
          lVar46 = *(long *)(param_1 + 0x68);
          lVar35 = *(long *)(param_1 + 0xa8);
          plVar41 = (long *)(lVar46 + (ulong)(uint)uVar43 * 0x10);
          plVar6 = (long *)(lVar35 + (ulong)(uint)uVar25 * 0x10);
          if (*(long *)(param_1 + 400) == *(long *)(param_1 + 0x198)) {
                    /* try { // try from 0106e784 to 0116e78b has its CatchHandler @ 0106eb54 */
                    /* try { // try from 0106e78c to 0116e80f has its CatchHandler @ 0106e6c0 */
            uVar44 = (**(code **)(param_1 + 0x3e0))
                               (param_1,*plVar41 - *plVar6,
                                *(long *)(lVar46 + uVar45 * 0x10 + 8) -
                                *(long *)(lVar35 + uVar54 * 0x10 + 8));
            uVar45 = FT_MulFix(uVar44,*(undefined8 *)(param_1 + 400));
          }
          else {
            uVar44 = FT_MulFix(*plVar41 - *plVar6);
            uVar22 = FT_MulFix(*(long *)(lVar46 + uVar45 * 0x10 + 8) -
                               *(long *)(lVar35 + uVar54 * 0x10 + 8),
                               *(undefined8 *)(param_1 + 0x198));
                    /* try { // try from 010718b8 to 011718bf has its CatchHandler @ 010718d4 */
                    /* try { // try from 010718c0 to 011718c7 has its CatchHandler @ 010718d0 */
            uVar45 = (**(code **)(param_1 + 0x3e0))(param_1,uVar44,uVar22);
          }
        }
        else {
          lVar46 = *(long *)(param_1 + 0x60);
          lVar35 = *(long *)(param_1 + 0xa0);
          pcVar40 = *(code **)(param_1 + 0x3d8);
LAB_010714f4:
          plVar41 = (long *)(lVar46 + uVar45 * 0x10);
                    /* try { // try from 010714f8 to 01171533 has its CatchHandler @ 01071434 */
          plVar6 = (long *)(lVar35 + uVar54 * 0x10);
          uVar45 = (*pcVar40)(param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
                    /* try { // try from 01071534 to 0117153f has its CatchHandler @ 010718f4 */
        }
      }
      else {
LAB_0106ea64:
        if (*(char *)(param_1 + 0x3c1) == '\0') {
          uVar45 = 0;
        }
        else {
          uVar45 = 0;
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      *puVar4 = uVar45;
LAB_01071548:
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x4b:
    case 0x4c:
      uVar45 = (**(code **)(param_1 + 0x400))(param_1);
      goto LAB_0106fe10;
    case 0x4d:
      *(undefined1 *)(param_1 + 0x23c) = 1;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x4e:
      *(undefined1 *)(param_1 + 0x23c) = 0;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x4f:
      goto switchD_0106e1f0_caseD_4f;
    case 0x50:
      uVar45 = (ulong)((long)*puVar4 < (long)puVar4[1]);
                    /* try { // try from 0106fbcc to 0116fbcf has its CatchHandler @ 0106fd20 */
      goto LAB_01070a4c;
    case 0x51:
                    /* try { // try from 0106fbd4 to 0116fbef has its CatchHandler @ 0106fd3c */
      uVar45 = (ulong)((long)*puVar4 <= (long)puVar4[1]);
      goto LAB_01070a4c;
    case 0x52:
      uVar45 = (ulong)((long)puVar4[1] < (long)*puVar4);
      goto LAB_01070a4c;
    case 0x53:
                    /* try { // try from 0106fbf0 to 0116fd17 has its CatchHandler @ 0106f9cc */
      uVar45 = (ulong)((long)puVar4[1] <= (long)*puVar4);
      goto LAB_01070a4c;
    case 0x54:
      bVar16 = *puVar4 == puVar4[1];
      goto LAB_0106fd30;
    case 0x55:
      bVar16 = *puVar4 == puVar4[1];
LAB_01070324:
      uVar45 = (ulong)!bVar16;
      goto LAB_01070a4c;
    case 0x56:
      uVar45 = (**(code **)(param_1 + 0x3d0))(param_1,*puVar4,0);
      bVar16 = (uVar45 & 0x7f) == 0x40;
      goto LAB_0106fd30;
    case 0x57:
      uVar45 = (**(code **)(param_1 + 0x3d0))(param_1,*puVar4,0);
      bVar16 = (uVar45 & 0x7f) == 0;
      goto LAB_0106fd30;
    case 0x58:
      if (*puVar4 == 0) {
        lVar46 = *(long *)(param_1 + 0x280);
        lVar48 = *(long *)(param_1 + 0x288);
        iVar63 = 1;
        do {
          for (; iVar49 = iVar63 + -1, iVar49 != 0; iVar63 = iVar63 + 1) {
            do {
              do {
                lVar46 = lVar46 + iVar36;
                *(long *)(param_1 + 0x280) = lVar46;
                if (lVar48 <= lVar46) goto LAB_010722cc;
                bVar57 = *(byte *)(lVar35 + lVar46);
                iVar36 = (int)(char)(&DAT_0145cfd8)[bVar57];
                *(byte *)(param_1 + 0x290) = bVar57;
                *(int *)(param_1 + 0x294) = iVar36;
                if (((ulong)bVar57 | 1) == 0x41) {
                  if (lVar48 <= lVar46 + 1) goto LAB_010722cc;
                  iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
                  *(int *)(param_1 + 0x294) = iVar36;
                }
                    /* catch() { ... } // from try @ 01071a74 with catch @ 010719b0
                       catch() { ... } // from try @ 01071b2c with catch @ 010719b0 */
                if (lVar48 < lVar46 + iVar36) goto LAB_010722cc;
              } while (bVar57 == 0x1b);
              if (bVar57 == 0x59) goto LAB_01071950;
            } while (bVar57 != 0x58);
LAB_0107195c:
          }
          do {
            lVar46 = lVar46 + iVar36;
            *(long *)(param_1 + 0x280) = lVar46;
            if (lVar48 <= lVar46) goto LAB_010722cc;
            bVar57 = *(byte *)(lVar35 + lVar46);
            iVar36 = (int)(char)(&DAT_0145cfd8)[bVar57];
            *(byte *)(param_1 + 0x290) = bVar57;
            *(int *)(param_1 + 0x294) = iVar36;
            if (((ulong)bVar57 | 1) == 0x41) {
              if (lVar48 <= lVar46 + 1) goto LAB_010722cc;
              iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
              *(int *)(param_1 + 0x294) = iVar36;
            }
            if (lVar48 < lVar46 + iVar36) goto LAB_010722cc;
            if (bVar57 == 0x1b) goto switchD_0106e1f0_caseD_21;
            if (bVar57 == 0x58) goto LAB_0107195c;
          } while (bVar57 != 0x59);
LAB_01071950:
          iVar63 = iVar49;
        } while (iVar49 != 0);
      }
      goto switchD_0106e1f0_caseD_21;
    case 0x5a:
      if (*puVar4 != 0) {
LAB_0107031c:
        bVar16 = puVar4[1] == 0;
        goto LAB_01070324;
      }
      uVar45 = 0;
      goto LAB_01070a4c;
    case 0x5b:
                    /* try { // try from 0106fd18 to 0116fd1f has its CatchHandler @ 0106fd2c */
      if (*puVar4 == 0) goto LAB_0107031c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fbcc with catch @ 0106fd20
                       try { // try from 0106fd20 to 0116fe5f has its CatchHandler @ 0106f9cc */
      uVar45 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fb58 with catch @ 0106fd24
                        */
      goto LAB_01070a4c;
    case 0x5c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fae0 with catch @ 0106fd28
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fa64 with catch @ 0106fd2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106fd18 with catch @ 0106fd2c
                        */
      bVar16 = *puVar4 == 0;
LAB_0106fd30:
      uVar45 = (ulong)bVar16;
      goto LAB_01070a4c;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_01072958(param_1,puVar4);
      goto switchD_0106e1f0_caseD_21;
    case 0x5e:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fbd4 with catch @ 0106fd3c
                        */
      *(short *)(param_1 + 600) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x5f:
      if (6 < *puVar4) goto LAB_01072338;
      *(short *)(param_1 + 0x25a) = (short)*puVar4;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x60:
      uVar45 = *puVar4 + puVar4[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106fb64 with catch @ 0106fd70
                        */
      goto LAB_01070a4c;
    case 0x61:
      uVar45 = *puVar4 - puVar4[1];
      goto LAB_01070a4c;
    case 0x62:
      if (puVar4[1] != 0) {
        uVar45 = FT_MulDiv_No_Round(*puVar4,0x40);
        goto LAB_0106fe10;
      }
      iVar63 = 0x85;
      goto switchD_0106e1f0_caseD_4f;
    case 99:
      uVar45 = FT_MulDiv(*puVar4,puVar4[1],0x40);
      goto LAB_0106fe10;
    case 100:
      uVar54 = *puVar4;
      uVar45 = -uVar54;
      if (-1 < (long)uVar54) {
        uVar45 = uVar54;
      }
      goto LAB_01070a4c;
    case 0x65:
      uVar45 = -*puVar4;
      goto LAB_01070a4c;
    case 0x66:
      uVar45 = *puVar4;
      goto LAB_0106fe4c;
    case 0x67:
      uVar45 = *puVar4 + 0x3f;
LAB_0106fe4c:
      uVar45 = uVar45 & 0xffffffffffffffc0;
      goto LAB_01070a4c;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
                    /* try { // try from 0106e22c to 0116e2c3 has its CatchHandler @ 0106e22c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e22c with catch @ 0106e22c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e2cc with catch @ 0106e22c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e450 with catch @ 0106e22c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106e580 with catch @ 0106e22c
                        */
      uVar45 = (**(code **)(param_1 + 0x3d0))
                         (param_1,*puVar4,*(undefined8 *)(param_1 + uVar45 * 8 + -0x158));
LAB_0106fe10:
      *puVar4 = uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar54 = *puVar4;
      lVar46 = *(long *)(param_1 + uVar45 * 8 + -0x178);
      if ((long)uVar54 < 0) {
        uVar54 = uVar54 - lVar46;
        uVar45 = uVar54 & (long)uVar54 >> 0x3f;
      }
      else {
        uVar54 = lVar46 + uVar54;
        uVar45 = uVar54 & ((long)uVar54 >> 0x3f ^ 0xffffffffffffffffU);
      }
      goto LAB_01070a4c;
    case 0x70:
      uVar45 = *puVar4;
                    /* try { // try from 0106fe60 to 0116fef7 has its CatchHandler @ 0106fe60
                       catch(type#1 @ 00000000) { ... } // from try @ 0106fe60 with catch @ 0106fe60
                       catch(type#1 @ 00000000) { ... } // from try @ 0106ff00 with catch @ 0106fe60
                       catch(type#1 @ 00000000) { ... } // from try @ 01070084 with catch @ 0106fe60
                       catch(type#1 @ 00000000) { ... } // from try @ 010701b4 with catch @ 0106fe60
                        */
      if (*(ulong *)(param_1 + 0x2a0) <= uVar45) goto LAB_010701ec;
      uVar44 = FT_MulFix(puVar4[1],*(undefined8 *)(param_1 + 0x1e0));
      *(undefined8 *)(*(long *)(param_1 + 0x2a8) + uVar45 * 8) = uVar44;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      lVar46 = (**(code **)(param_1 + 0x400))(param_1);
      uVar45 = *puVar4;
                    /* try { // try from 0106e2c4 to 0116e2cb has its CatchHandler @ 0106e58c */
      if (uVar45 != 0) {
        uVar54 = 1;
        do {
                    /* try { // try from 0106e2cc to 0116e33f has its CatchHandler @ 0106e22c */
          lVar35 = *(long *)(param_1 + 0x38);
          if (lVar35 < 2) {
            if (*(char *)(param_1 + 0x3c1) != '\0') {
              *(undefined4 *)(param_1 + 0x18) = 0x81;
            }
            *(undefined8 *)(param_1 + 0x38) = 0;
            break;
          }
          *(long *)(param_1 + 0x38) = lVar35 + -2;
          uVar20 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar35 * 8 + -8);
          if (uVar20 < *(ulong *)(param_1 + 0x2a0)) {
            uVar33 = *(ulong *)(*(long *)(param_1 + 0x30) + (lVar35 + -2) * 8);
            uVar37 = uVar33 >> 4 & 0xf;
            if (*(char *)(param_1 + 0x290) == 'u') {
              uVar37 = uVar37 | 0x20;
            }
            else if (*(char *)(param_1 + 0x290) == 't') {
              uVar37 = uVar37 | 0x10;
            }
            if (lVar46 == uVar37 + *(ushort *)(param_1 + 600)) {
              uVar33 = uVar33 & 0xf;
                    /* try { // try from 0106e340 to 0116e347 has its CatchHandler @ 0106e588 */
                    /* try { // try from 0106e348 to 0116e34b has its CatchHandler @ 0106e63c */
              lVar35 = -8;
              if (7 < uVar33) {
                lVar35 = -7;
              }
              (**(code **)(param_1 + 0x418))
                        (param_1,uVar20,
                         lVar35 + uVar33 << ((ulong)(6 - *(ushort *)(param_1 + 0x25a)) & 0x3f));
            }
          }
          else if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
          uVar54 = uVar54 + 1;
        } while (uVar54 <= uVar45);
      }
      *(int *)(param_1 + 0x40) = (int)*(undefined8 *)(param_1 + 0x38);
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x76:
      uVar54 = *puVar4;
      uVar45 = *(ulong *)(&DAT_0145d630 + (uVar54 >> 6 & 3 ^ 2) * 8);
      uVar66 = (uint)uVar54 >> 4 & 3;
      *(ulong *)(param_1 + 0x340) = uVar45;
                    /* try { // try from 0106fef8 to 0116feff has its CatchHandler @ 010701c0 */
      if (uVar66 == 3) {
        uVar20 = uVar45 * 3 >> 2;
      }
      else {
                    /* try { // try from 0106ff00 to 0116ff73 has its CatchHandler @ 0106fe60 */
        if (uVar66 == 2) {
          uVar20 = uVar45 >> 1;
        }
        else if (uVar66 == 1) {
          uVar20 = uVar45 >> 2;
        }
        else {
          uVar20 = 0;
        }
      }
      *(ulong *)(param_1 + 0x348) = uVar20;
      if ((uVar54 & 0xf) == 0) {
        lVar46 = uVar45 - 1;
      }
      else {
        lVar35 = uVar45 * ((uVar54 & 0xf) - 4);
        lVar46 = lVar35 + 7;
                    /* try { // try from 01071078 to 0117107f has its CatchHandler @ 01071088 */
        if (-1 < lVar35) {
          lVar46 = lVar35;
        }
        lVar46 = lVar46 >> 3;
                    /* try { // try from 01071080 to 01171087 has its CatchHandler @ 0107108c */
      }
                    /* catch() { ... } // from try @ 01071078 with catch @ 01071088
                       try { // try from 01071088 to 0117117f has its CatchHandler @ 01070d44 */
                    /* catch() { ... } // from try @ 01070e20 with catch @ 0107108c
                       catch() { ... } // from try @ 01071080 with catch @ 0107108c */
                    /* catch() { ... } // from try @ 01070e64 with catch @ 01071090 */
                    /* catch() { ... } // from try @ 01070f80 with catch @ 01071094 */
      uVar26 = 6;
      pcVar40 = FUN_01072aa4;
      goto LAB_01071108;
    case 0x77:
      uVar54 = *puVar4;
      uVar45 = *(ulong *)(&DAT_0145d650 + (uVar54 >> 6 & 3 ^ 2) * 8);
      uVar66 = (uint)uVar54 >> 4 & 3;
      *(ulong *)(param_1 + 0x340) = uVar45;
      if (uVar66 == 3) {
                    /* catch() { ... } // from try @ 01070db4 with catch @ 010710a8 */
        uVar20 = uVar45 * 3 >> 2;
      }
      else if (uVar66 == 2) {
        uVar20 = uVar45 >> 1;
                    /* catch() { ... } // from try @ 01070d8c with catch @ 010710b8 */
      }
      else if (uVar66 == 1) {
        uVar20 = uVar45 >> 2;
      }
      else {
        uVar20 = 0;
      }
      *(ulong *)(param_1 + 0x348) = uVar20;
                    /* catch() { ... } // from try @ 01070eb4 with catch @ 010710c8 */
      if ((uVar54 & 0xf) == 0) {
        lVar46 = uVar45 - 1;
      }
      else {
                    /* catch() { ... } // from try @ 01070e9c with catch @ 010710cc */
        lVar35 = uVar45 * ((uVar54 & 0xf) - 4);
        lVar46 = lVar35 + 7;
                    /* catch() { ... } // from try @ 01070ec8 with catch @ 010710dc */
        if (-1 < lVar35) {
          lVar46 = lVar35;
        }
        lVar46 = lVar46 >> 3;
      }
      uVar26 = 7;
      pcVar40 = FUN_01072b0c;
LAB_01071108:
      *(ulong *)(param_1 + 0x340) = uVar45 >> 8;
      lVar35 = lVar46 + 0xff;
      if (-1 < lVar46) {
        lVar35 = lVar46;
      }
      *(ulong *)(param_1 + 0x348) = uVar20 >> 8;
      *(undefined4 *)(param_1 + 0x238) = uVar26;
      *(long *)(param_1 + 0x350) = lVar35 >> 8;
      *(code **)(param_1 + 0x3d0) = pcVar40;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x78:
      if (puVar4[1] != 0) goto switchD_0106e1f0_caseD_1c;
      goto switchD_0106e1f0_caseD_21;
    case 0x79:
      if (puVar4[1] == 0) goto switchD_0106e1f0_caseD_1c;
      goto switchD_0106e1f0_caseD_21;
    case 0x7a:
      uVar26 = 5;
      pcVar40 = FUN_01072a88;
      goto LAB_0106fff4;
    case 0x7c:
      uVar26 = 4;
      pcVar40 = FUN_01072b6c;
      goto LAB_0106fff4;
    case 0x7d:
                    /* try { // try from 0106ffec to 0116fff3 has its CatchHandler @ 010701b8 */
      uVar26 = 3;
      pcVar40 = FUN_01072ba0;
LAB_0106fff4:
      *(undefined4 *)(param_1 + 0x238) = uVar26;
                    /* try { // try from 0106fff8 to 0116ffff has its CatchHandler @ 01070204 */
      *(code **)(param_1 + 0x3d0) = pcVar40;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x80:
      lVar35 = *(long *)(param_1 + 0x228);
      if (*(long *)(param_1 + 0x20) < lVar35) {
        if (*(char *)(param_1 + 0x3c1) != '\0') {
          uVar26 = 0x81;
          goto LAB_01070024;
        }
      }
      else if (0 < lVar35) {
        while( true ) {
                    /* try { // try from 010709bc to 011709bf has its CatchHandler @ 01070a00 */
                    /* try { // try from 010709c0 to 01170a77 has its CatchHandler @ 010708ec */
          *(long *)(param_1 + 0x38) = lVar46 + -1;
          uVar45 = *(ulong *)(lVar48 + (lVar46 + -1) * 8);
          if (((uint)uVar45 & 0xffff) < (uint)*(ushort *)(param_1 + 0x114)) {
            uVar45 = uVar45 & 0xffff;
            *(byte *)(*(long *)(param_1 + 0x130) + uVar45) =
                 *(byte *)(*(long *)(param_1 + 0x130) + uVar45) ^ 1;
            lVar48 = *(long *)(param_1 + 0x228);
          }
          else {
            lVar48 = lVar35;
            if (*(char *)(param_1 + 0x3c1) != '\0') goto LAB_01072300;
          }
          lVar46 = *(long *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 010709bc with catch @ 01070a00 */
          lVar35 = lVar48 + -1;
                    /* catch() { ... } // from try @ 0107097c with catch @ 01070a04 */
          *(long *)(param_1 + 0x228) = lVar35;
          if (lVar48 < 2) break;
          lVar48 = *(long *)(param_1 + 0x30);
        }
      }
LAB_01070028:
      *(undefined8 *)(param_1 + 0x228) = 1;
      *(int *)(param_1 + 0x40) = (int)lVar46;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x81:
      uVar43 = (ushort)puVar4[1];
      if ((uint)uVar43 < (uint)*(ushort *)(param_1 + 0x114)) {
        uVar45 = *puVar4;
        uVar66 = (uint)uVar45 & 0xffff;
        if (uVar66 < *(ushort *)(param_1 + 0x114)) {
                    /* try { // try from 01070060 to 01170063 has its CatchHandler @ 010701b4 */
          if (uVar66 <= uVar43) {
            do {
                    /* try { // try from 01070068 to 01170083 has its CatchHandler @ 010701d0 */
              uVar54 = (ulong)((uint)uVar45 & 0xffff);
              uVar66 = (uint)uVar45 + 1;
              uVar45 = (ulong)uVar66;
              *(byte *)(*(long *)(param_1 + 0x130) + uVar54) =
                   *(byte *)(*(long *)(param_1 + 0x130) + uVar54) | 1;
                    /* try { // try from 01070084 to 011701ab has its CatchHandler @ 0106fe60 */
            } while ((uVar66 & 0xffff) <= (uint)uVar43);
          }
          goto switchD_0106e1f0_caseD_21;
        }
      }
      goto LAB_010701ec;
    case 0x82:
      uVar43 = (ushort)puVar4[1];
      if ((uint)uVar43 < (uint)*(ushort *)(param_1 + 0x114)) {
        uVar45 = *puVar4;
        uVar66 = (uint)uVar45 & 0xffff;
        if (uVar66 < *(ushort *)(param_1 + 0x114)) {
          if (uVar66 <= uVar43) {
            do {
              uVar54 = (ulong)((uint)uVar45 & 0xffff);
              uVar66 = (uint)uVar45 + 1;
              uVar45 = (ulong)uVar66;
              *(byte *)(*(long *)(param_1 + 0x130) + uVar54) =
                   *(byte *)(*(long *)(param_1 + 0x130) + uVar54) & 0xfe;
            } while ((uVar66 & 0xffff) <= (uint)uVar43);
          }
          goto switchD_0106e1f0_caseD_21;
        }
      }
LAB_010701ec:
      cVar18 = *(char *)(param_1 + 0x3c1);
joined_r0x0106ea90:
      if (cVar18 == '\0') goto switchD_0106e1f0_caseD_21;
      goto LAB_01072300;
    case 0x85:
      uVar50 = (uint)*puVar4;
      uVar66 = uVar50 & 0xff;
      if ((*puVar4 & 0xff) != 0) {
        if (uVar66 == 0xff) {
          *(undefined1 *)(param_1 + 0x25d) = 1;
          iVar63 = *(int *)(param_1 + 0x18);
          break;
        }
        if (((uVar50 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x1d0) <= uVar66)) {
                    /* try { // try from 01070eb4 to 01170ebf has its CatchHandler @ 010710c8 */
          *(undefined1 *)(param_1 + 0x25d) = 1;
        }
        if (((uVar50 >> 9 & 1) != 0) && (*(char *)(param_1 + 0x209) != '\0')) {
                    /* try { // try from 01070ec8 to 01170f23 has its CatchHandler @ 010710dc */
          *(undefined1 *)(param_1 + 0x25d) = 1;
        }
        if (((uVar50 >> 10 & 1) != 0) && (*(char *)(param_1 + 0x20a) != '\0')) {
          *(undefined1 *)(param_1 + 0x25d) = 1;
        }
        if (((uVar50 >> 0xb & 1) != 0) && (uVar66 < *(ushort *)(param_1 + 0x1d0))) {
          *(undefined1 *)(param_1 + 0x25d) = 0;
        }
        if (((uVar50 >> 0xc & 1) != 0) && (*(char *)(param_1 + 0x209) != '\0')) {
          *(undefined1 *)(param_1 + 0x25d) = 0;
        }
        if (((uVar50 >> 0xd & 1) == 0) || (*(char *)(param_1 + 0x20a) == '\0'))
        goto switchD_0106e1f0_caseD_21;
      }
      *(undefined1 *)(param_1 + 0x25d) = 0;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x86:
    case 0x87:
      uVar43 = (ushort)*puVar4;
      if ((uint)uVar43 < (uint)*(ushort *)(param_1 + 0x94)) {
        uVar25 = (ushort)puVar4[1];
                    /* try { // try from 0106e810 to 0116e817 has its CatchHandler @ 0106eb44 */
        if ((uint)*(ushort *)(param_1 + 0xd4) <= (uint)uVar25) goto LAB_0106ea7c;
                    /* try { // try from 0106e818 to 0116e89b has its CatchHandler @ 0106e6c0 */
        plVar41 = (long *)(*(long *)(param_1 + 0x98) + (ulong)(uint)uVar43 * 0x10);
        plVar6 = (long *)(*(long *)(param_1 + 0xd8) + (ulong)(uint)uVar25 * 0x10);
        lVar48 = *plVar41 - *plVar6;
        lVar35 = plVar41[1] - plVar6[1];
        bVar16 = lVar35 != 0;
        bVar1 = lVar48 != 0;
        lVar46 = 0x4000;
        if (bVar16 || bVar1) {
          lVar46 = lVar48;
        }
        bVar17 = (bVar57 & 1) != 0;
        lVar48 = lVar46;
        if (bVar17 && (bVar16 || bVar1)) {
          lVar48 = -lVar35;
          lVar35 = lVar46;
        }
        lVar46 = -lVar48;
        if (-1 < lVar48) {
          lVar46 = lVar48;
        }
        if (lVar46 < 0x4000) {
          lVar46 = -lVar35;
          if (-1 < lVar35) {
            lVar46 = lVar35;
          }
          if (0x3fff < lVar46) goto LAB_0106e898;
          if (lVar35 != 0 || lVar48 != 0) {
            lVar48 = lVar48 << 0xe;
            lVar35 = lVar35 << 0xe;
            goto LAB_0106e898;
          }
        }
        else {
LAB_0106e898:
                    /* try { // try from 0106e89c to 0116e8a3 has its CatchHandler @ 0106eb34 */
          lVar46 = FT_Hypot(lVar48,lVar35);
                    /* try { // try from 0106e8a4 to 0116e8ff has its CatchHandler @ 0106e6c0 */
          uVar19 = FT_DivFix(lVar48,lVar46 << 2);
          *(undefined2 *)(param_1 + 0x216) = uVar19;
          uVar19 = FT_DivFix(lVar35,lVar46 << 2);
          *(undefined2 *)(param_1 + 0x218) = uVar19;
        }
        plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)uVar43 * 0x10);
        plVar6 = (long *)(*(long *)(param_1 + 0xe0) + (ulong)uVar25 * 0x10);
        lVar48 = *plVar41 - *plVar6;
        lVar35 = plVar41[1] - plVar6[1];
        bVar13 = lVar35 != 0;
        bVar14 = lVar48 != 0;
        lVar46 = 0x4000;
        if (bVar13 || bVar14) {
          lVar46 = lVar48;
        }
        lVar48 = lVar46;
                    /* try { // try from 0106e900 to 0116e907 has its CatchHandler @ 0106eb30 */
        if ((bVar17 && (bVar16 || bVar1)) && (bVar13 || bVar14)) {
          lVar48 = -lVar35;
        }
                    /* try { // try from 0106e908 to 0116e90b has its CatchHandler @ 0106ec60 */
        if ((bVar17 && (bVar16 || bVar1)) && (bVar13 || bVar14)) {
          lVar35 = lVar46;
        }
        lVar46 = -lVar48;
        if (-1 < lVar48) {
          lVar46 = lVar48;
        }
        if (lVar46 < 0x4000) {
                    /* try { // try from 0106e924 to 0116e92f has its CatchHandler @ 0106ec2c */
          lVar46 = -lVar35;
          if (-1 < lVar35) {
            lVar46 = lVar35;
          }
                    /* try { // try from 0106e934 to 0116e93b has its CatchHandler @ 0106eba8 */
          if (0x3fff < lVar46) goto LAB_01070fc4;
                    /* try { // try from 0106e94c to 0116e953 has its CatchHandler @ 0106eb98 */
                    /* try { // try from 0106e958 to 0116e973 has its CatchHandler @ 0106eb64 */
          if (lVar35 != 0 || lVar48 != 0) {
                    /* try { // try from 0106e974 to 0116eb23 has its CatchHandler @ 0106e6c0 */
            lVar48 = lVar48 << 0xe;
            lVar35 = lVar35 << 0xe;
            goto LAB_01070fc4;
          }
        }
        else {
LAB_01070fc4:
          lVar46 = FT_Hypot(lVar48,lVar35);
          uVar19 = FT_DivFix(lVar48,lVar46 << 2);
          *(undefined2 *)(param_1 + 0x21a) = uVar19;
          uVar19 = FT_DivFix(lVar35,lVar46 << 2);
          *(undefined2 *)(param_1 + 0x21c) = uVar19;
        }
        lVar46 = (long)(short)*puVar3;
        if (lVar46 == 0x4000) {
          sVar52 = (short)*local_c8;
          lVar35 = (long)sVar52;
        }
        else if ((long)*(short *)(param_1 + 0x220) == 0x4000) {
          lVar35 = (long)*(short *)(param_1 + 0x21c);
          sVar52 = *(short *)(param_1 + 0x21a);
        }
        else {
          sVar52 = *(short *)(param_1 + 0x21a);
          lVar35 = sVar52 * lVar46 +
                   (long)*(short *)(param_1 + 0x21c) * (long)*(short *)(param_1 + 0x220) >> 0xe;
        }
        goto LAB_01070c80;
      }
LAB_0106ea7c:
      cVar18 = *(char *)(param_1 + 0x3c1);
      goto joined_r0x0106ea90;
    case 0x88:
      uVar45 = 0x23;
      if ((*puVar4 & 1) == 0) {
        uVar45 = 0;
      }
      uVar66 = (uint)*puVar4;
      if (((uVar66 >> 1 & 1) != 0) && (*(char *)(param_1 + 0x209) != '\0')) {
        uVar45 = uVar45 | 0x80;
      }
      if (((uVar66 >> 2 & 1) != 0) && (*(char *)(param_1 + 0x20a) != '\0')) {
        uVar45 = uVar45 | 0x100;
      }
                    /* catch() { ... } // from try @ 01070930 with catch @ 01070a3c */
      if (((uVar66 >> 5 & 1) != 0) && (*(char *)(param_1 + 0x420) != '\0')) {
        uVar45 = uVar45 | 0x1000;
      }
LAB_01070a4c:
      *puVar4 = uVar45;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x89:
      puVar47 = *(undefined4 **)(param_1 + 0x2d8);
      uVar66 = *(uint *)(param_1 + 0x2d0);
      puVar51 = puVar47 + (ulong)uVar66 * 10;
      if (uVar66 != 0) {
        do {
          if (*puVar4 == (ulong)(uint)puVar47[6]) break;
          puVar47 = puVar47 + 10;
        } while (puVar47 < puVar51);
      }
      if (puVar47 == puVar51) {
        if (uVar66 < *(uint *)(param_1 + 0x2d4)) {
          *(uint *)(param_1 + 0x2d0) = uVar66 + 1;
          goto LAB_0107016c;
        }
LAB_01070178:
        iVar63 = 0x8d;
        *(undefined4 *)(param_1 + 0x18) = 0x8d;
      }
      else {
LAB_0107016c:
        if (0xff < *puVar4) goto LAB_01070178;
        puVar47[6] = (uint)*puVar4 & 0xff;
                    /* try { // try from 01070b34 to 01170b43 has its CatchHandler @ 01070b94 */
        lVar46 = *(long *)(param_1 + 0x280);
        *(long *)(puVar47 + 2) = lVar46 + 1;
                    /* try { // try from 01070b44 to 01170bdf has its CatchHandler @ 01070ae0 */
        uVar26 = *(undefined4 *)(param_1 + 0x270);
        *(undefined1 *)(puVar47 + 7) = 1;
        *puVar47 = uVar26;
        if ((ulong)*(uint *)(param_1 + 0x2e4) < *puVar4) {
          *(uint *)(param_1 + 0x2e4) = (uint)*puVar4 & 0xff;
        }
        lVar48 = *(long *)(param_1 + 0x288);
        do {
          lVar46 = lVar46 + iVar36;
          *(long *)(param_1 + 0x280) = lVar46;
          if (lVar48 <= lVar46) {
LAB_01070f88:
                    /* try { // try from 01070f88 to 01171077 has its CatchHandler @ 01070d44 */
            iVar63 = 0x83;
            *(undefined4 *)(param_1 + 0x18) = 0x83;
            goto LAB_01071748;
          }
          bVar57 = *(byte *)(lVar35 + lVar46);
          iVar36 = (int)(char)(&DAT_0145cfd8)[bVar57];
          *(byte *)(param_1 + 0x290) = bVar57;
          *(int *)(param_1 + 0x294) = iVar36;
                    /* catch() { ... } // from try @ 01070b34 with catch @ 01070b94 */
          if (((ulong)bVar57 | 1) == 0x41) {
            if (lVar48 <= lVar46 + 1) goto LAB_01070f88;
            iVar36 = 2 - (uint)*(byte *)(lVar35 + lVar46 + 1) * iVar36;
            *(int *)(param_1 + 0x294) = iVar36;
          }
          if (lVar48 < lVar46 + iVar36) goto LAB_01070f88;
                    /* catch() { ... } // from try @ 01070b1c with catch @ 01070bc4 */
          iVar63 = 0x89;
          if (bVar57 == 0x89) break;
          if (bVar57 == 0x2d) goto switchD_0106e1f0_caseD_21;
        } while (bVar57 != 0x2c);
        *(undefined4 *)(param_1 + 0x18) = 0x89;
      }
      goto LAB_01071748;
    case 0x8a:
      uVar54 = puVar4[2];
      uVar45 = puVar4[1];
      puVar4[2] = *puVar4;
      goto LAB_01070194;
    case 0x8b:
                    /* try { // try from 010701ac to 011701b3 has its CatchHandler @ 010701c0 */
      uVar45 = puVar4[1];
      if ((long)*puVar4 < (long)puVar4[1]) goto LAB_01070a4c;
      goto switchD_0106e1f0_caseD_21;
    case 0x8c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01070060 with catch @ 010701b4
                       try { // try from 010701b4 to 011702f3 has its CatchHandler @ 0106fe60 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ffec with catch @ 010701b8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106ff74 with catch @ 010701bc
                        */
      uVar45 = puVar4[1];
      if ((long)puVar4[1] < (long)*puVar4) goto LAB_01070a4c;
switchD_0106e1f0_caseD_21:
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x8d:
      if ((long)*puVar4 < 0) goto switchD_0106e1f0_caseD_21;
      *(int *)(param_1 + 0x260) = (int)*puVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01070068 with catch @ 010701d0
                        */
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    case 0x8e:
      if (1 < puVar4[1] - 1) goto LAB_010701ec;
      bVar24 = (byte)puVar4[1];
      bVar57 = 0;
      if (*puVar4 != 0) {
        bVar57 = bVar24;
      }
      *(byte *)(param_1 + 0x25c) = *(byte *)(param_1 + 0x25c) & (bVar24 ^ 0xff) | bVar57;
      iVar63 = *(int *)(param_1 + 0x18);
      break;
    default:
      if (uVar66 < 0xe0) {
        if (0xbf < uVar66) {
          uVar54 = *puVar4;
          uVar66 = (uint)uVar54 & 0xffff;
          if ((uVar66 < *(ushort *)(param_1 + 0x94)) &&
             (uVar43 = *(ushort *)(param_1 + 0x210), uVar43 < *(ushort *)(param_1 + 0x54))) {
            uVar45 = *(ulong *)(param_1 + 0x230);
            if ((*(short *)(param_1 + 0x264) == 0) || (*(short *)(param_1 + 0x266) == 0)) {
              plVar41 = (long *)(*(long *)(param_1 + 0x98) + (uVar54 & 0xffff) * 0x10);
              plVar6 = (long *)(*(long *)(param_1 + 0x58) + (ulong)uVar43 * 0x10);
                    /* try { // try from 01071a6c to 01171a73 has its CatchHandler @ 01071b2c */
                    /* try { // try from 01071a74 to 01171b1b has its CatchHandler @ 010719b0 */
              lVar46 = (**(code **)(param_1 + 0x3e0))
                                 (param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
            }
            else {
              lVar46 = *(long *)(param_1 + 0xa8);
                    /* try { // try from 010708ec to 0117091b has its CatchHandler @ 010708ec
                       catch() { ... } // from try @ 010708ec with catch @ 010708ec
                       catch() { ... } // from try @ 010709c0 with catch @ 010708ec */
              plVar41 = (long *)(lVar46 + (uVar54 & 0xffff) * 0x10);
              plVar6 = (long *)(*(long *)(param_1 + 0x68) + (ulong)uVar43 * 0x10);
              if (*(long *)(param_1 + 400) == *(long *)(param_1 + 0x198)) {
                    /* try { // try from 0107091c to 0117092f has its CatchHandler @ 01070a5c */
                uVar44 = (**(code **)(param_1 + 0x3e0))
                                   (param_1,*plVar41 - *plVar6,
                                    *(long *)(lVar46 + (uVar54 & 0xffff) * 0x10 + 8) - plVar6[1]);
                    /* try { // try from 01070930 to 01170943 has its CatchHandler @ 01070a3c */
                lVar46 = FT_MulFix(uVar44,*(undefined8 *)(param_1 + 400));
              }
              else {
                    /* try { // try from 01071fd0 to 01171ff3 has its CatchHandler @ 01072364 */
                uVar44 = FT_MulFix(*plVar41 - *plVar6);
                uVar22 = FT_MulFix(*(long *)(lVar46 + (uVar54 & 0xffff) * 0x10 + 8) - plVar6[1],
                                   *(undefined8 *)(param_1 + 0x198));
                    /* try { // try from 01071ff8 to 01172003 has its CatchHandler @ 010722a8 */
                lVar46 = (**(code **)(param_1 + 0x3e0))(param_1,uVar44,uVar22);
              }
            }
            lVar34 = *(long *)(param_1 + 0x250);
            lVar48 = lVar46 - lVar34;
            lVar35 = -lVar48;
            if (-1 < lVar48) {
              lVar35 = lVar48;
            }
            lVar48 = lVar46;
            if ((lVar35 < *(long *)(param_1 + 0x248)) && (lVar48 = -lVar34, -1 < lVar46)) {
              lVar48 = lVar34;
            }
            bVar57 = *(byte *)(param_1 + 0x290);
            if ((bVar57 >> 2 & 1) == 0) {
                    /* try { // try from 0107203c to 01172047 has its CatchHandler @ 01072284 */
              lVar46 = *(long *)(param_1 + (ulong)(bVar57 & 3) * 8 + 0x1e8);
              if (lVar48 < 0) {
                uVar20 = lVar48 - lVar46;
                uVar20 = uVar20 & (long)uVar20 >> 0x3f;
              }
              else {
                uVar20 = lVar46 + lVar48;
                uVar20 = uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU);
              }
            }
            else {
              uVar20 = (**(code **)(param_1 + 0x3d0))
                                 (param_1,lVar48,
                                  *(undefined8 *)(param_1 + (ulong)(bVar57 & 3) * 8 + 0x1e8));
              bVar57 = *(byte *)(param_1 + 0x290);
            }
            uVar33 = uVar20;
            if ((bVar57 >> 3 & 1) != 0) {
              if (lVar48 < 0) {
                if ((long)-uVar45 < (long)uVar20) {
                  uVar33 = -uVar45;
                }
              }
              else {
                    /* try { // try from 010720d8 to 01172133 has its CatchHandler @ 01072414 */
                uVar33 = uVar45;
                if ((long)uVar45 <= (long)uVar20) {
                  uVar33 = uVar20;
                }
              }
            }
            plVar41 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)uVar66 * 0x10);
            plVar6 = (long *)(*(long *)(param_1 + 0x60) + (ulong)*(ushort *)(param_1 + 0x210) * 0x10
                             );
            lVar46 = (**(code **)(param_1 + 0x3d8))
                               (param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
                    /* try { // try from 01072184 to 01172187 has its CatchHandler @ 010722d0 */
            (**(code **)(param_1 + 0x3f0))(param_1,local_d0,uVar54 & 0xffffffff,uVar33 - lVar46);
            uVar45 = (ulong)*(byte *)(param_1 + 0x290);
                    /* try { // try from 010721a0 to 01172247 has its CatchHandler @ 01072418 */
          }
          else if (*(char *)(param_1 + 0x3c1) != '\0') {
            *(undefined4 *)(param_1 + 0x18) = 0x86;
          }
          *(short *)(param_1 + 0x214) = (short)uVar54;
          *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(param_1 + 0x210);
          if (((uint)uVar45 >> 4 & 1) == 0) goto switchD_0106e1f0_caseD_21;
          *(short *)(param_1 + 0x210) = (short)uVar54;
          iVar63 = *(int *)(param_1 + 0x18);
          break;
        }
        if (uVar66 < 0xb8) {
          if (uVar66 < 0xb0) goto switchD_0106e1f0_caseD_28;
          uVar66 = uVar66 + 0xff51 & 0xffff;
          if (uVar66 < (uVar61 + 1) - *(int *)(param_1 + 0x20)) {
            if (uVar66 != 0) {
              uVar45 = 1;
              do {
                iVar36 = (int)uVar45;
                lVar46 = *(long *)(param_1 + 0x280) + uVar45;
                uVar50 = iVar36 + 1U & 0xffff;
                uVar45 = (ulong)uVar50;
                puVar4[iVar36 + -1] = (ulong)*(byte *)(lVar35 + lVar46);
              } while (uVar50 <= uVar66);
            }
            goto switchD_0106e1f0_caseD_21;
          }
          goto LAB_010722b8;
        }
        uVar66 = (uint)(ushort)(uVar43 - 0xb7);
        if ((uVar61 + 1) - *(int *)(param_1 + 0x20) <= uVar66) goto LAB_010722b8;
        lVar46 = *(long *)(param_1 + 0x280) + 1;
        *(long *)(param_1 + 0x280) = lVar46;
        if (uVar66 != 0) {
          uVar50 = 0;
          while( true ) {
            *(long *)(param_1 + 0x280) = lVar46 + 2;
            uVar61 = uVar50 & 0xffff;
            uVar50 = uVar50 + 1;
            puVar4[uVar61] =
                 (long)CONCAT11(*(undefined1 *)(lVar35 + lVar46),
                                ((undefined1 *)(lVar35 + lVar46))[1]);
            if (uVar66 <= (uVar50 & 0xffff)) break;
            lVar46 = *(long *)(param_1 + 0x280);
          }
        }
        goto LAB_0106ffb8;
      }
      uVar54 = *puVar4;
                    /* try { // try from 0106eb24 to 0116eb27 has its CatchHandler @ 0106eb54 */
                    /* try { // try from 0106eb28 to 0116eb2b has its CatchHandler @ 0106eb44 */
      if (((((uint)uVar54 & 0xffff) < (uint)*(ushort *)(param_1 + 0x94)) &&
          (puVar4[1] + 1 < *(long *)(param_1 + 0x2a0) + 1U)) &&
         (*(ushort *)(param_1 + 0x210) < *(ushort *)(param_1 + 0x54))) {
                    /* try { // try from 0106eb2c to 0116eb2f has its CatchHandler @ 0106eb34 */
        uVar45 = *(ulong *)(param_1 + 0x230);
                    /* catch() { ... } // from try @ 0106e900 with catch @ 0106eb30
                       try { // try from 0106eb30 to 0116ed27 has its CatchHandler @ 0106e6c0 */
                    /* catch() { ... } // from try @ 0106e89c with catch @ 0106eb34
                       catch() { ... } // from try @ 0106eb2c with catch @ 0106eb34 */
        lVar46 = *(long *)(param_1 + 0x240);
        if (puVar4[1] == 0xffffffffffffffff) {
          uVar20 = 0;
        }
        else {
                    /* catch() { ... } // from try @ 0106e810 with catch @ 0106eb44
                       catch() { ... } // from try @ 0106eb28 with catch @ 0106eb44 */
          uVar20 = (**(code **)(param_1 + 0x408))(param_1);
                    /* catch() { ... } // from try @ 0106e784 with catch @ 0106eb54
                       catch() { ... } // from try @ 0106eb24 with catch @ 0106eb54 */
        }
        uVar33 = *(ulong *)(param_1 + 0x250);
        lVar48 = uVar20 - uVar33;
        lVar35 = -lVar48;
        if (-1 < lVar48) {
          lVar35 = lVar48;
        }
        uVar37 = uVar20;
        if ((lVar35 < *(long *)(param_1 + 0x248)) && (uVar37 = -uVar33, -1 < (long)uVar20)) {
          uVar37 = uVar33;
        }
        if (*(short *)(param_1 + 0x266) == 0) {
          uVar50 = (uint)uVar37;
          uVar66 = -uVar50;
          if (-1 < (int)uVar50) {
            uVar66 = uVar50;
          }
          bVar57 = (byte)(uVar37 >> 0x18);
          iVar36 = MP_INT_ABS((int)(short)*puVar3);
          iVar63 = MP_INT_ABS((int)*(short *)(param_1 + 0x220));
          uVar50 = iVar36 * (uVar66 >> 0x10);
          uVar61 = iVar63 * (uVar66 >> 0x10);
          uVar62 = uVar50 * 0x10000 | 0x2000;
          uVar64 = uVar61 * 0x10000 | 0x2000;
          uVar65 = uVar62 + iVar36 * (uVar66 & 0xffff);
          uVar66 = uVar64 + iVar63 * (uVar66 & 0xffff);
          plVar41 = (long *)(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x210) * 0x10)
          ;
          lVar34 = *plVar41;
          iVar36 = ((uVar50 >> 0x10) + (uint)(uVar65 < uVar62)) * 0x40000;
          iVar63 = ((uVar61 >> 0x10) + (uint)(uVar66 < uVar64)) * 0x40000;
          lVar35 = *(long *)(param_1 + 0x98);
          iVar36 = CONCAT13((char)((uint)iVar36 >> 0x18),
                            CONCAT12((byte)((uint)iVar36 >> 0x10) | (byte)(uVar65 >> 0x1e),
                                     (short)(uVar65 >> 0xe)));
          uVar20 = CONCAT17((char)((uint)iVar63 >> 0x18),
                            CONCAT16((byte)((uint)iVar63 >> 0x10) | (byte)(uVar66 >> 0x1e),
                                     CONCAT15((char)((uVar66 >> 0xe) >> 8),
                                              CONCAT14((char)(uVar66 >> 0xe),iVar36))));
          iVar36 = -iVar36;
          iVar63 = -(int)(uVar20 >> 0x20);
          uVar58 = (undefined1)((uint)iVar63 >> 8);
          uVar59 = (undefined1)((uint)iVar63 >> 0x10);
          uVar60 = (undefined1)((uint)iVar63 >> 0x18);
          uVar20 = CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14((char)iVar63,iVar36))))
                   ^ (CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14((char)iVar63,iVar36))
                                              )) ^ uVar20) &
                     CONCAT44(-(uint)(-1 < (char)(bVar57 ^ (byte)(*(short *)(param_1 + 0x220) >> 0xf
                                                                 ))),
                              -(uint)(-1 < (char)(bVar57 ^ (byte)((short)*puVar3 >> 0xf))));
          lVar48 = (uVar54 & 0xffff) * 0x10;
          plVar6 = (long *)(lVar35 + lVar48);
          plVar6[1] = plVar41[1] + (long)(int)(uVar20 >> 0x20);
          *plVar6 = lVar34 + (int)uVar20;
          puVar31 = (undefined8 *)(lVar35 + lVar48);
          uVar44 = *puVar31;
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0xa0) + lVar48);
          puVar11[1] = puVar31[1];
          *puVar11 = uVar44;
        }
        lVar35 = (uVar54 & 0xffff) * 0x10;
        plVar41 = (long *)(*(long *)(param_1 + 0x98) + lVar35);
        plVar6 = (long *)(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x210) * 0x10);
        uVar33 = (**(code **)(param_1 + 0x3e0))(param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
        plVar41 = (long *)(*(long *)(param_1 + 0xa0) + lVar35);
        plVar6 = (long *)(*(long *)(param_1 + 0x60) + (ulong)*(ushort *)(param_1 + 0x210) * 0x10);
        lVar35 = (**(code **)(param_1 + 0x3d8))(param_1,*plVar41 - *plVar6,plVar41[1] - plVar6[1]);
        bVar57 = *(byte *)(param_1 + 0x290);
        uVar66 = (uint)bVar57;
                    /* try { // try from 01071e68 to 01171e73 has its CatchHandler @ 010722e4 */
        uVar20 = -uVar37;
        if (*(char *)(param_1 + 0x23c) == '\0' || -1 < (long)(uVar33 ^ uVar37)) {
          uVar20 = uVar37;
        }
        if ((bVar57 >> 2 & 1) == 0) {
                    /* try { // try from 01071e80 to 01171e8b has its CatchHandler @ 0107228c */
          lVar46 = *(long *)(param_1 + (ulong)(bVar57 & 3) * 8 + 0x1e8);
          if ((long)uVar20 < 0) {
            uVar20 = uVar20 - lVar46;
            uVar20 = uVar20 & (long)uVar20 >> 0x3f;
          }
          else {
            uVar20 = lVar46 + uVar20;
            uVar20 = uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU);
          }
        }
        else {
          uVar37 = uVar20;
          if (*(short *)(param_1 + 0x264) == *(short *)(param_1 + 0x266)) {
            lVar34 = uVar20 - uVar33;
            lVar48 = -lVar34;
            if (-1 < lVar34) {
              lVar48 = lVar34;
            }
            uVar37 = uVar33;
            if (lVar48 <= lVar46) {
              uVar37 = uVar20;
            }
          }
                    /* try { // try from 01071ed8 to 01171ee3 has its CatchHandler @ 01072324 */
          uVar20 = (**(code **)(param_1 + 0x3d0))
                             (param_1,uVar37,
                              *(undefined8 *)(param_1 + ((ulong)bVar57 & 3) * 8 + 0x1e8));
          uVar66 = (uint)*(byte *)(param_1 + 0x290);
        }
        uVar37 = uVar20;
        if ((uVar66 >> 3 & 1) != 0) {
          if ((long)uVar33 < 0) {
            if ((long)-uVar45 < (long)uVar20) {
              uVar37 = -uVar45;
            }
          }
          else {
            uVar37 = uVar45;
            if ((long)uVar45 <= (long)uVar20) {
              uVar37 = uVar20;
            }
          }
        }
        (**(code **)(param_1 + 0x3f0))(param_1,local_d0,uVar54 & 0xffffffff,uVar37 - lVar35);
        uVar45 = (ulong)*(byte *)(param_1 + 0x290);
      }
      else if (*(char *)(param_1 + 0x3c1) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0x86;
      }
      *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(param_1 + 0x210);
      if (((uint)uVar45 >> 4 & 1) != 0) {
        *(short *)(param_1 + 0x210) = (short)uVar54;
      }
                    /* try { // try from 01070b1c to 01170b2b has its CatchHandler @ 01070bc4 */
      *(short *)(param_1 + 0x214) = (short)uVar54;
      iVar63 = *(int *)(param_1 + 0x18);
    }
    if (iVar63 != 0) {
LAB_01071748:
                    /* try { // try from 0107174c to 0117175b has its CatchHandler @ 01071930 */
      if (iVar63 != 0x80) goto LAB_010722d4;
      if (*(uint *)(param_1 + 0x2d0) == 0) {
LAB_010722b0:
                    /* catch() { ... } // from try @ 01071ef0 with catch @ 010722b0 */
        iVar63 = 0x80;
      }
      else {
        piVar32 = *(int **)(param_1 + 0x2d8);
        piVar30 = piVar32 + (ulong)*(uint *)(param_1 + 0x2d0) * 10;
                    /* try { // try from 01071778 to 0117177b has its CatchHandler @ 01071908 */
        while (((char)piVar32[7] == '\0' || (*(char *)(param_1 + 0x290) != (char)piVar32[6]))) {
          piVar32 = piVar32 + 10;
          if (piVar30 <= piVar32) goto LAB_010722b0;
        }
        if (*(int *)(param_1 + 0x2e8) < *(int *)(param_1 + 0x2ec)) {
          puVar47 = (undefined4 *)
                    (*(long *)(param_1 + 0x2f0) + (long)*(int *)(param_1 + 0x2e8) * 0x20);
          *puVar47 = *(undefined4 *)(param_1 + 0x270);
          lVar46 = *(long *)(param_1 + 0x280);
          *(int **)(puVar47 + 6) = piVar32;
          *(long *)(puVar47 + 2) = lVar46 + 1;
          *(undefined8 *)(puVar47 + 4) = 1;
          iVar36 = *piVar32;
          uVar66 = iVar36 - 1;
          if (uVar66 < 3) {
                    /* try { // try from 010717cc to 011717d3 has its CatchHandler @ 010718dc */
            lVar46 = *(long *)(param_1 + (long)(int)uVar66 * 0x10 + 0x300);
                    /* try { // try from 010717d4 to 011718b7 has its CatchHandler @ 01071434 */
            if (lVar46 != 0) {
              lVar35 = param_1 + (long)(int)uVar66 * 0x10;
              uVar45 = *(ulong *)(piVar32 + 2);
              if (uVar45 <= *(ulong *)(lVar35 + 0x308)) {
                *(long *)(param_1 + 0x278) = lVar46;
                uVar44 = *(undefined8 *)(lVar35 + 0x308);
                *(ulong *)(param_1 + 0x280) = uVar45;
                *(int *)(param_1 + 0x270) = iVar36;
                *(undefined8 *)(param_1 + 0x288) = uVar44;
                goto LAB_01071808;
              }
              goto LAB_010722cc;
            }
LAB_01072340:
            iVar63 = 0x8a;
          }
          else {
LAB_01072338:
            iVar63 = 0x84;
          }
        }
        else {
LAB_01072300:
          iVar63 = 0x86;
        }
      }
switchD_0106e1f0_caseD_4f:
                    /* catch() { ... } // from try @ 01072184 with catch @ 010722d0 */
      *(int *)(param_1 + 0x18) = iVar63;
LAB_010722d4:
                    /* catch() { ... } // from try @ 01071f3c with catch @ 010722d4 */
      if (*(char *)(param_1 + 0x358) != '\0') {
        return iVar63;
      }
                    /* catch() { ... } // from try @ 01071e68 with catch @ 010722e4 */
      if (*(int *)(param_1 + 0x270) == 3) {
        *(undefined8 *)(*(long *)(param_1 + 8) + 0x210) = 0xffffffffffffffff;
        return iVar63;
      }
      return iVar63;
    }
                    /* catch() { ... } // from try @ 0107091c with catch @ 01070a5c */
    *(ulong *)(param_1 + 0x20) = (ulong)*(uint *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x298) != '\0') {
      *(long *)(param_1 + 0x280) = *(long *)(param_1 + 0x280) + (long)*(int *)(param_1 + 0x294);
    }
    if (999999 < lVar27) {
      return 0x8b;
    }
    lVar27 = lVar27 + 1;
LAB_01071808:
    lVar46 = *(long *)(param_1 + 0x280);
    if (*(long *)(param_1 + 0x288) <= lVar46) {
      if (*(int *)(param_1 + 0x2e8) < 1) {
        return 0;
      }
LAB_010722cc:
                    /* catch() { ... } // from try @ 010720a8 with catch @ 010722cc */
      iVar63 = 0x83;
      goto switchD_0106e1f0_caseD_4f;
    }
    if (*(char *)(param_1 + 0x358) != '\0') {
                    /* catch() { ... } // from try @ 01071ed8 with catch @ 01072324 */
      return 0;
    }
  } while( true );
LAB_01070618:
  while( true ) {
    uVar64 = uVar61;
    uVar61 = uVar64 + 1;
    iVar63 = (int)uVar45;
    if (uVar50 < uVar61) break;
                    /* try { // try from 01070630 to 01170637 has its CatchHandler @ 0107086c */
    if ((*(byte *)(*(long *)(param_1 + 0x130) + (ulong)uVar61) & bVar57) != 0) {
      FUN_010773cc(&local_b0,iVar63 + 1,uVar64,uVar45,uVar61);
                    /* try { // try from 01070638 to 0117068b has its CatchHandler @ 01070340 */
      uVar45 = (ulong)uVar61;
    }
  }
  if ((uVar66 - iVar63) + iVar36 != 0) {
    FUN_010773cc(&local_b0,iVar63 + 1U & 0xffff,uVar50,uVar45,uVar54);
    if (uVar65 != 0) {
      FUN_010773cc(&local_b0,uVar66,uVar66 + iVar36 + -1,uVar45,uVar65);
    }
    goto LAB_010706c0;
  }
  lVar48 = *(long *)(lVar46 + uVar54 * 0x10) - *(long *)(lVar35 + uVar54 * 0x10);
  if (lVar48 == 0) goto LAB_010706c0;
  if (uVar66 < uVar65) {
                    /* try { // try from 01070700 to 01170707 has its CatchHandler @ 0107087c */
    uVar45 = (ulong)uVar66;
    uVar54 = uVar54 - uVar45;
                    /* try { // try from 01070708 to 01170807 has its CatchHandler @ 01070340 */
    if ((1 < uVar54) && (uVar20 = uVar54 & 0xfffffffffffffffe, uVar20 != 0)) {
      uVar33 = uVar62 - uVar45 & 0xfffffffffffffffe;
      plVar41 = (long *)(lVar46 + 0x10 + uVar45 * 0x10);
      do {
        uVar33 = uVar33 - 2;
        plVar41[-2] = plVar41[-2] + lVar48;
        *plVar41 = *plVar41 + lVar48;
        plVar41 = plVar41 + 4;
      } while (uVar33 != 0);
      uVar45 = uVar20 + uVar45;
      if (uVar54 == uVar20) goto LAB_01070790;
    }
    lVar34 = uVar62 - uVar45;
    plVar41 = (long *)(lVar46 + uVar45 * 0x10);
    do {
      lVar34 = lVar34 + -1;
      *plVar41 = *plVar41 + lVar48;
      plVar41 = plVar41 + 2;
    } while (lVar34 != 0);
  }
LAB_01070790:
  uVar66 = uVar66 + iVar36;
  while (uVar66 = uVar66 + 1, uVar66 <= uVar50) {
    *(long *)(lVar46 + (ulong)uVar66 * 0x10) = *(long *)(lVar46 + (ulong)uVar66 * 0x10) + lVar48;
  }
LAB_010706c0:
  uVar66 = uVar61;
  sVar52 = sVar52 + 1;
  if (*(short *)(param_1 + 0x116) <= sVar52) goto LAB_01071270;
  uVar43 = *(ushort *)(param_1 + 0x114);
  goto LAB_01070544;
}

