
int CRYPTO_get_ex_new_index
              (int class_index,long argl,void *argp,undefined1 *new_func,undefined1 *dup_func,
              undefined1 *free_func)

{
  long *plVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  int line;
  
  if (0xd < (uint)class_index) {
    iVar2 = 7;
    line = 0x37;
LAB_00b2ae80:
    ERR_put_error(0xf,0x71,iVar2,"crypto/ex_data.c",line);
    return -1;
  }
  iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3aaa0,FUN_00b2b674);
  if ((iVar2 == 0) || (DAT_01d3aaa4 == 0)) {
    iVar2 = 0x41;
    line = 0x3c;
    goto LAB_00b2ae80;
  }
  if (DAT_01d3aaa8 == 0) {
    return -1;
  }
  plVar1 = &DAT_01d3aab0 + class_index;
  CRYPTO_THREAD_write_lock();
  if (plVar1 == (long *)0x0) {
    return -1;
  }
  if (*plVar1 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *plVar1 = lVar3;
    if ((lVar3 != 0) && (iVar2 = OPENSSL_sk_push(lVar3,0), iVar2 != 0)) goto LAB_00b2ae0c;
    iVar2 = 0xac;
LAB_00b2aef0:
    ERR_put_error(0xf,100,0x41,"crypto/ex_data.c",iVar2);
  }
  else {
LAB_00b2ae0c:
    ptr = CRYPTO_malloc(0x28,"crypto/ex_data.c",0xb1);
    if (ptr == (long *)0x0) {
      iVar2 = 0xb3;
      goto LAB_00b2aef0;
    }
    *ptr = argl;
    ptr[1] = (long)argp;
    ptr[3] = (long)free_func;
    ptr[4] = (long)dup_func;
    ptr[2] = (long)new_func;
    iVar2 = OPENSSL_sk_push(*plVar1,0);
    if (iVar2 != 0) {
      iVar2 = OPENSSL_sk_num(*plVar1);
      iVar2 = iVar2 + -1;
      OPENSSL_sk_set(*plVar1,iVar2,ptr);
      goto LAB_00b2af2c;
    }
    ERR_put_error(0xf,100,0x41,"crypto/ex_data.c",0xbd);
    CRYPTO_free(ptr);
  }
  iVar2 = -1;
LAB_00b2af2c:
  CRYPTO_THREAD_unlock(DAT_01d3aaa8);
  return iVar2;
}

