
ulong FUN_00af8390(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (*(int *)param_1->ptr == 5) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_00af88d8(param_1,param_1->ptr);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 1) goto LAB_00af842c;
  }
  if (param_2 != (void *)0x0) {
    puVar3 = (undefined4 *)__errno();
    *puVar3 = 0;
    uVar4 = read(param_1->num,param_2,(long)param_3);
    BIO_clear_flags(param_1,0xf);
    if (((int)uVar4 < 1) && (iVar1 = BIO_sock_should_retry((int)uVar4), iVar1 != 0)) {
                    /* try { // try from 00af8428 to 00bf8437 has its CatchHandler @ 00af853c */
      BIO_set_flags(param_1,9);
    }
  }
LAB_00af842c:
                    /* try { // try from 00af8438 to 00bf8447 has its CatchHandler @ 00af851c */
  return uVar4 & 0xffffffff;
}

