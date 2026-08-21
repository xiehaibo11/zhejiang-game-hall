
void EC_KEY_set_enc_flags(EC_KEY *eckey,uint flags)

{
  *(uint *)(eckey + 0x30) = flags;
  return;
}

