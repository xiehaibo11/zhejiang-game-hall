
undefined8 FUN_00b08bec(long param_1)

{
                    /* try { // try from 00b08bf0 to 00c08cfb has its CatchHandler @ 00b08bf0
                       catch() { ... } // from try @ 00b08bf0 with catch @ 00b08bf0
                       catch() { ... } // from try @ 00b08d0c with catch @ 00b08bf0 */
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x40));
  return 1;
}

