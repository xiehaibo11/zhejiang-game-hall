
int DSA_size(DSA *param_1)

{
  int iVar1;
  uchar local_2c [4];
  ASN1_INTEGER local_28;
  
  iVar1 = BN_num_bits(param_1->p);
  local_28.length = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    local_28.length = iVar1 + 7;
  }
  local_28.data = local_2c;
  local_28.length = local_28.length >> 3;
  local_28.type = 2;
  local_2c[0] = 0xff;
  iVar1 = i2d_ASN1_INTEGER(&local_28,(uchar **)0x0);
  iVar1 = ASN1_object_size(1,iVar1 << 1,0x10);
  return iVar1;
}

