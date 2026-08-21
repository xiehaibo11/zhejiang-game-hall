
undefined8
FUN_0108e730(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  
  if (param_5 < param_6) {
    uVar4 = *param_4;
    iVar3 = (int)uVar4;
    uVar2 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
    uVar6 = (long)((ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21;
    if ((iVar3 == *(int *)(param_2 + 0xa0)) && (uVar6 < param_6)) {
      return 0x101;
    }
    if ((int)*(uint *)(uVar2 + 3) >> 1 != 0) {
      if (uVar6 <= param_6) {
        param_6 = uVar6;
      }
      iVar1 = (int)param_5;
      if ((uVar4 & 1) == 0) {
        dVar7 = (double)(iVar3 >> 1);
      }
      else {
        uVar6 = uVar4 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) != 0x42) {
          if ((iVar3 == *(int *)(param_2 + 0xa0)) && (param_5 < param_6)) {
            uVar5 = iVar1 << 3 | 7;
            do {
              if (*(long *)(uVar2 + (long)(int)uVar5) == -0x8000000080001) {
                return 0x101;
              }
              param_5 = param_5 + 1;
              uVar5 = uVar5 + 8;
            } while (param_5 < param_6);
          }
          return 1;
        }
        dVar7 = *(double *)(uVar4 + 3);
        if ((*(short *)(uVar6 + *(uint *)(uVar4 - 1)) == 0x42) && (NAN(dVar7))) {
          if (param_6 <= param_5) {
            return 1;
          }
          uVar5 = iVar1 << 3 | 7;
          while ((*(long *)(uVar2 + (long)(int)uVar5) == -0x8000000080001 ||
                 (!NAN(*(double *)((long)(int)uVar5 + uVar2))))) {
            param_5 = param_5 + 1;
            uVar5 = uVar5 + 8;
            if (param_6 <= param_5) {
              return 1;
            }
          }
          return 0x101;
        }
      }
      if (param_5 < param_6) {
        uVar5 = iVar1 << 3 | 7;
        do {
          if ((*(long *)(uVar2 + (long)(int)uVar5) != -0x8000000080001) &&
             (*(double *)((long)(int)uVar5 + uVar2) == dVar7)) {
            return 0x101;
          }
          param_5 = param_5 + 1;
          uVar5 = uVar5 + 8;
        } while (param_5 < param_6);
      }
    }
  }
  return 1;
}

