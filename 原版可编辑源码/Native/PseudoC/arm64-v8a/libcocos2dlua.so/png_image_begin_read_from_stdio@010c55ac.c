
undefined8 png_image_begin_read_from_stdio(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
                    /* try { // try from 010c55b8 to 011c56df has its CatchHandler @ 010c55b8
                       catch() { ... } // from try @ 010c55b8 with catch @ 010c55b8
                       catch() { ... } // from try @ 010c57dc with catch @ 010c55b8 */
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 1) == 1) {
    if (param_2 != 0) {
      iVar1 = FUN_010c563c(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      *(long *)(*(long *)*param_1 + 0x140) = param_2;
      uVar2 = png_safe_execute(param_1,FUN_010c5798,param_1);
      return uVar2;
    }
    pcVar3 = "png_image_begin_read_from_stdio: invalid argument";
  }
  else {
    pcVar3 = "png_image_begin_read_from_stdio: incorrect PNG_IMAGE_VERSION";
  }
  uVar2 = png_image_error(param_1,pcVar3);
  return uVar2;
}

