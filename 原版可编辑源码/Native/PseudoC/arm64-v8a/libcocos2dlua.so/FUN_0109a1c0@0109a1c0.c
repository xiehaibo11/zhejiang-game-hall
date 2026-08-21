
undefined8 FUN_0109a1c0(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 10);
  if (*(undefined1 **)(param_2 + 0x108) < puVar1) {
    ft_validator_error(param_2,8);
  }
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  if ((*(ulong *)(param_2 + 0x108) < param_1 + (ulong)uVar2) || (uVar2 < uVar3 * 2 + 10)) {
    ft_validator_error(param_2,8);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (*(uint *)(param_2 + 0x118) <= (uint)CONCAT11(*puVar1,puVar1[1])) {
        ft_validator_error(param_2,0x10);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return 0;
}

