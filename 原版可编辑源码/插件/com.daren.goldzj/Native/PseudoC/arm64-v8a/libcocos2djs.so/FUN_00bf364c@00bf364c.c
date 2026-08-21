
int FUN_00bf364c(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xb8) != -1)) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | param_3;
    iVar1 = 0;
  }
  else {
    iVar2 = uv__socket(param_2,1,0);
    iVar1 = iVar2;
    if (-1 < iVar2) {
      iVar3 = uv__stream_open(param_1,iVar2,param_3);
      iVar1 = 0;
      if (iVar3 != 0) {
        uv__close(iVar2);
        iVar1 = iVar3;
      }
    }
  }
  return iVar1;
}

