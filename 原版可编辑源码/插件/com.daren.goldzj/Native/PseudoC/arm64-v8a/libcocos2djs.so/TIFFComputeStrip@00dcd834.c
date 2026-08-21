
uint TIFFComputeStrip(long param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x84) != 0) {
    uVar1 = param_2 / *(uint *)(param_1 + 0x84);
  }
  if (*(short *)(param_1 + 0xaa) == 2) {
    if (*(ushort *)(param_1 + 0x82) <= param_3) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFComputeStrip",
                   "%lu: Sample out of range, max %lu",param_3);
      return 0;
    }
    uVar1 = uVar1 + *(int *)(param_1 + 0xe0) * (uint)param_3;
  }
  return uVar1;
}

