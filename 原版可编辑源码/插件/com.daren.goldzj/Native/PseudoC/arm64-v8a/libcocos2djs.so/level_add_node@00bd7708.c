
long * level_add_node(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *ptr;
  long lVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x18,"crypto/x509v3/pcy_node.c",0x44);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  *ptr = param_2;
  ptr[1] = param_3;
  if (param_1 == 0) {
joined_r0x00bd779c:
    if (param_4 != 0) {
      lVar2 = *(long *)(param_4 + 0x10);
      if (lVar2 == 0) {
        lVar2 = OPENSSL_sk_new_null();
        *(long *)(param_4 + 0x10) = lVar2;
        if (lVar2 == 0) goto LAB_00bd77d4;
      }
      iVar1 = OPENSSL_sk_push(lVar2,param_2);
      if (iVar1 == 0) goto LAB_00bd77d4;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = ptr;
        goto joined_r0x00bd779c;
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 == 0) {
        lVar2 = OPENSSL_sk_new(&LAB_00bd7600);
        *(long *)(param_1 + 8) = lVar2;
        if (lVar2 == 0) goto LAB_00bd77d4;
      }
      iVar1 = OPENSSL_sk_push(lVar2,ptr);
      if (iVar1 != 0) goto joined_r0x00bd779c;
    }
LAB_00bd77d4:
    CRYPTO_free(ptr);
    ptr = (long *)0x0;
  }
  return ptr;
}

