
void FUN_0123893c(long param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x30);
  lVar2 = *plVar3;
  while (lVar2 != 0) {
    param_2 = param_2 + 1;
    FUN_0123893c(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    param_1 = *plVar3;
    plVar3 = (long *)(param_1 + 0x30);
    lVar2 = *plVar3;
  }
  iVar1 = *param_3;
  if (*param_3 <= param_2) {
    iVar1 = param_2;
  }
  *param_3 = iVar1;
  return;
}

