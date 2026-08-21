
bool FUN_011b2228(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = strcmp((char *)(param_1 + 0x13),".");
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = strcmp((char *)(param_1 + 0x13),"..");
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

