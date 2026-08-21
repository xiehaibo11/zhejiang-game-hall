
bool FUN_0013dbb0(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    bVar1 = true;
  }
  else {
    if (*(long *)((long)param_1 + 0x50) == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_0012e550((long)param_1 + 0x18);
      bVar1 = iVar2 == 0;
    }
    memset(param_1,0,0x88);
  }
  return bVar1;
}

