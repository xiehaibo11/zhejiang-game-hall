
EC_POINT * EC_POINT_new(EC_GROUP *group)

{
  int iVar1;
  EC_POINT *ptr;
  int line;
  long lVar2;
  
  if (group == (EC_GROUP *)0x0) {
    iVar1 = 0x43;
    line = 0x227;
  }
  else {
    if (*(long *)(*(long *)group + 0x50) != 0) {
      ptr = (EC_POINT *)CRYPTO_zalloc(0x28,"crypto/ec/ec_lib.c",0x22f);
      if (ptr == (EC_POINT *)0x0) {
        ERR_put_error(0x10,0x79,0x41,"crypto/ec/ec_lib.c",0x231);
        return (EC_POINT *)0x0;
      }
      lVar2 = *(long *)group;
      *(long *)ptr = lVar2;
      iVar1 = (**(code **)(lVar2 + 0x50))(ptr);
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
        return (EC_POINT *)0x0;
      }
      return ptr;
    }
    iVar1 = 0x42;
    line = 0x22b;
  }
  ERR_put_error(0x10,0x79,iVar1,"crypto/ec/ec_lib.c",line);
  return (EC_POINT *)0x0;
}

