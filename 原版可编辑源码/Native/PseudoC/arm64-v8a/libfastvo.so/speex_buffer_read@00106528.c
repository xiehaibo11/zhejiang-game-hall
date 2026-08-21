
int speex_buffer_read(long *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((long)param_1 + 0x14);
  if (iVar2 < param_3) {
    memset((void *)((long)param_2 + (long)iVar2),0,(long)(int)param_1[1] - (long)iVar2);
    param_3 = *(int *)((long)param_1 + 0x14);
  }
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar2 = iVar3 + param_3;
  iVar1 = (int)param_1[1];
  if (iVar2 <= (int)param_1[1]) {
    iVar1 = iVar2;
  }
  memcpy(param_2,(void *)(*param_1 + (long)iVar3),(long)(iVar1 - iVar3));
  iVar3 = (int)param_1[1];
  if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
    memcpy((void *)((long)param_2 + ((long)iVar1 - (long)*(int *)((long)param_1 + 0xc))),
           (void *)*param_1,(long)(iVar2 - iVar3));
    iVar3 = (int)param_1[1];
  }
  iVar2 = *(int *)((long)param_1 + 0xc) + param_3;
  if (iVar2 <= iVar3) {
    iVar3 = 0;
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) - param_3;
  *(int *)((long)param_1 + 0xc) = iVar2 - iVar3;
  return param_3;
}

