
void FUN_011a6c60(int param_1,undefined4 param_2)

{
  ssize_t sVar1;
  int *piVar2;
  undefined4 local_14;
  
  local_14 = param_2;
  do {
    sVar1 = write(param_1,&local_14,4);
    if (sVar1 != -1) {
      return;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return;
}

