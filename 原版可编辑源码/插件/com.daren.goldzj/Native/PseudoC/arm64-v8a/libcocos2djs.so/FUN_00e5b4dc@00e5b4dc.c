
int FUN_00e5b4dc(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = -(uint)(*(ulong *)(*param_1 + 8) < *(ulong *)(*param_2 + 8));
  if (*(ulong *)(*param_2 + 8) < *(ulong *)(*param_1 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}

