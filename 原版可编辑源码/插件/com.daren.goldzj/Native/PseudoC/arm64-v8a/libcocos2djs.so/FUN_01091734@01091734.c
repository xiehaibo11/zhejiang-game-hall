
undefined8
FUN_01091734(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar1 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  uVar2 = (long)((ulong)*(uint *)(uVar1 + 3) << 0x20) >> 0x21;
  if (uVar2 <= param_6) {
    param_6 = uVar2;
  }
  if (param_5 < param_6) {
    uVar2 = *param_4;
    if ((uVar2 & 1) == 0) {
      dVar5 = (double)((int)uVar2 >> 1);
    }
    else {
      uVar4 = uVar2 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x42) {
        return 1;
      }
      dVar5 = *(double *)(uVar2 + 3);
      if ((*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0x42) && (NAN(dVar5))) {
        return 1;
      }
    }
    uVar3 = (int)param_5 << 3 | 7;
    do {
      if ((*(long *)(uVar1 + (long)(int)uVar3) != -0x8000000080001) &&
         (*(double *)((long)(int)uVar3 + uVar1) == dVar5)) {
        return 1;
      }
      param_5 = param_5 + 1;
      uVar3 = uVar3 + 8;
    } while (param_5 < param_6);
  }
  return 1;
}

