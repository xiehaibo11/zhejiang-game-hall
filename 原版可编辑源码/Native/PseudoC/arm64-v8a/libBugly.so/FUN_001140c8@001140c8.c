
int FUN_001140c8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_001197e0();
  if (-1 < iVar1) {
    iVar1 = 1;
    *(byte *)(param_1 + 0x668) = *(byte *)(param_1 + 0x668) & 0xfb;
  }
  log2Console(3,"Bugly-libunwind","returning %d\n",iVar1);
  return iVar1;
}

