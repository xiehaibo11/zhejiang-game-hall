
ulong FUN_00b09088(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)__errno();
  *piVar2 = 0;
                    /* catch() { ... } // from try @ 00b09058 with catch @ 00b090b8 */
  uVar3 = write(param_1->num,param_2,(long)param_3);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar3 < 1) && ((int)uVar3 + 1U < 2)) {
    iVar1 = *piVar2;
    if (((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0))
       || ((iVar1 == 0xb || (iVar1 == 4)))) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar3 & 0xffffffff;
}

