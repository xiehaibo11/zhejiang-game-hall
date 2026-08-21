
ulong png_image_write_to_stdio
                (undefined8 *param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_00d7b328:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 1) != 1) {
      pcVar6 = "png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION";
LAB_00d7b280:
      uVar5 = png_image_error(param_1,pcVar6);
      return uVar5;
    }
    if (param_2 == 0) {
      pcVar6 = "png_image_write_to_stdio: invalid argument";
      goto LAB_00d7b280;
    }
    puVar2 = (undefined8 *)
             png_create_png_struct(&DAT_01949f10,param_1,png_safe_error,png_safe_warning,0,0,0);
    if (puVar2 == (undefined8 *)0x0) {
      local_98 = (undefined8 *)0x0;
LAB_00d7b2c0:
      iVar1 = png_image_error(param_1,"png_image_write_: out of memory");
      if (iVar1 == 0) goto LAB_00d7b328;
      plVar4 = (long *)*param_1;
    }
    else {
      *(undefined4 *)(puVar2 + 0x43) = 0;
      puVar2[0x42] = 0x80000000f;
      puVar2[0x3f] = 0xf00000008;
      puVar2[0x3e] = 0xffffffff00002000;
      puVar2[0x41] = 0x8ffffffff;
      puVar2[0x40] = 0x100000008;
      *(uint *)(puVar2 + 0x2d) = *(uint *)(puVar2 + 0x2d) | 0x200000;
      png_set_write_fn(puVar2,0,0,0);
      local_98 = puVar2;
      lVar3 = png_create_info_struct(puVar2);
      local_58 = lVar3;
      if (lVar3 == 0) {
LAB_00d7b2b4:
        png_destroy_write_struct(&local_98,0);
        goto LAB_00d7b2c0;
      }
      plVar4 = (long *)png_malloc_warn(puVar2,0x30);
      if (plVar4 == (long *)0x0) {
        png_destroy_info_struct(puVar2,&local_58);
        goto LAB_00d7b2b4;
      }
      *plVar4 = (long)puVar2;
      plVar4[1] = lVar3;
      plVar4[3] = 0;
      plVar4[2] = 0;
      plVar4[5] = 0;
      plVar4[4] = 0;
      *(undefined1 *)(plVar4 + 5) = 1;
      *param_1 = plVar4;
    }
    *(long *)(*plVar4 + 0x140) = param_2;
    uStack_70 = 0;
    uStack_60 = 0;
    local_68 = 0;
    local_88 = (ulong)param_5;
    local_78 = (ulong)param_3;
    local_98 = param_1;
    uStack_90 = param_4;
    uStack_80 = param_6;
    uVar5 = png_safe_execute(param_1,FUN_00d7b34c,&local_98);
    uVar5 = uVar5 & 0xffffffff;
    png_image_free(param_1);
  }
  return uVar5;
}

