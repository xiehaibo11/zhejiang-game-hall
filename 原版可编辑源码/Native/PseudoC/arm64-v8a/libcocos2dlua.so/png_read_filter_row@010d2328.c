
void png_read_filter_row(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        int param_5)

{
  code *pcVar1;
  
  if (param_5 - 1U < 4) {
    if (*(long *)(param_1 + 0x4f0) == 0) {
                    /* catch() { ... } // from try @ 010d2298 with catch @ 010d2368 */
                    /* catch() { ... } // from try @ 010d23b4 with catch @ 010d237c */
      pcVar1 = FUN_010d3174;
      if (*(byte *)(param_1 + 0x2b2) + 7 >> 3 != 1) {
        pcVar1 = FUN_010d31ec;
      }
      *(code **)(param_1 + 0x500) = FUN_010d2fac;
                    /* try { // try from 010d23ac to 011d23b3 has its CatchHandler @ 010d23f4 */
      *(code **)(param_1 + 0x4f8) = FUN_010d2f0c;
      *(code **)(param_1 + 0x4f0) = FUN_010d2e64;
      *(code **)(param_1 + 0x508) = pcVar1;
                    /* try { // try from 010d23b4 to 011d240f has its CatchHandler @ 010d237c */
      png_init_filter_functions_neon(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x010d23dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + (long)(int)(param_5 - 1U) * 8 + 0x4f0))(param_2,param_3,param_4);
    return;
  }
  return;
}

