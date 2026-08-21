
undefined8 FUN_00c29fac(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x20);
  *(undefined4 **)(param_1 + 0x28) = puVar1 + 2;
  puVar1[1] = 0xfff90000;
  *puVar1 = (int)(uVar2 >> 10);
  return 1;
}

