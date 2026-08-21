
bool RECORD_LAYER_read_pending(long param_1)

{
  return *(int *)(param_1 + 0x34) != 0;
}

