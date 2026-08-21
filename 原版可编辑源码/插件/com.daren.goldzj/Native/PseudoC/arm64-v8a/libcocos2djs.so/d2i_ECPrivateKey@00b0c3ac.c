
EC_KEY * d2i_ECPrivateKey(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  ASN1_VALUE *val;
  EC_GROUP *group;
  undefined8 uVar2;
  EC_POINT *pEVar3;
  int line;
  EC_KEY *key_00;
  ASN1_STRING *x;
  uchar *local_48;
  
  local_48 = *in;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,len,(ASN1_ITEM *)&DAT_01c75038);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x10,0x92,0x10,"crypto/ec/ec_asn1.c",0x39a);
    return (EC_KEY *)0x0;
  }
  if (((key == (EC_KEY **)0x0) || (key_00 = *key, key_00 == (EC_KEY *)0x0)) &&
     (key_00 = EC_KEY_new(), key_00 == (EC_KEY *)0x0)) {
    iVar1 = 0x41;
    line = 0x3a0;
  }
  else {
    group = *(EC_GROUP **)(key_00 + 0x18);
    if (*(long *)(val + 0x10) != 0) {
      EC_GROUP_clear_free(group);
      group = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(*(undefined8 *)(val + 0x10));
      *(EC_GROUP **)(key_00 + 0x18) = group;
    }
    if (group == (EC_GROUP *)0x0) {
      iVar1 = 0x10;
      line = 0x3ac;
    }
    else {
      *(int *)(key_00 + 0x10) = (int)*(undefined8 *)val;
      x = *(ASN1_STRING **)(val + 8);
      if (x == (ASN1_STRING *)0x0) {
        iVar1 = 0x7d;
        line = 0x3b8;
      }
      else {
        uVar2 = ASN1_STRING_get0_data(x);
        iVar1 = ASN1_STRING_length(x);
        iVar1 = EC_KEY_oct2priv(key_00,uVar2,(long)iVar1);
        if (iVar1 == 0) goto LAB_00b0c558;
        EC_POINT_clear_free(*(EC_POINT **)(key_00 + 0x20));
        pEVar3 = EC_POINT_new(*(EC_GROUP **)(key_00 + 0x18));
        *(EC_POINT **)(key_00 + 0x20) = pEVar3;
        if (pEVar3 == (EC_POINT *)0x0) {
          iVar1 = 0x10;
          line = 0x3bf;
        }
        else {
          if (*(long *)(val + 0x18) == 0) {
            if ((*(code **)(**(long **)(key_00 + 0x18) + 0x160) == (code *)0x0) ||
               (iVar1 = (**(code **)(**(long **)(key_00 + 0x18) + 0x160))(key_00), iVar1 == 0))
            goto LAB_00b0c558;
            *(uint *)(key_00 + 0x30) = *(uint *)(key_00 + 0x30) | 2;
LAB_00b0c5c8:
            if (key != (EC_KEY **)0x0) {
              *key = key_00;
            }
            ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c75038);
            *in = local_48;
            return key_00;
          }
          uVar2 = ASN1_STRING_get0_data();
          iVar1 = ASN1_STRING_length(*(ASN1_STRING **)(val + 0x18));
          iVar1 = EC_KEY_oct2key(key_00,uVar2,(long)iVar1,0);
          if (iVar1 != 0) goto LAB_00b0c5c8;
          iVar1 = 0x10;
          line = 0x3ca;
        }
      }
    }
  }
  ERR_put_error(0x10,0x92,iVar1,"crypto/ec/ec_asn1.c",line);
LAB_00b0c558:
  if ((key == (EC_KEY **)0x0) || (*key != key_00)) {
    EC_KEY_free(key_00);
  }
  ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c75038);
  return (EC_KEY *)0x0;
}

