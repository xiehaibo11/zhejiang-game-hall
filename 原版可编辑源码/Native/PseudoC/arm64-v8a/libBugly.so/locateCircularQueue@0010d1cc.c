
uint locateCircularQueue(uint *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  if ((((param_2 != (char *)0x0 && param_3 != 0) && (param_1 != (uint *)0x0)) &&
      (uVar1 = *param_1, param_3 <= uVar1)) && (uVar5 = param_1[4], uVar1 != 0)) {
    uVar6 = 0;
    do {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar5 / uVar1;
      }
      if (*(char *)(*(long *)(param_1 + 2) + (ulong)(uVar5 - uVar3 * uVar1)) == *param_2) {
        uVar3 = 0;
        pcVar4 = param_2;
        do {
          pcVar4 = pcVar4 + 1;
          uVar3 = uVar3 + 1;
          if (uVar3 == param_3) {
            return uVar5;
          }
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = (uVar5 + uVar3) / uVar1;
          }
        } while (*(char *)(*(long *)(param_1 + 2) + (ulong)((uVar5 + uVar3) - uVar2 * uVar1)) ==
                 *pcVar4);
      }
      uVar6 = uVar6 + 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar5 + 1) / uVar1;
      }
      uVar5 = (uVar5 + 1) - uVar3 * uVar1;
    } while (uVar6 != uVar1);
  }
  return 0xffffffff;
}

