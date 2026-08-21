
int FUN_00af558c(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  BIO *b;
  int iVar3;
  int *piVar4;
  
  if (((param_2 == (void *)0x0) || (piVar4 = param_1->ptr, piVar4 == (int *)0x0)) ||
     (param_1->next_bio == (bio_st *)0x0)) {
    return 0;
  }
  BIO_clear_flags(param_1,0xf);
  iVar2 = piVar4[4];
  iVar3 = 0;
  while( true ) {
    if (iVar2 != 0) {
      iVar1 = param_3;
      if (iVar2 <= param_3) {
        iVar1 = iVar2;
      }
      memcpy(param_2,(void *)(*(long *)(piVar4 + 2) + (long)piVar4[5]),(long)iVar1);
      iVar3 = iVar1 + iVar3;
      piVar4[4] = piVar4[4] - iVar1;
      piVar4[5] = piVar4[5] + iVar1;
      if (param_3 <= iVar2) {
        return iVar3;
      }
      param_3 = param_3 - iVar1;
      param_2 = (void *)((long)param_2 + (long)iVar1);
    }
    b = param_1->next_bio;
    if (*piVar4 < param_3) goto LAB_00af5660;
    iVar2 = BIO_read(b,*(void **)(piVar4 + 2),*piVar4);
    if (iVar2 < 1) break;
    piVar4[4] = iVar2;
    piVar4[5] = 0;
  }
LAB_00af56a8:
  BIO_copy_next_retry(param_1);
  if ((iVar2 < 0) && (iVar3 < 1)) {
    iVar3 = iVar2;
  }
  return iVar3;
LAB_00af5660:
  while (iVar2 = BIO_read(b,param_2,param_3), 0 < iVar2) {
    param_3 = param_3 - iVar2;
    iVar3 = iVar2 + iVar3;
    if (param_3 == 0) {
      return iVar3;
    }
    b = param_1->next_bio;
    param_2 = (void *)((long)param_2 + (long)iVar2);
  }
  goto LAB_00af56a8;
}

