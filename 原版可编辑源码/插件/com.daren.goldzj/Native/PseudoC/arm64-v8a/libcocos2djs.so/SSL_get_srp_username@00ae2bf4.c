
long SSL_get_srp_username(long param_1)

{
  if (*(long *)(param_1 + 0x338) != 0) {
    return *(long *)(param_1 + 0x338);
  }
  return *(long *)(*(long *)(param_1 + 0x1b8) + 0x268);
}

