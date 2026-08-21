
undefined8 FT_Library_SetLcdGeometry(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar1 = param_2[4];
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x180) = param_2[5];
    *(undefined8 *)(param_1 + 0x178) = uVar1;
    *(undefined8 *)(param_1 + 0x170) = uVar5;
    *(undefined8 *)(param_1 + 0x168) = uVar4;
    *(undefined8 *)(param_1 + 0x160) = uVar3;
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    return 7;
  }
  return 6;
}

