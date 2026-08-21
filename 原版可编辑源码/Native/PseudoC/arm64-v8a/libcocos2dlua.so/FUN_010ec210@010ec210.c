
void FUN_010ec210(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_1 + 0x8c);
  return;
}

