
void FUN_01150a94(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (0 < (int)uVar1) {
      uVar5 = (ulong)uVar1;
      puVar2 = *(undefined1 **)(param_1 + 0x48);
      puVar3 = *(uint **)(param_1 + 0x60);
      do {
        uVar5 = uVar5 - 1;
        *puVar2 = (char)((ulong)*(uint *)(param_1 + 0x10) * (ulong)*puVar3 + 0x80000000 >> 0x20);
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (0 < (int)uVar1) {
    uVar5 = 0;
    if ((long)*(int *)(param_1 + 0x20) != 0) {
      uVar5 = ((ulong)(uint)-*(int *)(param_1 + 0x18) << 0x20) /
              (ulong)(long)*(int *)(param_1 + 0x20);
    }
    uVar6 = (ulong)uVar1;
    puVar2 = *(undefined1 **)(param_1 + 0x48);
    puVar3 = *(uint **)(param_1 + 0x60);
    puVar4 = *(uint **)(param_1 + 0x58);
    do {
      uVar6 = uVar6 - 1;
      *puVar2 = (char)(((uVar5 & 0xffffffff) * (ulong)*puVar4 +
                        (ulong)(uint)-(int)uVar5 * (ulong)*puVar3 + 0x80000000 >> 0x20) *
                       (ulong)*(uint *)(param_1 + 0x10) + 0x80000000 >> 0x20);
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  return;
}

