
undefined8 png_get_tRNS(long param_1,long param_2,undefined8 *param_3,uint *param_4,long *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 8) >> 4 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x25) == '\x03') {
      if (param_3 == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x10;
        *param_3 = *(undefined8 *)(param_2 + 0xb8);
      }
      if (param_5 != (long *)0x0) {
        *param_5 = param_2 + 0xc0;
      }
    }
    else {
      if (param_5 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x10;
        *param_5 = param_2 + 0xc0;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
    }
    if (param_4 != (uint *)0x0) {
      uVar1 = 0x10;
      *param_4 = (uint)*(ushort *)(param_2 + 0x22);
    }
  }
  return uVar1;
}

