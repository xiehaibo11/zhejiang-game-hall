
ASN1_OBJECT * OBJ_nid2obj(int n)

{
  ASN1_OBJECT *pAVar1;
  int line;
  long lVar2;
  undefined1 auStack_48 [16];
  int local_38;
  undefined4 local_20 [2];
  undefined1 *local_18;
  
  if ((uint)n < 0x425) {
    if (n == 0) {
      lVar2 = 0;
    }
    else {
      if (*(int *)(&DAT_016b3c48 + (long)n * 0x28) == 0) {
        line = 0xe3;
        goto LAB_00b47430;
      }
      lVar2 = (long)n;
    }
    pAVar1 = (ASN1_OBJECT *)(&PTR_s_UNDEF_016b3c38 + lVar2 * 5);
  }
  else {
    if (DAT_01784a28 != 0) {
      local_18 = auStack_48;
      local_20[0] = 3;
      local_38 = n;
      lVar2 = OPENSSL_LH_retrieve(DAT_01784a28,local_20);
      if (lVar2 != 0) {
        return *(ASN1_OBJECT **)(lVar2 + 8);
      }
      line = 0xf1;
LAB_00b47430:
      ERR_put_error(8,0x67,0x65,"crypto/objects/obj_dat.c",line);
    }
    pAVar1 = (ASN1_OBJECT *)0x0;
  }
  return pAVar1;
}

