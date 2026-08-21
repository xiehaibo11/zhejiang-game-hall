
undefined4 FUN_00a239a0(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  undefined4 uVar3;
  
  sVar1 = recv(param_1,param_2,param_3,0);
  if (sVar1 == -1) {
    piVar2 = (int *)__errno();
    uVar3 = 0x51;
    if (*piVar2 != 4 && *piVar2 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
                    /* try { // try from 00a239c8 to 00b23adf has its CatchHandler @ 00a23ae8 */
    *param_4 = sVar1;
  }
  return uVar3;
}

