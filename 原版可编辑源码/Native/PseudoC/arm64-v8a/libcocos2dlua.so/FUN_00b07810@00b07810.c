
ulong FUN_00b07810(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
                    /* try { // try from 00b07814 to 00c07833 has its CatchHandler @ 00b07ae0 */
  if (*(int *)param_1->ptr == 5) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_00b07d58(param_1,param_1->ptr);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 1) goto LAB_00b078ac;
  }
  if (param_2 != (void *)0x0) {
    puVar3 = (undefined4 *)__errno();
    *puVar3 = 0;
    uVar4 = read(param_1->num,param_2,(long)param_3);
    BIO_clear_flags(param_1,0xf);
                    /* try { // try from 00b07898 to 00c078cf has its CatchHandler @ 00b07af8 */
    if (((int)uVar4 < 1) && (iVar1 = BIO_sock_should_retry((int)uVar4), iVar1 != 0)) {
      BIO_set_flags(param_1,9);
    }
  }
LAB_00b078ac:
  return uVar4 & 0xffffffff;
}

