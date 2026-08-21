
void png_set_read_status_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x348) = param_2;
  }
  return;
}

