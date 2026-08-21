
bool SSL_ct_is_enabled(long param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acaa78 with catch @ 00acac0c
                        */
  return *(long *)(param_1 + 0x238) != 0;
}

