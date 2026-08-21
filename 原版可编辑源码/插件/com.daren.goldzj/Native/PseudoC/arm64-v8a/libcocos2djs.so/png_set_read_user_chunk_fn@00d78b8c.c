
void png_set_read_user_chunk_fn(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x430) = param_3;
    *(undefined8 *)(param_1 + 0x428) = param_2;
  }
  return;
}

