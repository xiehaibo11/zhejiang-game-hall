
int ECDH_compute_key(void *out,size_t outlen,EC_POINT *pub_key,EC_KEY *ecdh,KDF *KDF)

{
  int iVar1;
  int line;
  void *pvVar2;
  ulong local_48;
  void *local_40;
  size_t local_38;
  
  local_40 = (void *)0x0;
  local_38 = outlen;
  if (*(code **)(*(long *)ecdh + 0x48) == (code *)0x0) {
    iVar1 = 0x98;
    line = 0x87;
  }
  else {
    if (outlen >> 0x1f == 0) {
      iVar1 = (**(code **)(*(long *)ecdh + 0x48))(&local_40,&local_48);
      pvVar2 = local_40;
      if (iVar1 == 0) {
        return 0;
      }
      if (KDF == (KDF *)0x0) {
        if (local_48 < outlen) {
          local_38 = local_48;
          outlen = local_48;
        }
        memcpy(out,local_40,outlen);
      }
      else {
        (*KDF)(local_40,local_48,out,&local_38);
        pvVar2 = local_40;
      }
      CRYPTO_clear_free(pvVar2,local_48,"crypto/ec/ec_kmeth.c",0x97);
      return (int)local_38;
    }
    iVar1 = 0xa1;
    line = 0x8b;
  }
  ERR_put_error(0x10,0xf6,iVar1,"crypto/ec/ec_kmeth.c",line);
  return 0;
}

