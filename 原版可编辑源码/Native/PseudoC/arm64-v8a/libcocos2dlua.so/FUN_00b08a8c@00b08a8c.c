
int FUN_00b08a8c(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  ulong *puVar3;
  
  puVar3 = *(ulong **)((long)param_1->ptr + 8);
  BIO_clear_flags(param_1,0xf);
  if (param_3 < 0) {
    uVar2 = *puVar3;
  }
  else {
    uVar2 = *puVar3;
    iVar1 = (int)uVar2;
    if ((ulong)(long)param_3 <= uVar2) {
      iVar1 = param_3;
    }
    param_3 = iVar1;
    if ((param_2 != (void *)0x0) && (0 < iVar1)) {
      __n = (size_t)iVar1;
      memcpy(param_2,(void *)puVar3[1],__n);
      *puVar3 = *puVar3 - __n;
      puVar3[1] = puVar3[1] + __n;
      return iVar1;
    }
  }
  if ((uVar2 == 0) && (param_3 = param_1->num, param_3 != 0)) {
    BIO_set_flags(param_1,9);
  }
  return param_3;
}

