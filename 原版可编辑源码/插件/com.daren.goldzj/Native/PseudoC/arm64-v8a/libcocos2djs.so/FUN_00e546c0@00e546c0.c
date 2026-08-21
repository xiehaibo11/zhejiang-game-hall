
undefined8 FUN_00e546c0(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x14);
  if (*(undefined1 **)(param_2 + 0x108) < puVar1) {
    FUN_00e14b1c(param_2,8);
  }
  uVar2 = (ulong)*(byte *)(param_1 + 4) << 0x18 | (ulong)*(byte *)(param_1 + 5) << 0x10 |
          (ulong)*(byte *)(param_1 + 6) << 8 | (ulong)*(byte *)(param_1 + 7);
  uVar3 = (ulong)*(byte *)(param_1 + 0x10) << 0x18 | (ulong)*(byte *)(param_1 + 0x11) << 0x10 |
          (ulong)*(byte *)(param_1 + 0x12) << 8 | (ulong)*(byte *)(param_1 + 0x13);
  if (((uVar2 < 0x14) || ((ulong)(*(long *)(param_2 + 0x108) - param_1) < uVar2)) ||
     (uVar2 - 0x14 >> 1 < uVar3)) {
    FUN_00e14b1c(param_2,8);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (*(uint *)(param_2 + 0x118) <= (uint)CONCAT11(*puVar1,puVar1[1])) {
        FUN_00e14b1c(param_2,0x10);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return 0;
}

