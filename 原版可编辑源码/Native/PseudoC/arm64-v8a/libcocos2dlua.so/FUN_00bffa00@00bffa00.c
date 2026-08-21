
undefined8 * FUN_00bffa00(undefined8 *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  uVar2 = param_2 >> 0x10 & 0xff;
  puVar4 = (undefined1 *)*param_1;
  uVar1 = uVar2;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  if ((uint)((int)param_1[1] - (int)puVar4) < uVar1) {
    puVar4 = (undefined1 *)FUN_00c1a4a8(param_1,uVar1);
  }
  if ((param_2 >> 8 & 1) == 0) {
    if (1 < uVar2) goto LAB_00bffa58;
  }
  else {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
    puVar3 = puVar4;
    if (uVar2 < 2) goto LAB_00bffa74;
LAB_00bffa58:
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar4 + 1;
      *puVar4 = 0x20;
      puVar4 = puVar3;
    } while (1 < uVar2);
    if ((param_2 & 0x100) != 0) goto LAB_00bffa74;
  }
  *puVar4 = param_3;
  puVar3 = puVar4 + 1;
LAB_00bffa74:
  *param_1 = puVar3;
  return param_1;
}

