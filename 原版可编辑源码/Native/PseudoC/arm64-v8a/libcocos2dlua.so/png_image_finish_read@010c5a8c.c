
ulong png_image_finish_read(long *param_1,undefined8 param_2,long param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  long *local_90;
  long lStack_88;
  uint local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (param_1 == (long *)0x0) {
    uVar2 = 0;
LAB_010c5b30:
    return (ulong)uVar2;
  }
  if ((int)param_1[1] == 1) {
    if (param_4 == 0) {
                    /* try { // try from 010c5ad0 to 011c5bb3 has its CatchHandler @ 010c58c0 */
      iVar3 = 1;
      if ((*(uint *)((long)param_1 + 0x14) & 8) == 0) {
        iVar3 = (*(uint *)((long)param_1 + 0x14) & 3) + 1;
      }
      param_4 = iVar3 * *(int *)((long)param_1 + 0xc);
    }
    if ((param_3 != 0) && (*param_1 != 0)) {
      uVar1 = *(uint *)((long)param_1 + 0x14);
      uVar2 = -param_4;
      if (-1 < (int)param_4) {
        uVar2 = param_4;
      }
      iVar3 = 1;
      if ((uVar1 & 8) == 0) {
        iVar3 = (uVar1 & 3) + 1;
      }
      if ((uint)(iVar3 * *(int *)((long)param_1 + 0xc)) <= uVar2) {
        if (((uVar1 >> 3 & 1) == 0) || ((param_5 != 0 && (*(int *)((long)param_1 + 0x1c) != 0)))) {
          memset(&local_90,0,0x50);
                    /* catch() { ... } // from try @ 010c59d4 with catch @ 010c5b98 */
          local_68 = 0;
          local_90 = param_1;
          lStack_88 = param_3;
          local_80 = param_4;
          local_78 = param_5;
          uStack_70 = param_2;
          if ((uVar1 >> 3 & 1) == 0) {
            uVar2 = png_safe_execute(param_1,FUN_010c7520,&local_90);
          }
          else {
                    /* try { // try from 010c5bc0 to 011c5cc7 has its CatchHandler @ 010c5bc0
                       catch() { ... } // from try @ 010c5bc0 with catch @ 010c5bc0
                       catch() { ... } // from try @ 010c5d30 with catch @ 010c5bc0 */
            iVar3 = png_safe_execute(param_1,FUN_010c5c14,&local_90);
            if (iVar3 == 0) {
              uVar2 = 0;
            }
            else {
              iVar3 = png_safe_execute(param_1,FUN_010c72b8,&local_90);
              uVar2 = (uint)(iVar3 != 0);
            }
          }
          png_image_free(param_1);
          goto LAB_010c5b30;
        }
        pcVar5 = "png_image_finish_read[color-map]: no color-map";
        goto LAB_010c5b54;
      }
    }
    pcVar5 = "png_image_finish_read: invalid argument";
  }
  else {
    pcVar5 = "png_image_finish_read: damaged PNG_IMAGE_VERSION";
  }
LAB_010c5b54:
  uVar4 = png_image_error(param_1,pcVar5);
  return uVar4;
}

