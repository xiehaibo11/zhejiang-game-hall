
void FUN_00961c74(long param_1,undefined8 *param_2)

{
                    /* catch() { ... } // from try @ 00961c3c with catch @ 00961c74 */
  *param_2 = &PTR_FUN_0169da00;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 00961c88 to 00a61d3f has its CatchHandler @ 00961c88
                       catch() { ... } // from try @ 00961c88 with catch @ 00961c88
                       catch() { ... } // from try @ 00961dc0 with catch @ 00961c88 */
  return;
}

