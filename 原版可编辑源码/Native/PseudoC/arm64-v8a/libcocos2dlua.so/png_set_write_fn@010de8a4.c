
void png_set_write_fn(long param_1,undefined8 param_2,code *param_3,code *param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x140) = param_2;
    if (param_3 == (code *)0x0) {
      param_3 = png_default_write_data;
    }
    *(code **)(param_1 + 0x130) = param_3;
    if (param_4 == (code *)0x0) {
      param_4 = png_default_flush;
    }
    *(code **)(param_1 + 0x2d8) = param_4;
    if (*(long *)(param_1 + 0x138) != 0) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}

