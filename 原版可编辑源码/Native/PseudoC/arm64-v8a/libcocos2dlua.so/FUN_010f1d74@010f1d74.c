
void FUN_010f1d74(long param_1)

{
                    /* catch() { ... } // from try @ 010f1ce4 with catch @ 010f1d74 */
                    /* catch() { ... } // from try @ 010f1dcc with catch @ 010f1d88 */
  FUN_010f1c30(param_1,1);
  FUN_010f1c30(param_1,0);
                    /* try { // try from 010f1d9c to 011f1d9f has its CatchHandler @ 010f1e04 */
  jpeg_free_small(param_1,*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* try { // try from 010f1dac to 011f1dcb has its CatchHandler @ 010f1e10 */
  jpeg_mem_term(param_1);
  return;
}

