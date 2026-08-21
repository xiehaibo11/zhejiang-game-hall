
bool FUN_00a12594(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(ulong *)(param_1 + 0xb8) & (long)param_2) != 0;
  }
  return bVar1;
}

