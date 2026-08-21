
undefined8 FUN_00e6f304(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long local_240 [66];
  
  uVar5 = param_1[1];
  local_240[0] = *param_2 * 4;
  local_240[1] = param_2[1] * 4;
  local_240[2] = *param_1 << 2;
  local_240[3] = uVar5 << 2;
  local_240[5] = *(long *)(param_3 + 0x150);
  local_240[4] = *(long *)(param_3 + 0x148);
  iVar6 = *(int *)(param_3 + 0x114);
  iVar10 = (int)((ulong)param_2[1] >> 6);
  iVar11 = (int)((ulong)local_240[5] >> 8);
  if ((((iVar10 < iVar6) || ((int)(uVar5 >> 6) < iVar6)) || (iVar11 < iVar6)) &&
     (((iVar6 = *(int *)(param_3 + 0x110), iVar6 <= iVar10 || (iVar6 <= (int)(uVar5 >> 6))) ||
      (iVar6 <= iVar11)))) {
    uVar7 = *(long *)(param_3 + 0x148) + local_240[0] + *param_1 * -8;
    uVar4 = -uVar7;
    if (-1 < (long)uVar7) {
      uVar4 = uVar7;
    }
    uVar5 = local_240[5] + local_240[1] + uVar5 * -8;
    uVar7 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar7 = uVar5;
    }
    if ((long)uVar7 <= (long)uVar4) {
      uVar7 = uVar4;
    }
    uVar12 = 1;
    plVar8 = local_240;
    if (0x40 < (long)uVar7) {
      do {
        uVar12 = uVar12 << 1;
        bVar1 = 0x103 < uVar7;
        plVar8 = local_240;
        uVar7 = uVar7 >> 2;
      } while (bVar1);
    }
    do {
      if ((uVar12 & 1) == 0) {
        uVar9 = 1;
        plVar13 = plVar8;
        do {
          plVar8 = plVar13 + 4;
          uVar9 = uVar9 << 1;
          plVar13[8] = *plVar8;
          lVar2 = plVar13[2] + *plVar8;
          lVar3 = *plVar13 + plVar13[2];
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          plVar13[6] = lVar2 >> 1;
          lVar2 = (lVar3 >> 1) + (lVar2 >> 1);
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          plVar13[2] = lVar3 >> 1;
          *plVar8 = lVar2 >> 1;
          plVar13[9] = plVar13[5];
          lVar2 = plVar13[3] + plVar13[5];
          lVar3 = plVar13[1] + plVar13[3];
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          plVar13[7] = lVar2 >> 1;
          lVar2 = (lVar3 >> 1) + (lVar2 >> 1);
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          plVar13[3] = lVar3 >> 1;
          plVar13[5] = lVar2 >> 1;
          plVar13 = plVar8;
        } while ((uVar9 & uVar12) == 0);
      }
      FUN_00e6f8c0(param_3,*plVar8,plVar8[1]);
      uVar12 = uVar12 - 1;
      plVar8 = plVar8 + -4;
    } while (uVar12 != 0);
  }
  else {
    *(long *)(param_3 + 0x148) = local_240[0];
    *(long *)(param_3 + 0x150) = local_240[1];
  }
  return 0;
}

