
/* v8::internal::compiler::InstructionSelector::TryMatch32x4Shuffle(unsigned char const*, unsigned
   char*) */

undefined8
v8::internal::compiler::InstructionSelector::TryMatch32x4Shuffle(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((((bVar1 & 3) == 0) && ((uint)param_1[1] - (uint)bVar1 == 1)) &&
      ((uint)param_1[2] - (uint)param_1[1] == 1)) && ((uint)param_1[3] - (uint)param_1[2] == 1)) {
    *param_2 = bVar1 >> 2;
    bVar1 = param_1[4];
    if ((((bVar1 & 3) == 0) && ((uint)param_1[5] - (uint)bVar1 == 1)) &&
       (((uint)param_1[6] - (uint)param_1[5] == 1 && ((uint)param_1[7] - (uint)param_1[6] == 1)))) {
      param_2[1] = bVar1 >> 2;
      bVar1 = param_1[8];
      if ((((bVar1 & 3) == 0) && ((uint)param_1[9] - (uint)bVar1 == 1)) &&
         (((uint)param_1[10] - (uint)param_1[9] == 1 &&
          ((uint)param_1[0xb] - (uint)param_1[10] == 1)))) {
        param_2[2] = bVar1 >> 2;
        bVar1 = param_1[0xc];
        if (((((bVar1 & 3) == 0) && ((uint)param_1[0xd] - (uint)bVar1 == 1)) &&
            ((uint)param_1[0xe] - (uint)param_1[0xd] == 1)) &&
           ((uint)param_1[0xf] - (uint)param_1[0xe] == 1)) {
          param_2[3] = bVar1 >> 2;
          return 1;
        }
      }
    }
  }
  return 0;
}

