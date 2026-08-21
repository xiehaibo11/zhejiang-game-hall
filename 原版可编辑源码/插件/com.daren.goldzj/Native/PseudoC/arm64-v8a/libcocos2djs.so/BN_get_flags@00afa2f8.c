
uint BN_get_flags(long param_1,uint param_2)

{
                    /* catch() { ... } // from try @ 00afa298 with catch @ 00afa300 */
  return *(uint *)(param_1 + 0x14) & param_2;
}

