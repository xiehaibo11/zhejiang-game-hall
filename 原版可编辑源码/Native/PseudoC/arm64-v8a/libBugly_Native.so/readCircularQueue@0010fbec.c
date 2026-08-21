
ulong readCircularQueue(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar3 = *param_1;
    uVar2 = 0;
    do {
      if (uVar3 - 1 <= uVar2) break;
      *(undefined1 *)(param_2 + uVar2) = *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)param_3);
      uVar3 = *param_1;
      uVar2 = uVar2 + 1;
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (param_3 + 1) / uVar3;
      }
      param_3 = (param_3 + 1) - uVar1 * uVar3;
    } while (param_3 != param_4);
    *(undefined1 *)(param_2 + (uVar2 & 0xffffffff)) = 0;
  }
  return uVar2;
}

