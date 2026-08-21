
void * FUN_00e1ead8(long param_1,void *param_2,size_t param_3,int *param_4)

{
  int iVar1;
  void *__dest;
  int iVar2;
  
  if ((long)param_3 < 1) {
    __dest = (void *)0x0;
    iVar2 = 0;
    iVar1 = 6;
  }
  else {
    __dest = (void *)(**(code **)(param_1 + 8))(param_1,param_3);
    iVar2 = (uint)(__dest == (void *)0x0) << 6;
    iVar1 = iVar2;
  }
  if (((param_3 != 0) && (iVar2 = iVar1, param_2 != (void *)0x0)) && (iVar1 == 0)) {
    memcpy(__dest,param_2,param_3);
  }
  *param_4 = iVar2;
  return __dest;
}

