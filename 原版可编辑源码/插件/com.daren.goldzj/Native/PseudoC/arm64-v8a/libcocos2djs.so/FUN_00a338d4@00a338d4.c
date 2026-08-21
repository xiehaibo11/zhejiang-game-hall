
void FUN_00a338d4(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    bVar2 = *param_2;
    bVar1 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      bVar1 = bVar2;
    }
    *param_1 = bVar1;
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
                    /* try { // try from 00a33900 to 00b33957 has its CatchHandler @ 00a33900
                       catch() { ... } // from try @ 00a33900 with catch @ 00a33900
                       catch() { ... } // from try @ 00a33bd4 with catch @ 00a33900 */
    param_1 = param_1 + 1;
  }
  return;
}

