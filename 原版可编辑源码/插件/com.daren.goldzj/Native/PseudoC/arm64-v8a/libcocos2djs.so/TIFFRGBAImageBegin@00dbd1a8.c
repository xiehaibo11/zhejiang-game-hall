
/* WARNING: Type propagation algorithm not settling */

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
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  float *pfVar27;
  int iVar28;
  void *pvVar29;
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
    goto LAB_00dc59dc;
  }
  puVar2 = (ushort *)((long)param_1 + 0x1e);
  *(undefined4 *)(param_1 + 2) = 0;
  TIFFGetFieldDefaulted(param_2,0x115,puVar2);
  TIFFGetFieldDefaulted(param_2,0x152,local_c4,&local_c0);
  if (local_c4[0] != 0) {
    uVar32 = *local_c0;
    uVar34 = (uint)uVar32;
    if (1 < uVar32 - 1) {
      if ((uVar32 != 0) || (*puVar2 < 4)) goto LAB_00dbd2a4;
      uVar34 = 1;
    }
    *(uint *)(param_1 + 2) = uVar34;
  }
LAB_00dbd2a4:
  puVar3 = (ushort *)((long)param_1 + 0x24);
  iVar28 = TIFFGetField(param_2,0x106,puVar3);
  if (iVar28 == 0) {
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
  iVar28 = TIFFGetField(param_2,0x106,puVar3);
  if (iVar28 == 0) {
    if (uVar34 == 3) {
      uVar32 = 2;
      *puVar3 = 2;
    }
    else {
      if (uVar34 != 1) {
        sprintf(param_4,"Missing needed %s tag","PhotometricInterpretation");
        goto LAB_00dc59dc;
      }
      TIFFGetField(param_2,0x103,&local_b4);
      bVar26 = ((uint)local_b4 & 0xffff) != 0x8003 && 2 < ((uint)local_b4 & 0xffff) - 2;
      uVar32 = (ushort)bVar26;
      *puVar3 = (ushort)bVar26;
    }
  }
  else {
    uVar32 = *puVar3;
  }
  switch(uVar32) {
  case 0:
  case 1:
switchD_00dbd370_caseD_0:
    if (((local_c8[0] == 1) && (*puVar2 != 1)) && (*puVar1 < 8)) {
      sprintf(param_4,
              "Sorry, can not handle contiguous data with %s=%d, and %s=%d and Bits/Sample=%d",
              "PhotometricInterpretation",(ulong)*puVar3,"Samples/pixel");
      goto LAB_00dc59dc;
    }
    break;
  case 2:
    if ((int)uVar34 < 3) {
      sprintf(param_4,"Sorry, can not handle RGB image with %s=%d","Color channels",(ulong)uVar34);
      goto LAB_00dc59dc;
    }
    break;
  case 3:
    iVar28 = TIFFGetField(param_2,0x140,&local_d8,&local_e0,&local_e8);
    if (iVar28 == 0) {
      pcVar30 = "Missing required \"Colormap\" tag";
    }
    else {
      uVar33 = 1L << ((ulong)*(ushort *)((long)param_1 + 0x1c) & 0x3f);
      __size = -(uVar33 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar33 & 0xffffffff) << 1;
      pvVar29 = _TIFFmalloc(__size);
      param_1[5] = (long)pvVar29;
      pvVar29 = _TIFFmalloc(__size);
      param_1[6] = (long)pvVar29;
      pvVar29 = _TIFFmalloc(__size);
      param_1[7] = (long)pvVar29;
      if ((((void *)param_1[5] != (void *)0x0) && (pvVar29 != (void *)0x0)) && (param_1[6] != 0)) {
        __n = (size_t)((int)uVar33 << 1);
        _TIFFmemcpy((void *)param_1[5],local_d8,__n);
        _TIFFmemcpy((void *)param_1[6],local_e0,__n);
        _TIFFmemcpy((void *)param_1[7],local_e8,__n);
        goto switchD_00dbd370_caseD_0;
      }
      pcVar30 = "Out of memory for colormap copy";
    }
    uVar197 = *(undefined8 *)(pcVar30 + 8);
    uVar196 = *(undefined8 *)pcVar30;
    uVar9 = *(undefined8 *)(pcVar30 + 0x10);
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(pcVar30 + 0x18);
    *(undefined8 *)(param_4 + 0x10) = uVar9;
    goto LAB_00dc59d8;
  case 4:
  case 7:
switchD_00dbd370_caseD_4:
    sprintf(param_4,"Sorry, can not handle image with %s=%d","PhotometricInterpretation");
    goto LAB_00dc59dc;
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
LAB_00dbd9f4:
    sprintf(param_4,pcVar30,pcVar31,uVar33);
    goto LAB_00dc59dc;
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
        pcVar30 = "Sorry, LogL data must have %s=%d";
        pcVar31 = "Compression";
        uVar33 = 0x8774;
        goto LAB_00dbd9f4;
      }
      TIFFSetField(param_2,0x10018,3);
      uVar32 = 1;
    }
    else {
      if (uVar32 != 0x804d) goto switchD_00dbd370_caseD_4;
      if (local_cc[0] >> 1 != 0x43ba) {
        sprintf(param_4,"Sorry, LogLuv data must have %s=%d or %d","Compression",0x8774,0x8775);
        goto LAB_00dc59dc;
      }
      if (local_c8[0] != 1) {
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
    if (*(ushort *)((long)param_1 + 0x1e) < 2) goto LAB_00dbd6dc;
    iVar28 = TIFFIsTiled(*param_1);
    uVar32 = *(ushort *)((long)param_1 + 0x24);
    pcVar36 = FUN_00dca8a4;
    if (iVar28 == 0) {
      pcVar36 = FUN_00dcae78;
    }
    param_1[8] = (long)pcVar36;
    param_1[9] = 0;
    if (2 < uVar32) {
      if (uVar32 == 5) {
        if ((*puVar1 == 8) && (*puVar2 == 4)) {
          *(undefined4 *)(param_1 + 2) = 1;
          param_1[9] = (long)FUN_00dcbbe0;
          lVar37 = param_1[8];
          goto joined_r0x00dbdaa8;
        }
        goto LAB_00dc5904;
      }
      if (uVar32 == 6) {
        if ((((*puVar1 == 8) && (*puVar2 == 3)) && (iVar28 = FUN_00dc8b98(param_1), iVar28 != 0)) &&
           (TIFFGetFieldDefaulted(*param_1,0x212,&local_b4,&local_a8),
           ((uint)local_a8 | ((uint)local_b4 & 0xffff) << 4) == 0x11)) {
          pcVar36 = FUN_00dcbccc;
          goto LAB_00dc58d8;
        }
        goto LAB_00dc5904;
      }
      goto switchD_00dbd71c_caseD_4;
    }
    if (*puVar1 == 0x10) {
      lVar37 = param_1[2];
      if ((int)lVar37 == 1) {
        pvVar29 = _TIFFmalloc(0x10000);
        param_1[0x10] = (long)pvVar29;
        if (pvVar29 != (void *)0x0) {
          lVar37 = 0;
          do {
            iVar28 = (int)lVar37;
            puVar4 = (undefined1 *)((long)pvVar29 + lVar37);
            lVar37 = lVar37 + 2;
            *puVar4 = (char)((ulong)(iVar28 + 0x80) * 0xff00ff01 >> 0x28);
            puVar4[1] = (char)((ulong)(iVar28 + 0x81) * 0xff00ff01 >> 0x28);
          } while (lVar37 != 0x10000);
          pcVar36 = FUN_00dcb9fc;
          goto LAB_00dc58d8;
        }
        lVar37 = *param_1;
        pcVar30 = "BuildMapBitdepth16To8";
LAB_00dc58f4:
        TIFFErrorExt(*(undefined8 *)(lVar37 + 0x3b8),pcVar30,"Out of memory");
      }
      else {
        pvVar29 = _TIFFmalloc(0x10000);
        param_1[0x10] = (long)pvVar29;
        if (pvVar29 == (void *)0x0) {
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"BuildMapBitdepth16To8","Out of memory");
          bVar26 = false;
        }
        else {
          lVar35 = 0;
          do {
            iVar28 = (int)lVar35;
            puVar4 = (undefined1 *)((long)pvVar29 + lVar35);
            lVar35 = lVar35 + 2;
            *puVar4 = (char)((ulong)(iVar28 + 0x80) * 0xff00ff01 >> 0x28);
            puVar4[1] = (char)((ulong)(iVar28 + 0x81) * 0xff00ff01 >> 0x28);
          } while (lVar35 != 0x10000);
          bVar26 = true;
        }
        if ((int)lVar37 == 2) {
          if (bVar26) {
            local_130 = _TIFFmalloc(0x10000);
            param_1[0xf] = (long)local_130;
            if (local_130 == (long *)0x0) goto LAB_00dc58e8;
            iVar28 = 0;
            do {
              uVar20 = iVar28 * 0x44 + 0x7f;
              iVar51 = iVar28 * 0x45 + 0x7f;
              uVar21 = iVar28 * 0x46 + 0x7f;
              iVar52 = iVar28 * 0x47 + 0x7f;
              uVar34 = iVar28 * 0x54 + 0x7f;
              iVar10 = iVar28 * 0x55 + 0x7f;
              uVar11 = iVar28 * 0x56 + 0x7f;
              iVar43 = iVar28 * 0x57 + 0x7f;
              uVar38 = iVar28 * 0xa8 + 0x7f;
              iVar19 = iVar28 * 0xa9 + 0x7f;
              uVar12 = iVar28 * 0xaa + 0x7f;
              iVar44 = iVar28 * 0xab + 0x7f;
              uVar22 = iVar28 * 0xb8 + 0x7f;
              iVar23 = iVar28 * 0xb9 + 0x7f;
              uVar13 = iVar28 * 0xba + 0x7f;
              iVar45 = iVar28 * 0xbb + 0x7f;
              uVar24 = iVar28 * 0xbc + 0x7f;
              iVar25 = iVar28 * 0xbd + 0x7f;
              uVar14 = iVar28 * 0xbe + 0x7f;
              iVar46 = iVar28 * 0xbf + 0x7f;
              uVar5 = iVar28 * 200 + 0x7f;
              iVar39 = iVar28 * 0xc9 + 0x7f;
              uVar15 = iVar28 * 0xca + 0x7f;
              iVar47 = iVar28 * 0xcb + 0x7f;
              uVar6 = iVar28 * 0xcc + 0x7f;
              iVar40 = iVar28 * 0xcd + 0x7f;
              uVar16 = iVar28 * 0xce + 0x7f;
              iVar48 = iVar28 * 0xcf + 0x7f;
              uVar7 = iVar28 * 0xd8 + 0x7f;
              iVar41 = iVar28 * 0xd9 + 0x7f;
              uVar17 = iVar28 * 0xda + 0x7f;
              iVar49 = iVar28 * 0xdb + 0x7f;
              uVar8 = iVar28 * 0xdc + 0x7f;
              iVar42 = iVar28 * 0xdd + 0x7f;
              uVar18 = iVar28 * 0xde + 0x7f;
              iVar50 = iVar28 * 0xdf + 0x7f;
              local_130[1] = CONCAT17((char)((iVar28 * 0xf + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0xe + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0xd + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0xc + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0xb +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 8 + 0x7fU) / 0xff)))))))
                                     );
              *local_130 = (ulong)CONCAT16((char)((iVar28 * 7 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 6 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 5 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 4 + 0x7fU) /
                                                                            0xff),
                                                                      CONCAT12((char)((iVar28 * 3 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar28 * 2 + 0x7fU) / 0xff),
                                                  (char)((iVar28 + 0x7fU) / 0xff))))))) << 8;
              local_130[3] = CONCAT17((char)((iVar28 * 0x1f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x1e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x1d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x1c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x1b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x1a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x19 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x18 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[2] = CONCAT17((char)((iVar28 * 0x17 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x16 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x15 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x14 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x13 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x12 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x11 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x10 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[5] = CONCAT17((char)((iVar28 * 0x2f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x2e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x2d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x2c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x2b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x2a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x29 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x28 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[4] = CONCAT17((char)((iVar28 * 0x27 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x26 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x25 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x24 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x23 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x22 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x21 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x20 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[7] = CONCAT17((char)((iVar28 * 0x3f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x3e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x3d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x3c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x3b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x3a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x39 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x38 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[6] = CONCAT17((char)((iVar28 * 0x37 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x36 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x35 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x34 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x33 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x32 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x31 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x30 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[9] = CONCAT17((char)((iVar28 * 0x4f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x4e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x4d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x4c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x4b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x4a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x49 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x48 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[8] = CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar52 >> 0x10),
                                                             CONCAT24((short)iVar52,uVar21)) >> 0x20
                                                   ) / 0xff),
                                      CONCAT16((char)(uVar21 / 0xff),
                                               CONCAT15((char)((uint)(CONCAT26((short)((uint)iVar51
                                                                                      >> 0x10),
                                                                               CONCAT24((short)
                                                  iVar51,uVar20)) >> 0x20) / 0xff),
                                                  CONCAT14((char)(uVar20 / 0xff),
                                                           CONCAT13((char)((iVar28 * 0x43 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar28 * 0x42 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar28
                                                                                              * 0x41
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar28 * 0x40 + 0x7fU) / 0xff)))
                                                  )))));
              local_130[0xb] =
                   CONCAT17((char)((iVar28 * 0x5f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x5e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x5d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x5c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x5b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x5a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x59 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x58 + 0x7fU) / 0xff))))))));
              local_130[10] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar43 >> 0x18),
                                                   CONCAT16((char)((uint)iVar43 >> 0x10),
                                                            CONCAT15((char)((uint)iVar43 >> 8),
                                                                     CONCAT14((char)iVar43,uVar11)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar11 / 0xff),
                                     CONCAT15((char)((uint)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                                                     CONCAT16((char)((uint)iVar10 >>
                                                                                    0x10),
                                                                              CONCAT15((char)((uint)
                                                  iVar10 >> 8),CONCAT14((char)iVar10,uVar34)))) >>
                                                  0x20) / 0xff),
                                              CONCAT14((char)(uVar34 / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x53 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x52 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x51 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x50 + 0x7fU) / 0xff))))))));
              local_130[0xd] =
                   CONCAT17((char)((iVar28 * 0x6f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x6e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x6d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x6c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x6b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x6a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x69 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x68 + 0x7fU) / 0xff))))))));
              local_130[0xc] =
                   CONCAT17((char)((iVar28 * 0x67 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x66 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x65 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 100 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 99 + 0x7fU) / 0xff)
                                                                ,CONCAT12((char)((iVar28 * 0x62 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT11((char)((iVar28 * 
                                                  0x61 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x60 + 0x7fU) / 0xff))))))));
              local_130[0xf] =
                   CONCAT17((char)((iVar28 * 0x7f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x7e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x7d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x7c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x7b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x7a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x79 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x78 + 0x7fU) / 0xff))))))));
              local_130[0xe] =
                   CONCAT17((char)((iVar28 * 0x77 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x76 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x75 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x74 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x73 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x72 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x71 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x70 + 0x7fU) / 0xff))))))));
              local_130[0x11] =
                   CONCAT17((char)((iVar28 * 0x8f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x8e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x8d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x8c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x8b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x8a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x89 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x88 + 0x7fU) / 0xff))))))));
              local_130[0x10] =
                   CONCAT17((char)((iVar28 * 0x87 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x86 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x85 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x84 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x83 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x82 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x81 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x80 + 0x7fU) / 0xff))))))));
              local_130[0x13] =
                   CONCAT17((char)((iVar28 * 0x9f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x9e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x9d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x9c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x9b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x9a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x99 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x98 + 0x7fU) / 0xff))))))));
              local_130[0x12] =
                   CONCAT17((char)((iVar28 * 0x97 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x96 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x95 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x94 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x93 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x92 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x91 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x90 + 0x7fU) / 0xff))))))));
              local_130[0x15] =
                   CONCAT17((char)((iVar28 * 0xaf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xae + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xad + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xac + 0x7fU) / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar44 >> 0x18),
                                                  CONCAT16((char)((uint)iVar44 >> 0x10),
                                                           CONCAT15((char)((uint)iVar44 >> 8),
                                                                    CONCAT14((char)iVar44,uVar12))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar12 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar19 >> 0x18),
                                                  CONCAT16((char)((uint)iVar19 >> 0x10),
                                                           CONCAT15((char)((uint)iVar19 >> 8),
                                                                    CONCAT14((char)iVar19,uVar38))))
                                                  / 0xff00000000),(char)(uVar38 / 0xff))))))));
              local_130[0x14] =
                   CONCAT17((char)((iVar28 * 0xa7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xa6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xa5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xa4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xa3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xa2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xa1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xa0 + 0x7fU) / 0xff))))))));
              local_130[0x17] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar46 >> 0x18),
                                                   CONCAT16((char)((uint)iVar46 >> 0x10),
                                                            CONCAT15((char)((uint)iVar46 >> 8),
                                                                     CONCAT14((char)iVar46,uVar14)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar14 / 0xff),
                                     CONCAT15((char)(CONCAT17((char)((uint)iVar25 >> 0x18),
                                                              CONCAT16((char)((uint)iVar25 >> 0x10),
                                                                       CONCAT15((char)((uint)iVar25
                                                                                      >> 8),
                                                                                CONCAT14((char)
                                                  iVar25,uVar24)))) / 0xff00000000),
                                              CONCAT14((char)(uVar24 / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar45 >> 0x18),
                                                  CONCAT16((char)((uint)iVar45 >> 0x10),
                                                           CONCAT15((char)((uint)iVar45 >> 8),
                                                                    CONCAT14((char)iVar45,uVar13))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar13 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar23 >> 0x18),
                                                  CONCAT16((char)((uint)iVar23 >> 0x10),
                                                           CONCAT15((char)((uint)iVar23 >> 8),
                                                                    CONCAT14((char)iVar23,uVar22))))
                                                  / 0xff00000000),(char)(uVar22 / 0xff))))))));
              local_130[0x16] =
                   CONCAT17((char)((iVar28 * 0xb7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xb6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xb5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xb4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xb3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xb2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xb1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xb0 + 0x7fU) / 0xff))))))));
              local_130[0x19] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar48 >> 0x18),
                                                   CONCAT16((char)((uint)iVar48 >> 0x10),
                                                            CONCAT15((char)((uint)iVar48 >> 8),
                                                                     CONCAT14((char)iVar48,uVar16)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar16 / 0xff),
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
                                                                    CONCAT14((char)iVar47,uVar15))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar15 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar39 >> 0x18),
                                                  CONCAT16((char)((uint)iVar39 >> 0x10),
                                                           CONCAT15((char)((uint)iVar39 >> 8),
                                                                    CONCAT14((char)iVar39,uVar5))))
                                                  / 0xff00000000),(char)(uVar5 / 0xff))))))));
              local_130[0x18] =
                   CONCAT17((char)((iVar28 * 199 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xc6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xc5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xc4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xc3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xc2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xc1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xc0 + 0x7fU) / 0xff))))))));
              local_130[0x1b] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar50 >> 0x18),
                                                   CONCAT16((char)((uint)iVar50 >> 0x10),
                                                            CONCAT15((char)((uint)iVar50 >> 8),
                                                                     CONCAT14((char)iVar50,uVar18)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar18 / 0xff),
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
                                                                    CONCAT14((char)iVar49,uVar17))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar17 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar41 >> 0x18),
                                                  CONCAT16((char)((uint)iVar41 >> 0x10),
                                                           CONCAT15((char)((uint)iVar41 >> 8),
                                                                    CONCAT14((char)iVar41,uVar7))))
                                                  / 0xff00000000),(char)(uVar7 / 0xff))))))));
              local_130[0x1a] =
                   CONCAT17((char)((iVar28 * 0xd7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xd6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xd5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xd4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xd3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xd2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xd1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xd0 + 0x7fU) / 0xff))))))));
              local_130[0x1d] =
                   CONCAT17((char)((iVar28 * 0xef + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xee + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xed + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xec + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xeb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xea +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe8 + 0x7fU) / 0xff))))))));
              local_130[0x1c] =
                   CONCAT17((char)((iVar28 * 0xe7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xe6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xe5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xe4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xe3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xe2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe0 + 0x7fU) / 0xff))))))));
              local_130[0x1f] =
                   CONCAT17((char)((iVar28 * 0xff + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xfe + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xfd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xfc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xfb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xfa +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf8 + 0x7fU) / 0xff))))))));
              local_130[0x1e] =
                   CONCAT17((char)((iVar28 * 0xf7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xf6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xf5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xf4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xf3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xf2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf0 + 0x7fU) / 0xff))))))));
              local_130 = local_130 + 0x20;
              iVar28 = iVar28 + 1;
            } while (iVar28 != 0x100);
            param_1[9] = (long)FUN_00dcba9c;
            lVar37 = param_1[8];
            goto joined_r0x00dbdaa8;
          }
        }
        else if (bVar26) {
          pcVar36 = FUN_00dcbb4c;
          goto LAB_00dc58d8;
        }
      }
