
void png_set_read_user_transform_fn(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x100000;
  return;
}

