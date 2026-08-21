
EC_POINT * EC_POINT_dup(EC_POINT *src,EC_GROUP *group)

{
  int iVar1;
  EC_POINT *ptr;
  int line;
  code *pcVar2;
  
  if (src == (EC_POINT *)0x0) {
    return (EC_POINT *)0x0;
  }
  ptr = EC_POINT_new(group);
  if (ptr == (EC_POINT *)0x0) {
    return (EC_POINT *)0x0;
  }
  pcVar2 = *(code **)(*(long *)ptr + 0x68);
  if (pcVar2 == (code *)0x0) {
    iVar1 = 0x42;
    line = 600;
  }
  else {
    if (*(long *)ptr == *(long *)src) {
      if (ptr == src) {
        return src;
      }
      iVar1 = (*pcVar2)(ptr,src);
      if (iVar1 != 0) {
        return ptr;
      }
      goto LAB_00b0f98c;
    }
    iVar1 = 0x65;
    line = 0x25c;
  }
  ERR_put_error(0x10,0x72,iVar1,"crypto/ec/ec_lib.c",line);
LAB_00b0f98c:
  if (*(code **)(*(long *)ptr + 0x58) != (code *)0x0) {
    (**(code **)(*(long *)ptr + 0x58))(ptr);
  }
  CRYPTO_free(ptr);
  return (EC_POINT *)0x0;
}

