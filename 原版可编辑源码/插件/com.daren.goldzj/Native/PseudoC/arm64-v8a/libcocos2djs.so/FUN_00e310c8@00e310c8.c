
void FUN_00e310c8(undefined8 param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 2);
  if (lVar1 != 0) {
    if (*param_2 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_00e139fc(param_1,*(undefined8 *)(lVar1 + lVar2 + 8));
        lVar1 = *(long *)(param_2 + 2);
        *(undefined8 *)(lVar1 + lVar2 + 8) = 0;
        FUN_00e139fc(param_1,*(undefined8 *)(lVar1 + lVar2 + 0x10));
        lVar1 = *(long *)(param_2 + 2);
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar1 + lVar2 + 0x10) = 0;
        lVar2 = lVar2 + 0x18;
      } while (uVar3 < *param_2);
    }
    FUN_00e139fc(param_1);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  lVar1 = *(long *)(param_2 + 6);
  if (lVar1 != 0) {
    if (param_2[5] != 0) {
      uVar3 = 0;
      do {
        lVar2 = uVar3 * 8;
        FUN_00e139fc(param_1,*(undefined8 *)(lVar1 + lVar2));
        lVar1 = *(long *)(param_2 + 6);
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar1 + lVar2) = 0;
      } while (uVar3 < param_2[5]);
    }
    FUN_00e139fc(param_1);
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}

