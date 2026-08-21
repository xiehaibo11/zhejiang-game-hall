
ulong FUN_00b07770(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (*(int *)param_1->ptr != 5) {
    uVar2 = FUN_00b07d58(param_1,param_1->ptr);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 1) goto LAB_00b077fc;
  }
  puVar3 = (undefined4 *)__errno();
  *puVar3 = 0;
  uVar4 = write(param_1->num,param_2,(long)param_3);
                    /* try { // try from 00b077d8 to 00c077df has its CatchHandler @ 00b07ad8 */
  BIO_clear_flags(param_1,0xf);
                    /* try { // try from 00b077e0 to 00c07813 has its CatchHandler @ 00b07760 */
  if (((int)uVar4 < 1) && (iVar1 = BIO_sock_should_retry((int)uVar4), iVar1 != 0)) {
    BIO_set_flags(param_1,10);
  }
LAB_00b077fc:
  return uVar4 & 0xffffffff;
}

