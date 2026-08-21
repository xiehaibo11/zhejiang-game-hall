
void FUN_00e437bc(uint *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 6);
  if ((lVar1 != 0) && (param_1[5] != 0)) {
    uVar2 = 0;
    do {
      lVar3 = uVar2 * 8;
      FUN_00e139fc(param_2,*(undefined8 *)(lVar1 + lVar3));
      lVar1 = *(long *)(param_1 + 6);
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + lVar3) = 0;
    } while (uVar2 < param_1[5]);
  }
  FUN_00e139fc(param_2,lVar1);
  lVar1 = *(long *)(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  if ((lVar1 != 0) && (*param_1 != 0)) {
    uVar2 = 0;
    lVar3 = 8;
    do {
      FUN_00e139fc(param_2,*(undefined8 *)(lVar1 + lVar3));
      lVar1 = *(long *)(param_1 + 2);
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar1 + lVar3) = 0;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < *param_1);
  }
  FUN_00e139fc(param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

