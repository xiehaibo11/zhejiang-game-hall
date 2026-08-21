
long SSL_get_srp_N(long param_1)

{
  if (*(long *)(param_1 + 0x340) != 0) {
    return *(long *)(param_1 + 0x340);
  }
  return *(long *)(*(long *)(param_1 + 0x1b8) + 0x270);
}

