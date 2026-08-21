
void EVP_PKEY_asn1_set_item(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}

