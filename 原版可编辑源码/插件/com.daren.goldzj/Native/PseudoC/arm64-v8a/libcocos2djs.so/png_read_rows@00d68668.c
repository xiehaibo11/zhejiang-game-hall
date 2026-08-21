
void png_read_rows(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_1 != 0) {
    if ((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        if (param_3 != (undefined8 *)0x0) {
          for (; param_4 != 0; param_4 = param_4 + -1) {
            png_read_row(param_1,0,*param_3);
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          png_read_row(param_1,*param_2,0);
          param_2 = param_2 + 1;
        }
      }
    }
    else {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        png_read_row(param_1,*param_2,*param_3);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  return;
}

