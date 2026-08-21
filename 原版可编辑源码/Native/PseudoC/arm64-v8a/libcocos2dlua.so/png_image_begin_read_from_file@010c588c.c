
undefined8 png_image_begin_read_from_file(long *param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 010c56e0 with catch @ 010c5898 */
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((int)param_1[1] == 1) {
    if (param_2 == (char *)0x0) {
      pcVar4 = "png_image_begin_read_from_file: invalid argument";
    }
    else {
                    /* try { // try from 010c58c0 to 011c59d3 has its CatchHandler @ 010c58c0
                       catch() { ... } // from try @ 010c58c0 with catch @ 010c58c0
                       catch() { ... } // from try @ 010c5ad0 with catch @ 010c58c0 */
      __stream = fopen(param_2,"rb");
      if (__stream != (FILE *)0x0) {
        iVar1 = FUN_010c563c(param_1);
        if (iVar1 == 0) {
          fclose(__stream);
          return 0;
        }
        plVar5 = (long *)*param_1;
        *(FILE **)(*plVar5 + 0x140) = __stream;
        *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 2;
        uVar2 = png_safe_execute(param_1,FUN_010c5798,param_1);
        return uVar2;
      }
      piVar3 = (int *)__errno();
      pcVar4 = strerror(*piVar3);
    }
  }
  else {
    pcVar4 = "png_image_begin_read_from_file: incorrect PNG_IMAGE_VERSION";
  }
  uVar2 = png_image_error(param_1,pcVar4);
  return uVar2;
}

