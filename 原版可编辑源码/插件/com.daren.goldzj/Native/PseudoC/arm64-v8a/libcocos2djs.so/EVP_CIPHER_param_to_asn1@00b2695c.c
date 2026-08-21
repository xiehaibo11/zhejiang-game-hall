
int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  int iVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  
  pEVar3 = c->cipher;
  if (pEVar3->set_asn1_parameters != (_func_1092 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pEVar3->set_asn1_parameters)(c,type);
    return iVar1;
  }
  uVar2 = (uint)pEVar3->flags;
  if ((uVar2 >> 0xc & 1) == 0) {
    return -1;
  }
  uVar2 = uVar2 & 0xf0007;
  if (uVar2 < 0x10002) {
    if (uVar2 - 6 < 2) {
      return -1;
    }
    if (uVar2 == 0x10001) {
      return -1;
    }
  }
  else {
    if (uVar2 == 0x10003) {
      return -1;
    }
    if (uVar2 == 0x10002) {
      if (pEVar3->nid == 0xf6) {
        ASN1_TYPE_set(type,5,(void *)0x0);
      }
      return 1;
    }
  }
  if (type == (ASN1_TYPE *)0x0) {
    return 0;
  }
  if ((uint)pEVar3->iv_len < 0x11) {
    iVar1 = ASN1_TYPE_set_octetstring(type,c->oiv,pEVar3->iv_len);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: j <= sizeof(c->iv)","crypto/evp/evp_lib.c",99);
}

