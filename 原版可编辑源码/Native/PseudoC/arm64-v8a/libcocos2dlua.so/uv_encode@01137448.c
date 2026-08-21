
ulong uv_encode(double param_1,double param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  
  if (0.016939999535679817 <= param_2) {
    dVar4 = (param_2 + -0.016939999535679817) * 285.7142768952314;
    if (param_3 != 0) {
      iVar1 = rand();
      dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    uVar3 = (uint)dVar4;
    if (((int)uVar3 < 0xa3) &&
       ((double)*(float *)(&DAT_01497818 +
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) <=
        param_1)) {
      dVar4 = (param_1 -
              (double)*(float *)(&DAT_01497818 +
                                (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)))
              * 285.7142768952314;
      if (param_3 != 0) {
        iVar1 = rand();
                    /* try { // try from 011374f4 to 012374ff has its CatchHandler @ 01137548 */
                    /* try { // try from 01137500 to 01237523 has its CatchHandler @ 01136fa8 */
        dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
      }
      if ((int)dVar4 < (int)*(short *)(&DAT_0149781c + (long)(int)uVar3 * 8)) {
                    /* try { // try from 01137524 to 0123752f has its CatchHandler @ 0113754c */
                    /* try { // try from 01137530 to 0123755f has its CatchHandler @ 01136fa8 */
        return (ulong)(uint)((int)*(short *)(&DAT_0149781e + (long)(int)uVar3 * 8) + (int)dVar4);
      }
    }
  }
                    /* catch() { ... } // from try @ 011374f4 with catch @ 01137548 */
                    /* catch() { ... } // from try @ 01137524 with catch @ 0113754c */
  uVar2 = FUN_01137564(param_1,param_2);
  return uVar2;
}

