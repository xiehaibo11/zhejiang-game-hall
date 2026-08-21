
void EC_KEY_set_asn1_flag(EC_KEY *eckey,int asn1_flag)

{
  if (*(EC_GROUP **)(eckey + 0x18) != (EC_GROUP *)0x0) {
    EC_GROUP_set_asn1_flag(*(EC_GROUP **)(eckey + 0x18),asn1_flag);
    return;
  }
  return;
}

