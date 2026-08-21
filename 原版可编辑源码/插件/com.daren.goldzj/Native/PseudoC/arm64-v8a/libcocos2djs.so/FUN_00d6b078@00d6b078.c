
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00d6b078(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_70 [2];
  ushort local_6e;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  undefined4 local_64;
  
  puVar13 = (undefined8 *)*param_1;
  uVar3 = *(uint *)((long)puVar13 + 0x14);
  lVar1 = *(long *)*puVar13;
  lVar2 = ((long *)*puVar13)[1];
  png_set_expand(lVar1);
  uVar9 = *(byte *)(lVar1 + 0x2af) & 2;
  if ((*(byte *)(lVar1 + 0x2af) >> 2 & 1) == 0) {
    uVar9 = *(short *)(lVar1 + 0x2a8) != 0 | uVar9;
  }
  else {
    uVar9 = uVar9 | 1;
  }
  uVar6 = 100000;
  uVar11 = uVar9 | 4;
  if (*(char *)(lVar1 + 0x2b0) != '\x10') {
    uVar11 = uVar9;
  }
  uVar9 = uVar11 ^ uVar3;
  if ((uVar9 >> 1 & 1) == 0) {
    uVar19 = 0;
    if (uVar11 >> 2 == 0) goto LAB_00d6b158;
LAB_00d6b148:
    uVar8 = 100000;
    if ((*(byte *)(puVar13 + 3) >> 2 & 1) != 0) goto LAB_00d6b158;
  }
  else {
    if ((uVar3 >> 1 & 1) == 0) {
      uVar19 = uVar11 & 1;
      png_set_rgb_to_gray_fixed(lVar1,1,0xffffffff,0xffffffff);
    }
    else {
      png_set_gray_to_rgb(lVar1);
      uVar19 = 0;
    }
    uVar9 = uVar9 & 0xfffffffd;
    if (uVar11 >> 2 != 0) goto LAB_00d6b148;
LAB_00d6b158:
    uVar8 = 0xffffffff;
  }
  uVar18 = uVar3 & 4;
  png_set_alpha_mode_fixed(lVar1,0,uVar8);
  uVar15 = uVar11 & 1;
  if (uVar18 == 0) {
    uVar15 = 0;
    uVar6 = 0xffffffff;
  }
  uVar20 = uVar19;
  if (uVar19 != 0) {
    iVar5 = png_muldiv(&local_64,uVar6,*(undefined4 *)(lVar1 + 0x510),100000);
    if ((iVar5 == 0) || (iVar5 = png_gamma_significant(local_64), iVar5 != 0)) {
      uVar20 = 2;
      if (uVar15 == 0) {
        uVar20 = uVar19;
      }
      uVar15 = 0;
    }
    else {
      uVar20 = 0;
    }
  }
  if ((uVar9 >> 2 & 1) != 0) {
    if (uVar18 == 0) {
      png_set_scale_16(lVar1);
    }
    else {
      png_set_expand_16(lVar1);
    }
    uVar9 = uVar9 & 0xfffffffb;
  }
  if ((uVar9 & 1) == 0) {
    bVar14 = false;
  }
  else {
    if ((uVar11 & 1) == 0) {
      uVar10 = 0xffff;
      if (uVar18 == 0) {
        uVar10 = 0xff;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar9 = uVar9 & 0xffffffdf;
      }
      png_set_add_alpha(lVar1,uVar10,uVar3 >> 5 & 1 ^ 1);
      bVar14 = false;
    }
    else if (uVar20 == 0) {
      if (uVar18 == 0) {
        pbVar12 = (byte *)param_1[4];
        if (pbVar12 == (byte *)0x0) {
          uVar20 = 0;
          bVar14 = true;
          uVar15 = 2;
          goto LAB_00d6b288;
        }
        local_70[0] = 0;
        local_6e = (ushort)*pbVar12;
        local_6c = (ushort)pbVar12[1];
        local_6a = (ushort)pbVar12[2];
        local_68 = local_6c;
        png_set_background_fixed(lVar1,local_70,1,0,0);
      }
      else {
        png_set_strip_alpha(lVar1);
      }
      uVar20 = 0;
      bVar14 = false;
    }
    else {
      bVar14 = false;
      uVar20 = 2;
    }
LAB_00d6b288:
    uVar9 = uVar9 & 0xfffffffe;
  }
  png_set_alpha_mode_fixed(lVar1,uVar15,uVar6);
  uVar11 = uVar9;
  if ((uVar9 >> 4 & 1) != 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      uVar3 = uVar3 & 0xffffffef;
      uVar11 = uVar9 & 0xffffffef;
    }
    else {
      png_set_bgr(lVar1);
      uVar11 = uVar9 & 0xffffffef;
    }
  }
  if ((uVar9 >> 5 & 1) != 0) {
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 & 0xffffffdf;
      uVar11 = uVar11 & 0xffffffdf;
    }
    else {
      if (uVar20 != 2) {
        png_set_swap_alpha(lVar1);
      }
      uVar11 = uVar11 & 0xffffffdf;
    }
  }
  if (uVar18 != 0) {
    png_set_swap(lVar1);
  }
  if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar1,"png_read_image: unsupported transformation");
  }
  png_set_keep_unknown_chunks(lVar1,1,0,0xffffffff);
  png_set_keep_unknown_chunks(lVar1,0,&DAT_0194bb36,6);
  iVar5 = 0;
  if (uVar20 == 2) {
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) == 0) goto LAB_00d6b300;
LAB_00d6b390:
    png_app_error(lVar1,"png_read_update_info/png_start_read_image: duplicate call");
  }
  else {
    if (!bVar14) {
      iVar5 = png_set_interlace_handling(lVar1);
    }
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) != 0) goto LAB_00d6b390;
LAB_00d6b300:
    png_read_start_row(lVar1);
    png_read_transform_info(lVar1,lVar2);
  }
  uVar9 = *(byte *)(lVar2 + 0x25) & 2;
  if ((*(byte *)(lVar2 + 0x25) >> 2 & 1) == 0) {
    if (bVar14) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar1,"png_image_read: alpha channel lost");
    }
  }
  else if (!bVar14) {
    uVar9 = uVar9 | (uint)(uVar20 != 2) | uVar3 & 1;
  }
  uVar19 = *(uint *)(lVar1 + 0x16c);
  uVar11 = uVar9 | 4;
  if (*(char *)(lVar2 + 0x24) != '\x10') {
    uVar11 = uVar9;
  }
  uVar11 = (uVar19 & 1) << 4 | uVar11;
  uVar9 = uVar11 | 0x20;
  if ((uVar3 & 0x20) != 0 && uVar20 == 2) {
    uVar11 = uVar9;
  }
  if ((uVar19 >> 0x11 & 1) == 0) {
    if ((uVar19 >> 0x18 & 1) != 0) {
      if ((*(uint *)(lVar1 + 0x168) & 0x80) == 0) {
        uVar11 = uVar9;
      }
      if (uVar20 == 2 && (*(uint *)(lVar1 + 0x168) & 0x80) == 0) goto LAB_00d6b434;
    }
  }
  else {
    uVar11 = uVar9;
    if (uVar20 == 2) {
LAB_00d6b434:
                    /* WARNING: Subroutine does not return */
      png_error(lVar1,"unexpected alpha swap transformation");
    }
  }
  if (uVar11 != uVar3) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar1,"png_read_image: invalid transformations");
  }
  lVar16 = param_1[1];
  lVar17 = (long)*(int *)(param_1 + 2) << (uVar18 >> 2);
  if (lVar17 < 0) {
    lVar16 = lVar16 - lVar17 * (ulong)(*(int *)(puVar13 + 2) - 1);
    param_1[6] = lVar16;
    param_1[7] = lVar17;
  }
  else {
    param_1[6] = lVar16;
    param_1[7] = lVar17;
  }
  if (bVar14) {
    uVar8 = png_get_rowbytes(lVar1,lVar2);
    uVar8 = png_malloc(lVar1,uVar8);
    pcVar7 = FUN_00d6c480;
    param_1[5] = uVar8;
  }
  else {
    if (uVar20 != 2) {
      if (0 < iVar5) {
        while( true ) {
          for (iVar4 = *(int *)(puVar13 + 2); iVar4 != 0; iVar4 = iVar4 + -1) {
            png_read_row(lVar1,lVar16,0);
            lVar16 = lVar16 + lVar17;
          }
          if (iVar5 < 2) break;
          lVar16 = param_1[6];
          iVar5 = iVar5 + -1;
        }
      }
      return 1;
    }
    uVar8 = png_get_rowbytes(lVar1,lVar2);
    uVar8 = png_malloc(lVar1,uVar8);
    param_1[5] = uVar8;
    pcVar7 = FUN_00d6c71c;
  }
  uVar6 = png_safe_execute(puVar13,pcVar7,param_1);
  param_1[5] = 0;
  png_free(lVar1,uVar8);
  return uVar6;
}

