
undefined1  [16] FUN_00b7a040(void)

{
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar1 [16];
  undefined1 in_q6 [16];
  undefined1 in_q7 [16];
  
  auVar1[1] = in_q6[1] ^ in_q7[9];
  auVar1[0] = in_q6[0] ^ in_q7[8];
  auVar1[2] = in_q6[2] ^ in_q7[10];
  auVar1[3] = in_q6[3] ^ in_q7[0xb];
  bVar2 = in_q7[0xc];
  auVar1[4] = in_q6[4] ^ bVar2;
  bVar3 = in_q7[0xd];
  auVar1[5] = in_q6[5] ^ bVar3;
  bVar4 = in_q7[0xe];
  auVar1[6] = in_q6[6] ^ bVar4;
  bVar5 = in_q7[0xf];
  auVar1[7] = in_q6[7] ^ bVar5;
  auVar1[9] = in_q6[9] ^ bVar3;
  auVar1[8] = in_q6[8] ^ bVar2;
  auVar1[10] = in_q6[10] ^ bVar4;
  auVar1[0xb] = in_q6[0xb] ^ bVar5;
  auVar1[0xc] = in_q6[0xc] ^ in_q6[8] ^ bVar2;
  auVar1[0xd] = in_q6[0xd] ^ in_q6[9] ^ bVar3;
  auVar1[0xe] = in_q6[0xe] ^ in_q6[10] ^ bVar4;
  auVar1[0xf] = in_q6[0xf] ^ in_q6[0xb] ^ bVar5;
  return auVar1;
}

