
void bio_free_ex_data(void *param_1)

{
                    /* try { // try from 00af6fc8 to 00bf700b has its CatchHandler @ 00af6fc8
                       catch() { ... } // from try @ 00af6fc8 with catch @ 00af6fc8
                       catch() { ... } // from try @ 00af7040 with catch @ 00af6fc8 */
  CRYPTO_free_ex_data(0xc,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0x60));
  return;
}

