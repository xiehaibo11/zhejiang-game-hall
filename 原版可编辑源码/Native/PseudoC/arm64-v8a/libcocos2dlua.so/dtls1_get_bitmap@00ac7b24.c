
ushort * dtls1_get_bitmap(long param_1,long param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x1128);
  uVar1 = *puVar2;
  if (*(ulong *)(param_2 + 0x38) == (ulong)uVar1) {
    return puVar2 + 4;
  }
  if (*(ulong *)(param_2 + 0x38) != (ulong)uVar1 + 1) {
    return (ushort *)0x0;
  }
  if (puVar2[0x14] == uVar1) {
    return (ushort *)0x0;
  }
  if (*(int *)(param_2 + 4) - 0x15U < 2) {
    *param_3 = 1;
    return puVar2 + 0xc;
  }
  return (ushort *)0x0;
}

