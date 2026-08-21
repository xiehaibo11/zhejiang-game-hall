
void FUN_00c2b8c8(double param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1 * 3.141592653589793 + 2.718281828459045;
  iVar1 = 10;
  *(undefined4 *)(param_2 + 4) = 1;
  dVar3 = dVar2 * 3.141592653589793 + 2.718281828459045;
  if ((ulong)dVar2 < 2) {
    dVar2 = (double)((long)dVar2 + 2);
  }
  *param_2 = dVar2;
  dVar2 = dVar3 * 3.141592653589793 + 2.718281828459045;
  if ((ulong)dVar3 < 0x40) {
    dVar3 = (double)((long)dVar3 + 0x40);
  }
  param_2[1] = dVar3;
  dVar3 = dVar2 * 3.141592653589793 + 2.718281828459045;
  if ((ulong)dVar2 < 0x200) {
    dVar2 = (double)((long)dVar2 + 0x200);
  }
  param_2[2] = dVar2;
  if ((ulong)dVar3 < 0x20000) {
    dVar3 = (double)((long)dVar3 + 0x20000);
  }
  param_2[3] = dVar3;
  do {
    FUN_00c2b84c(param_2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

