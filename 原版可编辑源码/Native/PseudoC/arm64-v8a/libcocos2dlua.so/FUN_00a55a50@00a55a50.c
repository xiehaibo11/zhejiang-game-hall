
void FUN_00a55a50(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_00a35bfc();
  plVar1 = (long *)(lVar2 + 0x8ce0);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  plVar1 = (long *)(lVar2 + 0x8ce8);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  return;
}

