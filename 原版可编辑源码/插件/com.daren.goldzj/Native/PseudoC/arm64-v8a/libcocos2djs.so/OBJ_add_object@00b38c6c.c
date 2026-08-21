
int OBJ_add_object(ASN1_OBJECT *obj)

{
  ASN1_OBJECT *ptr;
  undefined4 *ptr_00;
  undefined4 *ptr_01;
  void *pvVar1;
  char **ppcVar2;
  undefined4 *puStack_58;
  undefined4 *local_50;
  
  puStack_58 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  if ((DAT_01d3aca8 == 0) &&
     (DAT_01d3aca8 = OPENSSL_LH_new(&LAB_00b3a244,&LAB_00b3a3a8), DAT_01d3aca8 == 0)) {
    return 0;
  }
  ptr = OBJ_dup(obj);
  if (ptr == (ASN1_OBJECT *)0x0) {
    ptr_00 = (undefined4 *)0x0;
    puStack_58 = (undefined4 *)0x0;
    ptr_01 = (undefined4 *)0x0;
    goto LAB_00b38e80;
  }
  ptr_00 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0xb9);
  if (ptr_00 == (undefined4 *)0x0) {
    puStack_58 = (undefined4 *)0x0;
    ptr_01 = (undefined4 *)0x0;
  }
  else {
    if ((ptr->length == 0) || (obj->data == (uchar *)0x0)) {
      ptr_01 = (undefined4 *)0x0;
    }
    else {
      ptr_01 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0xbc);
      if (ptr_01 == (undefined4 *)0x0) {
        puStack_58 = (undefined4 *)0x0;
        goto LAB_00b38e64;
      }
    }
    if (ptr->sn == (char *)0x0) {
      ppcVar2 = ptr->ln;
    }
    else {
      puStack_58 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0xbf);
      if (puStack_58 == (undefined4 *)0x0) goto LAB_00b38e64;
      ppcVar2 = ptr->ln;
    }
    if ((ppcVar2 == (char **)0x0) ||
       (local_50 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0xc2),
       local_50 != (undefined4 *)0x0)) {
      if (ptr_01 != (undefined4 *)0x0) {
        *ptr_01 = 0;
        *(ASN1_OBJECT **)(ptr_01 + 2) = ptr;
        pvVar1 = (void *)OPENSSL_LH_insert(DAT_01d3aca8,ptr_01);
        CRYPTO_free(pvVar1);
      }
      if (puStack_58 != (undefined4 *)0x0) {
        *puStack_58 = 1;
        *(ASN1_OBJECT **)(puStack_58 + 2) = ptr;
        pvVar1 = (void *)OPENSSL_LH_insert(DAT_01d3aca8);
        CRYPTO_free(pvVar1);
      }
      if (local_50 != (undefined4 *)0x0) {
        *local_50 = 2;
        *(ASN1_OBJECT **)(local_50 + 2) = ptr;
        pvVar1 = (void *)OPENSSL_LH_insert(DAT_01d3aca8);
        CRYPTO_free(pvVar1);
      }
      if (ptr_00 != (undefined4 *)0x0) {
        *ptr_00 = 3;
        *(ASN1_OBJECT **)(ptr_00 + 2) = ptr;
        pvVar1 = (void *)OPENSSL_LH_insert(DAT_01d3aca8);
        CRYPTO_free(pvVar1);
      }
      ptr->flags = ptr->flags & 0xfffffff2;
      return ptr->nid;
    }
  }
LAB_00b38e64:
  ERR_put_error(8,0x69,0x41,"crypto/objects/obj_dat.c",0xd4);
LAB_00b38e80:
  CRYPTO_free(ptr_01);
  CRYPTO_free(puStack_58);
  CRYPTO_free((void *)0x0);
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr);
  return 0;
}

