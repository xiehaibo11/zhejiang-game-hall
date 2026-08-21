
int FUN_00bf6934(BIO *param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  BIO *b;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_2 + 0x14;
  if (*piVar4 < 1) {
    iVar1 = 1;
  }
  else {
    b = BIO_next(param_1);
    lVar2 = *(long *)(param_2 + 0x12);
    iVar1 = param_2[0x14];
    iVar3 = param_2[0x15];
    while (iVar1 = BIO_write(b,(void *)(lVar2 + iVar3),iVar1), 0 < iVar1) {
      iVar3 = *piVar4;
      *piVar4 = iVar3 - iVar1;
      if (iVar3 - iVar1 < 1) {
        if (param_3 != (code *)0x0) {
          (*param_3)(param_1,param_2 + 0x12,piVar4,param_2 + 0x16);
        }
        *param_2 = param_4;
        param_2[0x15] = 0;
        return iVar1;
      }
      param_2[0x15] = param_2[0x15] + iVar1;
      b = BIO_next(param_1);
      iVar1 = param_2[0x14];
      iVar3 = param_2[0x15];
      lVar2 = *(long *)(param_2 + 0x12);
    }
  }
  return iVar1;
}

