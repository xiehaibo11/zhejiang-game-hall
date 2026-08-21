
/* duIntToCol(int, float*) */

void duIntToCol(int param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = CONCAT44((uint)param_1 >> 3,param_1) & 0x200000001;
  uVar1 = NEON_ushl(CONCAT44(param_1,param_1),0xfffffffffffffffe,4);
  uVar3 = NEON_scvtf(CONCAT44((byte)((byte)((uVar1 & 0x100000002) >> 0x20) | (byte)(uVar2 >> 0x20))
                              + 1,(byte)((byte)(uVar1 & 0x100000002) | (byte)uVar2) + 1),4);
  uVar4 = NEON_fmov(0x3f800000,4);
  *(ulong *)param_2 =
       CONCAT44(((float)((ulong)uVar3 >> 0x20) * -63.0) / 255.0 + (float)((ulong)uVar4 >> 0x20),
                ((float)uVar3 * -63.0) / 255.0 + (float)uVar4);
  param_2[2] = ((float)(((uint)param_1 >> 4 & 2 | (uint)uVar1 & 1) + 1) * -63.0) / 255.0 + 1.0;
  return;
}