LAB_00dc5904:
      lVar37 = param_1[8];
    }
    else {
      if (*puVar1 != 8) goto LAB_00dc5904;
      if ((int)param_1[2] == 2) {
        local_110 = _TIFFmalloc(0x10000);
        param_1[0xf] = (long)local_110;
        if (local_110 == (long *)0x0) {
LAB_00dc58e8:
          lVar37 = *param_1;
          pcVar30 = "BuildMapUaToAa";
          goto LAB_00dc58f4;
        }
        iVar28 = 0;
        do {
          uVar22 = iVar28 * 0x10 + 0x7f;
          iVar23 = iVar28 * 0x11 + 0x7f;
          uVar24 = iVar28 * 0x12 + 0x7f;
          iVar25 = iVar28 * 0x13 + 0x7f;
          iVar39 = iVar28 * 0x68;
          iVar78 = iVar28 * 0x69;
          iVar117 = iVar28 * 0x6a;
          iVar156 = iVar28 * 0x6b;
          iVar40 = iVar28 * 0x6c;
          iVar79 = iVar28 * 0x6d;
          iVar118 = iVar28 * 0x6e;
          iVar157 = iVar28 * 0x6f;
          uVar34 = iVar28 * 0x60 + 0x7f;
          iVar10 = iVar28 * 0x61 + 0x7f;
          uVar38 = iVar28 * 0x62 + 0x7f;
          iVar19 = iVar28 * 99 + 0x7f;
          iVar41 = iVar28 * 100;
          iVar80 = iVar28 * 0x65;
          iVar119 = iVar28 * 0x66;
          iVar158 = iVar28 * 0x67;
          iVar42 = iVar28 * 0x78;
          iVar81 = iVar28 * 0x79;
          iVar120 = iVar28 * 0x7a;
          iVar159 = iVar28 * 0x7b;
          iVar43 = iVar28 * 0x7c;
          iVar82 = iVar28 * 0x7d;
          iVar121 = iVar28 * 0x7e;
          iVar160 = iVar28 * 0x7f;
          iVar44 = iVar28 * 0x70;
          iVar83 = iVar28 * 0x71;
          iVar122 = iVar28 * 0x72;
          iVar161 = iVar28 * 0x73;
          iVar45 = iVar28 * 0x74;
          iVar84 = iVar28 * 0x75;
          iVar123 = iVar28 * 0x76;
          iVar162 = iVar28 * 0x77;
          iVar46 = iVar28 * 0x88;
          iVar85 = iVar28 * 0x89;
          iVar124 = iVar28 * 0x8a;
          iVar163 = iVar28 * 0x8b;
          iVar47 = iVar28 * 0x8c;
          iVar86 = iVar28 * 0x8d;
          iVar125 = iVar28 * 0x8e;
          iVar164 = iVar28 * 0x8f;
          iVar48 = iVar28 * 0x80;
          iVar87 = iVar28 * 0x81;
          iVar126 = iVar28 * 0x82;
          iVar165 = iVar28 * 0x83;
          iVar49 = iVar28 * 0x84;
          iVar88 = iVar28 * 0x85;
          iVar127 = iVar28 * 0x86;
          iVar166 = iVar28 * 0x87;
          iVar50 = iVar28 * 0x98;
          iVar89 = iVar28 * 0x99;
          iVar128 = iVar28 * 0x9a;
          iVar167 = iVar28 * 0x9b;
          iVar51 = iVar28 * 0x9c;
          iVar90 = iVar28 * 0x9d;
          iVar129 = iVar28 * 0x9e;
          iVar168 = iVar28 * 0x9f;
          iVar52 = iVar28 * 0x90;
          iVar91 = iVar28 * 0x91;
          iVar130 = iVar28 * 0x92;
          iVar169 = iVar28 * 0x93;
          iVar53 = iVar28 * 0x94;
          iVar92 = iVar28 * 0x95;
          iVar131 = iVar28 * 0x96;
          iVar170 = iVar28 * 0x97;
          iVar54 = iVar28 * 0xa8;
          iVar93 = iVar28 * 0xa9;
          iVar132 = iVar28 * 0xaa;
          iVar171 = iVar28 * 0xab;
          iVar55 = iVar28 * 0xac;
          iVar94 = iVar28 * 0xad;
          iVar133 = iVar28 * 0xae;
          iVar172 = iVar28 * 0xaf;
          iVar56 = iVar28 * 0xa0;
          iVar95 = iVar28 * 0xa1;
          iVar134 = iVar28 * 0xa2;
          iVar173 = iVar28 * 0xa3;
          iVar57 = iVar28 * 0xa4;
          iVar96 = iVar28 * 0xa5;
          iVar135 = iVar28 * 0xa6;
          iVar174 = iVar28 * 0xa7;
          iVar58 = iVar28 * 0xb8;
          iVar97 = iVar28 * 0xb9;
          iVar136 = iVar28 * 0xba;
          iVar175 = iVar28 * 0xbb;
          iVar59 = iVar28 * 0xbc;
          iVar98 = iVar28 * 0xbd;
          iVar137 = iVar28 * 0xbe;
          iVar176 = iVar28 * 0xbf;
          iVar60 = iVar28 * 0xb0;
          iVar99 = iVar28 * 0xb1;
          iVar138 = iVar28 * 0xb2;
          iVar177 = iVar28 * 0xb3;
          iVar61 = iVar28 * 0xb4;
          iVar100 = iVar28 * 0xb5;
          iVar139 = iVar28 * 0xb6;
          iVar178 = iVar28 * 0xb7;
          iVar62 = iVar28 * 200;
          iVar101 = iVar28 * 0xc9;
          iVar140 = iVar28 * 0xca;
          iVar179 = iVar28 * 0xcb;
          iVar63 = iVar28 * 0xcc;
          iVar102 = iVar28 * 0xcd;
          iVar141 = iVar28 * 0xce;
          iVar180 = iVar28 * 0xcf;
          iVar64 = iVar28 * 0xc0;
          iVar103 = iVar28 * 0xc1;
          iVar142 = iVar28 * 0xc2;
          iVar181 = iVar28 * 0xc3;
          iVar65 = iVar28 * 0xc4;
          iVar104 = iVar28 * 0xc5;
          iVar143 = iVar28 * 0xc6;
          iVar182 = iVar28 * 199;
          iVar66 = iVar28 * 0xd8;
          iVar105 = iVar28 * 0xd9;
          iVar144 = iVar28 * 0xda;
          iVar183 = iVar28 * 0xdb;
          iVar67 = iVar28 * 0xdc;
          iVar106 = iVar28 * 0xdd;
          iVar145 = iVar28 * 0xde;
          iVar184 = iVar28 * 0xdf;
          iVar68 = iVar28 * 0xd0;
          iVar107 = iVar28 * 0xd1;
          iVar146 = iVar28 * 0xd2;
          iVar185 = iVar28 * 0xd3;
          iVar69 = iVar28 * 0xd4;
          iVar108 = iVar28 * 0xd5;
          iVar147 = iVar28 * 0xd6;
          iVar186 = iVar28 * 0xd7;
          iVar70 = iVar28 * 0xe8;
          iVar109 = iVar28 * 0xe9;
          iVar148 = iVar28 * 0xea;
          iVar187 = iVar28 * 0xeb;
          iVar71 = iVar28 * 0xec;
          iVar110 = iVar28 * 0xed;
          iVar149 = iVar28 * 0xee;
          iVar188 = iVar28 * 0xef;
          iVar72 = iVar28 * 0xe0;
          iVar111 = iVar28 * 0xe1;
          iVar150 = iVar28 * 0xe2;
          iVar189 = iVar28 * 0xe3;
          iVar73 = iVar28 * 0xe4;
          iVar112 = iVar28 * 0xe5;
          iVar151 = iVar28 * 0xe6;
          iVar190 = iVar28 * 0xe7;
          iVar74 = iVar28 * 0xf8;
          iVar113 = iVar28 * 0xf9;
          iVar152 = iVar28 * 0xfa;
          iVar191 = iVar28 * 0xfb;
          iVar75 = iVar28 * 0xfc;
          iVar114 = iVar28 * 0xfd;
          iVar153 = iVar28 * 0xfe;
          iVar192 = iVar28 * 0xff;
          iVar76 = iVar28 * 0xf0;
          iVar115 = iVar28 * 0xf1;
          iVar154 = iVar28 * 0xf2;
          iVar193 = iVar28 * 0xf3;
          iVar77 = iVar28 * 0xf4;
          iVar116 = iVar28 * 0xf5;
          iVar155 = iVar28 * 0xf6;
          iVar194 = iVar28 * 0xf7;
          local_110[1] = CONCAT17((char)((iVar28 * 0xf + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0xe + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0xd + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0xc + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0xb + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 10 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar28 * 9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 8 + 0x7fU) / 0xff))))))));
          *local_110 = (ulong)CONCAT16((char)((iVar28 * 7 + 0x7fU) / 0xff),
                                       CONCAT15((char)((iVar28 * 6 + 0x7fU) / 0xff),
                                                CONCAT14((char)((iVar28 * 5 + 0x7fU) / 0xff),
                                                         CONCAT13((char)((iVar28 * 4 + 0x7fU) / 0xff
                                                                        ),CONCAT12((char)((iVar28 * 
                                                  3 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 2 + 0x7fU) / 0xff),
                                                           (char)((iVar28 + 0x7fU) / 0xff))))))) <<
                       8;
          local_110[3] = CONCAT17((char)((iVar28 * 0x1f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x1e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x1d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x1c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x1b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x1a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x19 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x18 + 0x7fU) / 0xff))))))));
          local_110[2] = CONCAT17((char)((iVar28 * 0x17 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x16 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x15 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x14 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((uint)(CONCAT26((short)
                                                  ((uint)iVar25 >> 0x10),
                                                  CONCAT24((short)iVar25,uVar24)) >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar24 / 0xff),
                                                           CONCAT11((char)((uint)(CONCAT26((short)((
                                                  uint)iVar23 >> 0x10),
                                                  CONCAT24((short)iVar23,uVar22)) >> 0x20) / 0xff),
                                                  (char)(uVar22 / 0xff))))))));
          local_110[5] = CONCAT17((char)((iVar28 * 0x2f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x2e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x2d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x2c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x2b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x2a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x29 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x28 + 0x7fU) / 0xff))))))));
          local_110[4] = CONCAT17((char)((iVar28 * 0x27 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x26 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x25 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x24 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x23 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x22
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x21 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x20 + 0x7fU) / 0xff))))))));
          local_110[7] = CONCAT17((char)((iVar28 * 0x3f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x3e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x3d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x3c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x3b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x3a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x39 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x38 + 0x7fU) / 0xff))))))));
          local_110[6] = CONCAT17((char)((iVar28 * 0x37 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x36 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x35 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x34 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x33 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x32
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x31 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x30 + 0x7fU) / 0xff))))))));
          local_110[9] = CONCAT17((char)((iVar28 * 0x4f + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x4e + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x4d + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x4c + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x4b + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x4a
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x49 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x48 + 0x7fU) / 0xff))))))));
          local_110[8] = CONCAT17((char)((iVar28 * 0x47 + 0x7fU) / 0xff),
                                  CONCAT16((char)((iVar28 * 0x46 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 0x45 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 0x44 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 0x43 + 0x7fU)
                                                                            / 0xff),
                                                                      CONCAT12((char)((iVar28 * 0x42
                                                                                      + 0x7fU) /
                                                                                     0xff),
                                                                               CONCAT11((char)((
                                                  iVar28 * 0x41 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x40 + 0x7fU) / 0xff))))))));
          local_110[0xb] =
               CONCAT17((char)((iVar28 * 0x5f + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar28 * 0x5e + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar28 * 0x5d + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar28 * 0x5c + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar28 * 0x5b + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar28 * 0x5a + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar28 * 0x59
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar28
                                                                                              * 0x58
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          local_110[10] =
               CONCAT17((char)((iVar28 * 0x57 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar28 * 0x56 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar28 * 0x55 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar28 * 0x54 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar28 * 0x53 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar28 * 0x52 + 0x7fU)
                                                                           / 0xff),
                                                                     CONCAT11((char)((iVar28 * 0x51
                                                                                     + 0x7fU) / 0xff
                                                                                    ),(char)((iVar28
                                                                                              * 0x50
                                                                                             + 0x7fU
                                                  ) / 0xff))))))));
          iVar28 = iVar28 + 1;
          local_110[0xd] =
               CONCAT17((char)((iVar157 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar118 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar79 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar40 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar156 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar117 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar78
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar39 + 0x7fU) / 0xff))))))));
          local_110[0xc] =
               CONCAT17((char)((iVar158 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar119 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar80 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar41 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar19 >> 0x18),
                                                  CONCAT16((char)((uint)iVar19 >> 0x10),
                                                           CONCAT15((char)((uint)iVar19 >> 8),
                                                                    CONCAT14((char)iVar19,uVar38))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar38 / 0xff),
                                                           CONCAT11((char)((uint)(CONCAT17((char)((
                                                  uint)iVar10 >> 0x18),
                                                  CONCAT16((char)((uint)iVar10 >> 0x10),
                                                           CONCAT15((char)((uint)iVar10 >> 8),
                                                                    CONCAT14((char)iVar10,uVar34))))
                                                  >> 0x20) / 0xff),(char)(uVar34 / 0xff))))))));
          local_110[0xf] =
               CONCAT17((char)((iVar160 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar121 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar82 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar43 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar159 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar120 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar81
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar42 + 0x7fU) / 0xff))))))));
          local_110[0xe] =
               CONCAT17((char)((iVar162 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar123 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar84 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar45 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar161 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar122 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar83
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar44 + 0x7fU) / 0xff))))))));
          local_110[0x11] =
               CONCAT17((char)((iVar164 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar125 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar86 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar47 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar163 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar124 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar85
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar46 + 0x7fU) / 0xff))))))));
          local_110[0x10] =
               CONCAT17((char)((iVar166 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar127 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar88 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar49 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar165 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar126 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar87
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar48 + 0x7fU) / 0xff))))))));
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
                                                            CONCAT12((char)((iVar132 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar93
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar54 + 0x7fU) / 0xff))))))));
          local_110[0x14] =
               CONCAT17((char)((iVar174 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar135 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar96 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar57 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar173 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar134 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar95
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar56 + 0x7fU) / 0xff))))))));
          local_110[0x17] =
               CONCAT17((char)((iVar176 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar137 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar98 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar59 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar175 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar136 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar97
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar58 + 0x7fU) / 0xff))))))));
          local_110[0x16] =
               CONCAT17((char)((iVar178 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar139 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar100 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar61 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar177 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar138 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((iVar99
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar60 + 0x7fU) / 0xff))))))));
          local_110[0x19] =
               CONCAT17((char)((iVar180 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar141 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar102 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar63 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar179 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar140 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar101 + 0x7fU) / 0xff),
                                                  (char)((iVar62 + 0x7fU) / 0xff))))))));
          local_110[0x18] =
               CONCAT17((char)((iVar182 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar143 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar104 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar65 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar181 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar142 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar103 + 0x7fU) / 0xff),
                                                  (char)((iVar64 + 0x7fU) / 0xff))))))));
          local_110[0x1b] =
               CONCAT17((char)((iVar184 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar145 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar106 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar67 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar183 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar144 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar105 + 0x7fU) / 0xff),
                                                  (char)((iVar66 + 0x7fU) / 0xff))))))));
          local_110[0x1a] =
               CONCAT17((char)((iVar186 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar147 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar108 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar69 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar185 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar146 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar107 + 0x7fU) / 0xff),
                                                  (char)((iVar68 + 0x7fU) / 0xff))))))));
          local_110[0x1d] =
               CONCAT17((char)((iVar188 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar149 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar110 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar71 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar187 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar148 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar109 + 0x7fU) / 0xff),
                                                  (char)((iVar70 + 0x7fU) / 0xff))))))));
          local_110[0x1c] =
               CONCAT17((char)((iVar190 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar151 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar112 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar73 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar189 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar150 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar111 + 0x7fU) / 0xff),
                                                  (char)((iVar72 + 0x7fU) / 0xff))))))));
          local_110[0x1f] =
               CONCAT17((char)((iVar192 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar153 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar114 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar75 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar191 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar152 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar113 + 0x7fU) / 0xff),
                                                  (char)((iVar74 + 0x7fU) / 0xff))))))));
          local_110[0x1e] =
               CONCAT17((char)((iVar194 + 0x7fU) / 0xff),
                        CONCAT16((char)((iVar155 + 0x7fU) / 0xff),
                                 CONCAT15((char)((iVar116 + 0x7fU) / 0xff),
                                          CONCAT14((char)((iVar77 + 0x7fU) / 0xff),
                                                   CONCAT13((char)((iVar193 + 0x7fU) / 0xff),
                                                            CONCAT12((char)((iVar154 + 0x7fU) / 0xff
                                                                           ),CONCAT11((char)((
                                                  iVar115 + 0x7fU) / 0xff),
                                                  (char)((iVar76 + 0x7fU) / 0xff))))))));
          local_110 = local_110 + 0x20;
        } while (iVar28 != 0x100);
        pcVar36 = FUN_00dcb700;
      }
      else if ((int)param_1[2] == 1) {
        pcVar36 = FUN_00dcb44c;
      }
      else {
        pcVar36 = FUN_00dcb7a4;
      }
