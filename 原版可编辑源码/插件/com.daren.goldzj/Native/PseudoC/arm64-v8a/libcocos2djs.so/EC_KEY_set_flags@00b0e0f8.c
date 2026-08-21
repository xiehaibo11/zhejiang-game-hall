
void EC_KEY_set_flags(EC_KEY *key,int flags)

{
  *(uint *)(key + 0x3c) = *(uint *)(key + 0x3c) | flags;
  return;
}

