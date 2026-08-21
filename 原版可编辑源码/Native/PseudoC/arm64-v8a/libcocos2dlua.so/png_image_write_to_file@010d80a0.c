
undefined8
png_image_write_to_file
          (long param_1,char *param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
          undefined8 param_6)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    if (param_2 == (char *)0x0) {
      pcVar3 = "png_image_write_to_file: invalid argument";
    }
    else {
      __stream = fopen(param_2,"wb");
      if (__stream == (FILE *)0x0) {
        piVar2 = (int *)__errno();
        iVar1 = *piVar2;
      }
      else {
        iVar1 = png_image_write_to_stdio(param_1,__stream,param_3,param_4,param_5,param_6);
        if (iVar1 == 0) {
          fclose(__stream);
          remove(param_2);
          return 0;
        }
        iVar1 = fflush(__stream);
        if ((iVar1 == 0) && (iVar1 = ferror(__stream), iVar1 == 0)) {
          iVar1 = fclose(__stream);
          if (iVar1 == 0) {
            return 1;
          }
          piVar2 = (int *)__errno();
          iVar1 = *piVar2;
        }
        else {
          piVar2 = (int *)__errno();
          iVar1 = *piVar2;
          fclose(__stream);
        }
        remove(param_2);
      }
      pcVar3 = strerror(iVar1);
    }
  }
  else {
    pcVar3 = "png_image_write_to_file: incorrect PNG_IMAGE_VERSION";
  }
  uVar4 = png_image_error(param_1,pcVar3);
  return uVar4;
}

