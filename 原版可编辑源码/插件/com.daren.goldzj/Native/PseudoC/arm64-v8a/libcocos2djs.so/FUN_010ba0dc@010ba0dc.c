
void FUN_010ba0dc(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(long *)(param_2 + 0x1f) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f));
    puVar3 = puVar1 + *(long *)(param_2 + 0x1f) + -1;
    if (puVar1 < puVar3) {
      do {
        puVar5 = puVar1 + 1;
        uVar2 = *puVar1;
        *puVar1 = *puVar3;
        puVar4 = puVar3 + -1;
        *puVar3 = uVar2;
        puVar3 = puVar4;
        puVar1 = puVar5;
      } while (puVar5 < puVar4);
    }
  }
  return;
}

