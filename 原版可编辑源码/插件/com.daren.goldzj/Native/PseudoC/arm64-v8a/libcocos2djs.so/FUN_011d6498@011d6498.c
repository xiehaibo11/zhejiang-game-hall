
bool FUN_011d6498(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    iVar1 = memcmp((void *)*param_1,(void *)*param_2,(long)*(int *)(param_1 + 1));
    return iVar1 == 0;
  }
  return false;
}

