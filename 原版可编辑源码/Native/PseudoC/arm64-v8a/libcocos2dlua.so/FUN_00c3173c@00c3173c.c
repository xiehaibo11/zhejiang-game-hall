
undefined8 FUN_00c3173c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xd0);
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = uVar2;
  return 1;
}

