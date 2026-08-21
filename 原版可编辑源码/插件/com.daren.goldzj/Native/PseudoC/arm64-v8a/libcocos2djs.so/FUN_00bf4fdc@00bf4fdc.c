
int FUN_00bf4fdc(uint param_1,int param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 >> 0x10 & 1) == 0) {
    iVar1 = setsockopt(param_2,param_1 & 0x10000,param_3,param_5,4);
  }
  else {
    iVar1 = setsockopt(param_2,0x29,param_4,param_5,4);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno(0);
    iVar2 = -*piVar3;
  }
  return iVar2;
}

