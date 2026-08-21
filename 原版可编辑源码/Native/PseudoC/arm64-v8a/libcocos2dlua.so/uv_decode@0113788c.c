
undefined8 uv_decode(double *param_1,double *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (0x3fa0 < param_3) {
    return 0xffffffff;
  }
                    /* try { // try from 011378a8 to 012379fb has its CatchHandler @ 011378a8
                       catch() { ... } // from try @ 011378a8 with catch @ 011378a8
                       catch() { ... } // from try @ 01137a08 with catch @ 011378a8 */
  uVar3 = 0;
  uVar5 = 0xa3;
  do {
    uVar4 = (ulong)uVar3;
    do {
      uVar3 = (uint)uVar4;
      if ((int)(uVar5 - uVar3) < 2) {
        sVar2 = *(short *)(&DAT_0149781e + (long)(int)uVar3 * 8);
        goto LAB_01137900;
      }
      uVar1 = (int)(uVar3 + uVar5) >> 1;
      uVar4 = (ulong)uVar1;
      sVar2 = *(short *)(&DAT_0149781e + (long)(int)uVar1 * 8);
    } while (0 < (int)(param_3 - (int)sVar2));
    uVar5 = uVar1;
  } while ((int)(param_3 - (int)sVar2) < 0);
LAB_01137900:
  *param_1 = ((double)(int)(param_3 - (int)sVar2) + 0.5) * 0.0035000001080334187 +
             (double)*(float *)(&DAT_01497818 + uVar4 * 8);
  *param_2 = ((double)(int)uVar4 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
  return 0;
}

