
undefined2 FUN_00e1d9a8(long param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x40);
  if ((long)puVar1 + 1U < *(ulong *)(param_1 + 0x48)) {
    uVar2 = *puVar1;
    *(undefined2 **)(param_1 + 0x40) = puVar1 + 1;
    return uVar2;
  }
  *(undefined2 **)(param_1 + 0x40) = puVar1;
  return 0;
}

