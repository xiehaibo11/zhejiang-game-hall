
ASN1_OBJECT * c2i_ASN1_OBJECT(ASN1_OBJECT **a,uchar **pp,long length)

{
  uint uVar1;
  int iVar2;
  ASN1_OBJECT *ptr;
  long lVar3;
  uchar *puVar4;
  int num;
  ASN1_OBJECT *ptr_00;
  uchar *ptr_01;
  ASN1_OBJECT AStack_78;
  
  if ((((pp == (uchar **)0x0) || (0x7ffffffe < length - 1U)) ||
      (puVar4 = *pp, puVar4 == (uchar *)0x0)) || ((char)puVar4[length - 1U] < '\0')) {
    iVar2 = 0xf1;
LAB_00ae8d38:
    ERR_put_error(0xd,0xc4,0xd8,"crypto/asn1/a_object.c",iVar2);
LAB_00ae8d3c:
    ptr = (ASN1_OBJECT *)0x0;
  }
  else {
    num = (int)length;
    AStack_78.nid = 0;
    AStack_78.flags = 0;
    AStack_78.length = num;
    AStack_78.data = puVar4;
    iVar2 = OBJ_obj2nid(&AStack_78);
    if (iVar2 == 0) {
      if (0 < num) {
        lVar3 = 0;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8dc8 with catch @ 00ae8d74
                        */
          if (puVar4[lVar3] == 0x80) {
            iVar2 = 0x10f;
            goto LAB_00ae8d38;
          }
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < num);
      }
      if (((a == (ASN1_OBJECT **)0x0) || (ptr = *a, ptr == (ASN1_OBJECT *)0x0)) ||
         ((ptr->flags & 1) == 0)) {
        ptr = (ASN1_OBJECT *)CRYPTO_zalloc(0x28,"crypto/asn1/a_object.c",0x146);
                    /* try { // try from 00ae8dc0 to 00be8dc7 has its CatchHandler @ 00ae8f28 */
        if (ptr == (ASN1_OBJECT *)0x0) {
          ERR_put_error(0xd,0x7b,0x41,"crypto/asn1/a_object.c",0x148);
          return (ASN1_OBJECT *)0x0;
        }
                    /* try { // try from 00ae8dc8 to 00be8f2b has its CatchHandler @ 00ae8d74 */
        ptr->flags = 1;
      }
      ptr_01 = ptr->data;
      puVar4 = *pp;
      ptr->data = (uchar *)0x0;
      if ((ptr_01 == (uchar *)0x0) || (ptr->length < num)) {
        ptr->length = 0;
        CRYPTO_free(ptr_01);
        ptr_01 = CRYPTO_malloc(num,"crypto/asn1/a_object.c",0x127);
        if (ptr_01 == (uchar *)0x0) {
          ERR_put_error(0xd,0xc4,0x41,"crypto/asn1/a_object.c",0x13c);
          if ((a == (ASN1_OBJECT **)0x0) || (*a != ptr)) {
            uVar1 = ptr->flags;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8dc0 with catch @ 00ae8f28
                        */
            if ((uVar1 >> 2 & 1) != 0) {
              CRYPTO_free(ptr->sn);
              CRYPTO_free(ptr->ln);
              uVar1 = ptr->flags;
              ptr->sn = (char *)0x0;
              ptr->ln = (char **)0x0;
            }
            if ((uVar1 >> 3 & 1) != 0) {
                    /* try { // try from 00ae8f7c to 00be8f83 has its CatchHandler @ 00ae9248 */
              CRYPTO_free(ptr->data);
              uVar1 = ptr->flags;
                    /* try { // try from 00ae8f84 to 00be912f has its CatchHandler @ 00ae8f2c */
              ptr->data = (uchar *)0x0;
              ptr->length = 0;
            }
            if ((uVar1 & 1) != 0) {
              CRYPTO_free(ptr);
            }
          }
          goto LAB_00ae8d3c;
        }
        ptr->flags = ptr->flags | 8;
      }
      memcpy(ptr_01,puVar4,(long)num);
      puVar4 = puVar4 + num;
      ptr->data = ptr_01;
      ptr->length = num;
      ptr->sn = (char *)0x0;
      ptr->ln = (char **)0x0;
      if (a != (ASN1_OBJECT **)0x0) {
        *a = ptr;
      }
    }
    else {
      ptr = OBJ_nid2obj(iVar2);
      if (a != (ASN1_OBJECT **)0x0) {
        ptr_00 = *a;
        if (ptr_00 != (ASN1_OBJECT *)0x0) {
          uVar1 = ptr_00->flags;
          if ((uVar1 >> 2 & 1) != 0) {
            CRYPTO_free(ptr_00->sn);
            CRYPTO_free(ptr_00->ln);
            uVar1 = ptr_00->flags;
            ptr_00->sn = (char *)0x0;
            ptr_00->ln = (char **)0x0;
          }
          if ((uVar1 >> 3 & 1) != 0) {
            CRYPTO_free(ptr_00->data);
            uVar1 = ptr_00->flags;
            ptr_00->data = (uchar *)0x0;
            ptr_00->length = 0;
          }
          if ((uVar1 & 1) != 0) {
            CRYPTO_free(ptr_00);
          }
        }
        *a = ptr;
      }
      puVar4 = *pp + length;
    }
    *pp = puVar4;
  }
  return ptr;
}

