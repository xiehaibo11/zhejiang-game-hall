
void cpArrayDeleteObj(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    plVar3 = *(long **)(param_1 + 2);
    do {
      if (*plVar3 == param_2) {
        uVar1 = uVar1 - 1;
        *param_1 = uVar1;
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        *plVar3 = *(long *)((long)*(long **)(param_1 + 2) + uVar2);
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar2) = 0;
        return;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar4 < (int)uVar1);
  }
  return;
}

