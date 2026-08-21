
bool RECORD_LAYER_write_pending(long param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    return *(int *)(param_1 + (ulong)(*(int *)(param_1 + 0x14) - 1) * 0x20 + 0x54) != 0;
  }
  return false;
}

