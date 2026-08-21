
undefined8 FUN_010fa7d4(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int local_68;
  int local_64;
  
  lVar8 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar4 = *(int *)(lVar8 + 0x4c);
    if (iVar4 == 0) {
      FUN_010fad24(param_1);
      iVar4 = *(int *)(lVar8 + 0x4c);
    }
    *(int *)(lVar8 + 0x4c) = iVar4 + -1;
  }
  if (*(int *)(lVar8 + 0x28) != -1) {
    lVar9 = param_1[0x46];
    uVar14 = (ulong)(int)param_1[0x44];
    lVar10 = *param_2;
    iVar4 = *(int *)(param_1[0x39] + 0x18);
    local_64 = 1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    local_68 = -1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    piVar5 = (int *)(lVar9 + uVar14 * 4);
    do {
      iVar13 = (int)uVar14;
      if (*(short *)(lVar10 + (long)*piVar5 * 2) != 0) break;
      uVar1 = iVar13 - 1;
      uVar14 = (ulong)uVar1;
      piVar5 = piVar5 + -1;
      iVar13 = 0;
    } while (uVar1 != 0);
    iVar6 = *(int *)((long)param_1 + 0x21c) + -1;
    do {
      lVar7 = *(long *)(lVar8 + (long)iVar4 * 8 + 0xd0) + (long)(iVar6 * 3);
      if ((iVar13 <= iVar6) && (iVar2 = FUN_010fae24(param_1,lVar7), iVar2 != 0)) {
        return 1;
      }
      lVar12 = (long)iVar6;
      lVar7 = lVar7 + 2;
      while( true ) {
        iVar6 = iVar6 + 1;
        lVar11 = (long)*(int *)(lVar9 + lVar12 * 4 + 4);
        if (*(short *)(lVar10 + lVar11 * 2) != 0) break;
        iVar2 = FUN_010fae24(param_1,lVar7 + -1);
        if (iVar2 != 0) {
          iVar2 = FUN_010fae24(param_1,lVar8 + 0x150);
          piVar5 = &local_64;
          if (iVar2 != 0) {
            piVar5 = &local_68;
          }
          sVar3 = (short)*piVar5;
          goto LAB_010fa948;
        }
        lVar12 = lVar12 + 1;
        lVar7 = lVar7 + 3;
        if ((int)param_1[0x44] <= lVar12) {
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x75;
          (**(code **)(lVar9 + 8))(param_1,0xffffffff);
          *(undefined4 *)(lVar8 + 0x28) = 0xffffffff;
          return 1;
        }
      }
      iVar2 = FUN_010fae24(param_1,lVar7);
      if (iVar2 != 0) {
        sVar3 = *(short *)(lVar10 + lVar11 * 2);
        piVar5 = &local_68;
        if (-1 < sVar3) {
          piVar5 = &local_64;
        }
        sVar3 = (short)*piVar5 + sVar3;
LAB_010fa948:
        *(short *)(lVar10 + lVar11 * 2) = sVar3;
      }
    } while (iVar6 < (int)param_1[0x44]);
  }
  return 1;
}

