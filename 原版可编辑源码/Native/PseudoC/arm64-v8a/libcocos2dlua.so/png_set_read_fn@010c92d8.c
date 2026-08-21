
void png_set_read_fn(long param_1,undefined8 param_2,code *param_3)

{
  if (param_1 != 0) {
    if (param_3 == (code *)0x0) {
      param_3 = png_default_read_data;
    }
    *(code **)(param_1 + 0x138) = param_3;
    *(undefined8 *)(param_1 + 0x140) = param_2;
    if (*(long *)(param_1 + 0x130) != 0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}

