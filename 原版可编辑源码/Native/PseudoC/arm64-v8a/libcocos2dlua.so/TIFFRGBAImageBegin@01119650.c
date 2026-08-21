
undefined8 TIFFRGBAImageBegin(long *param_1,long param_2,undefined4 param_3,char *param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  float *pfVar26;
  int iVar27;
  void *pvVar28;
  undefined8 uVar29;
  char *pcVar30;
  char *pcVar31;
  ushort uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  code *pcVar36;
  long lVar37;
  uint uVar38;
  ulong __size;
  size_t __n;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  int iVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  int iVar178;
  int iVar179;
  int iVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  int iVar185;
  int iVar186;
  int iVar187;
  int iVar188;
  int iVar189;
  int iVar190;
  int iVar191;
  int iVar192;
  int iVar193;
  int iVar194;
  float fVar195;
  undefined8 uVar196;
  undefined8 uVar197;
  long *local_150;
  long *local_130;
  long *local_110;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  ushort local_cc [2];
  short local_c8 [2];
  ushort local_c4 [2];
  ushort *local_c0;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  ushort local_a8;
  undefined6 uStack_a6;
  
  puVar1 = (ushort *)((long)param_1 + 0x1c);
  param_1[0x11] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)((long)param_1 + 0x22) = 4;
  *param_1 = param_2;
  TIFFGetFieldDefaulted(param_2,0x102,puVar1);
  if ((0x10 < *(ushort *)((long)param_1 + 0x1c)) ||
     ((1 << (ulong)(*(ushort *)((long)param_1 + 0x1c) & 0x1f) & 0x10116U) == 0)) {
    sprintf(param_4,"Sorry, can not handle images with %d-bit samples");
    goto LAB_01121e84;
  }
  puVar2 = (ushort *)((long)param_1 + 0x1e);
  *(undefined4 *)(param_1 + 2) = 0;
  TIFFGetFieldDefaulted(param_2,0x115,puVar2);
  TIFFGetFieldDefaulted(param_2,0x152,local_c4,&local_c0);
  if (local_c4[0] != 0) {
    uVar32 = *local_c0;
    uVar34 = (uint)uVar32;
    if (1 < uVar32 - 1) {
      if ((uVar32 != 0) || (*puVar2 < 4)) goto LAB_0111974c;
      uVar34 = 1;
    }
    *(uint *)(param_1 + 2) = uVar34;
  }
