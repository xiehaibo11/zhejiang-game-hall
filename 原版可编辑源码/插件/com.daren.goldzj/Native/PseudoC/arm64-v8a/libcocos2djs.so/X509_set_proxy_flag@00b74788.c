
void X509_set_proxy_flag(long param_1)

{
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x400;
  return;
}

