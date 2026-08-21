
int OBJ_NAME_new_index(hash_func *hash_func,cmp_func *cmp_func,free_func *free_func)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (DAT_01d3aca0 == 0) {
    iVar2 = CRYPTO_mem_ctrl(3);
    DAT_01d3aca0 = OPENSSL_sk_new_null(iVar2);
    CRYPTO_mem_ctrl(2);
    if (DAT_01d3aca0 == 0) {
      return 0;
    }
  }
  iVar1 = DAT_01d20838;
  DAT_01d20838 = DAT_01d20838 + 1;
  iVar2 = OPENSSL_sk_num(DAT_01d3aca0);
  if (iVar2 < DAT_01d20838) {
    do {
      CRYPTO_mem_ctrl(3);
      puVar4 = (undefined8 *)CRYPTO_zalloc(0x18,"crypto/objects/o_names.c",0x5f);
      CRYPTO_mem_ctrl(2);
      if (puVar4 == (undefined8 *)0x0) {
        ERR_put_error(8,0x6a,0x41,"crypto/objects/o_names.c",0x62);
        return 0;
      }
      *puVar4 = OPENSSL_LH_strhash;
      puVar4[1] = strcmp;
      CRYPTO_mem_ctrl(3);
      iVar3 = OPENSSL_sk_push(DAT_01d3aca0,puVar4);
      CRYPTO_mem_ctrl(2);
      if (iVar3 == 0) {
        ERR_put_error(8,0x6a,0x41,"crypto/objects/o_names.c",0x6d);
        CRYPTO_free(puVar4);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_01d20838);
  }
  puVar4 = (undefined8 *)OPENSSL_sk_value(DAT_01d3aca0,iVar1);
  if (hash_func != (hash_func *)0x0) {
    *puVar4 = hash_func;
  }
  if (cmp_func != (cmp_func *)0x0) {
    puVar4[1] = cmp_func;
  }
  if (free_func != (free_func *)0x0) {
    puVar4[2] = free_func;
  }
  return iVar1;
}

