
void FUN_00da451c(long param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar18 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar18 + 0x60) == 0) {
    iVar7 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))
                      (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x78) * 8 + 0x68));
    if (iVar7 == 0) {
      return;
    }
    *(undefined4 *)(lVar18 + 0x60) = 1;
    *(int *)(lVar18 + 0x84) = *(int *)(lVar18 + 0x84) + 1;
  }
  iVar7 = *(int *)(lVar18 + 0x7c);
  if (iVar7 == 2) {
    (**(code **)(*(long *)(param_1 + 600) + 8))
              (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x78) * 8 + 0x68),
               lVar18 + 100,*(undefined4 *)(lVar18 + 0x80),param_2,param_3,param_4);
    if (*(uint *)(lVar18 + 100) < *(uint *)(lVar18 + 0x80)) {
      return;
    }
    *(undefined4 *)(lVar18 + 0x7c) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  else {
    if (iVar7 == 1) goto LAB_00da46d4;
    if (iVar7 != 0) {
      return;
    }
  }
  *(undefined4 *)(lVar18 + 100) = 0;
  iVar7 = *(int *)(param_1 + 0x1ac);
  *(int *)(lVar18 + 0x80) = iVar7 + -1;
  if ((*(int *)(lVar18 + 0x84) == *(int *)(param_1 + 0x1b0)) &&
     (iVar1 = *(int *)(param_1 + 0x38), 0 < iVar1)) {
    lVar12 = *(long *)(param_1 + 0x248);
    lVar13 = *(long *)(param_1 + 0x130);
    lVar14 = 0;
    do {
      uVar2 = *(int *)(lVar13 + 0x28) * *(int *)(lVar13 + 0xc);
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = *(uint *)(lVar13 + 0x30) / uVar2;
      }
      uVar6 = *(uint *)(lVar13 + 0x30) - uVar6 * uVar2;
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = (int)uVar2 / iVar7;
      }
      if (uVar6 != 0) {
        uVar2 = uVar6;
      }
      if (lVar14 == 0) {
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = (int)(uVar2 - 1) / iVar4;
        }
        *(int *)(lVar12 + 0x80) = iVar5 + 1;
      }
      if (0 < iVar4) {
        lVar16 = 0;
        lVar17 = *(long *)(*(long *)(lVar12 + (long)*(int *)(lVar12 + 0x78) * 8 + 0x68) + lVar14 * 8
                          );
        do {
          *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + lVar16 * 8) =
               *(undefined8 *)(lVar17 + ((long)(int)uVar2 + -1) * 8);
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar4 << 1);
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x60;
    } while (lVar14 != iVar1);
  }
  *(undefined4 *)(lVar18 + 0x7c) = 1;
LAB_00da46d4:
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,*(undefined8 *)(lVar18 + (long)*(int *)(lVar18 + 0x78) * 8 + 0x68),lVar18 + 100
             ,*(undefined4 *)(lVar18 + 0x80),param_2,param_3,param_4);
  if (*(uint *)(lVar18 + 0x80) <= *(uint *)(lVar18 + 100)) {
    if (*(int *)(lVar18 + 0x84) == 1) {
      iVar1 = *(int *)(param_1 + 0x38);
      iVar7 = *(int *)(param_1 + 0x1ac);
      if (0 < iVar1) {
        lVar12 = *(long *)(param_1 + 0x248);
        lVar13 = *(long *)(param_1 + 0x130);
        lVar14 = 0;
        do {
          uVar2 = 0;
          if (iVar7 != 0) {
            uVar2 = (*(int *)(lVar13 + 0x28) * *(int *)(lVar13 + 0xc)) / iVar7;
          }
          if (0 < (int)uVar2) {
            uVar6 = uVar2 * (iVar7 + 1);
            uVar3 = uVar2 * (iVar7 + 2);
            uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            lVar16 = *(long *)(*(long *)(lVar12 + 0x70) + lVar14 * 8);
            lVar17 = *(long *)(*(long *)(lVar12 + 0x68) + lVar14 * 8);
            uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
            uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
            uVar15 = 0;
            do {
              lVar11 = uVar15 * 8;
              uVar15 = uVar15 + 1;
              *(undefined8 *)((lVar17 - uVar10) + lVar11) = *(undefined8 *)(lVar17 + uVar9 + lVar11)
              ;
              *(undefined8 *)((lVar16 - uVar10) + lVar11) = *(undefined8 *)(lVar16 + uVar9 + lVar11)
              ;
              *(undefined8 *)(lVar17 + uVar8 + lVar11) = *(undefined8 *)(lVar17 + lVar11);
              *(undefined8 *)(lVar16 + uVar8 + lVar11) = *(undefined8 *)(lVar16 + lVar11);
            } while (uVar2 != uVar15);
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x60;
        } while (lVar14 != iVar1);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1ac);
    }
    *(undefined4 *)(lVar18 + 0x60) = 0;
    *(int *)(lVar18 + 100) = iVar7 + 1;
    *(uint *)(lVar18 + 0x78) = *(uint *)(lVar18 + 0x78) ^ 1;
    *(undefined4 *)(lVar18 + 0x7c) = 2;
    *(int *)(lVar18 + 0x80) = iVar7 + 2;
  }
  return;
}

