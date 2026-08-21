
undefined8 FUN_00e353d4(long param_1)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  
  puVar1 = *(ushort **)(param_1 + 0x158);
  if (*(ushort **)(param_1 + 0x160) < puVar1 + 5) {
    return 0x14;
  }
  *(ushort *)(param_1 + 0x3c) = *puVar1 >> 8 | *puVar1 << 8;
  *(ulong *)(param_1 + 0x40) =
       (long)(short)((ushort)(byte)puVar1[1] << 8) | (ulong)*(byte *)((long)puVar1 + 3);
  *(ulong *)(param_1 + 0x48) =
       (long)(short)((ushort)(byte)puVar1[2] << 8) | (ulong)*(byte *)((long)puVar1 + 5);
  *(ulong *)(param_1 + 0x50) =
       (long)(short)((ushort)(byte)puVar1[3] << 8) | (ulong)*(byte *)((long)puVar1 + 7);
  uVar3 = puVar1[4];
  bVar2 = *(byte *)((long)puVar1 + 9);
  *(ushort **)(param_1 + 0x158) = puVar1 + 5;
  *(ulong *)(param_1 + 0x58) = (long)(short)((ushort)(byte)uVar3 << 8) | (ulong)bVar2;
  return 0;
}

