
void lws_set_parent_carries_io(long param_1)

{
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x100000;
  return;
}

