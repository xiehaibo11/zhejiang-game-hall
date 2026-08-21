
int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x,int keylen)

{
  int iVar1;
  int reason;
  int line;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  
  pEVar3 = x->cipher;
  uVar2 = (uint)pEVar3->flags;
  if ((uVar2 >> 7 & 1) == 0) {
    if (x->key_len == keylen) {
      return 1;
    }
    if ((0 < keylen) && ((uVar2 >> 3 & 1) != 0)) {
      x->key_len = keylen;
      return 1;
    }
    iVar1 = 0x7a;
    reason = 0x82;
    line = 0x22d;
  }
  else if (pEVar3 == (EVP_CIPHER *)0x0) {
    iVar1 = 0x7c;
    reason = 0x83;
    line = 0x23e;
  }
  else if (pEVar3->ctrl == (_func_1094 *)0x0) {
    iVar1 = 0x7c;
    reason = 0x84;
    line = 0x243;
  }
  else {
    iVar1 = (*pEVar3->ctrl)(x,1,keylen,(void *)0x0);
    if (iVar1 != -1) {
      return iVar1;
    }
    iVar1 = 0x7c;
    reason = 0x85;
    line = 0x24a;
  }
  ERR_put_error(6,iVar1,reason,"crypto/evp/evp_enc.c",line);
  return 0;
}

