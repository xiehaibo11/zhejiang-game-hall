
int BIO_free(BIO *a)

{
  int iVar1;
  long lVar2;
  _func_601 *p_Var3;
  int local_14;
  
  iVar1 = 0;
  if (a != (BIO *)0x0) {
    iVar1 = CRYPTO_atomic_add(&a->references,0xffffffff,&local_14,*(undefined8 *)&(a->ex_data).dummy
                             );
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    else {
      if (local_14 < 1) {
        if (a->callback != (_func_603 *)0x0) {
          lVar2 = (*a->callback)(a,1,(char *)0x0,0,0,1);
          local_14 = (int)lVar2;
          if (local_14 < 1) {
            return local_14;
          }
        }
        if ((a->method != (BIO_METHOD *)0x0) &&
           (p_Var3 = a->method->destroy, p_Var3 != (_func_601 *)0x0)) {
          (*p_Var3)(a);
        }
        CRYPTO_free_ex_data(0xc,a,&a->ex_data);
        CRYPTO_THREAD_lock_free(*(undefined8 *)&(a->ex_data).dummy);
        CRYPTO_free(a);
      }
      iVar1 = 1;
    }
  }
  return iVar1;
}

