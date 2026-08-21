
void png_set_invert_mono(long param_1)

{
                    /* try { // try from 010d53ec to 011d53f7 has its CatchHandler @ 010d54a0 */
  if (param_1 != 0) {
                    /* try { // try from 010d53f8 to 011d54cb has its CatchHandler @ 010d5270 */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x20;
  }
  return;
}

