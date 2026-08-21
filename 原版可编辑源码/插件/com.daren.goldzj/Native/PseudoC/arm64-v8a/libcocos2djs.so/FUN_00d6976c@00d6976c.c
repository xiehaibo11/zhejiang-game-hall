
undefined8 FUN_00d6976c(undefined8 *param_1)

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
    if (((uVar9 & 1) != 0) || (*(short *)(lVar27 + 0x2a8) == 0)) goto LAB_00d697cc;
LAB_00d697b4:
    if (uVar13 == 0) {
      pbVar18 = (byte *)param_1[4];
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"a background color must be supplied to remove alpha/transparency");
      }
      uVar30 = (uint)pbVar18[1];
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
    if ((uVar9 & 1) == 0) goto LAB_00d697b4;
LAB_00d697cc:
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
  if (6 < bVar2) {
switchD_00d69848_caseD_1:
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,&DAT_0194b8df);
  }
  uVar6 = uVar9 >> 2 & 1;
  iVar20 = uVar6 + 1;
  switch(bVar2) {
  case 0:
    if (8 < *(byte *)(lVar27 + 0x2b0)) {
      if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar27,"gray[16] color-map: too few entries");
      }
      iVar10 = 0;
      do {
        FUN_00d6b594(param_1,iVar10,iVar10,iVar10,iVar10,0xff,1);
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x100);
      if (*(short *)(lVar27 + 0x2a8) == 0) {
LAB_00d69eac:
        uVar17 = 0;
        uVar13 = 0x100;
        uVar6 = 0x100;
        goto LAB_00d6abac;
      }
      if ((uVar9 & 1) == 0) {
        if ((uVar30 == uVar28) && (uVar21 == uVar30)) {
          uVar9 = uVar28;
          if (uVar13 != 0) {
            uVar13 = uVar28 * 0xff >> 0xf;
            uVar9 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                    ((uVar28 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 &
                    0xff;
            FUN_00d6b594(param_1,uVar9,uVar28,uVar28,uVar28,0xffff,2);
          }
          local_68 = (undefined2)uVar9;
          goto LAB_00d699d8;
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
      FUN_00d6b594(param_1,0xfe,uVar21,uVar30,uVar28,uVar17,iVar20);
      uVar9 = 0x100;
      uVar6 = 0x100;
      uVar17 = 2;
      iVar10 = 1;
      if (*(short *)(lVar27 + 0x2a8) == 0) goto joined_r0x00d69d64;
LAB_00d69d50:
      uVar6 = uVar9;
      if ((*(byte *)(lVar27 + 0x2af) >> 2 & 1) == 0) {
        png_set_tRNS_to_alpha(lVar27);
      }
      goto joined_r0x00d69d64;
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
      if (uVar19 != uVar13) {
        uVar25 = uVar13;
        uVar14 = uVar9;
        uVar4 = uVar9;
        uVar5 = uVar9;
        uVar16 = 0xff;
        iVar10 = 3;
      }
      FUN_00d6b594(param_1,uVar25,uVar14,uVar4,uVar5,uVar16,iVar10);
      uVar13 = uVar13 + 1;
      uVar9 = uVar9 + uVar26;
    } while (uVar13 < uVar6);
    goto LAB_00d6a7ac;
  default:
    goto switchD_00d69848_caseD_1;
  case 2:
  case 6:
    if ((uVar9 >> 1 & 1) == 0) {
      png_set_rgb_to_gray_fixed(lVar27,1,0xffffffff,0xffffffff);
      if (*(char *)(lVar27 + 0x2af) == '\x06') {
        if ((uVar9 & 1) != 0) goto LAB_00d69d88;
      }
      else if (((uVar9 & 1) != 0) && (*(short *)(lVar27 + 0x2a8) != 0)) {
LAB_00d69d88:
        if (*(uint *)((long)puVar29 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"rgb[ga] color-map: too few entries");
        }
        uVar9 = FUN_00d6bae4(param_1);
        iVar10 = 1;
        uVar13 = 0xe7;
        uVar17 = 1;
        sVar3 = *(short *)(lVar27 + 0x2a8);
        goto joined_r0x00d6a368;
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
          FUN_00d6b594(param_1,iVar11,iVar11,iVar11,iVar11,0xff,3);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x100);
      }
      else {
        iVar11 = 0;
        iVar10 = 1;
        do {
          FUN_00d6b594(param_1,iVar11,iVar11,iVar11,iVar11,0xff,1);
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x100);
      }
      if ((*(char *)(lVar27 + 0x2af) == '\x06') || (*(short *)(lVar27 + 0x2a8) != 0)) {
        if (iVar10 == 3) {
          uVar13 = uVar30;
          if (uVar6 == 0) {
            uVar13 = (uint)(ushort)(&png_sRGB_table)[uVar30];
          }
          uVar13 = png_gamma_16bit_correct(uVar13,*(undefined4 *)(lVar27 + 0x510));
          uVar13 = (uVar13 & 0xffff) * 0xff + 0x807f >> 0x10;
LAB_00d6a70c:
          FUN_00d6b594(param_1,uVar13,uVar30,uVar30,uVar30,0,iVar20);
          uVar30 = uVar13;
        }
        else if (uVar13 != 0) {
          uVar13 = uVar30 * 0xff >> 0xf;
          uVar13 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                   ((uVar30 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 &
                   0xff;
          iVar20 = 2;
          goto LAB_00d6a70c;
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
        goto joined_r0x00d6a368;
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
        uVar6 = FUN_00d6be78(param_1);
LAB_00d6a808:
        uVar17 = 3;
        uVar13 = 0x100;
        goto LAB_00d6abac;
      }
      if ((uVar9 & 1) == 0) {
        if (*(uint *)((long)puVar29 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar27,"rgb-alpha color-map: too few entries");
        }
        uVar9 = iVar20 * ((uVar9 & 3) + 1);
        uVar6 = FUN_00d6be78(param_1);
        FUN_00d6b594(param_1,uVar6,uVar21,uVar30,uVar28,0,iVar20);
        uVar25 = uVar30;
        uVar26 = uVar30;
        uVar19 = uVar21;
        if (uVar13 != 0) {
          uVar13 = uVar21 * 0xff >> 0xf;
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
          goto LAB_00d6a808;
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
              iVar7 = FUN_00d6bfa8(param_1,uVar13,1);
              iVar8 = FUN_00d6bfa8(param_1,uVar21,iVar20);
              uVar26 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar26 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar26 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar26 >> 0xf) * 2) +
                         ((uVar26 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
              iVar7 = FUN_00d6bfa8(param_1,uVar9,1);
              iVar8 = FUN_00d6bfa8(param_1,uVar30,iVar20);
              uVar25 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar25 = uVar25 * 0x101 + (uVar25 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar25 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar25 >> 0xf) * 2) +
                         ((uVar25 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
              iVar7 = FUN_00d6bfa8(param_1,uVar19,1);
              iVar8 = FUN_00d6bfa8(param_1,uVar28,iVar20);
              uVar14 = iVar8 * 0x7f + iVar7 * 0x80;
              if (iVar20 == 2) {
                uVar14 = uVar14 * 0x101 + (uVar14 * 0x101 >> 0x10) + 0x8000 >> 0x10;
              }
              else {
                uVar14 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar14 >> 0xf) * 2) +
                         ((uVar14 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar14 >> 0xf] >> 0xc) >> 8
                         & 0xff;
              }
              FUN_00d6b594(param_1,iVar12,uVar26,uVar25,uVar14,0,iVar20);
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
        uVar6 = FUN_00d6be78(param_1);
        FUN_00d6b594(param_1,uVar6,0xff,0xff,0xff,0,1);
        FUN_00d6b594(param_1,uVar6 + 1,0,0,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 2,0,0,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 3,0,0,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 4,0,0x7f,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 5,0,0x7f,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 6,0,0x7f,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 7,0,0xff,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 8,0,0xff,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 9,0,0xff,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 10,0x7f,0,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0xb,0x7f,0,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0xc,0x7f,0,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0xd,0x7f,0x7f,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0xe,0x7f,0x7f,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0xf,0x7f,0x7f,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x10,0x7f,0xff,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x11,0x7f,0xff,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x12,0x7f,0xff,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x13,0xff,0,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x14,0xff,0,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x15,0xff,0,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x16,0xff,0x7f,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x17,0xff,0x7f,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x18,0xff,0x7f,0xff,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x19,0xff,0xff,0,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x1a,0xff,0xff,0x7f,0x80,1);
        FUN_00d6b594(param_1,uVar6 + 0x1b,0xff,0xff,0xff,0x80,1);
        sVar3 = *(short *)(lVar27 + 0x2a8);
      }
      uVar17 = 4;
      iVar10 = 1;
      uVar9 = uVar6 + 0x1c;
      uVar13 = uVar6;
joined_r0x00d6a368:
      uVar6 = uVar9;
      if (sVar3 != 0) goto LAB_00d69d50;
    }
joined_r0x00d69d64:
    if (iVar10 == 1) goto LAB_00d6abac;
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
            uVar15 = 0;
            uVar25 = uVar30;
            uVar26 = uVar28;
            uVar19 = uVar21;
          }
          else {
            iVar11 = FUN_00d6bfa8(param_1,pbVar18[-1],3);
            iVar12 = FUN_00d6bfa8(param_1,uVar21,iVar20);
            uVar19 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
              uVar19 = uVar19 * 0x101 + (uVar19 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
              uVar19 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar19 >> 0xf) * 2) +
                       ((uVar19 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar19 >> 0xf] >> 0xc) >> 8 &
                       0xff;
            }
            bVar2 = *(byte *)(lVar24 + uVar22);
            iVar11 = FUN_00d6bfa8(param_1,*pbVar18,3);
            iVar12 = FUN_00d6bfa8(param_1,uVar30,iVar20);
            uVar26 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
              uVar25 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
              uVar25 = (uint)*(ushort *)(png_sRGB_base + (ulong)(uVar26 >> 0xf) * 2) +
                       ((uVar26 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar26 >> 0xf] >> 0xc) >> 8 &
                       0xff;
            }
            bVar2 = *(byte *)(lVar24 + uVar22);
            iVar11 = FUN_00d6bfa8(param_1,pbVar18[1],3);
            iVar12 = FUN_00d6bfa8(param_1,uVar28,iVar20);
            uVar26 = iVar11 * (uint)bVar2 + iVar12 * (bVar2 ^ 0xff);
            if (iVar20 == 2) {
              uVar26 = uVar26 * 0x101 + (uVar26 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            }
            else {
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
          if (uVar22 < uVar1) {
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
        FUN_00d6b594(param_1,uVar22 & 0xffffffff,uVar19,uVar25,uVar26,uVar15,iVar10);
        uVar22 = uVar22 + 1;
        pbVar18 = pbVar18 + 3;
      } while (uVar22 < uVar6);
    }
LAB_00d6a7ac:
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
          FUN_00d6b594(param_1,iVar20,iVar20,iVar20,iVar20,0xff,1);
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0x100);
        uVar9 = uVar30;
        if (uVar13 != 0) {
          uVar13 = uVar30 * 0xff >> 0xf;
          uVar9 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                  ((uVar30 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc) >> 8 & 0xff
          ;
          FUN_00d6b594(param_1,uVar9,uVar30,uVar30,uVar30,0xffff,2);
        }
        local_68 = (undefined2)uVar9;
LAB_00d699d8:
        local_70[0] = 0;
        local_6e = local_68;
        local_6c = local_68;
        local_6a = local_68;
        png_set_background_fixed(lVar27,local_70,1,0,0);
        goto LAB_00d69eac;
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
        FUN_00d6b594(param_1,iVar10,uVar9,uVar9,uVar9,0xff,1);
        uVar22 = (ulong)((int)uVar22 + 0x100);
        iVar10 = iVar11;
      } while (iVar11 != 0xe7);
      uVar17 = 0xffff;
      if (uVar13 == 0) {
        uVar17 = 0xff;
      }
      FUN_00d6b594(param_1,0xe7,uVar21,uVar30,uVar28,uVar17,iVar20);
      if (uVar6 == 0) {
        uVar21 = (uint)(ushort)(&png_sRGB_table)[uVar21];
        uVar30 = (uint)(ushort)(&png_sRGB_table)[uVar30];
        uVar28 = (uint)(ushort)(&png_sRGB_table)[uVar28];
      }
      lVar24 = -6;
      puVar23 = &png_sRGB_table;
      do {
        iVar20 = (uint)*puVar23 * 0x33;
        uVar13 = iVar20 + uVar21 * 0xcc;
        uVar19 = uVar13 >> 0xf;
        uVar9 = iVar20 + uVar30 * 0xcc;
        uVar6 = iVar20 + uVar28 * 0xcc;
        uVar26 = uVar6 >> 0xf;
        uVar25 = uVar9 >> 0xf;
        FUN_00d6b594(param_1,(int)lVar24 + 0xee,
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
        FUN_00d6b594(param_1,(int)lVar24 + 0xf4,
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
        iVar20 = (uint)*puVar23 * 0x99;
        uVar13 = iVar20 + uVar21 * 0x66;
        uVar19 = uVar13 >> 0xf;
        uVar9 = iVar20 + uVar30 * 0x66;
        uVar6 = iVar20 + uVar28 * 0x66;
        uVar26 = uVar6 >> 0xf;
        uVar25 = uVar9 >> 0xf;
        FUN_00d6b594(param_1,(int)lVar24 + 0xfa,
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
        iVar20 = (uint)*puVar23 * 0xcc;
        uVar13 = iVar20 + uVar21 * 0x33;
        uVar19 = uVar13 >> 0xf;
        uVar9 = iVar20 + uVar30 * 0x33;
        uVar6 = iVar20 + uVar28 * 0x33;
        uVar26 = uVar6 >> 0xf;
        uVar25 = uVar9 >> 0xf;
        uVar17 = 1;
        FUN_00d6b594(param_1,(int)lVar24 + 0x100,
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
      uVar6 = FUN_00d6bae4(param_1);
      uVar17 = 1;
      uVar13 = 0xe7;
    }
LAB_00d6abac:
    png_set_alpha_mode_fixed(lVar27,0,220000);
  }
  if (8 < *(byte *)(lVar27 + 0x2b0)) {
    png_set_scale_16(lVar27);
  }
  if ((0x100 < uVar6) || (*(uint *)((long)puVar29 + 0x1c) < uVar6)) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,"color map overflow (BAD internal error)");
  }
  *(uint *)((long)puVar29 + 0x1c) = uVar6;
  switch(uVar17) {
  case 0:
  case 3:
    if (uVar13 == 0x100) {
LAB_00d6ac34:
      *(undefined4 *)(param_1 + 9) = uVar17;
      return 1;
    }
    break;
  case 1:
    if (uVar13 == 0xe7) goto LAB_00d6ac34;
    break;
  case 2:
    if ((uVar13 == 0xfe) && (0xfe < uVar6)) goto LAB_00d6ac34;
    break;
  case 4:
    if (uVar13 == 0xd8) goto LAB_00d6ac34;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(lVar27,"bad processing option (internal error)");
  }
                    /* WARNING: Subroutine does not return */
  png_error(lVar27,"bad background index (internal error)");
}

