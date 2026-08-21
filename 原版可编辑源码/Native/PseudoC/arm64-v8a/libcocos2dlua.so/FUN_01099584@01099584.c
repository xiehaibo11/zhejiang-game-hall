
undefined8 FUN_01099584(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((uVar1 < 0x106) || (*(ulong *)(param_2 + 0x108) < param_1 + (ulong)uVar1)) {
    ft_validator_error(param_2,8);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    lVar2 = 0;
    do {
      if (*(uint *)(param_2 + 0x118) <= (uint)*(byte *)(param_1 + 6 + lVar2)) {
        ft_validator_error(param_2,0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 != 0x100);
  }
  return 0;
}

