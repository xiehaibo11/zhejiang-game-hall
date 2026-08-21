
int FUN_011a9e50(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *__nptr;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    return *(int *)(param_1 + 0xe8);
  }
  if (DAT_01781878 == 0xffffffff) {
    __nptr = getenv("UV_TCP_SINGLE_ACCEPT");
    if (__nptr == (char *)0x0) {
      DAT_01781878 = 0;
    }
    else {
      iVar1 = atoi(__nptr);
      DAT_01781878 = (uint)(iVar1 != 0);
    }
  }
  if (DAT_01781878 != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x4000000;
  }
  if (*(int *)(param_1 + 0xb8) == -1) {
    iVar1 = FUN_011a2b64(2,1,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = FUN_011a8740(param_1,iVar1,0);
    if (iVar2 != 0) {
      FUN_011a2d5c(iVar1);
      return iVar2;
    }
    iVar1 = listen(*(int *)(param_1 + 0xb8),param_2);
  }
  else {
    iVar1 = listen(*(int *)(param_1 + 0xb8),param_2);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = param_3;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x2000;
    *(code **)(param_1 + 0x88) = FUN_011a89e8;
    FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    iVar1 = 0;
  }
  else {
    piVar3 = (int *)__errno();
    iVar1 = -*piVar3;
  }
  return iVar1;
}

