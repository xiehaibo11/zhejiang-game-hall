
void FUN_00c19db8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
  while (lVar1 != 0) {
    FUN_00c19538(param_1);
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
  }
  return;
}

