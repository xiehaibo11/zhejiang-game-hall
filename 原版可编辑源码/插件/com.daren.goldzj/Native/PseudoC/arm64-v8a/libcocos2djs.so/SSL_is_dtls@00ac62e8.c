
uint SSL_is_dtls(long param_1)

{
  return *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1;
}

