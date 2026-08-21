
void FUN_00a0ef24(void)

{
                    /* try { // try from 00a0ef24 to 00b0ef37 has its CatchHandler @ 00a0f0ec */
  if ((DAT_01d38bb0 != 0) && (DAT_01d38bb0 = DAT_01d38bb0 + -1, DAT_01d38bb0 == 0)) {
                    /* try { // try from 00a0ef48 to 00b0ef4f has its CatchHandler @ 00a0f0e8 */
    FUN_00a1a054();
                    /* try { // try from 00a0ef50 to 00b0ef63 has its CatchHandler @ 00a0f0e4 */
    if ((DAT_01d38bb8 & 1) != 0) {
      FUN_00a17b78();
    }
    DAT_01d38bb8 = 0;
    return;
  }
  return;
}

