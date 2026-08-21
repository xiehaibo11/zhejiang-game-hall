
ulong pvmp3_decode_header(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar8 [13];
  
  if (*(uint *)(param_1 + 0xc) < 4) {
    uVar3 = 0xb;
  }
  else {
    uVar2 = getUpTo17bits(param_1,0xb);
    if (((~uVar2 & 0x7ff) == 0) || (uVar3 = pvmp3_header_sync(param_1), (int)uVar3 == 0)) {
      uVar3 = getNbits(param_1,0x15);
      if ((uVar3 >> 0x15 & 0x7ff) == 0) {
        lVar5 = ((uVar3 & 0xffffffff) >> 0x13) * 4;
        uVar4 = *(undefined4 *)(&DAT_014387e0 + lVar5);
        uVar2 = *(uint *)(&DAT_014387d0 + lVar5);
      }
      else {
        uVar2 = 1;
        uVar4 = 0xffffffff;
      }
      uVar6 = (uint)uVar3;
      *param_2 = uVar4;
      param_2[1] = 4 - (uVar6 >> 0x11 & 3);
      param_2[2] = uVar6 >> 0x10 & 1 ^ 1;
      if ((uVar6 >> 0x10 & 1) == 0) {
        *param_3 = 0xffff;
        calculate_crc(uVar6 & 0xffff,0x10,param_3);
      }
      auVar9._4_4_ = uVar6;
      auVar9._0_4_ = uVar6;
      auVar9._8_4_ = uVar6;
      auVar9._12_4_ = uVar6;
      auVar10[8] = 0xf7;
      auVar10._0_8_ = 0xfffffff6fffffff4;
      auVar10[9] = 0xff;
      auVar10[10] = 0xff;
      auVar10[0xb] = 0xff;
      auVar10[0xc] = 0xf8;
      auVar10[0xd] = 0xff;
      auVar10[0xe] = 0xff;
      auVar10[0xf] = 0xff;
      auVar10 = NEON_ushl(auVar9,auVar10,4);
      param_2[7] = uVar6 >> 6 & 3;
      param_2[8] = uVar6 >> 4 & 3;
      uVar7 = (uint)(auVar10[0] & 0xf);
      auVar8._0_8_ = CONCAT35(0,CONCAT14(auVar10[4],uVar7) & 0x3ffffffff);
      auVar8[8] = auVar10[8] & 1;
      auVar8._9_3_ = 0;
      auVar8[0xc] = auVar10[0xc] & 1;
      param_2[9] = uVar6 >> 4 & 1;
      param_2[10] = uVar6 >> 3 & 1;
      uVar1 = 2;
      if ((auVar10[4] & 3) != 3 && uVar7 != 0) {
        uVar1 = uVar2;
      }
      uVar3 = (ulong)uVar1;
      *(ulong *)(param_2 + 5) = (ulong)auVar8._8_5_;
      *(ulong *)(param_2 + 3) = auVar8._0_8_;
      param_2[0xb] = uVar6 & 3;
    }
  }
  return uVar3;
}

