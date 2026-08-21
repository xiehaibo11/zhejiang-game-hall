
undefined1 * lws_SHA1(long param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  undefined1 auStack_a0 [64];
  byte local_60;
  
                    /* try { // try from 010516d0 to 011516df has its CatchHandler @ 010534e0 */
  memset(&local_c0,0,0x68);
  local_b0 = 0xc3d2e1f0;
  uStack_b8 = 0x1032547698badcfe;
  local_c0 = 0xefcdab8967452301;
  if (param_2 != 0) {
                    /* try { // try from 010516fc to 01151703 has its CatchHandler @ 01053634 */
    lVar4 = 0;
    uVar2 = 0;
                    /* try { // try from 01051704 to 01151717 has its CatchHandler @ 01053630 */
    lVar3 = 0;
    while( true ) {
                    /* try { // try from 0105171c to 0115173f has its CatchHandler @ 01053810 */
      __n = 0x40 - (uVar2 & 0x3f);
      if (param_2 - lVar3 <= __n) {
        __n = param_2 - lVar3;
      }
      memcpy(auStack_a0 + (uVar2 & 0x3f),(void *)(param_1 + lVar3),__n);
      local_a8 = lVar4 + __n * 8;
      uVar1 = (int)__n + (uint)local_60 & 0x3f;
      local_60 = (byte)uVar1;
      lVar4 = local_a8;
      if (uVar1 == 0) {
        FUN_01050ed0(&local_c0);
        lVar4 = local_a8;
      }
      local_a8 = lVar4;
      if (param_2 <= __n + lVar3) break;
      lVar3 = __n + lVar3;
      uVar2 = (ulong)local_60;
    }
  }
  FUN_01050ca4(&local_c0);
  *param_3 = local_c0._3_1_;
  param_3[1] = local_c0._2_1_;
  param_3[2] = local_c0._1_1_;
                    /* try { // try from 010517a4 to 011517ab has its CatchHandler @ 0105364c */
  param_3[3] = (undefined1)local_c0;
                    /* try { // try from 010517ac to 011517bf has its CatchHandler @ 0105380c */
  param_3[4] = local_c0._7_1_;
  param_3[5] = local_c0._6_1_;
  param_3[6] = local_c0._5_1_;
                    /* try { // try from 010517c4 to 011517eb has its CatchHandler @ 0105392c */
  param_3[7] = local_c0._4_1_;
  param_3[8] = uStack_b8._3_1_;
  param_3[9] = uStack_b8._2_1_;
  param_3[10] = uStack_b8._1_1_;
  param_3[0xb] = (undefined1)uStack_b8;
  param_3[0xc] = uStack_b8._7_1_;
  param_3[0xd] = uStack_b8._6_1_;
                    /* try { // try from 01051800 to 01151813 has its CatchHandler @ 01053808 */
  param_3[0xe] = uStack_b8._5_1_;
  param_3[0xf] = uStack_b8._4_1_;
  param_3[0x10] = local_b0._3_1_;
                    /* try { // try from 01051818 to 0115183f has its CatchHandler @ 01053928 */
  param_3[0x11] = local_b0._2_1_;
  param_3[0x12] = local_b0._1_1_;
  param_3[0x13] = (undefined1)local_b0;
  return param_3;
}

