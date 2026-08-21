
void RECORD_LAYER_release(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    ssl3_release_read_buffer(*param_1);
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    ssl3_release_write_buffer(*param_1);
  }
  SSL3_RECORD_release(param_1 + 0x87,0x20);
  return;
}

