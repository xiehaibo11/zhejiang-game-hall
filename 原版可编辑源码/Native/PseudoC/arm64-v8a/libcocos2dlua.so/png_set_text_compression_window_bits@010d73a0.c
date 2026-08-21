
void png_set_text_compression_window_bits(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        png_warning(param_1,"Only compression windows >= 256 supported by PNG");
        param_2 = 8;
      }
    }
    else {
      png_warning(param_1,"Only compression windows <= 32k supported by PNG");
      param_2 = 0xf;
    }
    *(int *)(param_1 + 0x210) = param_2;
  }
                    /* try { // try from 010d73fc to 011d73ff has its CatchHandler @ 010d7448 */
  return;
}

