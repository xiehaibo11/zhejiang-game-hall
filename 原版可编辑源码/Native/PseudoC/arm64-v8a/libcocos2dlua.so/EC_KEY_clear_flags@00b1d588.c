
void EC_KEY_clear_flags(EC_KEY *key,int flags)

{
  *(uint *)(key + 0x3c) = *(uint *)(key + 0x3c) & (flags ^ 0xffffffffU);
  return;
}

