
ulong FUN_00b091f4(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_2);
  piVar3 = (int *)__errno();
  *piVar3 = 0;
                    /* try { // try from 00b0922c to 00c0925f has its CatchHandler @ 00b0929c */
  uVar4 = write(param_1->num,param_2,(long)(int)sVar2);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar4 < 1) && ((int)uVar4 + 1U < 2)) {
    iVar1 = *piVar3;
                    /* try { // try from 00b09260 to 00c092af has its CatchHandler @ 00b09154 */
    if (((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0))
       || ((iVar1 == 0xb || (iVar1 == 4)))) {
      BIO_set_flags(param_1,10);
    }
  }
                    /* catch() { ... } // from try @ 00b0922c with catch @ 00b0929c */
  return uVar4 & 0xffffffff;
}

