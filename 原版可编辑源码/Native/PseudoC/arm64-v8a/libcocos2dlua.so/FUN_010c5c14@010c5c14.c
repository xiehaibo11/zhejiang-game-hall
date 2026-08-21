
undefined8 FUN_010c5c14(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ushort *puVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined1 local_70 [2];
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  
  puVar29 = (undefined8 *)*param_1;
  uVar9 = *(uint *)((long)puVar29 + 0x14);
  lVar27 = *(long *)*puVar29;
  uVar13 = uVar9 & 4;
  bVar2 = *(byte *)(lVar27 + 0x2af);
  if ((bVar2 >> 2 & 1) == 0) {
    if (((uVar9 & 1) != 0) || (*(short *)(lVar27 + 0x2a8) == 0)) goto LAB_010c5c74;
LAB_010c5c5c:
    if (uVar13 == 0) {
      pbVar18 = (byte *)param_1[4];
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"a background color must be supplied to remove alpha/transparency");
      }
      uVar30 = (uint)pbVar18[1];
                    /* try { // try from 010c5d30 to 011c5e13 has its CatchHandler @ 010c5bc0 */
      uVar28 = uVar30;
      uVar21 = uVar30;
      if ((uVar9 >> 1 & 1) != 0) {
        uVar28 = (uint)pbVar18[2];
        uVar21 = (uint)*pbVar18;
      }
    }
    else {
      uVar30 = 0;
      uVar28 = 0;
      uVar21 = 0;
    }
  }
  else {
    if ((uVar9 & 1) == 0) goto LAB_010c5c5c;
LAB_010c5c74:
    uVar30 = 0xffff;
    uVar28 = uVar30;
    uVar21 = uVar30;
    if (uVar13 == 0) {
      uVar30 = 0xff;
      uVar28 = uVar30;
      uVar21 = uVar30;
    }
  }
  if ((*(ushort *)(lVar27 + 0x55a) & 1) == 0) {
    if ((*(char *)(lVar27 + 0x2b0) != '\x10') ||
       (uVar17 = 100000, (*(byte *)(puVar29 + 3) >> 2 & 1) != 0)) {
      uVar17 = 0xb18f;
    }
    *(undefined4 *)(lVar27 + 0x510) = uVar17;
    *(ushort *)(lVar27 + 0x55a) = *(ushort *)(lVar27 + 0x55a) | 1;
  }
                    /* try { // try from 010c5cc8 to 011c5d2f has its CatchHandler @ 010c5df8 */
  if (6 < bVar2) {
switchD_010c5cf0_caseD_1:
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,"invalid PNG color type");
  }
  uVar6 = uVar9 >> 2 & 1;
  iVar20 = uVar6 + 1;
  switch(bVar2) {
  case 0:
    if (8 < *(byte *)(lVar27 + 0x2b0)) {
      if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* try { // try from 010c7238 to 011c723f has its CatchHandler @ 010c72c4 */
                    /* try { // try from 010c7240 to 011c7367 has its CatchHandler @ 010c71c0 */
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"gray[16] color-map: too few entries");
      }
                    /* try { // try from 010c6294 to 011c6377 has its CatchHandler @ 010c6124 */
      iVar10 = 0;
      do {
        FUN_010c7a3c(param_1,iVar10,iVar10,iVar10,iVar10,0xff,1);
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x100);
      if (*(short *)(lVar27 + 0x2a8) == 0) {
LAB_010c6354:
        uVar17 = 0;
        uVar13 = 0x100;
                    /* catch() { ... } // from try @ 010c622c with catch @ 010c635c */
        uVar6 = 0x100;
        goto LAB_010c7054;
      }
      if ((uVar9 & 1) == 0) {
        if ((uVar30 == uVar28) && (uVar21 == uVar30)) {
          uVar9 = uVar28;
          if (uVar13 != 0) {
            uVar13 = uVar28 * 0xff >> 0xf;
            uVar9 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                    ((uVar28 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 &
                    0xff;
            FUN_010c7a3c(param_1,uVar9,uVar28,uVar28,uVar28,0xffff,2);
          }
          local_68 = (undefined2)uVar9;
          goto LAB_010c5e80;
        }
        uVar17 = 0xffff;
        if (uVar13 == 0) {
          uVar17 = 0xff;
        }
      }
      else {
        uVar17 = 0;
      }
      uVar13 = 0xfe;
      FUN_010c7a3c(param_1,0xfe,uVar21,uVar30,uVar28,uVar17,iVar20);
      uVar9 = 0x100;
      uVar6 = 0x100;
      uVar17 = 2;
      iVar10 = 1;
                    /* catch() { ... } // from try @ 010c7240 with catch @ 010c71c0 */
      if (*(short *)(lVar27 + 0x2a8) == 0) goto joined_r0x010c620c;
LAB_010c61f8:
      uVar6 = uVar9;
      if ((*(byte *)(lVar27 + 0x2af) >> 2 & 1) == 0) {
        png_set_tRNS_to_alpha(lVar27);
      }
      goto joined_r0x010c620c;
    }
    uVar6 = 1 << (ulong)(*(byte *)(lVar27 + 0x2b0) & 0x1f);
    if (*(uint *)((long)puVar29 + 0x1c) < uVar6) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar27,"gray[8] color-map: too few entries");
    }
    if (*(short *)(lVar27 + 0x2a8) == 0) {
      uVar17 = 0;
      uVar19 = 0x100;
    }
    else {
      uVar19 = (uint)*(ushort *)(lVar27 + 0x340);
      uVar17 = 0xffff;
      if (uVar13 == 0) {
        uVar17 = 0xff;
      }
      if ((uVar9 & 1) != 0) {
        uVar17 = 0;
      }
    }
    uVar13 = 0;
    uVar9 = 0;
    uVar26 = 0;
    if (uVar6 - 1 != 0) {
      uVar26 = 0xff / (uVar6 - 1);
    }
    do {
      uVar25 = uVar19;
      uVar14 = uVar21;
      uVar4 = uVar30;
      uVar5 = uVar28;
      uVar16 = uVar17;
      iVar10 = iVar20;
                    /* try { // try from 010c6bfc to 011c6caf has its CatchHandler @ 010c6bfc
                       catch() { ... } // from try @ 010c6bfc with catch @ 010c6bfc
                       catch() { ... } // from try @ 010c6d3c with catch @ 010c6bfc
                       catch() { ... } // from try @ 010c6dbc with catch @ 010c6bfc */
      if (uVar19 != uVar13) {
        uVar25 = uVar13;
        uVar14 = uVar9;
        uVar4 = uVar9;
        uVar5 = uVar9;
        uVar16 = 0xff;
        iVar10 = 3;
      }
      FUN_010c7a3c(param_1,uVar25,uVar14,uVar4,uVar5,uVar16,iVar10);
      uVar13 = uVar13 + 1;
      uVar9 = uVar9 + uVar26;
    } while (uVar13 < uVar6);
    goto LAB_010c6c54;
  default:
    goto switchD_010c5cf0_caseD_1;
  case 2:
  case 6:
    if ((uVar9 >> 1 & 1) == 0) {
      png_set_rgb_to_gray_fixed(lVar27,1,0xffffffff,0xffffffff);
      if (*(char *)(lVar27 + 0x2af) == '\x06') {
        if ((uVar9 & 1) != 0) goto LAB_010c6230;
      }
      else {
                    /* try { // try from 010c622c to 011c6293 has its CatchHandler @ 010c635c */
        if (((uVar9 & 1) != 0) && (*(short *)(lVar27 + 0x2a8) != 0)) {
LAB_010c6230:
          if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
            png_error(lVar27,"rgb[ga] color-map: too few entries");
          }
          uVar9 = FUN_010c7f8c(param_1);
          iVar10 = 1;
          uVar13 = 0xe7;
          uVar17 = 1;
          sVar3 = *(short *)(lVar27 + 0x2a8);
          goto joined_r0x010c6810;
        }
      }
      if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"rgb[gray] color-map: too few entries");
      }
      if (((*(char *)(lVar27 + 0x2af) == '\x06') || (*(short *)(lVar27 + 0x2a8) != 0)) &&
         ((iVar10 = *(int *)(lVar27 + 0x510), 99999 < iVar10 ||
          ((iVar10 != 0 && (iVar10 = png_gamma_significant((iVar10 * 0xb + 2) / 5), iVar10 != 0)))))
         ) {
        iVar11 = 0;
        iVar10 = 3;
        do {
          FUN_010c7a3c(param_1,iVar11,iVar11,iVar11,iVar11,0xff,3);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x100);
      }
      else {
        iVar11 = 0;
        iVar10 = 1;
        do {
          FUN_010c7a3c(param_1,iVar11,iVar11,iVar11,iVar11,0xff,1);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x100);
      }
      if ((*(char *)(lVar27 + 0x2af) == '\x06') || (*(short *)(lVar27 + 0x2a8) != 0)) {
        if (iVar10 == 3) {
          uVar13 = uVar30;
          if (uVar6 == 0) {
            uVar13 = (uint)(ushort)(&png_sRGB_table)[uVar30];
          }
                    /* catch() { ... } // from try @ 010c6a54 with catch @ 010c6b18
                       try { // try from 010c6b18 to 011c6b37 has its CatchHandler @ 010c6a10 */
          uVar13 = png_gamma_16bit_correct(uVar13,*(undefined4 *)(lVar27 + 0x510));
          uVar13 = (uVar13 & 0xffff) * 0xff + 0x807f >> 0x10;
LAB_010c6bb4:
          FUN_010c7a3c(param_1,uVar13,uVar30,uVar30,uVar30,0,iVar20);
          uVar30 = uVar13;
        }
        else if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 010c6b8c with catch @ 010c6b6c */
          uVar13 = uVar30 * 0xff >> 0xf;
                    /* try { // try from 010c6b88 to 011c6b8b has its CatchHandler @ 010c6b9c */
                    /* try { // try from 010c6b8c to 011c6bfb has its CatchHandler @ 010c6b6c */
          uVar13 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                   ((uVar30 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 &
                   0xff;
          iVar20 = 2;
                    /* catch() { ... } // from try @ 010c6b88 with catch @ 010c6b9c */
          goto LAB_010c6bb4;
        }
        local_70[0] = 0;
        local_6e = (undefined2)uVar30;
        local_6c = local_6e;
        local_6a = local_6e;
        local_68 = local_6e;
        png_set_background_fixed(lVar27,local_70,1,0,0);
        uVar17 = 0;
        uVar13 = 0x100;
        uVar9 = 0x100;
        sVar3 = *(short *)(lVar27 + 0x2a8);
        goto joined_r0x010c6810;
      }
      uVar17 = 0;
      uVar13 = 0x100;
      uVar6 = 0x100;
    }
    else {
      if ((bVar2 != 6) && (*(short *)(lVar27 + 0x2a8) == 0)) {
        if (*(uint *)((long)puVar29 + 0x1c) < 0xd8) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"rgb color-map: too few entries");
        }
        uVar6 = FUN_010c8320(param_1);
