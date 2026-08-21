
undefined8 FUN_00e547e8(long param_1,long param_2)

{
  *(long *)(param_1 + 0x18) = param_2;
  *(ulong *)(param_1 + 0x48) =
       (ulong)*(byte *)(param_2 + 0xc) << 0x18 | (ulong)*(byte *)(param_2 + 0xd) << 0x10 |
       (ulong)*(byte *)(param_2 + 0xe) << 8 | (ulong)*(byte *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return 0;
}

