
int FUN_01048180(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((byte)(param_1 - 0x30) < 10) {
    return uVar1 + 0xd0;
  }
  if ((byte)(param_1 + 0x9f) < 6) {
                    /* try { // try from 010481ac to 011481b3 has its CatchHandler @ 010481b8 */
    return uVar1 + 0xa9;
  }
                    /* try { // try from 010481b4 to 01148253 has its CatchHandler @ 01047fc0 */
                    /* catch() { ... } // from try @ 010481ac with catch @ 010481b8 */
                    /* catch() { ... } // from try @ 010480c4 with catch @ 010481bc */
  if ((byte)(param_1 + 0xbf) < 6) {
    return uVar1 + 0xc9;
  }
                    /* catch() { ... } // from try @ 01048110 with catch @ 010481d0 */
  return 0xff;
}

