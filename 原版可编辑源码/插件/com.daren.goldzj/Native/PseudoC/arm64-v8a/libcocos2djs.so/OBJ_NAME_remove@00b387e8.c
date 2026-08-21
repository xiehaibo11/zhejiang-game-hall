
int OBJ_NAME_remove(char *name,int type)

{
  int iVar1;
  int *ptr;
  long lVar2;
  uint local_38 [2];
  char *local_30;
  
  if (DAT_01d3ac98 == 0) {
    iVar1 = 0;
  }
  else {
    local_38[0] = type & 0xffff7fff;
    local_30 = name;
    ptr = (int *)OPENSSL_LH_delete(DAT_01d3ac98,local_38);
    iVar1 = 0;
    if (ptr != (int *)0x0) {
      if (DAT_01d3aca0 != 0) {
        iVar1 = OPENSSL_sk_num();
        if (*ptr < iVar1) {
          lVar2 = OPENSSL_sk_value(DAT_01d3aca0);
          (**(code **)(lVar2 + 0x10))(*(undefined8 *)(ptr + 2),*ptr,*(undefined8 *)(ptr + 4));
        }
      }
      CRYPTO_free(ptr);
      iVar1 = 1;
    }
  }
  return iVar1;
}