LAB_00dc58d8:
      param_1[9] = (long)pcVar36;
      lVar37 = param_1[8];
    }
joined_r0x00dbdaa8:
    if (lVar37 == 0) goto switchD_00dbd71c_caseD_4;
    lVar37 = param_1[9];
joined_r0x00dc5910:
    if (lVar37 != 0) {
      return 1;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 1;
LAB_00dbd6dc:
    iVar28 = TIFFIsTiled(*param_1);
    pcVar36 = FUN_00dc6180;
    if (iVar28 == 0) {
      pcVar36 = FUN_00dc6610;
    }
    param_1[8] = (long)pcVar36;
    param_1[9] = 0;
    switch(*(undefined2 *)((long)param_1 + 0x24)) {
    case 0:
    case 1:
      iVar28 = FUN_00dc7174(param_1);
      if (iVar28 != 0) {
        pcVar36 = FUN_00dc8608;
        switch(*puVar1) {
        case 1:
          pcVar36 = FUN_00dc89cc;
          break;
        case 2:
          pcVar36 = FUN_00dc8878;
          break;
        default:
          goto switchD_00dbd8fc_caseD_13;
        case 4:
          pcVar36 = FUN_00dc8790;
          break;
        case 8:
          if (((int)param_1[2] == 0) || (*puVar2 != 2)) {
            pcVar36 = FUN_00dc8718;
          }
          else {
            pcVar36 = FUN_00dc8690;
          }
          break;
        case 0x10:
          break;
        }
switchD_00dbd8fc_caseD_44:
        param_1[9] = (long)pcVar36;
      }
      break;
    case 2:
      if (*puVar1 != 0x10) {
        if (*puVar1 == 8) {
          if ((int)param_1[2] == 2) {
            local_150 = _TIFFmalloc(0x10000);
            param_1[0xf] = (long)local_150;
            if (local_150 == (long *)0x0) {
LAB_00dc5960:
              lVar37 = *param_1;
              pcVar30 = "BuildMapUaToAa";
              goto LAB_00dc596c;
            }
            iVar28 = 0;
            do {
              uVar22 = iVar28 * 0x5c + 0x7f;
              iVar23 = iVar28 * 0x5d + 0x7f;
              uVar24 = iVar28 * 0x5e + 0x7f;
              iVar25 = iVar28 * 0x5f + 0x7f;
              uVar34 = iVar28 * 0x68 + 0x7f;
              iVar10 = iVar28 * 0x69 + 0x7f;
              uVar38 = iVar28 * 0x6a + 0x7f;
              iVar19 = iVar28 * 0x6b + 0x7f;
              local_150[1] = CONCAT17((char)((iVar28 * 0xf + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0xe + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0xd + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0xc + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0xb +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 8 + 0x7fU) / 0xff)))))))
                                     );
              *local_150 = (ulong)CONCAT16((char)((iVar28 * 7 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 6 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 5 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 4 + 0x7fU) /
                                                                            0xff),
                                                                      CONCAT12((char)((iVar28 * 3 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar28 * 2 + 0x7fU) / 0xff),
                                                  (char)((iVar28 + 0x7fU) / 0xff))))))) << 8;
              local_150[3] = CONCAT17((char)((iVar28 * 0x1f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x1e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x1d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x1c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x1b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x1a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x19 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x18 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[2] = CONCAT17((char)((iVar28 * 0x17 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x16 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x15 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x14 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x13 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x12 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x11 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x10 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[5] = CONCAT17((char)((iVar28 * 0x2f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x2e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x2d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x2c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x2b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x2a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x29 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x28 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[4] = CONCAT17((char)((iVar28 * 0x27 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x26 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x25 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x24 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x23 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x22 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x21 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x20 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[7] = CONCAT17((char)((iVar28 * 0x3f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x3e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x3d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x3c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x3b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x3a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x39 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x38 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[6] = CONCAT17((char)((iVar28 * 0x37 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x36 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x35 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x34 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x33 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x32 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x31 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x30 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[9] = CONCAT17((char)((iVar28 * 0x4f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x4e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x4d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x4c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x4b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x4a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x49 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x48 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[8] = CONCAT17((char)((iVar28 * 0x47 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x46 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x45 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x44 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x43 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x42 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x41 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x40 + 0x7fU) / 0xff))))
                                                  ))));
              local_150[0xb] =
                   CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar25 >> 0x10),
                                                   CONCAT24((short)iVar25,uVar24)) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar24 / 0xff),
                                     CONCAT15((char)((uint)(CONCAT26((short)((uint)iVar23 >> 0x10),
                                                                     CONCAT24((short)iVar23,uVar22))
                                                           >> 0x20) / 0xff),
                                              CONCAT14((char)(uVar22 / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x5b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x5a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x59 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x58 + 0x7fU) / 0xff))))))));
              local_150[10] =
                   CONCAT17((char)((iVar28 * 0x57 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x56 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x55 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x54 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x53 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x52 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x51 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x50 + 0x7fU) / 0xff))))))));
              local_150[0xd] =
                   CONCAT17((char)((iVar28 * 0x6f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x6e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x6d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x6c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT26((short)((uint
                                                  )iVar19 >> 0x10),CONCAT24((short)iVar19,uVar38))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar38 / 0xff),
                                                           CONCAT11((char)((uint)(CONCAT26((short)((
                                                  uint)iVar10 >> 0x10),
                                                  CONCAT24((short)iVar10,uVar34)) >> 0x20) / 0xff),
                                                  (char)(uVar34 / 0xff))))))));
              local_150[0xc] =
                   CONCAT17((char)((iVar28 * 0x67 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x66 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x65 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 100 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 99 + 0x7fU) / 0xff)
                                                                ,CONCAT12((char)((iVar28 * 0x62 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT11((char)((iVar28 * 
                                                  0x61 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x60 + 0x7fU) / 0xff))))))));
              local_150[0xf] =
                   CONCAT17((char)((iVar28 * 0x7f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x7e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x7d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x7c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x7b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x7a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x79 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x78 + 0x7fU) / 0xff))))))));
              local_150[0xe] =
                   CONCAT17((char)((iVar28 * 0x77 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x76 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x75 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x74 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x73 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x72 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x71 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x70 + 0x7fU) / 0xff))))))));
              local_150[0x11] =
                   CONCAT17((char)((iVar28 * 0x8f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x8e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x8d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x8c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x8b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x8a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x89 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x88 + 0x7fU) / 0xff))))))));
              local_150[0x10] =
                   CONCAT17((char)((iVar28 * 0x87 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x86 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x85 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x84 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x83 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x82 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x81 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x80 + 0x7fU) / 0xff))))))));
              local_150[0x13] =
                   CONCAT17((char)((iVar28 * 0x9f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x9e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x9d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x9c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x9b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x9a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x99 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x98 + 0x7fU) / 0xff))))))));
              local_150[0x12] =
                   CONCAT17((char)((iVar28 * 0x97 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x96 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x95 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x94 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x93 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x92 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x91 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x90 + 0x7fU) / 0xff))))))));
              local_150[0x15] =
                   CONCAT17((char)((iVar28 * 0xaf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xae + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xad + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xac + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xab + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xaa +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xa9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xa8 + 0x7fU) / 0xff))))))));
              local_150[0x14] =
                   CONCAT17((char)((iVar28 * 0xa7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xa6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xa5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xa4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xa3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xa2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xa1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xa0 + 0x7fU) / 0xff))))))));
              local_150[0x17] =
                   CONCAT17((char)((iVar28 * 0xbf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xbe + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xbd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xbc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xbb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xba +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xb9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xb8 + 0x7fU) / 0xff))))))));
              local_150[0x16] =
                   CONCAT17((char)((iVar28 * 0xb7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xb6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xb5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xb4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xb3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xb2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xb1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xb0 + 0x7fU) / 0xff))))))));
              local_150[0x19] =
                   CONCAT17((char)((iVar28 * 0xcf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xce + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xcd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xcc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xcb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xca +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xc9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 200 + 0x7fU) / 0xff))))))));
              local_150[0x18] =
                   CONCAT17((char)((iVar28 * 199 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xc6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xc5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xc4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xc3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xc2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xc1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xc0 + 0x7fU) / 0xff))))))));
              local_150[0x1b] =
                   CONCAT17((char)((iVar28 * 0xdf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xde + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xdd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xdc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xdb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xda +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xd9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xd8 + 0x7fU) / 0xff))))))));
              local_150[0x1a] =
                   CONCAT17((char)((iVar28 * 0xd7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xd6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xd5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xd4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xd3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xd2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xd1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xd0 + 0x7fU) / 0xff))))))));
              local_150[0x1d] =
                   CONCAT17((char)((iVar28 * 0xef + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xee + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xed + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xec + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xeb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xea +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe8 + 0x7fU) / 0xff))))))));
              local_150[0x1c] =
                   CONCAT17((char)((iVar28 * 0xe7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xe6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xe5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xe4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xe3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xe2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe0 + 0x7fU) / 0xff))))))));
              local_150[0x1f] =
                   CONCAT17((char)((iVar28 * 0xff + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xfe + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xfd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xfc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xfb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xfa +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf8 + 0x7fU) / 0xff))))))));
              local_150[0x1e] =
                   CONCAT17((char)((iVar28 * 0xf7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xf6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xf5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xf4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xf3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xf2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf0 + 0x7fU) / 0xff))))))));
              local_150 = local_150 + 0x20;
              iVar28 = iVar28 + 1;
            } while (iVar28 != 0x100);
            pcVar36 = FUN_00dc6c60;
          }
          else if ((int)param_1[2] == 1) {
            pcVar36 = FUN_00dc6b14;
          }
          else {
            pcVar36 = FUN_00dc6cfc;
          }
          goto switchD_00dbd8fc_caseD_44;
        }
        break;
      }
      lVar37 = param_1[2];
      if ((int)lVar37 != 1) {
        pvVar29 = _TIFFmalloc(0x10000);
        param_1[0x10] = (long)pvVar29;
        if (pvVar29 == (void *)0x0) {
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"BuildMapBitdepth16To8","Out of memory");
          bVar26 = false;
        }
        else {
          lVar35 = 0;
          do {
            iVar28 = (int)lVar35;
            puVar4 = (undefined1 *)((long)pvVar29 + lVar35);
            lVar35 = lVar35 + 2;
            *puVar4 = (char)((ulong)(iVar28 + 0x80) * 0xff00ff01 >> 0x28);
            puVar4[1] = (char)((ulong)(iVar28 + 0x81) * 0xff00ff01 >> 0x28);
          } while (lVar35 != 0x10000);
          bVar26 = true;
        }
        if ((int)lVar37 == 2) {
          if (bVar26) {
            local_130 = _TIFFmalloc(0x10000);
            param_1[0xf] = (long)local_130;
            if (local_130 == (long *)0x0) goto LAB_00dc5960;
            iVar28 = 0;
            do {
              uVar20 = iVar28 * 0x44 + 0x7f;
              iVar51 = iVar28 * 0x45 + 0x7f;
              uVar21 = iVar28 * 0x46 + 0x7f;
              iVar52 = iVar28 * 0x47 + 0x7f;
              uVar34 = iVar28 * 0x54 + 0x7f;
              iVar10 = iVar28 * 0x55 + 0x7f;
              uVar11 = iVar28 * 0x56 + 0x7f;
              iVar43 = iVar28 * 0x57 + 0x7f;
              uVar38 = iVar28 * 0xa8 + 0x7f;
              iVar19 = iVar28 * 0xa9 + 0x7f;
              uVar12 = iVar28 * 0xaa + 0x7f;
              iVar44 = iVar28 * 0xab + 0x7f;
              uVar22 = iVar28 * 0xb8 + 0x7f;
              iVar23 = iVar28 * 0xb9 + 0x7f;
              uVar13 = iVar28 * 0xba + 0x7f;
              iVar45 = iVar28 * 0xbb + 0x7f;
              uVar24 = iVar28 * 0xbc + 0x7f;
              iVar25 = iVar28 * 0xbd + 0x7f;
              uVar14 = iVar28 * 0xbe + 0x7f;
              iVar46 = iVar28 * 0xbf + 0x7f;
              uVar5 = iVar28 * 200 + 0x7f;
              iVar39 = iVar28 * 0xc9 + 0x7f;
              uVar15 = iVar28 * 0xca + 0x7f;
              iVar47 = iVar28 * 0xcb + 0x7f;
              uVar6 = iVar28 * 0xcc + 0x7f;
              iVar40 = iVar28 * 0xcd + 0x7f;
              uVar16 = iVar28 * 0xce + 0x7f;
              iVar48 = iVar28 * 0xcf + 0x7f;
              uVar7 = iVar28 * 0xd8 + 0x7f;
              iVar41 = iVar28 * 0xd9 + 0x7f;
              uVar17 = iVar28 * 0xda + 0x7f;
              iVar49 = iVar28 * 0xdb + 0x7f;
              uVar8 = iVar28 * 0xdc + 0x7f;
              iVar42 = iVar28 * 0xdd + 0x7f;
              uVar18 = iVar28 * 0xde + 0x7f;
              iVar50 = iVar28 * 0xdf + 0x7f;
              local_130[1] = CONCAT17((char)((iVar28 * 0xf + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0xe + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0xd + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0xc + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0xb +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  10 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 9 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 8 + 0x7fU) / 0xff)))))))
                                     );
              *local_130 = (ulong)CONCAT16((char)((iVar28 * 7 + 0x7fU) / 0xff),
                                           CONCAT15((char)((iVar28 * 6 + 0x7fU) / 0xff),
                                                    CONCAT14((char)((iVar28 * 5 + 0x7fU) / 0xff),
                                                             CONCAT13((char)((iVar28 * 4 + 0x7fU) /
                                                                            0xff),
                                                                      CONCAT12((char)((iVar28 * 3 +
                                                                                      0x7fU) / 0xff)
                                                                               ,CONCAT11((char)((
                                                  iVar28 * 2 + 0x7fU) / 0xff),
                                                  (char)((iVar28 + 0x7fU) / 0xff))))))) << 8;
              local_130[3] = CONCAT17((char)((iVar28 * 0x1f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x1e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x1d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x1c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x1b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x1a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x19 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x18 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[2] = CONCAT17((char)((iVar28 * 0x17 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x16 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x15 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x14 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x13 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x12 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x11 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x10 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[5] = CONCAT17((char)((iVar28 * 0x2f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x2e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x2d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x2c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x2b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x2a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x29 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x28 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[4] = CONCAT17((char)((iVar28 * 0x27 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x26 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x25 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x24 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x23 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x22 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x21 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x20 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[7] = CONCAT17((char)((iVar28 * 0x3f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x3e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x3d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x3c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x3b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x3a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x39 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x38 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[6] = CONCAT17((char)((iVar28 * 0x37 + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x36 + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x35 + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x34 + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x33 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x32 + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x31 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x30 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[9] = CONCAT17((char)((iVar28 * 0x4f + 0x7fU) / 0xff),
                                      CONCAT16((char)((iVar28 * 0x4e + 0x7fU) / 0xff),
                                               CONCAT15((char)((iVar28 * 0x4d + 0x7fU) / 0xff),
                                                        CONCAT14((char)((iVar28 * 0x4c + 0x7fU) /
                                                                       0xff),
                                                                 CONCAT13((char)((iVar28 * 0x4b +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT12((char)((iVar28 * 
                                                  0x4a + 0x7fU) / 0xff),
                                                  CONCAT11((char)((iVar28 * 0x49 + 0x7fU) / 0xff),
                                                           (char)((iVar28 * 0x48 + 0x7fU) / 0xff))))
                                                  ))));
              local_130[8] = CONCAT17((char)((uint)(CONCAT26((short)((uint)iVar52 >> 0x10),
                                                             CONCAT24((short)iVar52,uVar21)) >> 0x20
                                                   ) / 0xff),
                                      CONCAT16((char)(uVar21 / 0xff),
                                               CONCAT15((char)((uint)(CONCAT26((short)((uint)iVar51
                                                                                      >> 0x10),
                                                                               CONCAT24((short)
                                                  iVar51,uVar20)) >> 0x20) / 0xff),
                                                  CONCAT14((char)(uVar20 / 0xff),
                                                           CONCAT13((char)((iVar28 * 0x43 + 0x7fU) /
                                                                          0xff),
                                                                    CONCAT12((char)((iVar28 * 0x42 +
                                                                                    0x7fU) / 0xff),
                                                                             CONCAT11((char)((iVar28
                                                                                              * 0x41
                                                                                             + 0x7fU
                                                  ) / 0xff),(char)((iVar28 * 0x40 + 0x7fU) / 0xff)))
                                                  )))));
              local_130[0xb] =
                   CONCAT17((char)((iVar28 * 0x5f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x5e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x5d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x5c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x5b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x5a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x59 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x58 + 0x7fU) / 0xff))))))));
              local_130[10] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar43 >> 0x18),
                                                   CONCAT16((char)((uint)iVar43 >> 0x10),
                                                            CONCAT15((char)((uint)iVar43 >> 8),
                                                                     CONCAT14((char)iVar43,uVar11)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar11 / 0xff),
                                     CONCAT15((char)((uint)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                                                     CONCAT16((char)((uint)iVar10 >>
                                                                                    0x10),
                                                                              CONCAT15((char)((uint)
                                                  iVar10 >> 8),CONCAT14((char)iVar10,uVar34)))) >>
                                                  0x20) / 0xff),
                                              CONCAT14((char)(uVar34 / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x53 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x52 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x51 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x50 + 0x7fU) / 0xff))))))));
              local_130[0xd] =
                   CONCAT17((char)((iVar28 * 0x6f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x6e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x6d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x6c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x6b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x6a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x69 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x68 + 0x7fU) / 0xff))))))));
              local_130[0xc] =
                   CONCAT17((char)((iVar28 * 0x67 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x66 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x65 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 100 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 99 + 0x7fU) / 0xff)
                                                                ,CONCAT12((char)((iVar28 * 0x62 +
                                                                                 0x7fU) / 0xff),
                                                                          CONCAT11((char)((iVar28 * 
                                                  0x61 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x60 + 0x7fU) / 0xff))))))));
              local_130[0xf] =
                   CONCAT17((char)((iVar28 * 0x7f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x7e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x7d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x7c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x7b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x7a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x79 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x78 + 0x7fU) / 0xff))))))));
              local_130[0xe] =
                   CONCAT17((char)((iVar28 * 0x77 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x76 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x75 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x74 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x73 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x72 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x71 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x70 + 0x7fU) / 0xff))))))));
              local_130[0x11] =
                   CONCAT17((char)((iVar28 * 0x8f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x8e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x8d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x8c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x8b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x8a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x89 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x88 + 0x7fU) / 0xff))))))));
              local_130[0x10] =
                   CONCAT17((char)((iVar28 * 0x87 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x86 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x85 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x84 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x83 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x82 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x81 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x80 + 0x7fU) / 0xff))))))));
              local_130[0x13] =
                   CONCAT17((char)((iVar28 * 0x9f + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x9e + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x9d + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x9c + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x9b + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x9a +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x99 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x98 + 0x7fU) / 0xff))))))));
              local_130[0x12] =
                   CONCAT17((char)((iVar28 * 0x97 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0x96 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0x95 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0x94 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0x93 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0x92 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0x91 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0x90 + 0x7fU) / 0xff))))))));
              local_130[0x15] =
                   CONCAT17((char)((iVar28 * 0xaf + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xae + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xad + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xac + 0x7fU) / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar44 >> 0x18),
                                                  CONCAT16((char)((uint)iVar44 >> 0x10),
                                                           CONCAT15((char)((uint)iVar44 >> 8),
                                                                    CONCAT14((char)iVar44,uVar12))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar12 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar19 >> 0x18),
                                                  CONCAT16((char)((uint)iVar19 >> 0x10),
                                                           CONCAT15((char)((uint)iVar19 >> 8),
                                                                    CONCAT14((char)iVar19,uVar38))))
                                                  / 0xff00000000),(char)(uVar38 / 0xff))))))));
              local_130[0x14] =
                   CONCAT17((char)((iVar28 * 0xa7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xa6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xa5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xa4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xa3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xa2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xa1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xa0 + 0x7fU) / 0xff))))))));
              local_130[0x17] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar46 >> 0x18),
                                                   CONCAT16((char)((uint)iVar46 >> 0x10),
                                                            CONCAT15((char)((uint)iVar46 >> 8),
                                                                     CONCAT14((char)iVar46,uVar14)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar14 / 0xff),
                                     CONCAT15((char)(CONCAT17((char)((uint)iVar25 >> 0x18),
                                                              CONCAT16((char)((uint)iVar25 >> 0x10),
                                                                       CONCAT15((char)((uint)iVar25
                                                                                      >> 8),
                                                                                CONCAT14((char)
                                                  iVar25,uVar24)))) / 0xff00000000),
                                              CONCAT14((char)(uVar24 / 0xff),
                                                       CONCAT13((char)((uint)(CONCAT17((char)((uint)
                                                  iVar45 >> 0x18),
                                                  CONCAT16((char)((uint)iVar45 >> 0x10),
                                                           CONCAT15((char)((uint)iVar45 >> 8),
                                                                    CONCAT14((char)iVar45,uVar13))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar13 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar23 >> 0x18),
                                                  CONCAT16((char)((uint)iVar23 >> 0x10),
                                                           CONCAT15((char)((uint)iVar23 >> 8),
                                                                    CONCAT14((char)iVar23,uVar22))))
                                                  / 0xff00000000),(char)(uVar22 / 0xff))))))));
              local_130[0x16] =
                   CONCAT17((char)((iVar28 * 0xb7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xb6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xb5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xb4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xb3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xb2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xb1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xb0 + 0x7fU) / 0xff))))))));
              local_130[0x19] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar48 >> 0x18),
                                                   CONCAT16((char)((uint)iVar48 >> 0x10),
                                                            CONCAT15((char)((uint)iVar48 >> 8),
                                                                     CONCAT14((char)iVar48,uVar16)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar16 / 0xff),
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
                                                                    CONCAT14((char)iVar47,uVar15))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar15 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar39 >> 0x18),
                                                  CONCAT16((char)((uint)iVar39 >> 0x10),
                                                           CONCAT15((char)((uint)iVar39 >> 8),
                                                                    CONCAT14((char)iVar39,uVar5))))
                                                  / 0xff00000000),(char)(uVar5 / 0xff))))))));
              local_130[0x18] =
                   CONCAT17((char)((iVar28 * 199 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xc6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xc5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xc4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xc3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xc2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xc1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xc0 + 0x7fU) / 0xff))))))));
              local_130[0x1b] =
                   CONCAT17((char)((uint)(CONCAT17((char)((uint)iVar50 >> 0x18),
                                                   CONCAT16((char)((uint)iVar50 >> 0x10),
                                                            CONCAT15((char)((uint)iVar50 >> 8),
                                                                     CONCAT14((char)iVar50,uVar18)))
                                                  ) >> 0x20) / 0xff),
                            CONCAT16((char)(uVar18 / 0xff),
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
                                                                    CONCAT14((char)iVar49,uVar17))))
                                                  >> 0x20) / 0xff),
                                                  CONCAT12((char)(uVar17 / 0xff),
                                                           CONCAT11((char)(CONCAT17((char)((uint)
                                                  iVar41 >> 0x18),
                                                  CONCAT16((char)((uint)iVar41 >> 0x10),
                                                           CONCAT15((char)((uint)iVar41 >> 8),
                                                                    CONCAT14((char)iVar41,uVar7))))
                                                  / 0xff00000000),(char)(uVar7 / 0xff))))))));
              local_130[0x1a] =
                   CONCAT17((char)((iVar28 * 0xd7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xd6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xd5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xd4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xd3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xd2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xd1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xd0 + 0x7fU) / 0xff))))))));
              local_130[0x1d] =
                   CONCAT17((char)((iVar28 * 0xef + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xee + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xed + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xec + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xeb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xea +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe8 + 0x7fU) / 0xff))))))));
              local_130[0x1c] =
                   CONCAT17((char)((iVar28 * 0xe7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xe6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xe5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xe4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xe3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xe2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xe1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xe0 + 0x7fU) / 0xff))))))));
              local_130[0x1f] =
                   CONCAT17((char)((iVar28 * 0xff + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xfe + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xfd + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xfc + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xfb + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xfa +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf9 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf8 + 0x7fU) / 0xff))))))));
              local_130[0x1e] =
                   CONCAT17((char)((iVar28 * 0xf7 + 0x7fU) / 0xff),
                            CONCAT16((char)((iVar28 * 0xf6 + 0x7fU) / 0xff),
                                     CONCAT15((char)((iVar28 * 0xf5 + 0x7fU) / 0xff),
                                              CONCAT14((char)((iVar28 * 0xf4 + 0x7fU) / 0xff),
                                                       CONCAT13((char)((iVar28 * 0xf3 + 0x7fU) /
                                                                      0xff),
                                                                CONCAT12((char)((iVar28 * 0xf2 +
                                                                                0x7fU) / 0xff),
                                                                         CONCAT11((char)((iVar28 * 
                                                  0xf1 + 0x7fU) / 0xff),
                                                  (char)((iVar28 * 0xf0 + 0x7fU) / 0xff))))))));
              local_130 = local_130 + 0x20;
              iVar28 = iVar28 + 1;
            } while (iVar28 != 0x100);
            param_1[9] = (long)FUN_00dc701c;
            lVar37 = param_1[8];
            goto joined_r0x00dc1a68;
          }
        }
        else if (bVar26) {
          pcVar36 = FUN_00dc70d4;
          goto switchD_00dbd8fc_caseD_44;
        }
        break;
      }
      pvVar29 = _TIFFmalloc(0x10000);
      param_1[0x10] = (long)pvVar29;
      if (pvVar29 != (void *)0x0) {
        lVar37 = 0;
        do {
          iVar28 = (int)lVar37;
          puVar4 = (undefined1 *)((long)pvVar29 + lVar37);
          lVar37 = lVar37 + 2;
          *puVar4 = (char)((ulong)(iVar28 + 0x80) * 0xff00ff01 >> 0x28);
          puVar4[1] = (char)((ulong)(iVar28 + 0x81) * 0xff00ff01 >> 0x28);
        } while (lVar37 != 0x10000);
        pcVar36 = FUN_00dc6f74;
        goto switchD_00dbd8fc_caseD_44;
      }
      lVar37 = *param_1;
      pcVar30 = "BuildMapBitdepth16To8";
