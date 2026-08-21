
int BN_security_bits(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 00b0ae14 to 00c0ae23 has its CatchHandler @ 00b0aea4 */
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e0a) {
      if (param_1 < 0xc00) {
                    /* try { // try from 00b0ae68 to 00c0ae7b has its CatchHandler @ 00b0aea0 */
        if (param_1 < 0x800) {
                    /* try { // try from 00b0ae7c to 00c0aea7 has its CatchHandler @ 00b0adc0 */
          if (param_1 < 0x400) {
            return 0;
          }
          iVar2 = 0x50;
          iVar1 = 0x50;
        }
        else {
          iVar2 = 0x70;
          iVar1 = 0x70;
        }
      }
      else {
        iVar2 = 0x80;
        iVar1 = 0x80;
      }
    }
    else {
      iVar2 = 0xc0;
      iVar1 = 0xc0;
    }
  }
  else {
    iVar2 = 0x100;
    iVar1 = 0x100;
                    /* try { // try from 00b0ae24 to 00c0ae67 has its CatchHandler @ 00b0adc0 */
  }
  if (param_2 != -1) {
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = param_2 + 1;
    }
    if (0x9f < param_2) {
                    /* try { // try from 00b0aea8 to 00c0af83 has its CatchHandler @ 00b0aea8
                       catch() { ... } // from try @ 00b0aea8 with catch @ 00b0aea8
                       catch() { ... } // from try @ 00b0afb8 with catch @ 00b0aea8 */
      if (iVar2 >> 1 < iVar1) {
        iVar1 = iVar2 >> 1;
      }
      return iVar1;
    }
                    /* catch() { ... } // from try @ 00b0ae68 with catch @ 00b0aea0 */
                    /* catch() { ... } // from try @ 00b0ae14 with catch @ 00b0aea4 */
    return 0;
  }
  return iVar2;
}

