
void png_set_background_fixed
               (long param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x168);
    if ((uVar2 >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = uVar2 | 0x4000;
    if (param_2 != (undefined8 *)0x0) {
      if (param_3 == 0) {
        png_warning(param_1,"Application must supply a known background gamma");
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x16c);
      *(uint *)(param_1 + 0x168) = uVar2 & 0xffffdfff | 0x4000;
      uVar2 = uVar1 & 0xff7bff7f;
      *(uint *)(param_1 + 0x16c) = uVar2 | 0x40080;
      *(undefined2 *)(param_1 + 0x2c8) = *(undefined2 *)(param_2 + 1);
      uVar3 = *param_2;
      *(undefined4 *)(param_1 + 700) = param_5;
      *(char *)(param_1 + 0x2ba) = (char)param_3;
      *(undefined8 *)(param_1 + 0x2c0) = uVar3;
      if (param_4 == 0) {
        uVar2 = uVar1 & 0xff7bfe7f | 0x40080;
      }
      else {
        uVar2 = uVar2 | 0x40180;
      }
      *(uint *)(param_1 + 0x16c) = uVar2;
    }
  }
  return;
}

