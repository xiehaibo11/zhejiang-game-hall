
void FUN_00df4694(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = -(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x18));
  uVar6 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
  if (uVar1 == 0) {
    if (0 < (int)uVar6) {
      uVar5 = (ulong)uVar6;
      puVar2 = *(undefined1 **)(param_1 + 0x48);
      puVar3 = *(uint **)(param_1 + 0x58);
      do {
        uVar5 = uVar5 - 1;
        *puVar2 = (char)((ulong)*(uint *)(param_1 + 0x14) * (ulong)*puVar3 + 0x80000000 >> 0x20);
        *puVar3 = 0;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (0 < (int)uVar6) {
    uVar5 = (ulong)uVar6;
    puVar2 = *(undefined1 **)(param_1 + 0x48);
    puVar3 = *(uint **)(param_1 + 0x58);
    puVar4 = *(uint **)(param_1 + 0x60);
    do {
      uVar5 = uVar5 - 1;
      uVar6 = (uint)((ulong)*puVar4 * (ulong)uVar1 + 0x80000000 >> 0x20);
      *puVar2 = (char)((ulong)(*puVar3 - uVar6) * (ulong)*(uint *)(param_1 + 0x14) + 0x80000000 >>
                      0x20);
      *puVar3 = uVar6;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  return;
}

