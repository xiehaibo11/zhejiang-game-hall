
void lws_clear_child_pending_on_writable(long param_1)

{
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xffdfffff;
  return;
}

