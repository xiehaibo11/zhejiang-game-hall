
undefined8
FUN_01081400(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  if (param_5 < param_6) {
    uVar5 = *param_4;
    uVar3 = *param_3 & 0xffffffff00000000;
    iVar4 = (int)uVar5;
    uVar7 = uVar3 | *(uint *)(*param_3 + 7);
    uVar8 = (long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21;
    if ((iVar4 == *(int *)(param_2 + 0xa0)) && (uVar8 < param_6)) {
      return 0x101;
    }
    if ((int)*(uint *)(uVar7 + 3) >> 1 != 0) {
      if (uVar8 <= param_6) {
        param_6 = uVar8;
      }
      if ((uVar5 & 1) == 0) {
        dVar9 = (double)(iVar4 >> 1);
      }
      else {
        uVar8 = uVar5 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar8 + *(uint *)(uVar5 - 1)) != 0x42) {
          if ((iVar4 == *(int *)(param_2 + 0xa0)) && (param_5 < param_6)) {
            iVar6 = (int)param_5 << 2;
            do {
              iVar2 = *(int *)(uVar7 + 7 + (long)iVar6);
              if (iVar2 == (int)*(undefined8 *)(param_2 + 0xa8)) {
                return 0x101;
              }
              if (iVar2 == iVar4) {
                return 0x101;
              }
              param_5 = param_5 + 1;
              iVar6 = iVar6 + 4;
            } while (param_5 < param_6);
          }
          return 1;
        }
        dVar9 = *(double *)(uVar5 + 3);
        if ((*(short *)(uVar8 + *(uint *)(uVar5 - 1)) == 0x42) && (NAN(dVar9))) {
          return 1;
        }
      }
      if (param_5 < param_6) {
        iVar4 = (int)param_5 << 2;
        uVar1 = *(uint *)(uVar7 + 7 + (long)iVar4);
        uVar8 = (ulong)uVar1;
        if ((uVar1 & 1) != 0) goto LAB_010814a4;
LAB_0108147c:
        dVar10 = (double)((int)uVar8 >> 1);
        do {
          if (dVar10 == dVar9) {
            return 0x101;
          }
          do {
            param_5 = param_5 + 1;
            iVar4 = iVar4 + 4;
            if (param_6 <= param_5) {
              return 1;
            }
            uVar1 = *(uint *)(uVar7 + 7 + (long)iVar4);
            uVar8 = (ulong)uVar1;
            if ((uVar1 & 1) == 0) goto LAB_0108147c;
LAB_010814a4:
          } while (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar8) - 1)) != 0x42);
          dVar10 = *(double *)((uVar3 | uVar8) + 3);
        } while( true );
      }
    }
  }
  return 1;
}

