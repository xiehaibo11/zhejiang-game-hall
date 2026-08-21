
BIO * BIO_new(BIO_METHOD *type)

{
  CRYPTO_EX_DATA *ad;
  int iVar1;
  BIO *obj;
  long lVar2;
  
  obj = (BIO *)CRYPTO_zalloc(0x70,"crypto/bio/bio_lib.c",0x12);
  if (obj == (BIO *)0x0) {
    ERR_put_error(0x20,0x6c,0x41,"crypto/bio/bio_lib.c",0x15);
  }
  else {
    ad = &obj->ex_data;
    obj->method = type;
    obj->shutdown = 1;
    obj->references = 1;
    iVar1 = CRYPTO_new_ex_data(0xc,obj,ad);
    if (iVar1 != 0) {
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long *)&(obj->ex_data).dummy = lVar2;
      if (lVar2 == 0) {
        ERR_put_error(0x20,0x6c,0x41,"crypto/bio/bio_lib.c",0x22);
        CRYPTO_free_ex_data(0xc,obj,ad);
      }
      else {
        if (type->create == (_func_600 *)0x0) {
          return obj;
        }
        iVar1 = (*type->create)(obj);
        if (iVar1 != 0) {
          return obj;
        }
        ERR_put_error(0x20,0x6c,0x46,"crypto/bio/bio_lib.c",0x28);
        CRYPTO_free_ex_data(0xc,obj,ad);
        CRYPTO_THREAD_lock_free(*(undefined8 *)&(obj->ex_data).dummy);
      }
    }
    CRYPTO_free(obj);
  }
  return (BIO *)0x0;
}

