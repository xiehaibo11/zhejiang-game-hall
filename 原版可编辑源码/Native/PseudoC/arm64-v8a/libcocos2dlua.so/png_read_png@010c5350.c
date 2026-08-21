
/* WARNING: Type propagation algorithm not settling */

void png_read_png(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_info(param_1,param_2);
    if (*(uint *)(param_2 + 4) >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Image is too high to process with png_read_png()");
    }
    if ((param_3 >> 0xf & 1) != 0) {
      png_set_scale_16(param_1);
    }
    if ((param_3 & 1) != 0) {
      png_set_strip_16(param_1);
    }
    if ((param_3 >> 1 & 1) != 0) {
      png_set_strip_alpha(param_1);
    }
    if ((param_3 >> 2 & 1) != 0) {
      png_set_packing(param_1);
    }
    if ((param_3 >> 3 & 1) != 0) {
      png_set_packswap(param_1);
    }
    if ((param_3 >> 4 & 1) != 0) {
      png_set_expand(param_1);
    }
    if ((param_3 >> 5 & 1) != 0) {
      png_set_invert_mono(param_1);
    }
    if (((param_3 >> 6 & 1) != 0) && ((*(byte *)(param_2 + 8) >> 1 & 1) != 0)) {
      png_set_shift(param_1,param_2 + 0xb0);
    }
    if ((param_3 >> 7 & 1) != 0) {
      png_set_bgr(param_1);
    }
    if ((param_3 >> 8 & 1) != 0) {
      png_set_swap_alpha(param_1);
    }
    if ((param_3 >> 9 & 1) != 0) {
      png_set_swap(param_1);
    }
    if ((param_3 >> 10 & 1) != 0) {
      png_set_invert_alpha(param_1);
    }
    if ((param_3 >> 0xd & 1) != 0) {
      png_set_gray_to_rgb(param_1);
    }
    if ((param_3 >> 0xe & 1) != 0) {
      png_set_expand_16(param_1);
    }
    png_set_interlace_handling(param_1);
    if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
      png_read_start_row(param_1);
      png_read_transform_info(param_1,param_2);
    }
    else {
      png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
    }
    png_free_data(param_1,param_2,0x40,0);
    if (*(long *)(param_2 + 0x150) == 0) {
      puVar1 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_2 + 4) << 3);
      uVar4 = *(uint *)(param_2 + 4);
      *(undefined8 **)(param_2 + 0x150) = puVar1;
      if (uVar4 == 0) {
        *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x40;
      }
      else {
        *puVar1 = 0;
        if (uVar4 != 1) {
          uVar3 = 1;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x150) + uVar3 * 8) = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x40;
        if (uVar4 != 0) {
          uVar4 = 0;
          do {
            uVar2 = png_malloc(param_1,*(undefined8 *)(param_2 + 0x10));
            *(undefined8 *)(*(long *)(param_2 + 0x150) + (ulong)uVar4 * 8) = uVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_2 + 4));
        }
      }
    }
    png_read_image(param_1,*(undefined8 *)(param_2 + 0x150));
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    png_read_end(param_1,param_2);
    return;
  }
  return;
}

