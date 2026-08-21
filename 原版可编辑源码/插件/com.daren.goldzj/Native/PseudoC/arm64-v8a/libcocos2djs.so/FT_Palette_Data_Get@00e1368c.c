
undefined8 FT_Palette_Data_Get(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x420);
    uVar1 = *(undefined8 *)(param_1 + 0x418);
    uVar4 = *(undefined8 *)(param_1 + 0x430);
    uVar3 = *(undefined8 *)(param_1 + 0x428);
    param_2[4] = *(undefined8 *)(param_1 + 0x438);
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return 0;
  }
  return 6;
}

