
bool FUN_0013c9ec(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50) +
          (ulong)*(uint *)(*(long *)(param_1 + 0x58) + (long)param_2 * 4);
  return *(char *)(lVar1 + 10) != '\0' || *(char *)(lVar1 + 0xb) != '\0';
}

