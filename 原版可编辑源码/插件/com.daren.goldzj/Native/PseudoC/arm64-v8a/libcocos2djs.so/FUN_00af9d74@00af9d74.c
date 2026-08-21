
ulong FUN_00af9d74(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_2);
  piVar3 = (int *)__errno();
  *piVar3 = 0;
  uVar4 = write(param_1->num,param_2,(long)(int)sVar2);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar4 < 1) && ((int)uVar4 + 1U < 2)) {
    iVar1 = *piVar3;
    if (((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0))
       || ((iVar1 == 0xb || (iVar1 == 4)))) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar4 & 0xffffffff;
}

