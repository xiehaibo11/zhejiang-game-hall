
void png_set_mem_fn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x458) = param_2;
    *(undefined8 *)(param_1 + 0x460) = param_3;
    *(undefined8 *)(param_1 + 0x468) = param_4;
  }
  return;
}

