
void png_read_image(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
      iVar2 = png_set_interlace_handling(param_1);
      if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
        png_read_start_row(param_1);
      }
      else {
        png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
      }
    }
    else {
      if ((*(char *)(param_1 + 0x2ac) != '\0') && ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0)) {
        png_warning(param_1,"Interlace handling should be turned on when using png_read_image");
        *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
      }
      iVar2 = png_set_interlace_handling(param_1);
    }
    if ((0 < iVar2) && (iVar1 = *(int *)(param_1 + 0x234), iVar1 != 0)) {
      iVar3 = 0;
      puVar5 = param_2;
      iVar4 = iVar1;
      do {
        do {
          png_read_row(param_1,*puVar5,0);
          iVar4 = iVar4 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
        iVar3 = iVar3 + 1;
        puVar5 = param_2;
        iVar4 = iVar1;
      } while (iVar3 != iVar2);
    }
  }
  return;
}

