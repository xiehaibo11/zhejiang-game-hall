
void FUN_010b1da0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (*(long *)(param_2 + 0x1f) != 0) {
    puVar1 = (undefined1 *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f));
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

