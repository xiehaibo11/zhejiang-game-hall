
uint locateCircularQueue(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((uVar1 = *param_1, param_3 <= uVar1 && (uVar1 != 0)))) {
    uVar2 = param_1[4];
    uVar4 = 0;
    do {
      uVar5 = 0;
      do {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + uVar5) / uVar1;
        }
      } while ((*(char *)(*(long *)(param_1 + 2) + (ulong)((uVar2 + uVar5) - uVar3 * uVar1)) ==
                *(char *)(param_2 + (ulong)uVar5)) && (uVar5 = uVar5 + 1, uVar5 < param_3));
      if (uVar5 == param_3) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = (uVar2 + 1) / uVar1;
      }
      uVar2 = (uVar2 + 1) - uVar5 * uVar1;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}

