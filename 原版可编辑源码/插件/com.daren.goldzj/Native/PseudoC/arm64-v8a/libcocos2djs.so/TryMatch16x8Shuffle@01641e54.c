
/* v8::internal::compiler::InstructionSelector::TryMatch16x8Shuffle(unsigned char const*, unsigned
   char*) */

undefined8
v8::internal::compiler::InstructionSelector::TryMatch16x8Shuffle(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 & 1) == 0) && ((uint)param_1[1] - (uint)bVar1 == 1)) {
    *param_2 = bVar1 >> 1;
    bVar1 = param_1[2];
    if (((bVar1 & 1) == 0) && ((uint)param_1[3] - (uint)bVar1 == 1)) {
      param_2[1] = bVar1 >> 1;
      bVar1 = param_1[4];
      if (((bVar1 & 1) == 0) && ((uint)param_1[5] - (uint)bVar1 == 1)) {
        param_2[2] = bVar1 >> 1;
        bVar1 = param_1[6];
        if (((bVar1 & 1) == 0) && ((uint)param_1[7] - (uint)bVar1 == 1)) {
          param_2[3] = bVar1 >> 1;
          bVar1 = param_1[8];
          if (((bVar1 & 1) == 0) && ((uint)param_1[9] - (uint)bVar1 == 1)) {
            param_2[4] = bVar1 >> 1;
            bVar1 = param_1[10];
            if (((bVar1 & 1) == 0) && ((uint)param_1[0xb] - (uint)bVar1 == 1)) {
              param_2[5] = bVar1 >> 1;
              bVar1 = param_1[0xc];
              if (((bVar1 & 1) == 0) && ((uint)param_1[0xd] - (uint)bVar1 == 1)) {
                param_2[6] = bVar1 >> 1;
                bVar1 = param_1[0xe];
                if (((bVar1 & 1) == 0) && ((uint)param_1[0xf] - (uint)bVar1 == 1)) {
                  param_2[7] = bVar1 >> 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

