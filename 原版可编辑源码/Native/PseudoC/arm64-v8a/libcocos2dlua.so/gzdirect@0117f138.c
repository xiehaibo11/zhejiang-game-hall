
int gzdirect(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (((param_1[6] == 0x1c4f) && (param_1[0x11] == 0)) && (*param_1 == 0)) {
      FUN_0117f184(param_1);
    }
    iVar1 = param_1[0x10];
  }
  return iVar1;
}

