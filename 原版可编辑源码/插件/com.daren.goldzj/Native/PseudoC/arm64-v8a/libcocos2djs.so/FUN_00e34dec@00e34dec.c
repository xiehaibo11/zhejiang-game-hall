
void FUN_00e34dec(long param_1,long param_2,ushort param_3,long param_4)

{
  long lVar1;
  bool in_ZR;
  
  if ((((!in_ZR) || (*(char *)(param_1 + 0x42b) == '\0')) || (*(char *)(param_1 + 0x42c) == '\0'))
     || (*(char *)(param_1 + 0x42d) == '\0')) {
    lVar1 = *(long *)(param_2 + 0x18) + (ulong)param_3 * 0x10;
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + param_4;
  }
  *(byte *)(*(long *)(param_2 + 0x28) + (ulong)param_3) =
       *(byte *)(*(long *)(param_2 + 0x28) + (ulong)param_3) | 0x10;
  return;
}

