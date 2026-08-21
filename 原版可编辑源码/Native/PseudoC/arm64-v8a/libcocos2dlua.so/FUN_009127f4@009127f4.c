
void FUN_009127f4(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* try { // try from 009127fc to 00a1280f has its CatchHandler @ 009128e4 */
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = (byte *)param_1[1];
                    /* try { // try from 00912810 to 00a128ff has its CatchHandler @ 009126cc */
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = (byte *)*param_1;
    }
    param_1[1] = pbVar4;
                    /* catch() { ... } // from try @ 00912790 with catch @ 00912874 */
    operator_delete(pbVar2);
    return;
  }
  return;
}

