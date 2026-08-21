
void FUN_010c1990(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_2 + 0x1f);
  if ((uVar1 != 0) && ((uVar1 & 0x1fffffffffffffff) != 0)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f));
    puVar4 = puVar2 + (uVar1 - 1);
    if (puVar2 < puVar2 + (uVar1 - 1)) {
      do {
        uVar6 = *puVar2;
        puVar3 = puVar2 + 1;
        *puVar2 = *puVar4;
        puVar5 = puVar4 + -1;
        *puVar4 = uVar6;
        puVar2 = puVar3;
        puVar4 = puVar5;
      } while (puVar3 < puVar5);
    }
  }
  return;
}

