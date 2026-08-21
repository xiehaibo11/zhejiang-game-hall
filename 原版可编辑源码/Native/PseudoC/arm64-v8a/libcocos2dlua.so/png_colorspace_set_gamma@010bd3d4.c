
void png_colorspace_set_gamma(long param_1,int *param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  double dVar4;
  
  if (param_3 - 0x10U < 0x2540be31) {
    uVar3 = *(ushort *)((long)param_2 + 0x4a);
    if (((*(uint *)(param_1 + 0x164) >> 0xf & 1) == 0) || (((uint)(int)(short)uVar3 >> 3 & 1) == 0))
    {
      if (-1 < (short)uVar3) {
                    /* try { // try from 010bd480 to 011bd50b has its CatchHandler @ 010bd480
                       catch() { ... } // from try @ 010bd480 with catch @ 010bd480
                       catch() { ... } // from try @ 010bd6b8 with catch @ 010bd480 */
        if (((uVar3 & 1) != 0) &&
           ((((*param_2 == 0 ||
              (dVar4 = (double)(long)(((double)*param_2 * 100000.0) / (double)param_3 + 0.5),
              2147483647.0 < dVar4)) || (dVar4 < -2147483648.0)) || (10000 < (int)dVar4 - 95000U))))
        {
          if (((uint)(int)(short)uVar3 >> 5 & 1) != 0) {
            pcVar1 = "gamma value does not match sRGB";
            uVar2 = 2;
            goto LAB_010bd43c;
          }
          png_chunk_report(param_1,"gamma value does not match libpng estimate",0);
        }
        *param_2 = param_3;
        *(ushort *)((long)param_2 + 0x4a) = uVar3 | 9;
      }
      return;
    }
    pcVar1 = "duplicate";
  }
  else {
    uVar3 = *(ushort *)((long)param_2 + 0x4a);
    pcVar1 = "gamma value out of range";
  }
  uVar2 = 1;
  *(ushort *)((long)param_2 + 0x4a) = uVar3 | 0x8000;
LAB_010bd43c:
  png_chunk_report(param_1,pcVar1,uVar2);
  return;
}

