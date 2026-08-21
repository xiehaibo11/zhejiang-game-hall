
void png_set_text_compression_method(long param_1,int param_2)

{
                    /* try { // try from 010d7400 to 011d74fb has its CatchHandler @ 010d71e8 */
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 0x20c) = param_2;
  }
  return;
}

