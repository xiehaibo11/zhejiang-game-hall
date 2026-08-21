
void png_set_compression_buffer_size(long param_1,ulong param_2)

{
  char *pcVar1;
  
                    /* try { // try from 010d50a8 to 011d5103 has its CatchHandler @ 010d4230 */
  if (param_1 != 0) {
    if (0x7ffffffe < param_2 - 1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid compression buffer size");
    }
    if (-1 < *(char *)(param_1 + 0x165)) {
      if (*(int *)(param_1 + 0x170) == 0) {
        if (5 < param_2) {
          if (*(uint *)(param_1 + 0x1f0) == param_2) {
            return;
          }
          png_free_buffer_list(param_1,param_1 + 0x1e8);
          *(int *)(param_1 + 0x1f0) = (int)param_2;
          return;
        }
        pcVar1 = "Compression buffer size cannot be reduced below 6";
      }
      else {
        pcVar1 = "Compression buffer size cannot be changed because it is in use";
      }
                    /* try { // try from 010d5104 to 011d510f has its CatchHandler @ 010d51ac */
                    /* try { // try from 010d5110 to 011d524f has its CatchHandler @ 010d4230 */
      png_warning(param_1,pcVar1);
      return;
    }
    *(int *)(param_1 + 0x4e0) = (int)param_2;
  }
  return;
}

