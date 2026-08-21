
ulong FUN_00af82f0(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (*(int *)param_1->ptr != 5) {
    uVar2 = FUN_00af88d8(param_1,param_1->ptr);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 1) goto LAB_00af837c;
  }
  puVar3 = (undefined4 *)__errno();
  *puVar3 = 0;
                    /* try { // try from 00af8344 to 00bf8427 has its CatchHandler @ 00af8344
                       catch() { ... } // from try @ 00af8344 with catch @ 00af8344
                       catch() { ... } // from try @ 00af8460 with catch @ 00af8344 */
  uVar4 = write(param_1->num,param_2,(long)param_3);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar4 < 1) && (iVar1 = BIO_sock_should_retry((int)uVar4), iVar1 != 0)) {
    BIO_set_flags(param_1,10);
  }
LAB_00af837c:
  return uVar4 & 0xffffffff;
}

