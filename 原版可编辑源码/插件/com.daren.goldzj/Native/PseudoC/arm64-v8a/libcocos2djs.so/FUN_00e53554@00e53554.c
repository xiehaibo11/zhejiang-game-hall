
undefined8 FUN_00e53554(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_00e14b1c(param_2,8);
  }
  uVar1 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((uVar1 < 0x106) || (*(ulong *)(param_2 + 0x108) < param_1 + (ulong)uVar1)) {
    FUN_00e14b1c(param_2,8);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    lVar2 = 0;
    do {
      if (*(uint *)(param_2 + 0x118) <= (uint)*(byte *)(param_1 + 6 + lVar2)) {
        FUN_00e14b1c(param_2,0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 != 0x100);
  }
  return 0;
}

