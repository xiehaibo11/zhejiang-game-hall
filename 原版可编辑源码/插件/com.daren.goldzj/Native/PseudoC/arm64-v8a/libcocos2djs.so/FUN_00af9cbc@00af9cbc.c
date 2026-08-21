
ulong FUN_00af9cbc(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != (void *)0x0) {
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    uVar3 = read(param_1->num,param_2,(long)param_3);
    BIO_clear_flags(param_1,0xf);
    if (((int)uVar3 < 1) && ((int)uVar3 + 1U < 2)) {
      iVar1 = *piVar2;
      if (((iVar1 - 0x47U < 0x2d) &&
          ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0)) ||
         ((iVar1 == 0xb || (iVar1 == 4)))) {
        BIO_set_flags(param_1,9);
      }
    }
  }
  return uVar3 & 0xffffffff;
}

