
void FUN_00b7a0f0(undefined1 param_1 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte in_b17;
  byte in_register_00005221;
  byte in_register_00005222;
  byte in_register_00005223;
  byte in_register_00005224;
  byte in_register_00005225;
  byte in_register_00005226;
  byte in_register_00005227;
  byte in_register_00005228;
  byte in_register_00005229;
  byte in_register_0000522a;
  byte in_register_0000522b;
  byte in_register_0000522c;
  byte in_register_0000522d;
  byte in_register_0000522e;
  byte in_register_0000522f;
  undefined1 in_q20 [16];
  undefined1 in_q21 [16];
  
  auVar2[0] = param_1[0] >> 4;
  auVar2[1] = param_1[1] >> 4;
  auVar2[2] = param_1[2] >> 4;
  auVar2[3] = param_1[3] >> 4;
  auVar2[4] = param_1[4] >> 4;
  auVar2[5] = param_1[5] >> 4;
  auVar2[6] = param_1[6] >> 4;
  auVar2[7] = param_1[7] >> 4;
  auVar2[8] = param_1[8] >> 4;
  auVar2[9] = param_1[9] >> 4;
  auVar2[10] = param_1[10] >> 4;
  auVar2[0xb] = param_1[0xb] >> 4;
  auVar2[0xc] = param_1[0xc] >> 4;
  auVar2[0xd] = param_1[0xd] >> 4;
  auVar2[0xe] = param_1[0xe] >> 4;
  auVar2[0xf] = param_1[0xf] >> 4;
  auVar1[1] = param_1[1] & in_register_00005221;
  auVar1[0] = param_1[0] & in_b17;
  auVar1[2] = param_1[2] & in_register_00005222;
  auVar1[3] = param_1[3] & in_register_00005223;
  auVar1[4] = param_1[4] & in_register_00005224;
  auVar1[5] = param_1[5] & in_register_00005225;
  auVar1[6] = param_1[6] & in_register_00005226;
  auVar1[7] = param_1[7] & in_register_00005227;
  auVar1[8] = param_1[8] & in_register_00005228;
  auVar1[9] = param_1[9] & in_register_00005229;
  auVar1[10] = param_1[10] & in_register_0000522a;
  auVar1[0xb] = param_1[0xb] & in_register_0000522b;
  auVar1[0xc] = param_1[0xc] & in_register_0000522c;
  auVar1[0xd] = param_1[0xd] & in_register_0000522d;
  auVar1[0xe] = param_1[0xe] & in_register_0000522e;
  auVar1[0xf] = param_1[0xf] & in_register_0000522f;
  a64_TBL(ZEXT816(0),in_q20,auVar1);
  a64_TBL(ZEXT816(0),in_q21,auVar2);
  return;
}

