
/* cocos2d::Image::initWithPngData(unsigned char const*, long) */

undefined4 __thiscall cocos2d::Image::initWithPngData(Image *this,uchar *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  ulong uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  __jmp_buf_tag *__env;
  void *__ptr;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uchar *local_78;
  long lStack_70;
  undefined4 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (param_2 < 8) {
LAB_00f7dc38:
    uVar12 = 0;
    goto LAB_00f7dc90;
  }
  local_50 = *(undefined8 *)param_1;
  iVar11 = png_sig_cmp(&local_50,0,8);
  if (iVar11 != 0) goto LAB_00f7dc68;
  local_58 = png_create_read_struct(&DAT_01447da8,0,0,0);
  if (local_58 == 0) goto LAB_00f7dc38;
  local_60 = png_create_info_struct();
  if (local_60 == 0) {
LAB_00f7dc68:
    uVar12 = 0;
  }
  else {
    __env = (__jmp_buf_tag *)png_set_longjmp_fn(local_58,longjmp,0x100);
    iVar11 = setjmp(__env);
    if (iVar11 != 0) goto LAB_00f7dc68;
    local_68 = 0;
    local_78 = param_1;
    lStack_70 = param_2;
    png_set_read_fn(local_58,&local_78,FUN_00f7f148);
    png_read_info(local_58,local_60);
    uVar12 = png_get_image_width(local_58,local_60);
    *(undefined4 *)(this + 0x38) = uVar12;
    uVar12 = png_get_image_height(local_58,local_60);
    *(undefined4 *)(this + 0x3c) = uVar12;
    bVar9 = png_get_bit_depth(local_58,local_60);
    cVar10 = png_get_color_type(local_58,local_60);
    if (cVar10 == '\0') {
      if (bVar9 < 8) {
        png_set_expand_gray_1_2_4_to_8(local_58);
        bVar9 = 8;
      }
    }
    else if (cVar10 == '\x03') {
      png_set_palette_to_rgb(local_58);
    }
    iVar11 = png_get_valid(local_58,local_60,0x10);
    if (iVar11 != 0) {
      png_set_tRNS_to_alpha(local_58);
    }
    if (bVar9 == 0x10) {
      png_set_strip_16(local_58);
    }
    else if (bVar9 < 8) {
      png_set_packing(local_58);
    }
    png_read_update_info(local_58,local_60);
    uVar13 = png_get_color_type(local_58,local_60);
    if (((uVar13 & 0xff) < 7) && ((0x55U >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      *(undefined4 *)(this + 0x48) = *(undefined4 *)(&DAT_01447dec + (long)(char)uVar13 * 4);
    }
    __ptr = malloc((long)*(int *)(this + 0x3c) << 3);
    lVar14 = png_get_rowbytes(local_58,local_60);
    uVar5 = *(uint *)(this + 0x3c);
    *(long *)(this + 0x30) = lVar14 * (int)uVar5;
    pvVar15 = malloc(lVar14 * (int)uVar5);
    *(void **)(this + 0x28) = pvVar15;
    if (pvVar15 == (void *)0x0) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      goto LAB_00f7dc68;
    }
    if (0 < (int)uVar5) {
      if (uVar5 < 4) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        if (((~(uVar5 - 1) & 0xffff) != 0) && (uVar5 - 1 >> 0x10 == 0)) {
          uVar19 = 0x100000000;
          uVar16 = (ulong)(uVar5 & 0xfffffffc);
          uVar17 = uVar16;
          do {
            sVar7 = (short)uVar19;
            uVar8 = uVar19 >> 0x20;
            uVar20 = uVar19 & 0xffff0000ffff;
            uVar21 = uVar19 & 0xffff;
            uVar1 = (int)uVar17 - 4;
            uVar17 = (ulong)uVar1;
            puVar3 = (undefined8 *)((long)__ptr + uVar21 * 8);
            uVar19 = CONCAT44((int)(uVar19 >> 0x20) + 4,(int)uVar19 + 4);
            puVar3[1] = (void *)((long)pvVar15 + lVar14 * (uVar20 >> 0x20));
            *puVar3 = (void *)((long)pvVar15 + lVar14 * uVar21);
            puVar3[3] = (void *)((long)pvVar15 + lVar14 * (ulong)(ushort)((short)uVar8 + 2));
            puVar3[2] = (void *)((long)pvVar15 + lVar14 * (ulong)(ushort)(sVar7 + 2));
          } while (uVar1 != 0);
          if (uVar5 == (uVar5 & 0xfffffffc)) goto LAB_00f7de70;
        }
      }
      do {
        uVar17 = uVar16 & 0xffff;
        uVar1 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar1;
        *(void **)((long)__ptr + uVar17 * 8) = (void *)((long)pvVar15 + lVar14 * uVar17);
      } while ((int)(uVar1 & 0xffff) < (int)uVar5);
    }
LAB_00f7de70:
    png_read_image(local_58,__ptr);
    png_read_end(local_58,0);
    if ((uVar13 & 0xff) == 6) {
      if ((PNG_PREMULTIPLIED_ALPHA_ENABLED != '\0') &&
         (0 < *(int *)(this + 0x3c) * *(int *)(this + 0x38))) {
        lVar18 = *(long *)(this + 0x28);
        uVar16 = 0;
        lVar14 = 0;
        do {
          pbVar2 = (byte *)(lVar18 + (uVar16 & 0xfffffffc));
          iVar11 = pbVar2[3] + 1;
          *(uint *)(lVar18 + lVar14 * 4) =
               iVar11 * (uint)pbVar2[1] & 0x1ff00 | (uint)pbVar2[3] << 0x18 |
               iVar11 * (uint)*pbVar2 >> 8 | iVar11 * (uint)pbVar2[2] * 0x100 & 0x1ff0000;
          lVar14 = lVar14 + 1;
          uVar16 = uVar16 + 4;
        } while (lVar14 < (long)*(int *)(this + 0x3c) * (long)*(int *)(this + 0x38));
      }
      this[0x154] = (Image)0x1;
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    uVar12 = 1;
  }
  if (local_58 != 0) {
    plVar4 = (long *)0x0;
    if (local_60 != 0) {
      plVar4 = &local_60;
    }
    png_destroy_read_struct(&local_58,plVar4,0);
  }
LAB_00f7dc90:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

