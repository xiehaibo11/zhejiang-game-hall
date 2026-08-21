
void png_write_rows(long param_1,undefined8 *param_2,int param_3)

{
  if (param_1 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      png_write_row(param_1,*param_2);
      param_2 = param_2 + 1;
    }
  }
  return;
}

