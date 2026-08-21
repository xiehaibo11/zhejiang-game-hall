
ulong readCircularQueue(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar2 = *param_1;
    uVar3 = 0;
    do {
      uVar4 = (ulong)((uint)uVar3 + 1);
      if (uVar2 - 1 <= (uint)uVar3) {
        *(undefined1 *)(param_2 + uVar3) = 0;
        return uVar3;
      }
      *(undefined1 *)(param_2 + uVar3) = *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)param_3);
      uVar2 = *param_1;
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = (param_3 + 1) / uVar2;
      }
      param_3 = (param_3 + 1) - uVar1 * uVar2;
      uVar3 = uVar4;
    } while (param_3 != param_4);
    *(undefined1 *)(param_2 + uVar4) = 0;
    return uVar4;
  }
  return 0xffffffff;
}