LAB_010c6cb0:
                    /* try { // try from 010c6cb0 to 011c6cfb has its CatchHandler @ 010c6dd8 */
        uVar17 = 3;
        uVar13 = 0x100;
        goto LAB_010c7054;
      }
      if ((uVar9 & 1) == 0) {
        if (*(uint *)((long)puVar29 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"rgb-alpha color-map: too few entries");
        }
        uVar9 = iVar20 * ((uVar9 & 3) + 1);
        uVar6 = FUN_010c8320(param_1);
        FUN_010c7a3c(param_1,uVar6,uVar21,uVar30,uVar28,0,iVar20);
        uVar25 = uVar30;
        uVar26 = uVar30;
        uVar19 = uVar21;
        if (uVar13 != 0) {
          uVar13 = uVar21 * 0xff >> 0xf;
                    /* try { // try from 010c5f38 to 011c6033 has its CatchHandler @ 010c60fc */
          uVar26 = uVar30 * 0xff >> 0xf;
          uVar25 = uVar28 * 0xff >> 0xf;
          uVar19 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                   ((uVar21 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 &
                   0xff;
          uVar26 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar26 * 2) +
                   ((uVar30 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26] >> 0xc) >> 8 &
                   0xff;
          uVar25 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar25 * 2) +
                   ((uVar28 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8 &
                   0xff;
        }
        iVar10 = memcmp((void *)(param_1[3] + (ulong)(uVar6 * uVar9)),
                        (void *)(param_1[3] +
                                (ulong)((((uVar19 * 5 + 0x82 >> 8) * 6 + (uVar26 * 5 + 0x82 >> 8)) *
                                         6 + (uVar25 * 5 + 0x82 >> 8) & 0xff) * uVar9)),(ulong)uVar9
                       );
        if (iVar10 == 0) {
          local_70[0] = 0;
          local_6e = (undefined2)uVar21;
          local_6c = (undefined2)uVar30;
          local_6a = (undefined2)uVar28;
          local_68 = local_6c;
          png_set_background_fixed(lVar27,local_70,1,0,0);
          goto LAB_010c6cb0;
        }
        uVar13 = 0;
        iVar10 = uVar6 + 1;
        do {
          uVar9 = 0;
          iVar11 = iVar10;
          do {
            uVar19 = 0;
            iVar12 = iVar11;
            do {
              iVar7 = FUN_010c8450(param_1,uVar13,1);
              iVar8 = FUN_010c8450(param_1,uVar21,iVar20);
                    /* try { // try from 010c6034 to 011c6117 has its CatchHandler @ 010c5e20 */
              uVar26 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar26 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar26 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar26 >> 0xf) * 2) +
                         ((uVar26 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
              iVar7 = FUN_010c8450(param_1,uVar9,1);
              iVar8 = FUN_010c8450(param_1,uVar30,iVar20);
              uVar25 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar25 = uVar25 * 0x101 + (uVar25 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar25 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar25 >> 0xf) * 2) +
                         ((uVar25 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
                    /* catch() { ... } // from try @ 010c5f38 with catch @ 010c60fc */
              iVar7 = FUN_010c8450(param_1,uVar19,1);
              iVar8 = FUN_010c8450(param_1,uVar28,iVar20);
                    /* try { // try from 010c6124 to 011c622b has its CatchHandler @ 010c6124
                       catch() { ... } // from try @ 010c6124 with catch @ 010c6124
                       catch() { ... } // from try @ 010c6294 with catch @ 010c6124 */
              uVar14 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar14 = uVar14 * 0x101 + (uVar14 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar14 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar14 >> 0xf) * 2) +
                         ((uVar14 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar14 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
              FUN_010c7a3c(param_1,iVar12,uVar26,uVar25,uVar14,0,iVar20);
              uVar19 = uVar19 << 1 | 0x7f;
              iVar12 = iVar12 + 1;
            } while (uVar19 < 0x100);
            uVar9 = uVar9 << 1 | 0x7f;
            iVar11 = iVar11 + 3;
          } while (uVar9 < 0x100);
          uVar13 = uVar13 << 1 | 0x7f;
          iVar10 = iVar10 + 9;
        } while (uVar13 < 0x100);
        sVar3 = *(short *)(lVar27 + 0x2a8);
      }
      else {
        if (*(uint *)((long)puVar29 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"rgb+alpha color-map: too few entries");
        }
        uVar6 = FUN_010c8320(param_1);
        FUN_010c7a3c(param_1,uVar6,0xff,0xff,0xff,0,1);
        FUN_010c7a3c(param_1,uVar6 + 1,0,0,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 2,0,0,0x7f,0x80,1);
                    /* try { // try from 010c64b0 to 011c65ab has its CatchHandler @ 010c6668 */
        FUN_010c7a3c(param_1,uVar6 + 3,0,0,0xff,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 4,0,0x7f,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 5,0,0x7f,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 6,0,0x7f,0xff,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 7,0,0xff,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 8,0,0xff,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 9,0,0xff,0xff,0x80,1);
                    /* try { // try from 010c65ac to 011c6683 has its CatchHandler @ 010c6384 */
        FUN_010c7a3c(param_1,uVar6 + 10,0x7f,0,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0xb,0x7f,0,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0xc,0x7f,0,0xff,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0xd,0x7f,0x7f,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0xe,0x7f,0x7f,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0xf,0x7f,0x7f,0xff,0x80,1);
                    /* catch() { ... } // from try @ 010c64b0 with catch @ 010c6668 */
                    /* catch() { ... } // from try @ 010c6854 with catch @ 010c6684
                       catch() { ... } // from try @ 010c68ac with catch @ 010c6684 */
        FUN_010c7a3c(param_1,uVar6 + 0x10,0x7f,0xff,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x11,0x7f,0xff,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x12,0x7f,0xff,0xff,0x80,1);
                    /* try { // try from 010c66d8 to 011c66e3 has its CatchHandler @ 010c68b8 */
        FUN_010c7a3c(param_1,uVar6 + 0x13,0xff,0,0,0x80,1);
                    /* try { // try from 010c66f0 to 011c66fb has its CatchHandler @ 010c68b4 */
        FUN_010c7a3c(param_1,uVar6 + 0x14,0xff,0,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x15,0xff,0,0xff,0x80,1);
                    /* try { // try from 010c6738 to 011c674b has its CatchHandler @ 010c68b0 */
        FUN_010c7a3c(param_1,uVar6 + 0x16,0xff,0x7f,0,0x80,1);
                    /* try { // try from 010c6764 to 011c6767 has its CatchHandler @ 010c68ac */
        FUN_010c7a3c(param_1,uVar6 + 0x17,0xff,0x7f,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x18,0xff,0x7f,0xff,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x19,0xff,0xff,0,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x1a,0xff,0xff,0x7f,0x80,1);
        FUN_010c7a3c(param_1,uVar6 + 0x1b,0xff,0xff,0xff,0x80,1);
        sVar3 = *(short *)(lVar27 + 0x2a8);
                    /* try { // try from 010c6804 to 011c6853 has its CatchHandler @ 010c68c8 */
      }
      uVar17 = 4;
      iVar10 = 1;
      uVar9 = uVar6 + 0x1c;
      uVar13 = uVar6;
joined_r0x010c6810:
      uVar6 = uVar9;
      if (sVar3 != 0) goto LAB_010c61f8;
    }
joined_r0x010c620c:
    if (iVar10 == 1) goto LAB_010c7054;
    if (iVar10 != 3) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar27,"bad data option (internal error)");
    }
    break;
  case 3:
    if ((ulong)*(ushort *)(lVar27 + 0x2a8) == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = *(long *)(lVar27 + 0x330);
    }
    uVar6 = (uint)*(ushort *)(lVar27 + 0x2a0);
    if (0xff < uVar6) {
      uVar6 = 0x100;
    }
    if (*(uint *)((long)puVar29 + 0x1c) < uVar6) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar27,"palette color-map: too few entries");
    }
    if (uVar6 != 0) {
                    /* try { // try from 010c6854 to 011c6897 has its CatchHandler @ 010c6684 */
      uVar22 = 0;
      uVar1 = 0;
      if (lVar24 != 0) {
        uVar1 = (ulong)*(ushort *)(lVar27 + 0x2a8);
      }
      pbVar18 = (byte *)(*(long *)(lVar27 + 0x298) + 1);
      do {
        if ((((uVar9 & 1) == 0 && lVar24 != 0) && uVar22 < uVar1) &&
           (bVar2 = *(byte *)(lVar24 + uVar22), bVar2 != 0xff)) {
          iVar10 = iVar20;
          if (bVar2 == 0) {
                    /* catch() { ... } // from try @ 010c6764 with catch @ 010c68ac
                       catch() { ... } // from try @ 010c6898 with catch @ 010c68ac
                       try { // try from 010c68ac to 011c6903 has its CatchHandler @ 010c6684 */
            uVar15 = 0;
            uVar25 = uVar30;
            uVar26 = uVar28;
            uVar19 = uVar21;
                    /* catch() { ... } // from try @ 010c6738 with catch @ 010c68b0 */
          }
          else {
            iVar11 = FUN_010c8450(param_1,pbVar18[-1],3);
                    /* catch() { ... } // from try @ 010c69b0 with catch @ 010c6904 */
            iVar12 = FUN_010c8450(param_1,uVar21,iVar20);
            uVar19 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
              uVar19 = uVar19 * 0x101 + (uVar19 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
                    /* try { // try from 010c6938 to 011c694b has its CatchHandler @ 010c69f4 */
              uVar19 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar19 >> 0xf) * 2) +
                       ((uVar19 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19 >> 0xf] >> 0xc) >> 8 &
                       0xff;
            }
            bVar2 = *(byte *)(lVar24 + uVar22);
            iVar11 = FUN_010c8450(param_1,*pbVar18,3);
            iVar12 = FUN_010c8450(param_1,uVar30,iVar20);
            uVar26 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
                    /* try { // try from 010c69a8 to 011c69af has its CatchHandler @ 010c69f0 */
                    /* try { // try from 010c69b0 to 011c6a0f has its CatchHandler @ 010c6904 */
              uVar25 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
              uVar25 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar26 >> 0xf) * 2) +
                       ((uVar26 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26 >> 0xf] >> 0xc) >> 8 &
                       0xff;
            }
            bVar2 = *(byte *)(lVar24 + uVar22);
                    /* catch() { ... } // from try @ 010c69a8 with catch @ 010c69f0 */
                    /* catch() { ... } // from try @ 010c6938 with catch @ 010c69f4 */
            iVar11 = FUN_010c8450(param_1,pbVar18[1],3);
            iVar12 = FUN_010c8450(param_1,uVar28,iVar20);
                    /* catch() { ... } // from try @ 010c6b18 with catch @ 010c6a10 */
            uVar26 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
              uVar26 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
                    /* try { // try from 010c6a54 to 011c6b17 has its CatchHandler @ 010c6b18 */
              uVar26 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar26 >> 0xf) * 2) +
                       ((uVar26 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26 >> 0xf] >> 0xc) >> 8 &
                       0xff;
            }
            bVar2 = *(byte *)(lVar24 + uVar22);
            uVar15 = CONCAT11(bVar2,bVar2);
            if (uVar13 == 0) {
              uVar15 = (ushort)bVar2;
            }
          }
        }
        else {
                    /* catch() { ... } // from try @ 010c66f0 with catch @ 010c68b4 */
                    /* catch() { ... } // from try @ 010c66d8 with catch @ 010c68b8 */
          if (uVar22 < uVar1) {
                    /* catch() { ... } // from try @ 010c6804 with catch @ 010c68c8 */
            uVar15 = (ushort)*(byte *)(lVar24 + uVar22);
          }
          else {
            uVar15 = 0xff;
          }
          uVar25 = (uint)*pbVar18;
          uVar26 = (uint)pbVar18[1];
          uVar19 = (uint)pbVar18[-1];
          iVar10 = 3;
        }
        FUN_010c7a3c(param_1,uVar22 & 0xffffffff,uVar19,uVar25,uVar26,uVar15,iVar10);
        uVar22 = uVar22 + 1;
        pbVar18 = pbVar18 + 3;
      } while (uVar22 < uVar6);
    }
