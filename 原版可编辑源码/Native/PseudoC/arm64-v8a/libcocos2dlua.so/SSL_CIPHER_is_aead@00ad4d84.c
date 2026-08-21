
uint SSL_CIPHER_is_aead(long param_1)

{
  return *(uint *)(param_1 + 0x20) >> 6 & 1;
}

