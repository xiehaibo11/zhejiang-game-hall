
long SSL_get_srp_userinfo(long param_1)

{
  if (*(long *)(param_1 + 0x380) != 0) {
    return *(long *)(param_1 + 0x380);
  }
  return *(long *)(*(long *)(param_1 + 0x1b8) + 0x2b0);
}

