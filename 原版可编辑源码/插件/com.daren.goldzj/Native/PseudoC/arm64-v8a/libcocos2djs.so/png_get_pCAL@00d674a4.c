
undefined8
png_get_pCAL(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined8 *param_8,undefined8 *param_9)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = 0;
    if ((((param_9 != (undefined8 *)0x0) &&
         (((param_8 != (undefined8 *)0x0 && (param_7 != (uint *)0x0)) && (param_6 != (uint *)0x0))))
        && (((param_5 != (undefined4 *)0x0 && (param_4 != (undefined4 *)0x0)) &&
            (param_3 != (undefined8 *)0x0)))) && ((*(uint *)(param_2 + 8) >> 10 & 1) != 0)) {
      uVar1 = 0x400;
      *param_3 = *(undefined8 *)(param_2 + 0xf8);
      *param_4 = *(undefined4 *)(param_2 + 0x100);
      *param_5 = *(undefined4 *)(param_2 + 0x104);
      *param_6 = (uint)*(byte *)(param_2 + 0x118);
      *param_7 = (uint)*(byte *)(param_2 + 0x119);
      *param_8 = *(undefined8 *)(param_2 + 0x108);
      *param_9 = *(undefined8 *)(param_2 + 0x110);
    }
  }
  return uVar1;
}

