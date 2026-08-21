
undefined8 FUN_00d69194(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  long local_28;
  
  if (*param_1 != 0) {
    uVar1 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
    return uVar1;
  }
  lVar2 = png_create_png_struct(&DAT_01949f10,param_1,png_safe_error,png_safe_warning,0,0,0);
  if (lVar2 == 0) {
    local_28 = 0;
    memset(param_1,0,0x68);
    *(undefined4 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined4 *)(lVar2 + 0x164) = 0x8000;
    *(undefined4 *)(lVar2 + 0x4e0) = 0x2000;
    *(uint *)(lVar2 + 0x168) = *(uint *)(lVar2 + 0x168) | 0x300000;
    png_set_read_fn(lVar2,0,0);
    local_28 = lVar2;
    memset(param_1,0,0x68);
    *(undefined4 *)(param_1 + 1) = 1;
    lVar3 = png_create_info_struct(lVar2);
    local_38 = lVar3;
    if (lVar3 != 0) {
      plVar4 = (long *)png_malloc_warn(lVar2,0x30);
      if (plVar4 != (long *)0x0) {
        *plVar4 = lVar2;
        plVar4[1] = lVar3;
        plVar4[3] = 0;
        plVar4[2] = 0;
        plVar4[5] = 0;
        plVar4[4] = 0;
        *(undefined1 *)(plVar4 + 5) = 0;
        *param_1 = (long)plVar4;
        return 1;
      }
      png_destroy_info_struct(lVar2,&local_38);
    }
    png_destroy_read_struct(&local_28,0,0);
  }
  uVar1 = png_image_error(param_1,"png_image_read: out of memory");
  return uVar1;
}