LAB_00dc596c:
      TIFFErrorExt(*(undefined8 *)(lVar37 + 0x3b8),pcVar30,"Out of memory");
      lVar37 = param_1[8];
joined_r0x00dc1a68:
      if (lVar37 == 0) goto switchD_00dbd71c_caseD_4;
      goto LAB_00dc59b4;
    case 3:
      iVar28 = FUN_00dc7174(param_1);
      if (((iVar28 != 0) && (uVar34 = *puVar1 - 1, uVar34 < 8)) &&
         ((0x8bU >> (ulong)(uVar34 & 0x1f) & 1) != 0)) {
        pcVar36 = (code *)(&PTR_FUN_01c92520)[(short)uVar34];
        goto switchD_00dbd8fc_caseD_44;
      }
      break;
    default:
      goto switchD_00dbd71c_caseD_4;
    case 5:
      iVar28 = FUN_00dc7174(param_1);
      if ((iVar28 != 0) && (*puVar1 == 8)) {
        pcVar36 = FUN_00dc80a4;
        if (param_1[10] == 0) {
          pcVar36 = FUN_00dc78f0;
        }
        goto switchD_00dbd8fc_caseD_44;
      }
      break;
    case 6:
      if (((*puVar1 == 8) && (*puVar2 == 3)) && (iVar28 = FUN_00dc8b98(param_1), iVar28 != 0)) {
        TIFFGetFieldDefaulted(*param_1,0x212,&local_b4,&local_a8);
        pcVar36 = FUN_00dc8c30;
        switch((uint)local_a8 | ((uint)local_b4 & 0xffff) << 4) {
        case 0x11:
          pcVar36 = FUN_00dca6c8;
          break;
        case 0x12:
          pcVar36 = FUN_00dca4dc;
          break;
        default:
          goto switchD_00dbd8fc_caseD_13;
        case 0x21:
          pcVar36 = FUN_00dca254;
          break;
        case 0x22:
          pcVar36 = FUN_00dc9e94;
          break;
        case 0x41:
          pcVar36 = FUN_00dc9bbc;
          break;
        case 0x42:
          pcVar36 = FUN_00dc9670;
          break;
        case 0x44:
          break;
        }
        goto switchD_00dbd8fc_caseD_44;
      }
      break;
    case 8:
      iVar28 = FUN_00dc7174(param_1);
      if ((iVar28 != 0) && (*puVar1 == 8)) {
        if (param_1[0xe] == 0) {
          pvVar29 = _TIFFmalloc(0x46cc);
          param_1[0xe] = (long)pvVar29;
          if (pvVar29 != (void *)0x0) goto LAB_00dbd93c;
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"initCIELabConversion",
                       "No space for CIE L*a*b*->RGB conversion state.");
        }
        else {
LAB_00dbd93c:
          TIFFGetFieldDefaulted(*param_1,0x13e,&local_a8);
          pfVar27 = (float *)CONCAT62(uStack_a6,local_a8);
          local_b0 = 0x42c80000;
          fVar195 = pfVar27[1];
          local_b4 = (*pfVar27 / fVar195) * 100.0;
          local_ac = (((1.0 - *pfVar27) - fVar195) / fVar195) * 100.0;
          iVar28 = TIFFCIELabToRGBInit(param_1[0xe],&DAT_01954014,&local_b4);
          if (-1 < iVar28) {
            pcVar36 = FUN_00dca7a0;
            goto switchD_00dbd8fc_caseD_44;
          }
          TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"initCIELabConversion",
                       "Failed to initialize CIE L*a*b*->RGB conversion state.");
          _TIFFfree((void *)param_1[0xe]);
        }
        pcVar36 = (code *)0x0;
        goto switchD_00dbd8fc_caseD_44;
      }
    }
switchD_00dbd8fc_caseD_13:
    if (param_1[8] != 0) {
LAB_00dc59b4:
      lVar37 = param_1[9];
      goto joined_r0x00dc5910;
    }
  }
switchD_00dbd71c_caseD_4:
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
LAB_00dc59d8:
  *(undefined8 *)(param_4 + 8) = uVar197;
  *(undefined8 *)param_4 = uVar196;
LAB_00dc59dc:
  _TIFFfree((void *)param_1[5]);
  _TIFFfree((void *)param_1[6]);
  _TIFFfree((void *)param_1[7]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  return 0;
}

