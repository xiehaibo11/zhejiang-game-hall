
int speex_buffer_write(long *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *__src;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  iVar3 = (int)param_1[2];
  iVar2 = iVar4;
  if (param_3 <= iVar4) {
    iVar2 = param_3;
  }
  iVar1 = iVar2 + iVar3;
  __src = (void *)((long)param_2 + (long)(param_3 - iVar4));
  if (param_3 <= iVar4) {
    __src = param_2;
  }
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  memcpy((void *)(*param_1 + (long)iVar3),__src,(long)(iVar4 - iVar3));
  iVar3 = (int)param_1[1];
  if (iVar1 - iVar3 != 0 && iVar3 <= iVar1) {
    memcpy((void *)*param_1,(void *)((long)__src + ((long)iVar4 - (long)(int)param_1[2])),
           (long)(iVar1 - iVar3));
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

