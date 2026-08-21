
/* duIntToCol(int, int) */

uint duIntToCol(int param_1,int param_2)

{
  return (((uint)param_1 >> 2 & 2 | (uint)param_1 >> 1 & 1) * 0x3f | param_2 << 0x18) + 0x3f |
         ((uint)param_1 >> 3 & 2 | (uint)param_1 >> 2 & 1) * 0x3f00 + 0x3f00 |
         ((uint)param_1 >> 4 & 2 | param_1 & 1U) * 0x3f0000 + 0x3f0000;
}

