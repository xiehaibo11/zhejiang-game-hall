
undefined8 png_image_begin_read_from_memory(long *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((int)param_1[1] == 1) {
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar1 = FUN_00d69194(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      plVar4 = (long *)*param_1;
      lVar5 = *plVar4;
      plVar4[3] = param_2;
      plVar4[4] = param_3;
      *(code **)(lVar5 + 0x138) = FUN_00d69568;
      *(long **)(lVar5 + 0x140) = param_1;
      uVar2 = png_safe_execute(param_1,FUN_00d692f0,param_1);
      return uVar2;
    }
    pcVar3 = "png_image_begin_read_from_memory: invalid argument";
  }
  else {
    pcVar3 = "png_image_begin_read_from_memory: incorrect PNG_IMAGE_VERSION";
  }
  uVar2 = png_image_error(param_1,pcVar3);
  return uVar2;
}