LAB_0111974c:
  puVar3 = (ushort *)((long)param_1 + 0x24);
  iVar27 = TIFFGetField(param_2,0x106,puVar3);
  if (iVar27 == 0) {
    *puVar3 = 0;
  }
  uVar38 = (uint)local_c4[0];
  uVar34 = (uint)*puVar2;
  if (local_c4[0] == 0) {
    if (*puVar2 == 4) {
      if (*puVar3 == 2) {
        *(undefined4 *)(param_1 + 2) = 1;
        local_c4[0] = 1;
      }
      uVar38 = (uint)(*puVar3 == 2);
      uVar34 = 4;
    }
    else {
      uVar38 = 0;
    }
  }
  uVar34 = uVar34 - uVar38;
  TIFFGetFieldDefaulted(param_2,0x103,local_cc);
  TIFFGetFieldDefaulted(param_2,0x11c,local_c8);
  iVar27 = TIFFGetField(param_2,0x106,puVar3);
  if (iVar27 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011198c4 with catch @ 01119868
                       catch(type#1 @ 00000000) { ... } // from try @ 0111993c with catch @ 01119868
                       catch(type#1 @ 00000000) { ... } // from try @ 011199a4 with catch @ 01119868
                        */
    if (uVar34 == 3) {
      uVar32 = 2;
      *puVar3 = 2;
    }
    else {
      if (uVar34 != 1) {
        sprintf(param_4,"Missing needed %s tag","PhotometricInterpretation");
        goto LAB_01121e84;
      }
      TIFFGetField(param_2,0x103,&local_b4);
      bVar25 = ((uint)local_b4 & 0xffff) != 0x8003 && 2 < ((uint)local_b4 & 0xffff) - 2;
      uVar32 = (ushort)bVar25;
      *puVar3 = (ushort)bVar25;
    }
  }
  else {
    uVar32 = *puVar3;
  }
  switch(uVar32) {
  case 0:
  case 1:
switchD_01119818_caseD_0:
    if (((local_c8[0] == 1) && (*puVar2 != 1)) && (*puVar1 < 8)) {
      sprintf(param_4,
              "Sorry, can not handle contiguous data with %s=%d, and %s=%d and Bits/Sample=%d",
              "PhotometricInterpretation",(ulong)*puVar3,"Samples/pixel");
      goto LAB_01121e84;
    }
    break;
  case 2:
    if ((int)uVar34 < 3) {
      sprintf(param_4,"Sorry, can not handle RGB image with %s=%d","Color channels",(ulong)uVar34);
      goto LAB_01121e84;
    }
    break;
  case 3:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011198bc with catch @ 0111997c
                        */
    iVar27 = TIFFGetField(param_2,0x140,&local_d8,&local_e0,&local_e8);
    if (iVar27 == 0) {
      pcVar30 = "Missing required \"Colormap\" tag";
    }
    else {
      uVar33 = 1L << ((ulong)*(ushort *)((long)param_1 + 0x1c) & 0x3f);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111992c with catch @ 01119998
                        */
      __size = -(uVar33 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar33 & 0xffffffff) << 1;
                    /* try { // try from 0111999c to 012199a3 has its CatchHandler @ 011199ac */
      pvVar28 = _TIFFmalloc(__size);
                    /* try { // try from 011199a4 to 012199af has its CatchHandler @ 01119868 */
      param_1[5] = (long)pvVar28;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111999c with catch @ 011199ac
                        */
      pvVar28 = _TIFFmalloc(__size);
      param_1[6] = (long)pvVar28;
      pvVar28 = _TIFFmalloc(__size);
      param_1[7] = (long)pvVar28;
      if ((((void *)param_1[5] != (void *)0x0) && (pvVar28 != (void *)0x0)) && (param_1[6] != 0)) {
        __n = (size_t)((int)uVar33 << 1);
        _TIFFmemcpy((void *)param_1[5],local_d8,__n);
        _TIFFmemcpy((void *)param_1[6],local_e0,__n);
        _TIFFmemcpy((void *)param_1[7],local_e8,__n);
        goto switchD_01119818_caseD_0;
      }
      pcVar30 = "Out of memory for colormap copy";
    }
    uVar197 = *(undefined8 *)(pcVar30 + 8);
    uVar196 = *(undefined8 *)pcVar30;
    uVar29 = *(undefined8 *)(pcVar30 + 0x10);
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(pcVar30 + 0x18);
    *(undefined8 *)(param_4 + 0x10) = uVar29;
    goto LAB_01121e80;
  case 4:
  case 7:
switchD_01119818_caseD_4:
                    /* try { // try from 0111992c to 0121993b has its CatchHandler @ 01119998 */
                    /* try { // try from 0111993c to 0121999b has its CatchHandler @ 01119868 */
    sprintf(param_4,"Sorry, can not handle image with %s=%d","PhotometricInterpretation");
    goto LAB_01121e84;
  case 5:
    TIFFGetFieldDefaulted(param_2,0x14c,&local_b4);
    uVar33 = (ulong)local_b4._0_2_;
    if (local_b4._0_2_ == 1) {
      uVar33 = (ulong)*puVar2;
      if (3 < *puVar2) break;
      pcVar30 = "Sorry, can not handle separated image with %s=%d";
      pcVar31 = "Samples/pixel";
    }
    else {
      pcVar30 = "Sorry, can not handle separated image with %s=%d";
      pcVar31 = "InkSet";
    }
LAB_01119e9c:
    sprintf(param_4,pcVar30,pcVar31,uVar33);
    goto LAB_01121e84;
  case 6:
    if ((local_c8[0] == 1) && (local_cc[0] == 7)) {
      TIFFSetField(param_2,0x10002,1);
      *puVar3 = 2;
    }
    break;
  case 8:
    break;
  default:
    if (uVar32 == 0x804c) {
      if (local_cc[0] != 0x8774) {
                    /* try { // try from 01119e90 to 01219e97 has its CatchHandler @ 01119f28 */
        pcVar30 = "Sorry, LogL data must have %s=%d";
        pcVar31 = "Compression";
                    /* try { // try from 01119e98 to 01219ee7 has its CatchHandler @ 01119e50 */
        uVar33 = 0x8774;
        goto LAB_01119e9c;
      }
      TIFFSetField(param_2,0x10018,3);
      uVar32 = 1;
    }
    else {
                    /* try { // try from 011198bc to 012198c3 has its CatchHandler @ 0111997c */
                    /* try { // try from 011198c4 to 0121992b has its CatchHandler @ 01119868 */
      if (uVar32 != 0x804d) goto switchD_01119818_caseD_4;
      if (local_cc[0] >> 1 != 0x43ba) {
        sprintf(param_4,"Sorry, LogLuv data must have %s=%d or %d","Compression",0x8774,0x8775);
        goto LAB_01121e84;
      }
      if (local_c8[0] != 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119f48 with catch @ 01119f58
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119fb0 with catch @ 01119f5c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a024 with catch @ 01119f5c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a088 with catch @ 01119f5c
                        */
        sprintf(param_4,"Sorry, can not handle LogLuv images with %s=%d","Planarconfiguration");
        return 0;
      }
      TIFFSetField(param_2,0x10018,3);
      uVar32 = 2;
    }
    *puVar3 = uVar32;
    *puVar1 = 8;
  }
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  TIFFGetField(param_2,0x100,(long)param_1 + 0x14);
  TIFFGetField(param_2,0x101,param_1 + 3);
  TIFFGetFieldDefaulted(param_2,0x112,param_1 + 4);
  if (local_c8[0] == 2) {
    *(uint *)((long)param_1 + 0xc) = (uint)(*(ushort *)((long)param_1 + 0x1e) < 2);
    if (*(ushort *)((long)param_1 + 0x1e) < 2) goto LAB_01119b84;
    iVar27 = TIFFIsTiled(*param_1);
    uVar32 = *(ushort *)((long)param_1 + 0x24);
    pcVar36 = FUN_01126d4c;
    if (iVar27 == 0) {
      pcVar36 = FUN_01127320;
    }
    param_1[8] = (long)pcVar36;
    param_1[9] = 0;
    if (uVar32 < 3) {
      if (*puVar1 == 0x10) {
        lVar37 = param_1[2];
        if ((int)lVar37 == 1) {
          pvVar28 = _TIFFmalloc(0x10000);
          param_1[0x10] = (long)pvVar28;
          if (pvVar28 != (void *)0x0) {
            lVar37 = 0;
            do {
              iVar27 = (int)lVar37;
                    /* try { // try from 01119ee8 to 01219eef has its CatchHandler @ 01119f44 */
              puVar4 = (undefined1 *)((long)pvVar28 + lVar37);
                    /* try { // try from 01119ef0 to 01219f47 has its CatchHandler @ 01119e50 */
              lVar37 = lVar37 + 2;
              *puVar4 = (char)((ulong)(iVar27 + 0x80) * 0xff00ff01 >> 0x28);
              puVar4[1] = (char)((ulong)(iVar27 + 0x81) * 0xff00ff01 >> 0x28);
            } while (lVar37 != 0x10000);
            pcVar36 = FUN_01127ea4;
            goto LAB_01121d80;
          }
          lVar37 = *param_1;
          pcVar30 = "BuildMapBitdepth16To8";
LAB_01121d9c:
          TIFFErrorExt(*(undefined8 *)(lVar37 + 0x3b8),pcVar30,"Out of memory");
        }
        else {
          pvVar28 = _TIFFmalloc(0x10000);
          param_1[0x10] = (long)pvVar28;
          if (pvVar28 == (void *)0x0) {
            TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"BuildMapBitdepth16To8","Out of memory");
            bVar25 = false;
          }
          else {
            lVar35 = 0;
            do {
              iVar27 = (int)lVar35;
              puVar4 = (undefined1 *)((long)pvVar28 + lVar35);
              lVar35 = lVar35 + 2;
                    /* try { // try from 0111a018 to 0121a023 has its CatchHandler @ 0111a07c */
              *puVar4 = (char)((ulong)(iVar27 + 0x80) * 0xff00ff01 >> 0x28);
              puVar4[1] = (char)((ulong)(iVar27 + 0x81) * 0xff00ff01 >> 0x28);
            } while (lVar35 != 0x10000);
                    /* try { // try from 0111a024 to 0121a07f has its CatchHandler @ 01119f5c */
            bVar25 = true;
          }
          if ((int)lVar37 == 2) {
            if (bVar25) {
              local_130 = _TIFFmalloc(0x10000);
              param_1[0xf] = (long)local_130;
              if (local_130 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119fa8 with catch @ 0111a060
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a018 with catch @ 0111a07c
                        */
                    /* try { // try from 0111a080 to 0121a087 has its CatchHandler @ 0111a090 */
                    /* try { // try from 0111a088 to 0121a093 has its CatchHandler @ 01119f5c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a080 with catch @ 0111a090
                        */
                iVar27 = 0;
                    /* try { // try from 0111a254 to 0121a28f has its CatchHandler @ 0111a254
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a254 with catch @ 0111a254
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a294 with catch @ 0111a254
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a2ec with catch @ 0111a254
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a334 with catch @ 0111a254
                        */
                    /* try { // try from 0111a290 to 0121a293 has its CatchHandler @ 0111a340 */
                    /* try { // try from 0111a294 to 0121a2df has its CatchHandler @ 0111a254 */
                    /* try { // try from 0111a2e0 to 0121a2eb has its CatchHandler @ 0111a328 */
                    /* try { // try from 0111a2ec to 0121a32b has its CatchHandler @ 0111a254 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a2e0 with catch @ 0111a328
                        */
                    /* try { // try from 0111a32c to 0121a333 has its CatchHandler @ 0111a33c */
                    /* try { // try from 0111a334 to 0121a353 has its CatchHandler @ 0111a254 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a32c with catch @ 0111a33c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a290 with catch @ 0111a340
                        */
                    /* try { // try from 0111a354 to 0121a39b has its CatchHandler @ 0111a354
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a354 with catch @ 0111a354
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a3a0 with catch @ 0111a354
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a414 with catch @ 0111a354
                       catch(type#1 @ 00000000) { ... } // from try @ 0111a460 with catch @ 0111a354
                        */
                do {
                    /* try { // try from 0111a39c to 0121a39f has its CatchHandler @ 0111a46c */
                    /* try { // try from 0111a3a0 to 0121a403 has its CatchHandler @ 0111a354 */
                    /* try { // try from 0111a404 to 0121a413 has its CatchHandler @ 0111a454 */
                    /* try { // try from 0111a414 to 0121a457 has its CatchHandler @ 0111a354 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a404 with catch @ 0111a454
                        */
                    /* try { // try from 0111a458 to 0121a45f has its CatchHandler @ 0111a468 */
                    /* try { // try from 0111a460 to 0121a47f has its CatchHandler @ 0111a354 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a458 with catch @ 0111a468
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a39c with catch @ 0111a46c
                        */
                  uVar19 = iVar27 * 0x44 + 0x7f;
                  iVar51 = iVar27 * 0x45 + 0x7f;
                  uVar20 = iVar27 * 0x46 + 0x7f;
                  iVar52 = iVar27 * 0x47 + 0x7f;
                  uVar34 = iVar27 * 0x54 + 0x7f;
                  iVar9 = iVar27 * 0x55 + 0x7f;
                  uVar10 = iVar27 * 0x56 + 0x7f;
                  iVar43 = iVar27 * 0x57 + 0x7f;
                  uVar38 = iVar27 * 0xa8 + 0x7f;
                  iVar18 = iVar27 * 0xa9 + 0x7f;
                  uVar11 = iVar27 * 0xaa + 0x7f;
                  iVar44 = iVar27 * 0xab + 0x7f;
                  uVar21 = iVar27 * 0xb8 + 0x7f;
                  iVar22 = iVar27 * 0xb9 + 0x7f;
                  uVar12 = iVar27 * 0xba + 0x7f;
                  iVar45 = iVar27 * 0xbb + 0x7f;
                  uVar23 = iVar27 * 0xbc + 0x7f;
                  iVar24 = iVar27 * 0xbd + 0x7f;
                  uVar13 = iVar27 * 0xbe + 0x7f;
                  iVar46 = iVar27 * 0xbf + 0x7f;
                  uVar5 = iVar27 * 200 + 0x7f;
                  iVar39 = iVar27 * 0xc9 + 0x7f;
                  uVar14 = iVar27 * 0xca + 0x7f;
                  iVar47 = iVar27 * 0xcb + 0x7f;
                  uVar6 = iVar27 * 0xcc + 0x7f;
                  iVar40 = iVar27 * 0xcd + 0x7f;
                  uVar15 = iVar27 * 0xce + 0x7f;
                  iVar48 = iVar27 * 0xcf + 0x7f;
                  uVar7 = iVar27 * 0xd8 + 0x7f;
                  iVar41 = iVar27 * 0xd9 + 0x7f;
                  uVar16 = iVar27 * 0xda + 0x7f;
                  iVar49 = iVar27 * 0xdb + 0x7f;
                  uVar8 = iVar27 * 0xdc + 0x7f;
                  iVar42 = iVar27 * 0xdd + 0x7f;
                  uVar17 = iVar27 * 0xde + 0x7f;
                  iVar50 = iVar27 * 0xdf + 0x7f;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a9a0 with catch @ 0111a968
                        */
                    /* try { // try from 0111a990 to 0121a99f has its CatchHandler @ 0111a9c8 */
                    /* try { // try from 0111a9a0 to 0121a9db has its CatchHandler @ 0111a968 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111a990 with catch @ 0111a9c8
                        */
                    /* catch() { ... } // from try @ 0111aa4c with catch @ 0111a9dc */
                    /* try { // try from 0111aa0c to 0121aa13 has its CatchHandler @ 0111aad8 */
                    /* try { // try from 0111aa48 to 0121aa4b has its CatchHandler @ 0111aaa4 */
                    /* try { // try from 0111aa4c to 0121aaf3 has its CatchHandler @ 0111a9dc */
                    /* catch() { ... } // from try @ 0111aa48 with catch @ 0111aaa4 */
                    /* catch() { ... } // from try @ 0111aa0c with catch @ 0111aad8 */
                    /* try { // try from 0111ab84 to 0121abcb has its CatchHandler @ 0111ab84
                       catch() { ... } // from try @ 0111ab84 with catch @ 0111ab84
                       catch() { ... } // from try @ 0111abd0 with catch @ 0111ab84 */
                    /* try { // try from 0111abcc to 0121abcf has its CatchHandler @ 0111abec */
                    /* try { // try from 0111abd0 to 0121ac23 has its CatchHandler @ 0111ab84 */
                    /* catch() { ... } // from try @ 0111abcc with catch @ 0111abec */
                  local_130[1] = CONCAT17((char)((iVar27 * 0xf + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0xe + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0xd + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0xc + 0x7fU) /
                                                                           0xff),
                                                                     CONCAT13((char)((iVar27 * 0xb +
                                                                                     0x7fU) / 0xff),
                                                                              CONCAT12((char)((
                                                  iVar27 * 10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 8 + 0x7fU) / 0xff)))))))
                                         );
                  *local_130 = (ulong)CONCAT16((char)((iVar27 * 7 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 6 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 5 + 0x7fU) / 0xff)
                                                                 ,CONCAT13((char)((iVar27 * 4 +
                                                                                  0x7fU) / 0xff),
                                                                           CONCAT12((char)((iVar27 *
                                                                                            3 + 
                                                  0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 2 + 0x7fU) / 0xff),
                                                           (char)((iVar27 + 0x7fU) / 0xff))))))) <<
                               8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111ac98 with catch @ 0111ac54
                        */
                    /* try { // try from 0111ac7c to 0121ac97 has its CatchHandler @ 0111adb4 */
                    /* try { // try from 0111ac98 to 0121ad13 has its CatchHandler @ 0111ac54 */
                  local_130[3] = CONCAT17((char)((iVar27 * 0x1f + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x1e + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x1d + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x1c + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x1b
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x1a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x19 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x18 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[2] = CONCAT17((char)((iVar27 * 0x17 + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x16 + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x15 + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x14 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x13
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x12 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x11 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x10 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[5] = CONCAT17((char)((iVar27 * 0x2f + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x2e + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x2d + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x2c + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x2b
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x2a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x29 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x28 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[4] = CONCAT17((char)((iVar27 * 0x27 + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x26 + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x25 + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x24 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x23
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x22 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x21 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x20 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[7] = CONCAT17((char)((iVar27 * 0x3f + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x3e + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x3d + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x3c + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x3b
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x3a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x39 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x38 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[6] = CONCAT17((char)((iVar27 * 0x37 + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x36 + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x35 + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x34 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x33
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x32 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x31 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x30 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[9] = CONCAT17((char)((iVar27 * 0x4f + 0x7fU) / 0xff),
                                          CONCAT16((char)((iVar27 * 0x4e + 0x7fU) / 0xff),
                                                   CONCAT15((char)((iVar27 * 0x4d + 0x7fU) / 0xff),
                                                            CONCAT14((char)((iVar27 * 0x4c + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT13((char)((iVar27 * 0x4b
                                                                                     + 0x7fU) / 0xff
                                                                                    ),CONCAT12((char
                                                  )((iVar27 * 0x4a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x49 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x48 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[8] = CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar52 >> 0x10),
                                                                 CONCAT24((short)iVar52,uVar20)) >>
                                                       0x20) / 0xff),
                                          CONCAT16((char)(uVar20 / 0xff),
                                                   CONCAT15((char)((uint)(CONCAT26((short)((uint)
                                                  iVar51 >> 0x10),CONCAT24((short)iVar51,uVar19)) >>
                                                  0x20) / 0xff),
                                                  CONCAT14((char)(uVar19 / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x43 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x42 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x41
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x40 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0xb] =
                       CONCAT17((char)((iVar27 * 0x5f + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x5e + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x5d + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x5c + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x5b + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x5a +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x59
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x58 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[10] =
                       CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar43 >> 0x18),
                                                       CONCAT16((char)((uint)iVar43 >> 0x10),
                                                                CONCAT15((char)((uint)iVar43 >> 8),
                                                                         CONCAT14((char)iVar43,
                                                                                  uVar10)))) >> 0x20
                                             ) / 0xff),
                                CONCAT16((char)(uVar10 / 0xff),
                                         CONCAT15((char)((uint)(CONCAT17((char)((uint)iVar9 >> 0x18)
                                                                         ,CONCAT16((char)((uint)
                                                  iVar9 >> 0x10),
                                                  CONCAT15((char)((uint)iVar9 >> 8),
                                                           CONCAT14((char)iVar9,uVar34)))) >> 0x20)
                                                  / 0xff),CONCAT14((char)(uVar34 / 0xff),
                                                                   CONCAT13((char)((iVar27 * 0x53 +
                                                                                   0x7fU) / 0xff),
                                                                            CONCAT12((char)((iVar27 
                                                  * 0x52 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x51 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x50 + 0x7fU) / 0xff))))
                                                  ))));
                  local_130[0xd] =
                       CONCAT17((char)((iVar27 * 0x6f + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x6e + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x6d + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x6c + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x6b + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x6a +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x69
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x68 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0xc] =
                       CONCAT17((char)((iVar27 * 0x67 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x66 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x65 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 100 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 99 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x62 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x61
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x60 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0xf] =
                       CONCAT17((char)((iVar27 * 0x7f + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x7e + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x7d + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x7c + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x7b + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x7a +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x79
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x78 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0xe] =
                       CONCAT17((char)((iVar27 * 0x77 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x76 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x75 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x74 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x73 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x72 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x71
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x70 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x11] =
                       CONCAT17((char)((iVar27 * 0x8f + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x8e + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x8d + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x8c + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x8b + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x8a +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x89
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x88 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x10] =
                       CONCAT17((char)((iVar27 * 0x87 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x86 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x85 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x84 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x83 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x82 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x81
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x80 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x13] =
                       CONCAT17((char)((iVar27 * 0x9f + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x9e + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x9d + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x9c + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x9b + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x9a +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x99
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x98 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x12] =
                       CONCAT17((char)((iVar27 * 0x97 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0x96 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0x95 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0x94 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x93 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x92 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x91
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x90 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x15] =
                       CONCAT17((char)((iVar27 * 0xaf + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xae + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xad + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xac + 0x7fU) / 0xff),
                                                           CONCAT13((char)((uint)(CONCAT17((char)((
                                                  uint)iVar44 >> 0x18),
                                                  CONCAT16((char)((uint)iVar44 >> 0x10),
                                                           CONCAT15((char)((uint)iVar44 >> 8),
                                                                    CONCAT14((char)iVar44,uVar11))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar11 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar18 >> 0x18),
                                                  CONCAT16((char)((uint)iVar18 >> 0x10),
                                                           CONCAT15((char)((uint)iVar18 >> 8),
                                                                    CONCAT14((char)iVar18,uVar38))))
                                                  / 0xff00000000),(char)(uVar38 / 0xff))))))));
                  local_130[0x14] =
                       CONCAT17((char)((iVar27 * 0xa7 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xa6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xa5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xa4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xa3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xa2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xa1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xa0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x17] =
                       CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar46 >> 0x18),
                                                       CONCAT16((char)((uint)iVar46 >> 0x10),
                                                                CONCAT15((char)((uint)iVar46 >> 8),
                                                                         CONCAT14((char)iVar46,
                                                                                  uVar13)))) >> 0x20
                                             ) / 0xff),
                                CONCAT16((char)(uVar13 / 0xff),
                                         CONCAT15((char)(CONCAT17((char)((uint)iVar24 >> 0x18),
                                                                  CONCAT16((char)((uint)iVar24 >>
                                                                                 0x10),
                                                                           CONCAT15((char)((uint)
                                                  iVar24 >> 8),CONCAT14((char)iVar24,uVar23)))) /
                                                  0xff00000000),
                                                  CONCAT14((char)(uVar23 / 0xff),
                                                           CONCAT13((char)((uint)(CONCAT17((char)((
                                                  uint)iVar45 >> 0x18),
                                                  CONCAT16((char)((uint)iVar45 >> 0x10),
                                                           CONCAT15((char)((uint)iVar45 >> 8),
                                                                    CONCAT14((char)iVar45,uVar12))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar12 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar22 >> 0x18),
                                                  CONCAT16((char)((uint)iVar22 >> 0x10),
                                                           CONCAT15((char)((uint)iVar22 >> 8),
                                                                    CONCAT14((char)iVar22,uVar21))))
                                                  / 0xff00000000),(char)(uVar21 / 0xff))))))));
                  local_130[0x16] =
                       CONCAT17((char)((iVar27 * 0xb7 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xb6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xb5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xb4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xb3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xb2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xb1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xb0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x19] =
                       CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar48 >> 0x18),
                                                       CONCAT16((char)((uint)iVar48 >> 0x10),
                                                                CONCAT15((char)((uint)iVar48 >> 8),
                                                                         CONCAT14((char)iVar48,
                                                                                  uVar15)))) >> 0x20
                                             ) / 0xff),
                                CONCAT16((char)(uVar15 / 0xff),
                                         CONCAT15((char)(CONCAT17((char)((uint)iVar40 >> 0x18),
                                                                  CONCAT16((char)((uint)iVar40 >>
                                                                                 0x10),
                                                                           CONCAT15((char)((uint)
                                                  iVar40 >> 8),CONCAT14((char)iVar40,uVar6)))) /
                                                  0xff00000000),
                                                  CONCAT14((char)(uVar6 / 0xff),
                                                           CONCAT13((char)((uint)(CONCAT17((char)((
                                                  uint)iVar47 >> 0x18),
                                                  CONCAT16((char)((uint)iVar47 >> 0x10),
                                                           CONCAT15((char)((uint)iVar47 >> 8),
                                                                    CONCAT14((char)iVar47,uVar14))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar14 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar39 >> 0x18),
                                                  CONCAT16((char)((uint)iVar39 >> 0x10),
                                                           CONCAT15((char)((uint)iVar39 >> 8),
                                                                    CONCAT14((char)iVar39,uVar5))))
                                                  / 0xff00000000),(char)(uVar5 / 0xff))))))));
                  local_130[0x18] =
                       CONCAT17((char)((iVar27 * 199 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xc6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xc5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xc4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xc3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xc2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xc1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xc0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x1b] =
                       CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar50 >> 0x18),
                                                       CONCAT16((char)((uint)iVar50 >> 0x10),
                                                                CONCAT15((char)((uint)iVar50 >> 8),
                                                                         CONCAT14((char)iVar50,
                                                                                  uVar17)))) >> 0x20
                                             ) / 0xff),
                                CONCAT16((char)(uVar17 / 0xff),
                                         CONCAT15((char)(CONCAT17((char)((uint)iVar42 >> 0x18),
                                                                  CONCAT16((char)((uint)iVar42 >>
                                                                                 0x10),
                                                                           CONCAT15((char)((uint)
                                                  iVar42 >> 8),CONCAT14((char)iVar42,uVar8)))) /
                                                  0xff00000000),
                                                  CONCAT14((char)(uVar8 / 0xff),
                                                           CONCAT13((char)((uint)(CONCAT17((char)((
                                                  uint)iVar49 >> 0x18),
                                                  CONCAT16((char)((uint)iVar49 >> 0x10),
                                                           CONCAT15((char)((uint)iVar49 >> 8),
                                                                    CONCAT14((char)iVar49,uVar16))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar16 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar41 >> 0x18),
                                                  CONCAT16((char)((uint)iVar41 >> 0x10),
                                                           CONCAT15((char)((uint)iVar41 >> 8),
                                                                    CONCAT14((char)iVar41,uVar7))))
                                                  / 0xff00000000),(char)(uVar7 / 0xff))))))));
                  local_130[0x1a] =
                       CONCAT17((char)((iVar27 * 0xd7 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xd6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xd5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xd4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xd3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xd2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xd1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xd0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x1d] =
                       CONCAT17((char)((iVar27 * 0xef + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xee + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xed + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xec + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xeb + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xea +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xe9
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xe8 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x1c] =
                       CONCAT17((char)((iVar27 * 0xe7 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xe6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xe5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xe4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xe3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xe2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xe1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xe0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x1f] =
                       CONCAT17((char)((iVar27 * 0xff + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xfe + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xfd + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xfc + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xfb + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xfa +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xf9
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xf8 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130[0x1e] =
                       CONCAT17((char)((iVar27 * 0xf7 + 0x7fU) / 0xff),
                                CONCAT16((char)((iVar27 * 0xf6 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 0xf5 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 0xf4 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 0xf3 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0xf2 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0xf1
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0xf0 + 0x7fU) / 0xff)))
                                                  )))));
                  local_130 = local_130 + 0x20;
                  iVar27 = iVar27 + 1;
                } while (iVar27 != 0x100);
                param_1[9] = (long)FUN_01127f44;
                if (param_1[8] == 0) {
                  uVar29 = switchD_01119bc4::caseD_4();
                  return uVar29;
                }
                goto LAB_01121db4;
              }
              goto LAB_01121d90;
            }
          }
          else if (bVar25) {
            pcVar36 = FUN_01127ff4;
            goto LAB_01121d80;
          }
        }
      }
      else if (*puVar1 == 8) {
        if ((int)param_1[2] == 2) {
          local_110 = _TIFFmalloc(0x10000);
          param_1[0xf] = (long)local_110;
          if (local_110 == (long *)0x0) {
LAB_01121d90:
            lVar37 = *param_1;
            pcVar30 = "BuildMapUaToAa";
            goto LAB_01121d9c;
          }
                    /* try { // try from 0111df40 to 0121df47 has its CatchHandler @ 0111dfc0 */
                    /* try { // try from 0111df48 to 0121dfe3 has its CatchHandler @ 0111deb8 */
                    /* catch() { ... } // from try @ 0111df40 with catch @ 0111dfc0 */
                    /* catch() { ... } // from try @ 0111df10 with catch @ 0111dfd0 */
          iVar27 = 0;
                    /* try { // try from 0111e068 to 0121e12b has its CatchHandler @ 0111e068
                       catch() { ... } // from try @ 0111e068 with catch @ 0111e068
                       catch() { ... } // from try @ 0111e15c with catch @ 0111e068 */
                    /* try { // try from 0111e12c to 0121e12f has its CatchHandler @ 0111e1e8 */
                    /* try { // try from 0111e158 to 0121e15b has its CatchHandler @ 0111e1fc */
                    /* try { // try from 0111e15c to 0121e233 has its CatchHandler @ 0111e068 */
                    /* catch() { ... } // from try @ 0111e12c with catch @ 0111e1e8 */
                    /* catch() { ... } // from try @ 0111e158 with catch @ 0111e1fc */
          do {
            uVar21 = iVar27 * 0x10 + 0x7f;
            iVar22 = iVar27 * 0x11 + 0x7f;
            uVar23 = iVar27 * 0x12 + 0x7f;
            iVar24 = iVar27 * 0x13 + 0x7f;
                    /* try { // try from 0111e374 to 0121e3b7 has its CatchHandler @ 0111e374
                       catch() { ... } // from try @ 0111e374 with catch @ 0111e374
                       catch() { ... } // from try @ 0111e3bc with catch @ 0111e374 */
                    /* try { // try from 0111e3b8 to 0121e3bb has its CatchHandler @ 0111e3d4 */
                    /* try { // try from 0111e3bc to 0121e3e7 has its CatchHandler @ 0111e374 */
                    /* catch() { ... } // from try @ 0111e3b8 with catch @ 0111e3d4 */
            iVar39 = iVar27 * 0x68;
            iVar78 = iVar27 * 0x69;
            iVar117 = iVar27 * 0x6a;
            iVar156 = iVar27 * 0x6b;
            iVar40 = iVar27 * 0x6c;
            iVar79 = iVar27 * 0x6d;
            iVar118 = iVar27 * 0x6e;
            iVar157 = iVar27 * 0x6f;
            uVar34 = iVar27 * 0x60 + 0x7f;
            iVar9 = iVar27 * 0x61 + 0x7f;
            uVar38 = iVar27 * 0x62 + 0x7f;
            iVar18 = iVar27 * 99 + 0x7f;
            iVar41 = iVar27 * 100;
            iVar80 = iVar27 * 0x65;
            iVar119 = iVar27 * 0x66;
            iVar158 = iVar27 * 0x67;
            iVar42 = iVar27 * 0x78;
            iVar81 = iVar27 * 0x79;
            iVar120 = iVar27 * 0x7a;
            iVar159 = iVar27 * 0x7b;
            iVar43 = iVar27 * 0x7c;
            iVar82 = iVar27 * 0x7d;
            iVar121 = iVar27 * 0x7e;
            iVar160 = iVar27 * 0x7f;
                    /* catch() { ... } // from try @ 0111e4f4 with catch @ 0111e4bc
                       catch() { ... } // from try @ 0111e580 with catch @ 0111e4bc */
            iVar44 = iVar27 * 0x70;
            iVar83 = iVar27 * 0x71;
            iVar122 = iVar27 * 0x72;
            iVar161 = iVar27 * 0x73;
            iVar45 = iVar27 * 0x74;
            iVar84 = iVar27 * 0x75;
            iVar123 = iVar27 * 0x76;
            iVar162 = iVar27 * 0x77;
            iVar46 = iVar27 * 0x88;
            iVar85 = iVar27 * 0x89;
            iVar124 = iVar27 * 0x8a;
            iVar163 = iVar27 * 0x8b;
            iVar47 = iVar27 * 0x8c;
            iVar86 = iVar27 * 0x8d;
            iVar125 = iVar27 * 0x8e;
            iVar164 = iVar27 * 0x8f;
                    /* try { // try from 0111e4ec to 0121e4f3 has its CatchHandler @ 0111e5c4 */
                    /* try { // try from 0111e4f4 to 0121e56b has its CatchHandler @ 0111e4bc */
            iVar48 = iVar27 * 0x80;
            iVar87 = iVar27 * 0x81;
            iVar126 = iVar27 * 0x82;
            iVar165 = iVar27 * 0x83;
            iVar49 = iVar27 * 0x84;
            iVar88 = iVar27 * 0x85;
            iVar127 = iVar27 * 0x86;
            iVar166 = iVar27 * 0x87;
            iVar50 = iVar27 * 0x98;
            iVar89 = iVar27 * 0x99;
            iVar128 = iVar27 * 0x9a;
            iVar167 = iVar27 * 0x9b;
            iVar51 = iVar27 * 0x9c;
            iVar90 = iVar27 * 0x9d;
            iVar129 = iVar27 * 0x9e;
            iVar168 = iVar27 * 0x9f;
            iVar52 = iVar27 * 0x90;
            iVar91 = iVar27 * 0x91;
            iVar130 = iVar27 * 0x92;
            iVar169 = iVar27 * 0x93;
            iVar53 = iVar27 * 0x94;
            iVar92 = iVar27 * 0x95;
            iVar131 = iVar27 * 0x96;
            iVar170 = iVar27 * 0x97;
            iVar54 = iVar27 * 0xa8;
            iVar93 = iVar27 * 0xa9;
            iVar132 = iVar27 * 0xaa;
            iVar171 = iVar27 * 0xab;
            iVar55 = iVar27 * 0xac;
            iVar94 = iVar27 * 0xad;
            iVar133 = iVar27 * 0xae;
            iVar172 = iVar27 * 0xaf;
            iVar56 = iVar27 * 0xa0;
            iVar95 = iVar27 * 0xa1;
            iVar134 = iVar27 * 0xa2;
            iVar173 = iVar27 * 0xa3;
                    /* try { // try from 0111e56c to 0121e57f has its CatchHandler @ 0111e5ac */
            iVar57 = iVar27 * 0xa4;
            iVar96 = iVar27 * 0xa5;
            iVar135 = iVar27 * 0xa6;
            iVar174 = iVar27 * 0xa7;
            iVar58 = iVar27 * 0xb8;
            iVar97 = iVar27 * 0xb9;
            iVar136 = iVar27 * 0xba;
            iVar175 = iVar27 * 0xbb;
                    /* try { // try from 0111e580 to 0121e5df has its CatchHandler @ 0111e4bc */
            iVar59 = iVar27 * 0xbc;
            iVar98 = iVar27 * 0xbd;
            iVar137 = iVar27 * 0xbe;
            iVar176 = iVar27 * 0xbf;
            iVar60 = iVar27 * 0xb0;
            iVar99 = iVar27 * 0xb1;
            iVar138 = iVar27 * 0xb2;
            iVar177 = iVar27 * 0xb3;
            iVar61 = iVar27 * 0xb4;
            iVar100 = iVar27 * 0xb5;
            iVar139 = iVar27 * 0xb6;
            iVar178 = iVar27 * 0xb7;
            iVar62 = iVar27 * 200;
            iVar101 = iVar27 * 0xc9;
            iVar140 = iVar27 * 0xca;
            iVar179 = iVar27 * 0xcb;
            iVar63 = iVar27 * 0xcc;
            iVar102 = iVar27 * 0xcd;
            iVar141 = iVar27 * 0xce;
            iVar180 = iVar27 * 0xcf;
                    /* catch() { ... } // from try @ 0111e56c with catch @ 0111e5ac */
            iVar64 = iVar27 * 0xc0;
            iVar103 = iVar27 * 0xc1;
            iVar142 = iVar27 * 0xc2;
            iVar181 = iVar27 * 0xc3;
            iVar65 = iVar27 * 0xc4;
            iVar104 = iVar27 * 0xc5;
            iVar143 = iVar27 * 0xc6;
            iVar182 = iVar27 * 199;
            iVar66 = iVar27 * 0xd8;
            iVar105 = iVar27 * 0xd9;
            iVar144 = iVar27 * 0xda;
            iVar183 = iVar27 * 0xdb;
                    /* catch() { ... } // from try @ 0111e4ec with catch @ 0111e5c4 */
            iVar67 = iVar27 * 0xdc;
            iVar106 = iVar27 * 0xdd;
            iVar145 = iVar27 * 0xde;
            iVar184 = iVar27 * 0xdf;
            iVar68 = iVar27 * 0xd0;
            iVar107 = iVar27 * 0xd1;
            iVar146 = iVar27 * 0xd2;
            iVar185 = iVar27 * 0xd3;
                    /* try { // try from 0111e5e0 to 0121e63b has its CatchHandler @ 0111e5e0
                       catch() { ... } // from try @ 0111e5e0 with catch @ 0111e5e0
                       catch() { ... } // from try @ 0111e650 with catch @ 0111e5e0 */
            iVar69 = iVar27 * 0xd4;
            iVar108 = iVar27 * 0xd5;
            iVar147 = iVar27 * 0xd6;
            iVar186 = iVar27 * 0xd7;
            iVar70 = iVar27 * 0xe8;
            iVar109 = iVar27 * 0xe9;
            iVar148 = iVar27 * 0xea;
            iVar187 = iVar27 * 0xeb;
            iVar71 = iVar27 * 0xec;
            iVar110 = iVar27 * 0xed;
            iVar149 = iVar27 * 0xee;
            iVar188 = iVar27 * 0xef;
            iVar72 = iVar27 * 0xe0;
            iVar111 = iVar27 * 0xe1;
            iVar150 = iVar27 * 0xe2;
            iVar189 = iVar27 * 0xe3;
            iVar73 = iVar27 * 0xe4;
            iVar112 = iVar27 * 0xe5;
            iVar151 = iVar27 * 0xe6;
            iVar190 = iVar27 * 0xe7;
            iVar74 = iVar27 * 0xf8;
            iVar113 = iVar27 * 0xf9;
            iVar152 = iVar27 * 0xfa;
            iVar191 = iVar27 * 0xfb;
            iVar75 = iVar27 * 0xfc;
            iVar114 = iVar27 * 0xfd;
            iVar153 = iVar27 * 0xfe;
            iVar192 = iVar27 * 0xff;
            iVar76 = iVar27 * 0xf0;
            iVar115 = iVar27 * 0xf1;
            iVar154 = iVar27 * 0xf2;
            iVar193 = iVar27 * 0xf3;
            iVar77 = iVar27 * 0xf4;
            iVar116 = iVar27 * 0xf5;
            iVar155 = iVar27 * 0xf6;
            iVar194 = iVar27 * 0xf7;
                    /* try { // try from 0111e63c to 0121e64f has its CatchHandler @ 0111e67c */
                    /* try { // try from 0111e650 to 0121e693 has its CatchHandler @ 0111e5e0 */
                    /* catch() { ... } // from try @ 0111e63c with catch @ 0111e67c */
                    /* catch() { ... } // from try @ 0111e6e8 with catch @ 0111e694 */
                    /* try { // try from 0111e6d4 to 0121e6e7 has its CatchHandler @ 0111e714 */
                    /* try { // try from 0111e6e8 to 0121e72b has its CatchHandler @ 0111e694 */
                    /* catch() { ... } // from try @ 0111e6d4 with catch @ 0111e714 */
                    /* try { // try from 0111e7cc to 0121e81b has its CatchHandler @ 0111e7cc
                       catch() { ... } // from try @ 0111e7cc with catch @ 0111e7cc
                       catch() { ... } // from try @ 0111e820 with catch @ 0111e7cc */
                    /* try { // try from 0111e81c to 0121e81f has its CatchHandler @ 0111e850 */
                    /* try { // try from 0111e820 to 0121e863 has its CatchHandler @ 0111e7cc */
                    /* catch() { ... } // from try @ 0111e81c with catch @ 0111e850 */
                    /* try { // try from 0111e924 to 0121e9ab has its CatchHandler @ 0111e924
                       catch() { ... } // from try @ 0111e924 with catch @ 0111e924
                       catch() { ... } // from try @ 0111e9bc with catch @ 0111e924 */
                    /* try { // try from 0111e9ac to 0121e9bb has its CatchHandler @ 0111ea08 */
                    /* try { // try from 0111e9bc to 0121ea1b has its CatchHandler @ 0111e924 */
                    /* catch() { ... } // from try @ 0111e9ac with catch @ 0111ea08 */
                    /* try { // try from 0111ea2c to 0121eaef has its CatchHandler @ 0111ea2c
                       catch() { ... } // from try @ 0111ea2c with catch @ 0111ea2c
                       catch() { ... } // from try @ 0111eb08 with catch @ 0111ea2c */
            local_110[1] = CONCAT17((char)((iVar27 * 0xf + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0xe + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0xd + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0xc + 0x7fU) / 0xff)
                                                               ,CONCAT13((char)((iVar27 * 0xb +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT12((char)((iVar27 * 
                                                  10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 8 + 0x7fU) / 0xff)))))))
                                   );
            *local_110 = (ulong)CONCAT16((char)((iVar27 * 7 + 0x7fU) / 0xff),
                                         CONCAT15((char)((iVar27 * 6 + 0x7fU) / 0xff),
                                                  CONCAT14((char)((iVar27 * 5 + 0x7fU) / 0xff),
                                                           CONCAT13((char)((iVar27 * 4 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 3 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 2 + 
                                                  0x7fU) / 0xff),(char)((iVar27 + 0x7fU) / 0xff)))))
                                                 )) << 8;
                    /* try { // try from 0111eaf0 to 0121eb07 has its CatchHandler @ 0111eb3c */
                    /* try { // try from 0111eb08 to 0121eb4f has its CatchHandler @ 0111ea2c */
                    /* catch() { ... } // from try @ 0111eaf0 with catch @ 0111eb3c */
            local_110[3] = CONCAT17((char)((iVar27 * 0x1f + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x1e + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x1d + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x1c + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x1b + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x1a + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x19 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x18 + 0x7fU) /
                                                                          0xff))))))));
            local_110[2] = CONCAT17((char)((iVar27 * 0x17 + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x16 + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x15 + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x14 + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((uint)(
                                                  CONCAT26((short)((uint)iVar24 >> 0x10),
                                                           CONCAT24((short)iVar24,uVar23)) >> 0x20)
                                                  / 0xff),CONCAT12((char)(uVar23 / 0xff),
                                                                   CONCAT11((char)((uint)(CONCAT26((
                                                  short)((uint)iVar22 >> 0x10),
                                                  CONCAT24((short)iVar22,uVar21)) >> 0x20) / 0xff),
                                                  (char)(uVar21 / 0xff))))))));
                    /* try { // try from 0111ec08 to 0121ec0f has its CatchHandler @ 0111ec18 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111ec08 with catch @ 0111ec18
                        */
                    /* try { // try from 0111ec40 to 0121ec43 has its CatchHandler @ 0111ec54 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111ec40 with catch @ 0111ec54
                        */
            local_110[5] = CONCAT17((char)((iVar27 * 0x2f + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x2e + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x2d + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x2c + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x2b + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x2a + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x29 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x28 + 0x7fU) /
                                                                          0xff))))))));
            local_110[4] = CONCAT17((char)((iVar27 * 0x27 + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x26 + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x25 + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x24 + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x23 + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x22 + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x21 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x20 + 0x7fU) /
                                                                          0xff))))))));
            local_110[7] = CONCAT17((char)((iVar27 * 0x3f + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x3e + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x3d + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x3c + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x3b + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x3a + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x39 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x38 + 0x7fU) /
                                                                          0xff))))))));
            local_110[6] = CONCAT17((char)((iVar27 * 0x37 + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x36 + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x35 + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x34 + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x33 + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x32 + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x31 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x30 + 0x7fU) /
                                                                          0xff))))))));
            local_110[9] = CONCAT17((char)((iVar27 * 0x4f + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x4e + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x4d + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x4c + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x4b + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x4a + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x49 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x48 + 0x7fU) /
                                                                          0xff))))))));
            local_110[8] = CONCAT17((char)((iVar27 * 0x47 + 0x7fU) / 0xff),
                                    CONCAT16((char)((iVar27 * 0x46 + 0x7fU) / 0xff),
                                             CONCAT15((char)((iVar27 * 0x45 + 0x7fU) / 0xff),
                                                      CONCAT14((char)((iVar27 * 0x44 + 0x7fU) / 0xff
                                                                     ),CONCAT13((char)((iVar27 * 
                                                  0x43 + 0x7fU) / 0xff),
                                                  CONCAT12((char)((iVar27 * 0x42 + 0x7fU) / 0xff),
                                                           CONCAT11((char)((iVar27 * 0x41 + 0x7fU) /
                                                                          0xff),
                                                                    (char)((iVar27 * 0x40 + 0x7fU) /
                                                                          0xff))))))));
            local_110[0xb] =
                 CONCAT17((char)((iVar27 * 0x5f + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar27 * 0x5e + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar27 * 0x5d + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar27 * 0x5c + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar27 * 0x5b + 0x7fU) / 0xff)
                                                              ,CONCAT12((char)((iVar27 * 0x5a +
                                                                               0x7fU) / 0xff),
                                                                        CONCAT11((char)((iVar27 * 
                                                  0x59 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x58 + 0x7fU) / 0xff))))))));
            local_110[10] =
                 CONCAT17((char)((iVar27 * 0x57 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar27 * 0x56 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar27 * 0x55 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar27 * 0x54 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar27 * 0x53 + 0x7fU) / 0xff)
                                                              ,CONCAT12((char)((iVar27 * 0x52 +
                                                                               0x7fU) / 0xff),
                                                                        CONCAT11((char)((iVar27 * 
                                                  0x51 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x50 + 0x7fU) / 0xff))))))));
            iVar27 = iVar27 + 1;
            local_110[0xd] =
                 CONCAT17((char)((iVar157 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar118 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar79 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar40 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar156 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar117 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar78 + 
                                                  0x7fU) / 0xff),(char)((iVar39 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0xc] =
                 CONCAT17((char)((iVar158 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar119 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar80 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar41 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar18 >> 0x18),
                                                  CONCAT16((char)((uint)iVar18 >> 0x10),
                                                           CONCAT15((char)((uint)iVar18 >> 8),
                                                                    CONCAT14((char)iVar18,uVar38))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar38 / 0xff),
                                                           CONCAT11((char)((uint)(CONCAT17((char)((
                                                  uint)iVar9 >> 0x18),
                                                  CONCAT16((char)((uint)iVar9 >> 0x10),
                                                           CONCAT15((char)((uint)iVar9 >> 8),
                                                                    CONCAT14((char)iVar9,uVar34))))
                                                  >> 0x20) / 0xff),(char)(uVar34 / 0xff))))))));
            local_110[0xf] =
                 CONCAT17((char)((iVar160 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar121 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar82 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar43 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar159 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar120 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar81 + 
                                                  0x7fU) / 0xff),(char)((iVar42 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0xe] =
                 CONCAT17((char)((iVar162 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar123 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar84 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar45 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar161 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar122 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar83 + 
                                                  0x7fU) / 0xff),(char)((iVar44 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x11] =
                 CONCAT17((char)((iVar164 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar125 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar86 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar47 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar163 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar124 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar85 + 
                                                  0x7fU) / 0xff),(char)((iVar46 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x10] =
                 CONCAT17((char)((iVar166 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar127 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar88 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar49 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar165 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar126 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar87 + 
                                                  0x7fU) / 0xff),(char)((iVar48 + 0x7fU) / 0xff)))))
                                           )));
            *(char *)(local_110 + 0x13) = (char)((iVar50 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x99) = (char)((iVar89 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9a) = (char)((iVar128 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9b) = (char)((iVar167 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9c) = (char)((iVar51 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9d) = (char)((iVar90 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9e) = (char)((iVar129 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x9f) = (char)((iVar168 + 0x7fU) / 0xff);
            *(char *)(local_110 + 0x12) = (char)((iVar52 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x91) = (char)((iVar91 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x92) = (char)((iVar130 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x93) = (char)((iVar169 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x94) = (char)((iVar53 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x95) = (char)((iVar92 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x96) = (char)((iVar131 + 0x7fU) / 0xff);
            *(char *)((long)local_110 + 0x97) = (char)((iVar170 + 0x7fU) / 0xff);
            local_110[0x15] =
                 CONCAT17((char)((iVar172 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar133 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar94 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar55 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar171 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar132 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar93 + 
                                                  0x7fU) / 0xff),(char)((iVar54 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x14] =
                 CONCAT17((char)((iVar174 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar135 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar96 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar57 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar173 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar134 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar95 + 
                                                  0x7fU) / 0xff),(char)((iVar56 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x17] =
                 CONCAT17((char)((iVar176 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar137 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar98 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar59 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar175 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar136 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar97 + 
                                                  0x7fU) / 0xff),(char)((iVar58 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x16] =
                 CONCAT17((char)((iVar178 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar139 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar100 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar61 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar177 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar138 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar99 + 
                                                  0x7fU) / 0xff),(char)((iVar60 + 0x7fU) / 0xff)))))
                                           )));
            local_110[0x19] =
                 CONCAT17((char)((iVar180 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar141 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar102 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar63 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar179 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar140 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar101 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar62 + 0x7fU) / 0xff))))))));
            local_110[0x18] =
                 CONCAT17((char)((iVar182 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar143 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar104 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar65 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar181 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar142 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar103 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar64 + 0x7fU) / 0xff))))))));
            local_110[0x1b] =
                 CONCAT17((char)((iVar184 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar145 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar106 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar67 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar183 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar144 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar105 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar66 + 0x7fU) / 0xff))))))));
            local_110[0x1a] =
                 CONCAT17((char)((iVar186 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar147 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar108 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar69 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar185 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar146 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar107 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar68 + 0x7fU) / 0xff))))))));
            local_110[0x1d] =
                 CONCAT17((char)((iVar188 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar149 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar110 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar71 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar187 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar148 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar109 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar70 + 0x7fU) / 0xff))))))));
            local_110[0x1c] =
                 CONCAT17((char)((iVar190 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar151 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar112 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar73 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar189 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar150 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar111 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar72 + 0x7fU) / 0xff))))))));
            local_110[0x1f] =
                 CONCAT17((char)((iVar192 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar153 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar114 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar75 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar191 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar152 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar113 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar74 + 0x7fU) / 0xff))))))));
            local_110[0x1e] =
                 CONCAT17((char)((iVar194 + 0x7fU) / 0xff),
                          CONCAT16((char)((iVar155 + 0x7fU) / 0xff),
                                   CONCAT15((char)((iVar116 + 0x7fU) / 0xff),
                                            CONCAT14((char)((iVar77 + 0x7fU) / 0xff),
                                                     CONCAT13((char)((iVar193 + 0x7fU) / 0xff),
                                                              CONCAT12((char)((iVar154 + 0x7fU) /
                                                                             0xff),
                                                                       CONCAT11((char)((iVar115 +
                                                                                       0x7fU) / 0xff
                                                                                      ),(char)((
                                                  iVar76 + 0x7fU) / 0xff))))))));
            local_110 = local_110 + 0x20;
          } while (iVar27 != 0x100);
          pcVar36 = FUN_01127ba8;
        }
        else if ((int)param_1[2] == 1) {
          pcVar36 = FUN_011278f4;
        }
        else {
          pcVar36 = FUN_01127c4c;
        }
