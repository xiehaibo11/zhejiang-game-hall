
int pvmp3_decode_huff_cw_tab33(undefined8 param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00ec9914 with catch @ 00ec98b0 */
  iVar1 = getUpTo9bits(param_1,4);
  return 0xf - iVar1;
}

