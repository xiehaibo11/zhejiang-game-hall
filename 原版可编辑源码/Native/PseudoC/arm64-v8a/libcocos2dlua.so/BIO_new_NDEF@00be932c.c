
BIO * BIO_new_NDEF(BIO *out,ASN1_VALUE *val,ASN1_ITEM *it)

{
  int iVar1;
  undefined8 *ptr;
  BIO_METHOD *type;
  BIO *b;
  BIO *pBVar2;
  void *pvVar3;
  BIO *local_58;
  BIO *local_50;
  undefined8 local_48;
  ASN1_VALUE *local_38;
  
  pvVar3 = it->funcs;
  local_38 = val;
  if ((pvVar3 == (void *)0x0) || (*(long *)((long)pvVar3 + 0x18) == 0)) {
    ERR_put_error(0xd,0xd0,0xca,"crypto/asn1/bio_ndef.c",0x3c);
  }
  else {
    ptr = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/asn1/bio_ndef.c",0x3f);
    type = BIO_f_asn1();
    b = BIO_new(type);
    if (((ptr != (undefined8 *)0x0) && (b != (BIO *)0x0)) &&
       (pBVar2 = BIO_push(b,out), pBVar2 != (BIO *)0x0)) {
      BIO_asn1_set_prefix(b,&LAB_00be9480,&LAB_00be9510);
      BIO_asn1_set_suffix(b,FUN_00be956c,&LAB_00be964c);
      local_50 = (BIO *)0x0;
      local_48 = 0;
      local_58 = pBVar2;
      iVar1 = (**(code **)((long)pvVar3 + 0x18))(10,&local_38,it,&local_58);
      if (0 < iVar1) {
        *ptr = local_38;
        ptr[1] = it;
        ptr[2] = local_50;
        ptr[3] = pBVar2;
        ptr[4] = local_48;
        BIO_ctrl(b,0x99,0,ptr);
        return local_50;
      }
    }
    BIO_free(b);
    CRYPTO_free(ptr);
  }
  return (BIO *)0x0;
}

