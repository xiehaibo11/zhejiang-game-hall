
undefined8
png_get_iCCP(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined8 *param_5,
            uint *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar2 = 0, param_6 != (uint *)0x0)) &&
     (((param_5 != (undefined8 *)0x0 && (param_4 != (undefined4 *)0x0)) &&
      ((param_3 != (undefined8 *)0x0 && ((*(uint *)(param_2 + 8) >> 0xc & 1) != 0)))))) {
    uVar2 = 0x1000;
    *param_3 = *(undefined8 *)(param_2 + 0x80);
    puVar3 = *(uint **)(param_2 + 0x88);
    *param_5 = puVar3;
    uVar1 = *puVar3;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *param_6 = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_4 = 0;
  }
  return uVar2;
}

