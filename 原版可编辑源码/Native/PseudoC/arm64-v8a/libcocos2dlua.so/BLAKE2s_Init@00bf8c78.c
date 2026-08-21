
undefined8 BLAKE2s_Init(undefined8 *param_1)

{
  memset(param_1 + 4,0,0x58);
  param_1[1] = 0xa54ff53a3c6ef372;
  *param_1 = 0xbb67ae856b08e647;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[2] = 0x9b05688c510e527f;
  return 1;
}