LAB_010c6c54:
    if (*(byte *)(lVar27 + 0x2b0) < 8) {
      png_set_packing(lVar27);
    }
    uVar17 = 0;
    uVar13 = 0x100;
    break;
  case 4:
    if ((uVar9 & 1) == 0) {
      if (((uVar9 >> 1 & 1) == 0) || ((uVar30 == uVar28 && (uVar21 == uVar30)))) {
        if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"gray-alpha color-map: too few entries");
        }
        iVar20 = 0;
        do {
                    /* catch() { ... } // from try @ 010c5cc8 with catch @ 010c5df8 */
          FUN_010c7a3c(param_1,iVar20,iVar20,iVar20,iVar20,0xff,1);
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0x100);
        uVar9 = uVar30;
        if (uVar13 != 0) {
                    /* try { // try from 010c5e20 to 011c5f37 has its CatchHandler @ 010c5e20
                       catch() { ... } // from try @ 010c5e20 with catch @ 010c5e20
                       catch() { ... } // from try @ 010c6034 with catch @ 010c5e20 */
          uVar13 = uVar30 * 0xff >> 0xf;
          uVar9 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                  ((uVar30 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 & 0xff
          ;
          FUN_010c7a3c(param_1,uVar9,uVar30,uVar30,uVar30,0xffff,2);
        }
        local_68 = (undefined2)uVar9;
LAB_010c5e80:
        local_70[0] = 0;
        local_6e = local_68;
        local_6c = local_68;
        local_6a = local_68;
        png_set_background_fixed(lVar27,local_70,1,0,0);
        goto LAB_010c6354;
      }
      if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"ga-alpha color-map: too few entries");
      }
      uVar22 = 0x73;
      iVar10 = 0;
      do {
        iVar11 = (int)(uVar22 * 0x1bb4a405 >> 0x20);
        uVar9 = iVar11 + ((uint)((int)uVar22 - iVar11) >> 1) >> 7;
        iVar11 = iVar10 + 1;
        FUN_010c7a3c(param_1,iVar10,uVar9,uVar9,uVar9,0xff,1);
        uVar22 = (ulong)((int)uVar22 + 0x100);
        iVar10 = iVar11;
      } while (iVar11 != 0xe7);
      uVar17 = 0xffff;
                    /* try { // try from 010c6d34 to 011c6d3b has its CatchHandler @ 010c6dc4 */
      if (uVar13 == 0) {
        uVar17 = 0xff;
      }
                    /* try { // try from 010c6d3c to 011c6db3 has its CatchHandler @ 010c6bfc */
      FUN_010c7a3c(param_1,0xe7,uVar21,uVar30,uVar28,uVar17,iVar20);
      if (uVar6 == 0) {
        uVar21 = (uint)(ushort)(&png_sRGB_table)[uVar21];
        uVar30 = (uint)(ushort)(&png_sRGB_table)[uVar30];
        uVar28 = (uint)(ushort)(&png_sRGB_table)[uVar28];
      }
      lVar24 = -6;
      puVar23 = &png_sRGB_table;
      do {
                    /* try { // try from 010c6db4 to 011c6dbb has its CatchHandler @ 010c6dc0 */
        iVar20 = (uint)*puVar23 * 0x33;
                    /* try { // try from 010c6dbc to 011c6df3 has its CatchHandler @ 010c6bfc */
        uVar13 = iVar20 + uVar21 * 0xcc;
                    /* catch() { ... } // from try @ 010c6db4 with catch @ 010c6dc0 */
        uVar19 = uVar13 >> 0xf;
                    /* catch() { ... } // from try @ 010c6d34 with catch @ 010c6dc4 */
        uVar9 = iVar20 + uVar30 * 0xcc;
        uVar6 = iVar20 + uVar28 * 0xcc;
        uVar26 = uVar6 >> 0xf;
                    /* catch() { ... } // from try @ 010c6cb0 with catch @ 010c6dd8 */
        uVar25 = uVar9 >> 0xf;
        FUN_010c7a3c(param_1,(int)lVar24 + 0xee,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar19 * 2) +
                     ((uVar13 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar25 * 2) +
                     ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar26 * 2) +
                     ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26] >> 0xc) >> 8 & 0xff,0xff
                     ,1);
        lVar24 = lVar24 + 1;
        puVar23 = puVar23 + 0x33;
      } while (lVar24 != 0);
      lVar24 = -6;
      puVar23 = &png_sRGB_table;
      do {
        iVar20 = (uint)*puVar23 * 0x66;
        uVar13 = iVar20 + uVar21 * 0x99;
        uVar19 = uVar13 >> 0xf;
        uVar9 = iVar20 + uVar30 * 0x99;
        uVar6 = iVar20 + uVar28 * 0x99;
        uVar26 = uVar6 >> 0xf;
        uVar25 = uVar9 >> 0xf;
                    /* catch() { ... } // from try @ 010c6f10 with catch @ 010c6e94 */
        FUN_010c7a3c(param_1,(int)lVar24 + 0xf4,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar19 * 2) +
                     ((uVar13 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar25 * 2) +
                     ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar26 * 2) +
                     ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26] >> 0xc) >> 8 & 0xff,0xff
                     ,1);
        lVar24 = lVar24 + 1;
        puVar23 = puVar23 + 0x33;
      } while (lVar24 != 0);
      lVar24 = -6;
                    /* try { // try from 010c6f08 to 011c6f0f has its CatchHandler @ 010c6f28 */
      puVar23 = &png_sRGB_table;
      do {
                    /* try { // try from 010c6f10 to 011c6f43 has its CatchHandler @ 010c6e94 */
        iVar20 = (uint)*puVar23 * 0x99;
        uVar13 = iVar20 + uVar21 * 0x66;
        uVar19 = uVar13 >> 0xf;
                    /* catch() { ... } // from try @ 010c6f08 with catch @ 010c6f28 */
        uVar9 = iVar20 + uVar30 * 0x66;
        uVar6 = iVar20 + uVar28 * 0x66;
        uVar26 = uVar6 >> 0xf;
                    /* catch() { ... } // from try @ 010c6fd4 with catch @ 010c6f44 */
        uVar25 = uVar9 >> 0xf;
        FUN_010c7a3c(param_1,(int)lVar24 + 0xfa,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar19 * 2) +
                     ((uVar13 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar25 * 2) +
                     ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar26 * 2) +
                     ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26] >> 0xc) >> 8 & 0xff,0xff
                     ,1);
        lVar24 = lVar24 + 1;
        puVar23 = puVar23 + 0x33;
      } while (lVar24 != 0);
      lVar24 = -6;
      puVar23 = &png_sRGB_table;
      do {
                    /* try { // try from 010c6fcc to 011c6fd3 has its CatchHandler @ 010c6ff0 */
        iVar20 = (uint)*puVar23 * 0xcc;
        uVar13 = iVar20 + uVar21 * 0x33;
                    /* try { // try from 010c6fd4 to 011c700b has its CatchHandler @ 010c6f44 */
        uVar19 = uVar13 >> 0xf;
        uVar9 = iVar20 + uVar30 * 0x33;
        uVar6 = iVar20 + uVar28 * 0x33;
        uVar26 = uVar6 >> 0xf;
                    /* catch() { ... } // from try @ 010c6fcc with catch @ 010c6ff0 */
        uVar25 = uVar9 >> 0xf;
                    /* catch() { ... } // from try @ 010c708c with catch @ 010c700c */
        uVar17 = 1;
        FUN_010c7a3c(param_1,(int)lVar24 + 0x100,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar19 * 2) +
                     ((uVar13 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar25 * 2) +
                     ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8 & 0xff,
                     (uint)*(ushort *)(png_sRGB_base + (ulong)uVar26 * 2) +
                     ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26] >> 0xc) >> 8 & 0xff,0xff
                     ,1);
        lVar24 = lVar24 + 1;
        puVar23 = puVar23 + 0x33;
      } while (lVar24 != 0);
      uVar6 = 0x100;
      uVar13 = 0xe7;
    }
    else {
      if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"gray+alpha color-map: too few entries");
      }
      uVar6 = FUN_010c7f8c(param_1);
      uVar17 = 1;
                    /* try { // try from 010c6384 to 011c64af has its CatchHandler @ 010c6384
                       catch() { ... } // from try @ 010c6384 with catch @ 010c6384
                       catch() { ... } // from try @ 010c65ac with catch @ 010c6384 */
      uVar13 = 0xe7;
    }
