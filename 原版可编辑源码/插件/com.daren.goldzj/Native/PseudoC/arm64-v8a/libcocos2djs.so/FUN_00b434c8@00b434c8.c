
undefined8 FUN_00b434c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  char *name;
  EVP_MD *parg;
  BIO *pBVar2;
  int line;
  
  type = BIO_f_md();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    iVar1 = 0x20;
    line = 0x3c;
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
    name = OBJ_nid2sn(iVar1);
    parg = EVP_get_digestbyname(name);
    if (parg == (EVP_MD *)0x0) {
      iVar1 = 0x6d;
      line = 0x42;
    }
    else {
      BIO_ctrl(bp,0x6f,0,parg);
      if ((BIO *)*param_1 == (BIO *)0x0) {
        *param_1 = bp;
        return 1;
      }
      pBVar2 = BIO_push((BIO *)*param_1,bp);
      if (pBVar2 != (BIO *)0x0) {
        return 1;
      }
      iVar1 = 0x20;
      line = 0x4a;
    }
  }
  ERR_put_error(0x21,0x7d,iVar1,"crypto/pkcs7/pk7_doit.c",line);
  BIO_free(bp);
  return 0;
}

