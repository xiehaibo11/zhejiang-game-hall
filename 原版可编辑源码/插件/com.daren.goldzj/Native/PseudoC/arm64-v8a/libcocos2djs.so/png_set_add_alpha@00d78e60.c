
void png_set_add_alpha(long param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x165) < '\0') {
    *(undefined2 *)(param_1 + 0x2b8) = param_2;
  }
  else {
    if (*(char *)(param_1 + 0x2af) != '\x02') {
      if (*(char *)(param_1 + 0x2af) == '\0') {
        if (7 < *(byte *)(param_1 + 0x2b0)) {
          uVar2 = 2;
          goto LAB_00d78eac;
        }
        pcVar1 = "png_set_filler is invalid for low bit depth gray output";
      }
      else {
        pcVar1 = "png_set_filler: inappropriate color type";
      }
      png_app_error(param_1,pcVar1);
      uVar3 = *(uint *)(param_1 + 0x16c);
      goto joined_r0x00d78edc;
    }
    uVar2 = 4;
LAB_00d78eac:
    *(undefined1 *)(param_1 + 0x2b4) = uVar2;
  }
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  if (param_3 == 1) {
    uVar3 = *(uint *)(param_1 + 0x168) | 0x80;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x168) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x168) = uVar3;
  uVar3 = *(uint *)(param_1 + 0x16c);
joined_r0x00d78edc:
  if ((uVar3 >> 0xf & 1) != 0) {
    *(uint *)(param_1 + 0x16c) = uVar3 | 0x1000000;
  }
  return;
}

