
int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  int iVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  uint uVar4;
  
  pEVar3 = c->cipher;
  if (pEVar3->get_asn1_parameters != (_func_1093 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b26aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pEVar3->get_asn1_parameters)(c,type);
    return iVar1;
  }
  uVar4 = (uint)pEVar3->flags;
  if ((uVar4 >> 0xc & 1) == 0) {
    return -1;
  }
  uVar4 = uVar4 & 0xf0007;
  if (uVar4 < 0x10002) {
    if (uVar4 - 6 < 2) {
      return -1;
    }
    if (uVar4 == 0x10001) {
      return -1;
    }
  }
  else {
    if (uVar4 == 0x10002) {
      return 1;
    }
    if (uVar4 == 0x10003) {
      return -1;
    }
  }
  if (type != (ASN1_TYPE *)0x0) {
    uVar4 = pEVar3->iv_len;
    if (0x10 < uVar4) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: l <= sizeof(c->iv)","crypto/evp/evp_lib.c",0x52);
    }
    uVar2 = ASN1_TYPE_get_octetstring(type,c->oiv,uVar4);
    if (uVar2 != uVar4) {
      return -1;
    }
    if (0 < (int)uVar4) {
      memcpy(c->iv,c->oiv,(ulong)uVar4);
      return uVar4;
    }
  }
  return 0;
}

