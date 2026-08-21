
void insertCircularQueue(uint *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (((param_2 != 0 && param_3 != 0) && (param_1 != (uint *)0x0)) && (param_3 <= *param_1)) {
    uVar3 = param_1[4];
    lVar4 = 0;
    do {
      param_1[4] = uVar3 + 1;
      puVar1 = (undefined1 *)(param_2 + lVar4);
      lVar4 = lVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 2) + (ulong)uVar3) = *puVar1;
      uVar3 = *param_1;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = param_1[4] / uVar3;
      }
      uVar3 = param_1[4] - uVar2 * uVar3;
      param_1[4] = uVar3;
    } while ((uint)lVar4 < param_3);
  }
  return;
}

