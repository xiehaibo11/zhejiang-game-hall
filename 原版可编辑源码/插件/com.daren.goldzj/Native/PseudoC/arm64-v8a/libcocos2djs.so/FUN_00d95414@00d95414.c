
long FUN_00d95414(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x17;
    (*(code *)*puVar6)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x47;
      (*(code *)*puVar6)(param_1);
    }
    if ((int)param_2[5] != 0) {
      uVar8 = *(uint *)((long)param_2 + 0x14);
      if (uVar8 != 0) {
        uVar9 = (ulong)*(uint *)((long)param_2 + 0x1c);
        uVar7 = (ulong)*(uint *)(param_2 + 3);
        if ((ulong)uVar8 <= (ulong)*(uint *)(param_2 + 3)) {
          uVar7 = (ulong)uVar8;
        }
        if ((long)(*(uint *)(param_2 + 4) - uVar9) <= (long)uVar7) {
          uVar7 = *(uint *)(param_2 + 4) - uVar9;
        }
        if ((long)(*(uint *)(param_2 + 1) - uVar9) <= (long)uVar7) {
          uVar7 = *(uint *)(param_2 + 1) - uVar9;
        }
        if (0 < (long)uVar7) {
          lVar13 = 0;
          lVar14 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
          lVar11 = lVar14 * uVar9;
          do {
            lVar12 = uVar7 * lVar14;
            (*(code *)param_2[8])
                      (param_1,param_2 + 7,*(undefined8 *)(*param_2 + lVar13 * 8),lVar11,lVar12);
            uVar7 = (ulong)*(uint *)(param_2 + 3);
            lVar13 = lVar13 + uVar7;
            if ((long)(ulong)*(uint *)((long)param_2 + 0x14) <= lVar13) break;
            uVar9 = (ulong)*(uint *)((long)param_2 + 0x14) - lVar13;
            if ((long)uVar9 <= (long)uVar7) {
              uVar7 = uVar9;
            }
            lVar2 = lVar13 + (ulong)*(uint *)((long)param_2 + 0x1c);
            uVar9 = (ulong)*(uint *)(param_2 + 4) - lVar2;
            if ((long)uVar9 <= (long)uVar7) {
              uVar7 = uVar9;
            }
            uVar9 = (ulong)*(uint *)(param_2 + 1) - lVar2;
            if ((long)uVar9 <= (long)uVar7) {
              uVar7 = uVar9;
            }
            lVar11 = lVar12 + lVar11;
          } while (0 < (long)uVar7);
        }
      }
      *(undefined4 *)(param_2 + 5) = 0;
    }
    if (*(uint *)((long)param_2 + 0x1c) < param_3) {
      uVar3 = *(uint *)((long)param_2 + 0x14);
      uVar7 = (ulong)uVar3;
      *(uint *)((long)param_2 + 0x1c) = param_3;
      uVar8 = param_3;
    }
    else {
      uVar3 = *(uint *)((long)param_2 + 0x14);
      uVar7 = (ulong)uVar3;
      uVar8 = (uint)(uVar1 - uVar7);
      if ((long)(uVar1 - uVar7) < 1) {
        uVar8 = 0;
      }
      *(uint *)((long)param_2 + 0x1c) = uVar8;
    }
    if (uVar3 != 0) {
      uVar10 = (ulong)uVar8;
      uVar9 = (ulong)*(uint *)(param_2 + 3);
      if (uVar7 <= *(uint *)(param_2 + 3)) {
        uVar9 = uVar7;
      }
      if ((long)(*(uint *)(param_2 + 4) - uVar10) <= (long)uVar9) {
        uVar9 = *(uint *)(param_2 + 4) - uVar10;
      }
      if ((long)(*(uint *)(param_2 + 1) - uVar10) <= (long)uVar9) {
        uVar9 = *(uint *)(param_2 + 1) - uVar10;
      }
      if (0 < (long)uVar9) {
        lVar13 = 0;
        lVar14 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
        lVar11 = lVar14 * uVar10;
        do {
          lVar12 = uVar9 * lVar14;
          (*(code *)param_2[7])
                    (param_1,param_2 + 7,*(undefined8 *)(*param_2 + lVar13 * 8),lVar11,lVar12);
          uVar9 = (ulong)*(uint *)(param_2 + 3);
          lVar13 = lVar13 + uVar9;
          if ((long)(ulong)*(uint *)((long)param_2 + 0x14) <= lVar13) break;
          uVar7 = (ulong)*(uint *)((long)param_2 + 0x14) - lVar13;
          if ((long)uVar7 <= (long)uVar9) {
            uVar9 = uVar7;
          }
          lVar2 = lVar13 + (ulong)*(uint *)((long)param_2 + 0x1c);
          uVar7 = (ulong)*(uint *)(param_2 + 4) - lVar2;
          if ((long)uVar7 <= (long)uVar9) {
            uVar9 = uVar7;
          }
          uVar7 = (ulong)*(uint *)(param_2 + 1) - lVar2;
          if ((long)uVar7 <= (long)uVar9) {
            uVar9 = uVar7;
          }
          lVar11 = lVar12 + lVar11;
        } while (0 < (long)uVar9);
      }
    }
  }
  uVar8 = *(uint *)(param_2 + 4);
  if (uVar1 <= uVar8) goto LAB_00d95740;
  if (uVar8 < param_3) {
    uVar8 = param_3;
    if (param_5 == 0) {
      bVar5 = false;
      iVar4 = *(int *)((long)param_2 + 0x24);
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x17;
      (*(code *)*puVar6)(param_1);
LAB_00d956bc:
      bVar5 = true;
      *(uint *)(param_2 + 4) = uVar1;
      iVar4 = *(int *)((long)param_2 + 0x24);
    }
  }
  else {
    if (param_5 != 0) goto LAB_00d956bc;
    bVar5 = false;
    iVar4 = *(int *)((long)param_2 + 0x24);
  }
  if (iVar4 == 0) {
    if (!bVar5) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x17;
      (*(code *)*puVar6)(param_1);
    }
  }
  else {
    uVar8 = uVar8 - *(int *)((long)param_2 + 0x1c);
    uVar1 = uVar1 - *(int *)((long)param_2 + 0x1c);
    if (uVar8 < uVar1) {
      uVar3 = *(uint *)((long)param_2 + 0xc);
      uVar7 = (ulong)uVar8;
      do {
        memset(*(void **)(*param_2 + uVar7 * 8),0,(ulong)uVar3 << 7);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
LAB_00d95740:
  if (param_5 != 0) {
    *(undefined4 *)(param_2 + 5) = 1;
  }
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}

