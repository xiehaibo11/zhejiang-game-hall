
void png_set_error_fn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x120) = param_4;
    *(undefined8 *)(param_1 + 0x128) = param_2;
    *(undefined8 *)(param_1 + 0x118) = param_3;
  }
  return;
}

