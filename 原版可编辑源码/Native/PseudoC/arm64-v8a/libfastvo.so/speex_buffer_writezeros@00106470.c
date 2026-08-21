
int speex_buffer_writezeros(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[1];
  iVar4 = (int)param_1[2];
  iVar2 = iVar3;
  if (param_2 <= iVar3) {
    iVar2 = param_2;
  }
  iVar1 = iVar2 + iVar4;
  if (iVar1 <= iVar3) {
    iVar3 = iVar1;
  }
  memset((void *)(*param_1 + (long)iVar4),0,(long)(iVar3 - iVar4));
  iVar3 = (int)param_1[1];
  if (iVar1 - iVar3 != 0 && iVar3 <= iVar1) {
    memset((void *)*param_1,0,(long)(iVar1 - iVar3));
    iVar3 = (int)param_1[1];
  }
  iVar4 = *(int *)((long)param_1 + 0x14) + iVar2;
  *(int *)((long)param_1 + 0x14) = iVar4;
  if (iVar3 < iVar4) {
    iVar4 = (int)param_1[2];
    *(int *)((long)param_1 + 0x14) = iVar3;
    *(int *)((long)param_1 + 0xc) = iVar4;
  }
  else {
    iVar4 = (int)param_1[2];
  }
  if (iVar4 + iVar2 <= iVar3) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 2) = (iVar4 + iVar2) - iVar3;
  return iVar2;
}

