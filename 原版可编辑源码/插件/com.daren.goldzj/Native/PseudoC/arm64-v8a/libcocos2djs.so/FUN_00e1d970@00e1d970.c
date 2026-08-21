
ushort FUN_00e1d970(long param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = *(ushort **)(param_1 + 0x40);
  if ((long)puVar1 + 1U < *(ulong *)(param_1 + 0x48)) {
    uVar2 = *puVar1;
    *(ushort **)(param_1 + 0x40) = puVar1 + 1;
    return uVar2 >> 8 | uVar2 << 8;
  }
  *(ushort **)(param_1 + 0x40) = puVar1;
  return 0;
}

