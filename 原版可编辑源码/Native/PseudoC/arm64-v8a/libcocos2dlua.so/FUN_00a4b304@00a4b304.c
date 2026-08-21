
undefined8 FUN_00a4b304(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = memcmp(param_1,param_3,param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

