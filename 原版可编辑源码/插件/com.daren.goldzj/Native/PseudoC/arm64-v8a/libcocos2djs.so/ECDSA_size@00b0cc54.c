
int ECDSA_size(EC_KEY *eckey)

{
  int iVar1;
  int iVar2;
  EC_GROUP *pEVar3;
  uchar local_2c [4];
  ASN1_INTEGER local_28;
  
  iVar2 = 0;
  if ((eckey != (EC_KEY *)0x0) &&
     (pEVar3 = EC_KEY_get0_group(eckey), iVar2 = 0, pEVar3 != (EC_GROUP *)0x0)) {
    iVar1 = EC_GROUP_order_bits();
    iVar2 = 0;
    if (iVar1 != 0) {
      local_28.length = iVar1 + 0xe;
      if (-1 < iVar1 + 7) {
        local_28.length = iVar1 + 7;
      }
      local_28.data = local_2c;
      local_28.length = local_28.length >> 3;
      local_28.type = 2;
      local_2c[0] = 0xff;
      iVar2 = i2d_ASN1_INTEGER(&local_28,(uchar **)0x0);
      iVar2 = ASN1_object_size(1,iVar2 << 1,0x10);
    }
  }
  return iVar2;
}

