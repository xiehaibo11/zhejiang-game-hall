
X509 * X509_find_by_issuer_and_serial(stack_st_X509 *sk,X509_NAME *name,ASN1_INTEGER *serial)

{
  int iVar1;
  int iVar2;
  X509 *a;
  undefined1 auStack_178 [328];
  
  if (sk != (stack_st_X509 *)0x0) {
    auStack_178._24_8_ = serial->flags;
    auStack_178._16_8_ = serial->data;
    auStack_178._8_8_ = *(undefined8 *)serial;
    auStack_178._48_8_ = name;
    iVar1 = OPENSSL_sk_num(sk);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        a = (X509 *)OPENSSL_sk_value(sk,iVar1);
        iVar2 = X509_issuer_and_serial_cmp(a,(X509 *)auStack_178);
        if (iVar2 == 0) {
          return a;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(sk);
      } while (iVar1 < iVar2);
    }
  }
  return (X509 *)0x0;
}

