
long SSL_get_srp_g(long param_1)

{
  if (*(long *)(param_1 + 0x348) != 0) {
    return *(long *)(param_1 + 0x348);
  }
  return *(long *)(*(long *)(param_1 + 0x1b8) + 0x278);
}

