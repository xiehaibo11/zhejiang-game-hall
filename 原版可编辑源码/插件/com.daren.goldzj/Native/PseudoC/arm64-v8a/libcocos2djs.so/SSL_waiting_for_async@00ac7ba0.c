
bool SSL_waiting_for_async(long param_1)

{
  return *(long *)(param_1 + 0x1140) != 0;
}

