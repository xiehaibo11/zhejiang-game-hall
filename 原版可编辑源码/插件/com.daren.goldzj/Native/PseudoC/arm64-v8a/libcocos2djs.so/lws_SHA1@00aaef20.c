
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
  
  memset(&local_c0,0,0x68);
  local_b0 = 0xc3d2e1f0;
  uStack_b8 = 0x1032547698badcfe;
  local_c0 = 0xefcdab8967452301;
  if (param_2 != 0) {
    lVar4 = 0;
    uVar2 = 0;
    lVar3 = 0;
    while( true ) {
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
        FUN_00aae74c(&local_c0);
        lVar4 = local_a8;
      }
      local_a8 = lVar4;
      if (param_2 <= __n + lVar3) break;
      lVar3 = __n + lVar3;
      uVar2 = (ulong)local_60;
    }
  }
  FUN_00aae520(&local_c0);
  *param_3 = local_c0._3_1_;
  param_3[1] = local_c0._2_1_;
  param_3[2] = local_c0._1_1_;
  param_3[3] = (undefined1)local_c0;
  param_3[4] = local_c0._7_1_;
  param_3[5] = local_c0._6_1_;
  param_3[6] = local_c0._5_1_;
  param_3[7] = local_c0._4_1_;
  param_3[8] = uStack_b8._3_1_;
  param_3[9] = uStack_b8._2_1_;
  param_3[10] = uStack_b8._1_1_;
  param_3[0xb] = (undefined1)uStack_b8;
  param_3[0xc] = uStack_b8._7_1_;
  param_3[0xd] = uStack_b8._6_1_;
  param_3[0xe] = uStack_b8._5_1_;
  param_3[0xf] = uStack_b8._4_1_;
  param_3[0x10] = local_b0._3_1_;
  param_3[0x11] = local_b0._2_1_;
  param_3[0x12] = local_b0._1_1_;
  param_3[0x13] = (undefined1)local_b0;
  return param_3;
}

