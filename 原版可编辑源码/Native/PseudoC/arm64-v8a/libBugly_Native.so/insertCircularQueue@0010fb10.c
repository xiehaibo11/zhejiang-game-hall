
void insertCircularQueue(uint *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_3 != 0)) &&
     (param_3 <= *param_1)) {
    uVar4 = param_1[4];
    uVar3 = (ulong)param_3;
    do {
      uVar1 = *param_2;
      param_1[4] = uVar4 + 1;
      uVar3 = uVar3 - 1;
      *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)uVar4) = uVar1;
      uVar4 = *param_1;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = param_1[4] / uVar4;
      }
      uVar4 = param_1[4] - uVar2 * uVar4;
      param_1[4] = uVar4;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return;
}

