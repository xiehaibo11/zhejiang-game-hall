
void png_set_text_compression_strategy(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x218) = param_2;
  }
                    /* try { // try from 010d739c to 011d73fb has its CatchHandler @ 010d71e8 */
  return;
}

