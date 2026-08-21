
void png_set_filler(long param_1,undefined2 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x165) < '\0') {
      *(undefined2 *)(param_1 + 0x2b8) = param_2;
                    /* try { // try from 010d52b8 to 011d52fb has its CatchHandler @ 010d5270 */
    }
    else {
      if (*(char *)(param_1 + 0x2af) == '\x02') {
        uVar1 = 4;
      }
      else {
        if (*(char *)(param_1 + 0x2af) != '\0') {
          png_app_error(param_1,"png_set_filler: inappropriate color type");
          return;
        }
        if (*(byte *)(param_1 + 0x2b0) < 8) {
                    /* try { // try from 010d52fc to 011d5307 has its CatchHandler @ 010d54ac */
          png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
          return;
        }
                    /* try { // try from 010d52ac to 011d52b7 has its CatchHandler @ 010d54b0 */
        uVar1 = 2;
      }
      *(undefined1 *)(param_1 + 0x2b4) = uVar1;
    }
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
    if (param_3 == 1) {
      uVar2 = *(uint *)(param_1 + 0x168) | 0x80;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x168) & 0xffffff7f;
    }
    *(uint *)(param_1 + 0x168) = uVar2;
  }
  return;
}

