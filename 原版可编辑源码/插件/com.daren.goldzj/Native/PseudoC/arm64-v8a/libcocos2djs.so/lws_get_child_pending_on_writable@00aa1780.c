
uint lws_get_child_pending_on_writable(long param_1)

{
  return *(uint *)(param_1 + 0x2f4) >> 0x15 & 1;
}

