
ulong FT_RoundFix(long param_1)

{
  if (-1 < param_1) {
                    /* try { // try from 0105a418 to 0115a42f has its CatchHandler @ 0105a4b4 */
    return param_1 + 0x8000U & 0xffffffffffff0000;
  }
                    /* try { // try from 0105a430 to 0115a4eb has its CatchHandler @ 0105a30c */
  return -(0x8000U - param_1 & 0xffffffffffff0000);
}

