
bool RECORD_LAYER_is_sslv2_record(long param_1)

{
  return *(int *)(param_1 + 0x438) == 2;
}