LAB_01121d80:
        param_1[9] = (long)pcVar36;
        if (param_1[8] == 0) {
          uVar29 = switchD_01119bc4::caseD_4();
          return uVar29;
        }
        goto LAB_01121db4;
      }
LAB_01121dac:
      if (param_1[8] != 0) {
LAB_01121db4:
        if (param_1[9] != 0) {
          return 1;
        }
        uVar29 = switchD_01119bc4::caseD_4();
        return uVar29;
      }
    }
    else {
      if (uVar32 == 5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119e90 with catch @ 01119f28
                        */
        if ((*puVar1 == 8) && (*puVar2 == 4)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119ee8 with catch @ 01119f44
                        */
          *(undefined4 *)(param_1 + 2) = 1;
                    /* try { // try from 01119f48 to 01219f4f has its CatchHandler @ 01119f58 */
          param_1[9] = (long)FUN_01128088;
                    /* try { // try from 01119f50 to 01219f5b has its CatchHandler @ 01119e50 */
          if (param_1[8] == 0) {
            uVar29 = switchD_01119bc4::caseD_4();
            return uVar29;
          }
          goto LAB_01121db4;
        }
        goto LAB_01121dac;
      }
      if (uVar32 == 6) {
        if ((((*puVar1 == 8) && (*puVar2 == 3)) && (iVar27 = FUN_01125040(param_1), iVar27 != 0)) &&
           (TIFFGetFieldDefaulted(*param_1,0x212,&local_b4,&local_a8),
           ((uint)local_a8 | ((uint)local_b4 & 0xffff) << 4) == 0x11)) {
          pcVar36 = FUN_01128174;
          goto LAB_01121d80;
        }
        goto LAB_01121dac;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 1;
LAB_01119b84:
    iVar27 = TIFFIsTiled(*param_1);
    pcVar36 = FUN_01122628;
    if (iVar27 == 0) {
      pcVar36 = FUN_01122ab8;
    }
    param_1[8] = (long)pcVar36;
    param_1[9] = 0;
    switch(*(undefined2 *)((long)param_1 + 0x24)) {
    case 0:
    case 1:
      iVar27 = FUN_0112361c(param_1);
      if (iVar27 != 0) {
        pcVar36 = FUN_01124ab0;
        switch(*puVar1) {
        case 1:
          uVar29 = switchD_01119da4::caseD_44(FUN_01124e74);
          return uVar29;
        case 2:
          uVar29 = switchD_01119da4::caseD_44(FUN_01124d20);
          return uVar29;
        case 4:
          uVar29 = switchD_01119da4::caseD_44(FUN_01124c38);
          return uVar29;
        case 8:
          if (((int)param_1[2] != 0) && (*puVar2 == 2)) {
            uVar29 = switchD_01119da4::caseD_44(FUN_01124b38);
            return uVar29;
          }
          uVar29 = switchD_01119da4::caseD_44(FUN_01124bc0);
          return uVar29;
        case 0x10:
          goto code_r0x01121e50;
        }
      }
      break;
    case 2:
      if (*puVar1 == 0x10) {
        lVar37 = param_1[2];
        if ((int)lVar37 == 1) {
          pvVar28 = _TIFFmalloc(0x10000);
          param_1[0x10] = (long)pvVar28;
          if (pvVar28 != (void *)0x0) {
            lVar37 = 0;
            do {
              iVar27 = (int)lVar37;
                    /* try { // try from 01119fa8 to 01219faf has its CatchHandler @ 0111a060 */
              puVar4 = (undefined1 *)((long)pvVar28 + lVar37);
              lVar37 = lVar37 + 2;
                    /* try { // try from 01119fb0 to 0121a017 has its CatchHandler @ 01119f5c */
              *puVar4 = (char)((ulong)(iVar27 + 0x80) * 0xff00ff01 >> 0x28);
              puVar4[1] = (char)((ulong)(iVar27 + 0x81) * 0xff00ff01 >> 0x28);
            } while (lVar37 != 0x10000);
            uVar29 = switchD_01119da4::caseD_44(FUN_0112341c);
            return uVar29;
          }
          lVar37 = *param_1;
          pcVar30 = "BuildMapBitdepth16To8";
          goto LAB_01121e14;
        }
        pvVar28 = _TIFFmalloc(0x10000);
        param_1[0x10] = (long)pvVar28;
        if (pvVar28 == (void *)0x0) {
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"BuildMapBitdepth16To8","Out of memory");
          bVar25 = false;
        }
        else {
          lVar35 = 0;
          do {
            iVar27 = (int)lVar35;
            puVar4 = (undefined1 *)((long)pvVar28 + lVar35);
            lVar35 = lVar35 + 2;
            *puVar4 = (char)((ulong)(iVar27 + 0x80) * 0xff00ff01 >> 0x28);
            puVar4[1] = (char)((ulong)(iVar27 + 0x81) * 0xff00ff01 >> 0x28);
          } while (lVar35 != 0x10000);
          bVar25 = true;
        }
        if ((int)lVar37 == 2) {
          if (bVar25) {
            local_130 = _TIFFmalloc(0x10000);
            param_1[0xf] = (long)local_130;
            if (local_130 == (long *)0x0) goto LAB_01121e08;
            iVar27 = 0;
            do {
              uVar19 = iVar27 * 0x44 + 0x7f;
              iVar51 = iVar27 * 0x45 + 0x7f;
              uVar20 = iVar27 * 0x46 + 0x7f;
              iVar52 = iVar27 * 0x47 + 0x7f;
              uVar34 = iVar27 * 0x54 + 0x7f;
              iVar9 = iVar27 * 0x55 + 0x7f;
              uVar10 = iVar27 * 0x56 + 0x7f;
              iVar43 = iVar27 * 0x57 + 0x7f;
                    /* catch() { ... } // from try @ 0111c56c with catch @ 0111c53c
                       catch() { ... } // from try @ 0111c5e0 with catch @ 0111c53c */
                    /* try { // try from 0111c564 to 0121c56b has its CatchHandler @ 0111c624 */
                    /* try { // try from 0111c56c to 0121c5cb has its CatchHandler @ 0111c53c */
                    /* try { // try from 0111c5cc to 0121c5df has its CatchHandler @ 0111c60c */
                    /* try { // try from 0111c5e0 to 0121c63f has its CatchHandler @ 0111c53c */
                    /* catch() { ... } // from try @ 0111c5cc with catch @ 0111c60c */
              uVar38 = iVar27 * 0xa8 + 0x7f;
              iVar18 = iVar27 * 0xa9 + 0x7f;
              uVar11 = iVar27 * 0xaa + 0x7f;
              iVar44 = iVar27 * 0xab + 0x7f;
                    /* catch() { ... } // from try @ 0111c564 with catch @ 0111c624 */
              uVar21 = iVar27 * 0xb8 + 0x7f;
              iVar22 = iVar27 * 0xb9 + 0x7f;
              uVar12 = iVar27 * 0xba + 0x7f;
              iVar45 = iVar27 * 0xbb + 0x7f;
                    /* try { // try from 0111c640 to 0121c6a7 has its CatchHandler @ 0111c640
                       catch() { ... } // from try @ 0111c640 with catch @ 0111c640
                       catch() { ... } // from try @ 0111c6bc with catch @ 0111c640 */
              uVar23 = iVar27 * 0xbc + 0x7f;
              iVar24 = iVar27 * 0xbd + 0x7f;
              uVar13 = iVar27 * 0xbe + 0x7f;
              iVar46 = iVar27 * 0xbf + 0x7f;
              uVar5 = iVar27 * 200 + 0x7f;
              iVar39 = iVar27 * 0xc9 + 0x7f;
              uVar14 = iVar27 * 0xca + 0x7f;
              iVar47 = iVar27 * 0xcb + 0x7f;
              uVar6 = iVar27 * 0xcc + 0x7f;
              iVar40 = iVar27 * 0xcd + 0x7f;
              uVar15 = iVar27 * 0xce + 0x7f;
              iVar48 = iVar27 * 0xcf + 0x7f;
              uVar7 = iVar27 * 0xd8 + 0x7f;
              iVar41 = iVar27 * 0xd9 + 0x7f;
              uVar16 = iVar27 * 0xda + 0x7f;
              iVar49 = iVar27 * 0xdb + 0x7f;
                    /* try { // try from 0111c6a8 to 0121c6bb has its CatchHandler @ 0111c6e8 */
              uVar8 = iVar27 * 0xdc + 0x7f;
              iVar42 = iVar27 * 0xdd + 0x7f;
              uVar17 = iVar27 * 0xde + 0x7f;
              iVar50 = iVar27 * 0xdf + 0x7f;
                    /* try { // try from 0111c6bc to 0121c6ff has its CatchHandler @ 0111c640 */
                    /* catch() { ... } // from try @ 0111c6a8 with catch @ 0111c6e8 */
                    /* catch() { ... } // from try @ 0111c754 with catch @ 0111c700 */
                    /* try { // try from 0111c740 to 0121c753 has its CatchHandler @ 0111c780 */
                    /* try { // try from 0111c754 to 0121c797 has its CatchHandler @ 0111c700 */
                    /* catch() { ... } // from try @ 0111c740 with catch @ 0111c780 */
                    /* try { // try from 0111c798 to 0121c7fb has its CatchHandler @ 0111c798
                       catch() { ... } // from try @ 0111c798 with catch @ 0111c798
                       catch() { ... } // from try @ 0111c808 with catch @ 0111c798 */
                    /* try { // try from 0111c7fc to 0121c807 has its CatchHandler @ 0111c854 */
                    /* try { // try from 0111c808 to 0121c897 has its CatchHandler @ 0111c798 */
                    /* catch() { ... } // from try @ 0111c7fc with catch @ 0111c854 */
                    /* try { // try from 0111c998 to 0121ca23 has its CatchHandler @ 0111c998
                       catch() { ... } // from try @ 0111c998 with catch @ 0111c998
                       catch() { ... } // from try @ 0111ca2c with catch @ 0111c998 */
                    /* try { // try from 0111ca24 to 0121ca2b has its CatchHandler @ 0111ca60 */
                    /* try { // try from 0111ca2c to 0121ca73 has its CatchHandler @ 0111c998 */
                    /* catch() { ... } // from try @ 0111ca24 with catch @ 0111ca60 */
              local_130[1] = CONCAT17((char)((iVar27 * 0xf + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0xe + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0xd + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0xc + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0xb +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 8 + 0x7fU) / 0xff)))))))
                                     );
              *local_130 = (ulong)CONCAT16((char)((iVar27 * 7 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 6 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 5 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 4 + 0x7fU) /
                                                                            0xff),
                                                                      CONCAT12((char)((iVar27 * 3 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar27 * 2 + 0x7fU) / 0xff),
                                                  (char)((iVar27 + 0x7fU) / 0xff))))))) << 8;
              local_130[3] = CONCAT17((char)((iVar27 * 0x1f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x1e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x1d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x1c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x1b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x1a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x19 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x18 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[2] = CONCAT17((char)((iVar27 * 0x17 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x16 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x15 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x14 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x13 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x12 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x11 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x10 + 0x7fU) / 0xff))))
                                                  ))));
                    /* try { // try from 0111cd6c to 0121cde7 has its CatchHandler @ 0111cd6c
                       catch() { ... } // from try @ 0111cd6c with catch @ 0111cd6c
                       catch() { ... } // from try @ 0111ce78 with catch @ 0111cd6c */
                    /* try { // try from 0111cde8 to 0121cdeb has its CatchHandler @ 0111ceac */
              local_130[5] = CONCAT17((char)((iVar27 * 0x2f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x2e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x2d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x2c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x2b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x2a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x29 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x28 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[4] = CONCAT17((char)((iVar27 * 0x27 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x26 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x25 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x24 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x23 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x22 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x21 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x20 + 0x7fU) / 0xff))))
                                                  ))));
                    /* try { // try from 0111cdfc to 0121ce0f has its CatchHandler @ 0111ceb0 */
                    /* try { // try from 0111ce34 to 0121ce53 has its CatchHandler @ 0111ceb8 */
                    /* try { // try from 0111ce58 to 0121ce77 has its CatchHandler @ 0111ceb4 */
                    /* try { // try from 0111ce78 to 0121cecb has its CatchHandler @ 0111cd6c */
                    /* catch() { ... } // from try @ 0111cde8 with catch @ 0111ceac */
                    /* catch() { ... } // from try @ 0111cdfc with catch @ 0111ceb0 */
                    /* catch() { ... } // from try @ 0111ce58 with catch @ 0111ceb4 */
                    /* catch() { ... } // from try @ 0111ce34 with catch @ 0111ceb8 */
              local_130[7] = CONCAT17((char)((iVar27 * 0x3f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x3e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x3d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x3c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x3b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x3a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x39 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x38 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[6] = CONCAT17((char)((iVar27 * 0x37 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x36 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x35 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x34 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x33 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x32 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x31 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x30 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[9] = CONCAT17((char)((iVar27 * 0x4f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar27 * 0x4e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar27 * 0x4d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar27 * 0x4c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar27 * 0x4b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar27 * 
                                                  0x4a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 0x49 + 0x7fU) / 0xff),
                                                           (char)((iVar27 * 0x48 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[8] = CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar52 >> 0x10),
                                                             CONCAT24((short)iVar52,uVar20)) >> 0x20
                                                   ) / 0xff),
                                      CONCAT16((char)(uVar20 / 0xff),
                                               CONCAT15((char)((uint)(CONCAT26((short)((uint)iVar51
                                                                                      >> 0x10),
                                                                               CONCAT24((short)
                                                  iVar51,uVar19)) >> 0x20) / 0xff),
                                                  CONCAT14((char)(uVar19 / 0xff),
                                                           CONCAT13((char)((iVar27 * 0x43 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar27 * 0x42 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar27
                                                                                              * 0x41
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar27 * 0x40 + 0x7fU) / 0xff)))
                                                  )))));
              local_130[0xb] =
                   CONCAT17((char)((iVar27 * 0x5f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x5e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x5d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x5c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x5b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x5a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x59 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x58 + 0x7fU) / 0xff))))))));
              local_130[10] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar43 >> 0x18),
                                                   CONCAT16((char)((uint)iVar43 >> 0x10),
                                                            CONCAT15((char)((uint)iVar43 >> 8),
                                                                     CONCAT14((char)iVar43,uVar10)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar10 / 0xff),
                                     CONCAT15((char)((uint)(CONCAT17((char)((uint)iVar9 >> 0x18),
                                                                     CONCAT16((char)((uint)iVar9 >>
                                                                                    0x10),
                                                                              CONCAT15((char)((uint)
                                                  iVar9 >> 8),CONCAT14((char)iVar9,uVar34)))) >>
                                                  0x20) / 0xff),
                                              CONCAT14((char)(uVar34 / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x53 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x52 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x51 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x50 + 0x7fU) / 0xff))))))));
                    /* try { // try from 0111d1b4 to 0121d1fb has its CatchHandler @ 0111d1b4
                       catch() { ... } // from try @ 0111d1b4 with catch @ 0111d1b4
                       catch() { ... } // from try @ 0111d398 with catch @ 0111d1b4 */
                    /* try { // try from 0111d1fc to 0121d213 has its CatchHandler @ 0111d404 */
                    /* try { // try from 0111d224 to 0121d237 has its CatchHandler @ 0111d3fc */
                    /* try { // try from 0111d264 to 0121d283 has its CatchHandler @ 0111d400 */
                    /* try { // try from 0111d290 to 0121d297 has its CatchHandler @ 0111d404 */
                    /* try { // try from 0111d30c to 0121d313 has its CatchHandler @ 0111d3ec */
                    /* try { // try from 0111d314 to 0121d31b has its CatchHandler @ 0111d3f4 */
                    /* try { // try from 0111d328 to 0121d33f has its CatchHandler @ 0111d3f8 */
                    /* try { // try from 0111d340 to 0121d347 has its CatchHandler @ 0111d3f4 */
                    /* try { // try from 0111d348 to 0121d353 has its CatchHandler @ 0111d3e8 */
                    /* try { // try from 0111d358 to 0121d36f has its CatchHandler @ 0111d3f0 */
                    /* try { // try from 0111d378 to 0121d383 has its CatchHandler @ 0111d3e4 */
                    /* try { // try from 0111d390 to 0121d397 has its CatchHandler @ 0111d3d4 */
                    /* try { // try from 0111d398 to 0121d417 has its CatchHandler @ 0111d1b4 */
                    /* catch() { ... } // from try @ 0111d390 with catch @ 0111d3d4 */
                    /* catch() { ... } // from try @ 0111d378 with catch @ 0111d3e4 */
                    /* catch() { ... } // from try @ 0111d348 with catch @ 0111d3e8 */
                    /* catch() { ... } // from try @ 0111d30c with catch @ 0111d3ec */
                    /* catch() { ... } // from try @ 0111d358 with catch @ 0111d3f0 */
                    /* catch() { ... } // from try @ 0111d314 with catch @ 0111d3f4
                       catch() { ... } // from try @ 0111d340 with catch @ 0111d3f4 */
                    /* catch() { ... } // from try @ 0111d328 with catch @ 0111d3f8 */
                    /* catch() { ... } // from try @ 0111d224 with catch @ 0111d3fc */
                    /* catch() { ... } // from try @ 0111d264 with catch @ 0111d400 */
                    /* catch() { ... } // from try @ 0111d1fc with catch @ 0111d404
                       catch() { ... } // from try @ 0111d290 with catch @ 0111d404 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111d518 with catch @ 0111d4a8
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d548 with catch @ 0111d4a8
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d578 with catch @ 0111d4a8
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d5a0 with catch @ 0111d4a8
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d5cc with catch @ 0111d4a8
                        */
                    /* try { // try from 0111d510 to 0121d517 has its CatchHandler @ 0111d60c */
                    /* try { // try from 0111d518 to 0121d53b has its CatchHandler @ 0111d4a8 */
                    /* try { // try from 0111d53c to 0121d547 has its CatchHandler @ 0111d60c */
                    /* try { // try from 0111d548 to 0121d56f has its CatchHandler @ 0111d4a8 */
                    /* try { // try from 0111d570 to 0121d577 has its CatchHandler @ 0111d608 */
                    /* try { // try from 0111d578 to 0121d597 has its CatchHandler @ 0111d4a8 */
                    /* try { // try from 0111d598 to 0121d59f has its CatchHandler @ 0111d608 */
                    /* try { // try from 0111d5a0 to 0121d5bf has its CatchHandler @ 0111d4a8 */
                    /* try { // try from 0111d5c0 to 0121d5cb has its CatchHandler @ 0111d608 */
                    /* try { // try from 0111d5cc to 0121d60f has its CatchHandler @ 0111d4a8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111d570 with catch @ 0111d608
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d598 with catch @ 0111d608
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d5c0 with catch @ 0111d608
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111d510 with catch @ 0111d60c
                       catch(type#1 @ 00000000) { ... } // from try @ 0111d53c with catch @ 0111d60c
                        */
                    /* catch() { ... } // from try @ 0111d720 with catch @ 0111d610 */
                    /* try { // try from 0111d664 to 0121d66b has its CatchHandler @ 0111d768 */
                    /* try { // try from 0111d67c to 0121d6db has its CatchHandler @ 0111d778 */
                    /* try { // try from 0111d6ec to 0121d6f3 has its CatchHandler @ 0111d764 */
                    /* try { // try from 0111d6f4 to 0121d6ff has its CatchHandler @ 0111d74c */
                    /* try { // try from 0111d718 to 0121d71f has its CatchHandler @ 0111d778 */
                    /* try { // try from 0111d720 to 0121d7e3 has its CatchHandler @ 0111d610 */
                    /* catch() { ... } // from try @ 0111d6f4 with catch @ 0111d74c */
                    /* catch() { ... } // from try @ 0111d6ec with catch @ 0111d764 */
                    /* catch() { ... } // from try @ 0111d664 with catch @ 0111d768 */
                    /* catch() { ... } // from try @ 0111d67c with catch @ 0111d778
                       catch() { ... } // from try @ 0111d718 with catch @ 0111d778 */
                    /* try { // try from 0111d88c to 0121d8f7 has its CatchHandler @ 0111d88c
                       catch() { ... } // from try @ 0111d88c with catch @ 0111d88c
                       catch() { ... } // from try @ 0111d918 with catch @ 0111d88c */
                    /* try { // try from 0111d8f8 to 0121d8ff has its CatchHandler @ 0111d958 */
                    /* try { // try from 0111d910 to 0121d917 has its CatchHandler @ 0111d950 */
                    /* try { // try from 0111d918 to 0121d973 has its CatchHandler @ 0111d88c */
                    /* catch() { ... } // from try @ 0111d910 with catch @ 0111d950 */
                    /* catch() { ... } // from try @ 0111d8f8 with catch @ 0111d958 */
                    /* try { // try from 0111d974 to 0121d9bb has its CatchHandler @ 0111d974
                       catch() { ... } // from try @ 0111d974 with catch @ 0111d974
                       catch() { ... } // from try @ 0111d9dc with catch @ 0111d974 */
                    /* try { // try from 0111d9bc to 0121d9c7 has its CatchHandler @ 0111da18 */
                    /* try { // try from 0111d9c8 to 0121d9db has its CatchHandler @ 0111da08 */
                    /* try { // try from 0111d9dc to 0121da2b has its CatchHandler @ 0111d974 */
                    /* catch() { ... } // from try @ 0111d9c8 with catch @ 0111da08 */
                    /* catch() { ... } // from try @ 0111d9bc with catch @ 0111da18 */
                    /* try { // try from 0111da70 to 0121daab has its CatchHandler @ 0111db18 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111da70 with catch @ 0111db18
                        */
              local_130[0xd] =
                   CONCAT17((char)((iVar27 * 0x6f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x6e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x6d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x6c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x6b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x6a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x69 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x68 + 0x7fU) / 0xff))))))));
              local_130[0xc] =
                   CONCAT17((char)((iVar27 * 0x67 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x66 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x65 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 100 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 99 + 0x7fU) / 0xff)
                                                                ,CONCAT12((char)((iVar27 * 0x62 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT11((char)((iVar27 * 
                                                  0x61 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x60 + 0x7fU) / 0xff))))))));
              local_130[0xf] =
                   CONCAT17((char)((iVar27 * 0x7f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x7e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x7d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x7c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x7b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x7a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x79 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x78 + 0x7fU) / 0xff))))))));
              local_130[0xe] =
                   CONCAT17((char)((iVar27 * 0x77 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x76 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x75 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x74 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x73 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x72 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x71 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x70 + 0x7fU) / 0xff))))))));
              local_130[0x11] =
                   CONCAT17((char)((iVar27 * 0x8f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x8e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x8d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x8c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x8b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x8a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x89 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x88 + 0x7fU) / 0xff))))))));
              local_130[0x10] =
                   CONCAT17((char)((iVar27 * 0x87 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x86 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x85 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x84 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x83 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x82 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x81 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x80 + 0x7fU) / 0xff))))))));
              local_130[0x13] =
                   CONCAT17((char)((iVar27 * 0x9f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x9e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x9d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x9c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x9b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x9a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x99 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x98 + 0x7fU) / 0xff))))))));
              local_130[0x12] =
                   CONCAT17((char)((iVar27 * 0x97 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0x96 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0x95 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0x94 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0x93 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0x92 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0x91 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x90 + 0x7fU) / 0xff))))))));
              local_130[0x15] =
                   CONCAT17((char)((iVar27 * 0xaf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xae + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xad + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xac + 0x7fU) / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar44 >> 0x18),
                                                  CONCAT16((char)((uint)iVar44 >> 0x10),
                                                           CONCAT15((char)((uint)iVar44 >> 8),
                                                                    CONCAT14((char)iVar44,uVar11))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar11 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar18 >> 0x18),
                                                  CONCAT16((char)((uint)iVar18 >> 0x10),
                                                           CONCAT15((char)((uint)iVar18 >> 8),
                                                                    CONCAT14((char)iVar18,uVar38))))
                                                  / 0xff00000000),(char)(uVar38 / 0xff))))))));
              local_130[0x14] =
                   CONCAT17((char)((iVar27 * 0xa7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xa6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xa5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xa4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xa3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xa2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xa1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xa0 + 0x7fU) / 0xff))))))));
              local_130[0x17] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar46 >> 0x18),
                                                   CONCAT16((char)((uint)iVar46 >> 0x10),
                                                            CONCAT15((char)((uint)iVar46 >> 8),
                                                                     CONCAT14((char)iVar46,uVar13)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar13 / 0xff),
                                     CONCAT15((char)(CONCAT17((char)((uint)iVar24 >> 0x18),
                                                              CONCAT16((char)((uint)iVar24 >> 0x10),
                                                                       CONCAT15((char)((uint)iVar24
                                                                                      >> 8),
                                                                                CONCAT14((char)
                                                  iVar24,uVar23)))) / 0xff00000000),
                                              CONCAT14((char)(uVar23 / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar45 >> 0x18),
                                                  CONCAT16((char)((uint)iVar45 >> 0x10),
                                                           CONCAT15((char)((uint)iVar45 >> 8),
                                                                    CONCAT14((char)iVar45,uVar12))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar12 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar22 >> 0x18),
                                                  CONCAT16((char)((uint)iVar22 >> 0x10),
                                                           CONCAT15((char)((uint)iVar22 >> 8),
                                                                    CONCAT14((char)iVar22,uVar21))))
                                                  / 0xff00000000),(char)(uVar21 / 0xff))))))));
              local_130[0x16] =
                   CONCAT17((char)((iVar27 * 0xb7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xb6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xb5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xb4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xb3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xb2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xb1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xb0 + 0x7fU) / 0xff))))))));
              local_130[0x19] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar48 >> 0x18),
                                                   CONCAT16((char)((uint)iVar48 >> 0x10),
                                                            CONCAT15((char)((uint)iVar48 >> 8),
                                                                     CONCAT14((char)iVar48,uVar15)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar15 / 0xff),
                                     CONCAT15((char)(CONCAT17((char)((uint)iVar40 >> 0x18),
                                                              CONCAT16((char)((uint)iVar40 >> 0x10),
                                                                       CONCAT15((char)((uint)iVar40
                                                                                      >> 8),
                                                                                CONCAT14((char)
                                                  iVar40,uVar6)))) / 0xff00000000),
                                              CONCAT14((char)(uVar6 / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar47 >> 0x18),
                                                  CONCAT16((char)((uint)iVar47 >> 0x10),
                                                           CONCAT15((char)((uint)iVar47 >> 8),
                                                                    CONCAT14((char)iVar47,uVar14))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar14 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar39 >> 0x18),
                                                  CONCAT16((char)((uint)iVar39 >> 0x10),
                                                           CONCAT15((char)((uint)iVar39 >> 8),
                                                                    CONCAT14((char)iVar39,uVar5))))
                                                  / 0xff00000000),(char)(uVar5 / 0xff))))))));
              local_130[0x18] =
                   CONCAT17((char)((iVar27 * 199 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xc6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xc5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xc4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xc3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xc2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xc1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xc0 + 0x7fU) / 0xff))))))));
              local_130[0x1b] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar50 >> 0x18),
                                                   CONCAT16((char)((uint)iVar50 >> 0x10),
                                                            CONCAT15((char)((uint)iVar50 >> 8),
                                                                     CONCAT14((char)iVar50,uVar17)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar17 / 0xff),
                                     CONCAT15((char)(CONCAT17((char)((uint)iVar42 >> 0x18),
                                                              CONCAT16((char)((uint)iVar42 >> 0x10),
                                                                       CONCAT15((char)((uint)iVar42
                                                                                      >> 8),
                                                                                CONCAT14((char)
                                                  iVar42,uVar8)))) / 0xff00000000),
                                              CONCAT14((char)(uVar8 / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar49 >> 0x18),
                                                  CONCAT16((char)((uint)iVar49 >> 0x10),
                                                           CONCAT15((char)((uint)iVar49 >> 8),
                                                                    CONCAT14((char)iVar49,uVar16))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar16 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar41 >> 0x18),
                                                  CONCAT16((char)((uint)iVar41 >> 0x10),
                                                           CONCAT15((char)((uint)iVar41 >> 8),
                                                                    CONCAT14((char)iVar41,uVar7))))
                                                  / 0xff00000000),(char)(uVar7 / 0xff))))))));
              local_130[0x1a] =
                   CONCAT17((char)((iVar27 * 0xd7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xd6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xd5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xd4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xd3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xd2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xd1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xd0 + 0x7fU) / 0xff))))))));
                    /* try { // try from 0111dddc to 0121de5b has its CatchHandler @ 0111dddc
                       catch() { ... } // from try @ 0111dddc with catch @ 0111dddc
                       catch() { ... } // from try @ 0111de64 with catch @ 0111dddc */
              local_130[0x1d] =
                   CONCAT17((char)((iVar27 * 0xef + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xee + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xed + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xec + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xeb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xea +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xe9 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xe8 + 0x7fU) / 0xff))))))));
              local_130[0x1c] =
                   CONCAT17((char)((iVar27 * 0xe7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xe6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xe5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xe4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xe3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xe2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xe1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xe0 + 0x7fU) / 0xff))))))));
                    /* try { // try from 0111de5c to 0121de63 has its CatchHandler @ 0111dea4 */
                    /* try { // try from 0111de64 to 0121deb7 has its CatchHandler @ 0111dddc */
                    /* catch() { ... } // from try @ 0111de5c with catch @ 0111dea4 */
                    /* try { // try from 0111deb8 to 0121df0f has its CatchHandler @ 0111deb8
                       catch() { ... } // from try @ 0111deb8 with catch @ 0111deb8
                       catch() { ... } // from try @ 0111df48 with catch @ 0111deb8 */
              local_130[0x1f] =
                   CONCAT17((char)((iVar27 * 0xff + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xfe + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xfd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xfc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xfb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xfa +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xf9 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xf8 + 0x7fU) / 0xff))))))));
              local_130[0x1e] =
                   CONCAT17((char)((iVar27 * 0xf7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar27 * 0xf6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar27 * 0xf5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar27 * 0xf4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar27 * 0xf3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar27 * 0xf2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar27 * 
                                                  0xf1 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0xf0 + 0x7fU) / 0xff))))))));
              local_130 = local_130 + 0x20;
              iVar27 = iVar27 + 1;
            } while (iVar27 != 0x100);
            param_1[9] = (long)FUN_011234c4;
                    /* try { // try from 0111df10 to 0121df17 has its CatchHandler @ 0111dfd0 */
            if (param_1[8] == 0) {
              uVar29 = switchD_01119bc4::caseD_4();
              return uVar29;
            }
            goto LAB_01121e5c;
          }
        }
        else if (bVar25) {
          uVar29 = switchD_01119da4::caseD_44(FUN_0112357c);
          return uVar29;
        }
        break;
      }
      if (*puVar1 != 8) break;
      if ((int)param_1[2] != 2) {
        if ((int)param_1[2] == 1) {
          uVar29 = switchD_01119da4::caseD_44(FUN_01122fbc);
          return uVar29;
        }
        uVar29 = switchD_01119da4::caseD_44(FUN_011231a4);
        return uVar29;
      }
      local_150 = _TIFFmalloc(0x10000);
      param_1[0xf] = (long)local_150;
      if (local_150 != (long *)0x0) {
        iVar27 = 0;
        do {
          uVar21 = iVar27 * 0x5c + 0x7f;
          iVar22 = iVar27 * 0x5d + 0x7f;
          uVar23 = iVar27 * 0x5e + 0x7f;
          iVar24 = iVar27 * 0x5f + 0x7f;
          uVar34 = iVar27 * 0x68 + 0x7f;
          iVar9 = iVar27 * 0x69 + 0x7f;
          uVar38 = iVar27 * 0x6a + 0x7f;
          iVar18 = iVar27 * 0x6b + 0x7f;
          local_150[1] = CONCAT17((char)((iVar27 * 0xf + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0xe + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0xd + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0xc + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0xb + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 10 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar27 * 9 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 8 + 0x7fU) / 0xff))))))));
          *local_150 = (ulong)CONCAT16((char)((iVar27 * 7 + 0x7fU) / 0xff),
                                       CONCAT15((char)((iVar27 * 6 + 0x7fU) / 0xff),
                                                CONCAT14((char)((iVar27 * 5 + 0x7fU) / 0xff),
                                                         CONCAT13((char)((iVar27 * 4 + 0x7fU) / 0xff
                                                                        ),CONCAT12((char)((iVar27 * 
                                                  3 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar27 * 2 + 0x7fU) / 0xff),
                                                           (char)((iVar27 + 0x7fU) / 0xff))))))) <<
                       8;
          local_150[3] = CONCAT17((char)((iVar27 * 0x1f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x1e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x1d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x1c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x1b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x1a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x19 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x18 + 0x7fU) / 0xff))))))));
          local_150[2] = CONCAT17((char)((iVar27 * 0x17 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x16 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x15 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x14 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x13 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x12
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x11 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x10 + 0x7fU) / 0xff))))))));
          local_150[5] = CONCAT17((char)((iVar27 * 0x2f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x2e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x2d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x2c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x2b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x2a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x29 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x28 + 0x7fU) / 0xff))))))));
          local_150[4] = CONCAT17((char)((iVar27 * 0x27 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x26 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x25 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x24 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x23 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x22
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x21 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x20 + 0x7fU) / 0xff))))))));
          local_150[7] = CONCAT17((char)((iVar27 * 0x3f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x3e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x3d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x3c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x3b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x3a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x39 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x38 + 0x7fU) / 0xff))))))));
          local_150[6] = CONCAT17((char)((iVar27 * 0x37 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x36 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x35 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x34 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x33 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x32
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x31 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x30 + 0x7fU) / 0xff))))))));
          local_150[9] = CONCAT17((char)((iVar27 * 0x4f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x4e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x4d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x4c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x4b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x4a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x49 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x48 + 0x7fU) / 0xff))))))));
          local_150[8] = CONCAT17((char)((iVar27 * 0x47 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar27 * 0x46 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar27 * 0x45 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar27 * 0x44 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar27 * 0x43 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar27 * 0x42
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar27 * 0x41 + 0x7fU) / 0xff),
                                                  (char)((iVar27 * 0x40 + 0x7fU) / 0xff))))))));
          local_150[0xb] =
               CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar24 >> 0x10),
                                               CONCAT24((short)iVar24,uVar23)) >> 0x20) / 0xff),
                        CONCAT16((char)(uVar23 / 0xff),
                                 CONCAT15((char)((uint)(CONCAT26((short)((uint)iVar22 >> 0x10),
                                                                 CONCAT24((short)iVar22,uVar21)) >>
                                                       0x20) / 0xff),
                                          CONCAT14((char)(uVar21 / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x5b + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x5a + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x59
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x58
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[10] =
               CONCAT17((char)((iVar27 * 0x57 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x56 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x55 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x54 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x53 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x52 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x51
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x50
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0xd] =
               CONCAT17((char)((iVar27 * 0x6f + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x6e + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x6d + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x6c + 0x7fU) / 0xff),
                                                   CONCAT13((char)((uint)(CONCAT26((short)((uint)
                                                  iVar18 >> 0x10),CONCAT24((short)iVar18,uVar38)) >>
                                                  0x20) / 0xff),
                                                  CONCAT12((char)(uVar38 / 0xff),
                                                           CONCAT11((char)((uint)(CONCAT26((short)((
                                                  uint)iVar9 >> 0x10),CONCAT24((short)iVar9,uVar34))
                                                  >> 0x20) / 0xff),(char)(uVar34 / 0xff))))))));
          local_150[0xc] =
               CONCAT17((char)((iVar27 * 0x67 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x66 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x65 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 100 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 99 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x62 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x61
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x60
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0xf] =
               CONCAT17((char)((iVar27 * 0x7f + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x7e + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x7d + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x7c + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x7b + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x7a + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x79
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x78
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0xe] =
               CONCAT17((char)((iVar27 * 0x77 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x76 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x75 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x74 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x73 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x72 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x71
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x70
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x11] =
               CONCAT17((char)((iVar27 * 0x8f + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x8e + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x8d + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x8c + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x8b + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x8a + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x89
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x88
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x10] =
               CONCAT17((char)((iVar27 * 0x87 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x86 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x85 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x84 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x83 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x82 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x81
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x80
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x13] =
               CONCAT17((char)((iVar27 * 0x9f + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x9e + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x9d + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x9c + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x9b + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x9a + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x99
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x98
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x12] =
               CONCAT17((char)((iVar27 * 0x97 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0x96 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0x95 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0x94 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0x93 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0x92 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0x91
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0x90
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x15] =
               CONCAT17((char)((iVar27 * 0xaf + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xae + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xad + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xac + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xab + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xaa + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xa9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xa8
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x14] =
               CONCAT17((char)((iVar27 * 0xa7 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xa6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xa5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xa4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xa3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xa2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xa1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xa0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x17] =
               CONCAT17((char)((iVar27 * 0xbf + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xbe + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xbd + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xbc + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xbb + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xba + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xb9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xb8
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x16] =
               CONCAT17((char)((iVar27 * 0xb7 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xb6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xb5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xb4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xb3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xb2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xb1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xb0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x19] =
               CONCAT17((char)((iVar27 * 0xcf + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xce + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xcd + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xcc + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xcb + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xca + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xc9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 200 
                                                  + 0x7fU) / 0xff))))))));
          local_150[0x18] =
               CONCAT17((char)((iVar27 * 199 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xc6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xc5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xc4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xc3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xc2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xc1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xc0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1b] =
               CONCAT17((char)((iVar27 * 0xdf + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xde + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xdd + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xdc + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xdb + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xda + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xd9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xd8
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1a] =
               CONCAT17((char)((iVar27 * 0xd7 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xd6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xd5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xd4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xd3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xd2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xd1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xd0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1d] =
               CONCAT17((char)((iVar27 * 0xef + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xee + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xed + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xec + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xeb + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xea + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xe9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xe8
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1c] =
               CONCAT17((char)((iVar27 * 0xe7 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xe6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xe5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xe4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xe3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xe2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xe1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xe0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1f] =
               CONCAT17((char)((iVar27 * 0xff + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xfe + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xfd + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xfc + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xfb + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xfa + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xf9
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xf8
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150[0x1e] =
               CONCAT17((char)((iVar27 * 0xf7 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar27 * 0xf6 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar27 * 0xf5 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar27 * 0xf4 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar27 * 0xf3 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar27 * 0xf2 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar27 * 0xf1
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar27
                                                                                              * 0xf0
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_150 = local_150 + 0x20;
          iVar27 = iVar27 + 1;
        } while (iVar27 != 0x100);
        uVar29 = switchD_01119da4::caseD_44(FUN_01123108);
        return uVar29;
      }
LAB_01121e08:
      lVar37 = *param_1;
      pcVar30 = "BuildMapUaToAa";
LAB_01121e14:
      TIFFErrorExt(*(undefined8 *)(lVar37 + 0x3b8),pcVar30,"Out of memory");
      if (param_1[8] == 0) {
        uVar29 = switchD_01119bc4::caseD_4();
        return uVar29;
      }
      goto LAB_01121e5c;
    case 3:
      iVar27 = FUN_0112361c(param_1);
      if (((iVar27 != 0) && (uVar34 = *puVar1 - 1, uVar34 < 8)) &&
         ((0x8bU >> (ulong)(uVar34 & 0x1f) & 1) != 0)) {
        uVar29 = switchD_01119da4::caseD_44((&PTR_FUN_0172cec0)[(short)uVar34]);
        return uVar29;
      }
      break;
    default:
      goto code_r0x01121e6c;
    case 5:
      iVar27 = FUN_0112361c(param_1);
      if ((iVar27 != 0) && (*puVar1 == 8)) {
        pcVar36 = FUN_0112454c;
        if (param_1[10] == 0) {
          pcVar36 = FUN_01123d98;
        }
        uVar29 = switchD_01119da4::caseD_44(pcVar36);
        return uVar29;
      }
      break;
    case 6:
      if (((*puVar1 == 8) && (*puVar2 == 3)) && (iVar27 = FUN_01125040(param_1), iVar27 != 0)) {
        TIFFGetFieldDefaulted(*param_1,0x212,&local_b4,&local_a8);
        pcVar36 = FUN_011250d8;
        switch((uint)local_a8 | ((uint)local_b4 & 0xffff) << 4) {
        case 0x11:
          uVar29 = switchD_01119da4::caseD_44(FUN_01126b70);
          return uVar29;
        case 0x12:
          uVar29 = switchD_01119da4::caseD_44(FUN_01126984);
          return uVar29;
        case 0x21:
          uVar29 = switchD_01119da4::caseD_44(FUN_011266fc);
          return uVar29;
        case 0x22:
          uVar29 = switchD_01119da4::caseD_44(FUN_0112633c);
          return uVar29;
        case 0x41:
          uVar29 = switchD_01119da4::caseD_44(FUN_01126064);
          return uVar29;
        case 0x42:
          uVar29 = switchD_01119da4::caseD_44(FUN_01125b18);
          return uVar29;
        case 0x44:
          goto code_r0x01121e50;
        }
      }
      break;
    case 8:
      iVar27 = FUN_0112361c(param_1);
      if ((iVar27 != 0) && (*puVar1 == 8)) {
        if (param_1[0xe] == 0) {
          pvVar28 = _TIFFmalloc(0x46cc);
          param_1[0xe] = (long)pvVar28;
          if (pvVar28 != (void *)0x0) goto LAB_01119de4;
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"initCIELabConversion",
                       "No space for CIE L*a*b*->RGB conversion state.");
        }
        else {
LAB_01119de4:
          TIFFGetFieldDefaulted(*param_1,0x13e,&local_a8);
          pfVar26 = (float *)CONCAT62(uStack_a6,local_a8);
          local_b0 = 0x42c80000;
          fVar195 = pfVar26[1];
          local_b4 = (*pfVar26 / fVar195) * 100.0;
          local_ac = (((1.0 - *pfVar26) - fVar195) / fVar195) * 100.0;
          iVar27 = TIFFCIELabToRGBInit(param_1[0xe],&DAT_0147cbd8,&local_b4);
          if (-1 < iVar27) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01119e98 with catch @ 01119e50
                       catch(type#1 @ 00000000) { ... } // from try @ 01119ef0 with catch @ 01119e50
                       catch(type#1 @ 00000000) { ... } // from try @ 01119f50 with catch @ 01119e50
                        */
            uVar29 = switchD_01119da4::caseD_44(FUN_01126c48);
            return uVar29;
          }
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"initCIELabConversion",
                       "Failed to initialize CIE L*a*b*->RGB conversion state.");
          _TIFFfree((void *)param_1[0xe]);
        }
        pcVar36 = (code *)0x0;
code_r0x01121e50:
        param_1[9] = (long)pcVar36;
      }
    }
    if (param_1[8] != 0) {
LAB_01121e5c:
      if (param_1[9] != 0) {
        return 1;
      }
    }
  }
code_r0x01121e6c:
  uVar197._0_1_ = 'a';
  uVar197._1_1_ = 'n';
  uVar197._2_1_ = ' ';
  uVar197._3_1_ = 'n';
  uVar197._4_1_ = 'o';
  uVar197._5_1_ = 't';
  uVar197._6_1_ = ' ';
  uVar197._7_1_ = 'h';
  uVar196._0_1_ = 'S';
  uVar196._1_1_ = 'o';
  uVar196._2_1_ = 'r';
  uVar196._3_1_ = 'r';
  uVar196._4_1_ = 'y';
  uVar196._5_1_ = ',';
  uVar196._6_1_ = ' ';
  uVar196._7_1_ = 'c';
  builtin_strncpy(param_4 + 0xc,"ot handle image",0x10);
LAB_01121e80:
  *(undefined8 *)(param_4 + 8) = uVar197;
  *(undefined8 *)param_4 = uVar196;
LAB_01121e84:
  _TIFFfree((void *)param_1[5]);
  _TIFFfree((void *)param_1[6]);
  _TIFFfree((void *)param_1[7]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  return 0;
}

