
undefined8 cpArrayPop(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *param_1;
  *param_1 = (int)((long)iVar1 + -1);
  lVar3 = ((long)iVar1 + -1) * 8;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + lVar3);
  *(undefined8 *)(*(long *)(param_1 + 2) + lVar3) = 0;
  return uVar2;
}

