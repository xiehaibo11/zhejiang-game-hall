
undefined8 FUN_00c22184(long param_1,uint *param_2,double *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = uVar1 >> 0x10 & 0x7f;
  if (uVar3 == 2) {
    uVar4 = (uint)(ushort)*param_4;
  }
  else if (uVar3 == 4) {
    uVar4 = *param_4;
  }
  else {
    uVar4 = 0;
    if (uVar3 == 1) {
      uVar4 = (uint)(byte)*param_4;
    }
  }
  uVar2 = uVar1 >> 8 & 0x7f;
  if (uVar3 * 8 < uVar2 + (uVar1 & 0x7f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(*(undefined8 *)(param_1 + 0x10),0xe2f);
  }
  if ((uVar1 >> 0x1b & 1) == 0) {
    uVar2 = 0x20 - uVar2;
    uVar4 = uVar4 << (ulong)(uVar2 - (uVar1 & 0x7f) & 0x1f);
    if ((uVar1 >> 0x17 & 1) == 0) {
      *(uint *)((long)param_3 + 4) = 0xfff90000;
      *(int *)param_3 = (int)uVar4 >> (uVar2 & 0x1f);
      return 0;
    }
    uVar4 = uVar4 >> (ulong)(uVar2 & 0x1f);
    if (-1 < (int)uVar4) {
      *(uint *)((long)param_3 + 4) = 0xfff90000;
      *(uint *)param_3 = uVar4;
      return 0;
    }
    *param_3 = (double)uVar4;
  }
  else {
    *param_3 = (double)~((ulong)((uVar4 >> (ulong)(uVar1 & 0x1f) & 1) + 1) << 0x2f);
  }
  return 0;
}

