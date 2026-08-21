
void png_init_io(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x140) = param_2;
  }
  return;
}

