
uint FUN_0013ed5c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0013ef14();
  if ((uVar1 & 1) == 0) {
    FUN_0013fb24(&DAT_0016ba80,"_writeFlush(self)",DAT_0016ba88);
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
  }
  return uVar1 & 1;
}

