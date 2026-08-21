
void interface_to_sa(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x150) + 0xc78) >> 5 & 1) == 0) {
    lws_interface_to_sa((*(uint *)(param_1 + 0x1d8) >> 5 ^ 0xffffffff) & 1);
    return;
  }
  lws_interface_to_sa(0);
  return;
}