LAB_010c7054:
    png_set_alpha_mode_fixed(lVar27,0,220000);
  }
  if (8 < *(byte *)(lVar27 + 0x2b0)) {
    png_set_scale_16(lVar27);
  }
                    /* try { // try from 010c7084 to 011c708b has its CatchHandler @ 010c70a8 */
                    /* try { // try from 010c708c to 011c70c3 has its CatchHandler @ 010c700c */
  if ((0x100 < uVar6) || (*(uint *)((long)puVar29 + 0x1c) < uVar6)) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,"color map overflow (BAD internal error)");
  }
  *(uint *)((long)puVar29 + 0x1c) = uVar6;
                    /* catch() { ... } // from try @ 010c7084 with catch @ 010c70a8 */
  switch(uVar17) {
  case 0:
  case 3:
    if (uVar13 == 0x100) {
LAB_010c70dc:
      *(undefined4 *)(param_1 + 9) = uVar17;
      return 1;
    }
    break;
  case 1:
    if (uVar13 == 0xe7) goto LAB_010c70dc;
    break;
  case 2:
    if ((uVar13 == 0xfe) && (0xfe < uVar6)) goto LAB_010c70dc;
    break;
  case 4:
    if (uVar13 == 0xd8) goto LAB_010c70dc;
    break;
  default:
                    /* try { // try from 010c71f0 to 011c71fb has its CatchHandler @ 010c7308 */
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,"bad processing option (internal error)");
  }
                    /* WARNING: Subroutine does not return */
  png_error(lVar27,"bad background index (internal error)");
}

