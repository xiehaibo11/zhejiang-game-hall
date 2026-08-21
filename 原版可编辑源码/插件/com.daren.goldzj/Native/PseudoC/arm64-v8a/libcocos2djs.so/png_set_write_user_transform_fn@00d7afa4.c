
void png_set_write_user_transform_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x150) = param_2;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x100000;
  }
  return;
}

