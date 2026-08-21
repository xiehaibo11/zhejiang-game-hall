
undefined8 FUN_00e55048(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  *(long *)(param_1 + 0x18) = param_2;
  bVar1 = *(byte *)(param_2 + 6);
  bVar2 = *(byte *)(param_2 + 7);
  bVar3 = *(byte *)(param_2 + 8);
  bVar4 = *(byte *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(ulong *)(param_1 + 0x28) =
       (ulong)bVar1 << 0x18 | (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

