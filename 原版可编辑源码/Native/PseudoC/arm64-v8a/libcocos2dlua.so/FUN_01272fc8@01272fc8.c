
/* WARNING: Removing unreachable block (ram,0x012731a0) */
/* WARNING: Removing unreachable block (ram,0x012731a4) */

undefined8 FUN_01272fc8(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar5 = DAT_01795c50;
  piVar11 = (int *)param_1[2];
  uVar12 = *param_1;
  if ((0x2f < param_2) && ((int)param_3[5] != 0)) {
    uVar8 = FUN_01274128(param_1,&DAT_01781000,param_3,(int)param_3[5],param_1[4],param_1[5]);
    return uVar8;
  }
  if (param_2 < 0x1a) {
    return 0xffffffff;
  }
  uVar18 = (ulong)(ushort)param_1[3];
  uVar15 = 0;
  uVar16 = 0;
  bVar4 = false;
  piVar17 = (int *)0x0;
  piVar13 = (int *)0x0;
  while (uVar18 = uVar18 - 1, uVar18 != 0xffffffffffffffff) {
    iVar2 = *piVar11;
    piVar14 = piVar13;
    if (iVar2 == 1) {
      uVar10 = uVar12 + *(long *)(piVar11 + 4);
      if ((uVar10 <= *param_3) && (*param_3 < uVar10 + *(long *)(piVar11 + 10))) {
        bVar4 = true;
        uVar15 = uVar10 + *(long *)(piVar11 + 10);
        uVar16 = uVar10;
      }
    }
    else {
      piVar14 = piVar11;
      if ((iVar2 != 0x6474e550) && (piVar14 = piVar13, iVar2 == 2)) {
        piVar17 = piVar11;
      }
    }
    piVar11 = piVar11 + 0xe;
    piVar13 = piVar14;
  }
  if (bVar4) {
    if (0x2f < param_2) {
      DAT_01795c50[2] = uVar12;
      puVar5[3] = (ulong)piVar13;
      puVar5[4] = (ulong)piVar17;
      *puVar5 = uVar16;
      puVar5[1] = uVar15;
    }
    if (piVar13 == (int *)0x0) {
      return 0;
    }
    lVar1 = uVar12 + *(long *)(piVar13 + 4);
    if (*(char *)(uVar12 + *(long *)(piVar13 + 4)) != '\x01') {
      return 1;
    }
    uVar7 = *(undefined1 *)(lVar1 + 1);
    uVar8 = FUN_01272b7c(uVar7,param_3);
    uVar8 = FUN_01272bdc(uVar7,uVar8,lVar1 + 4,&uStack_40);
    cVar3 = *(char *)(lVar1 + 2);
    if ((cVar3 != -1) && (*(char *)(lVar1 + 3) == ';')) {
      uVar9 = FUN_01272b7c(cVar3,param_3);
      piVar11 = (int *)FUN_01272bdc(cVar3,uVar9,uVar8,&uStack_38);
      if (uStack_38 == 0) {
        return 1;
      }
      if (((ulong)piVar11 & 3) == 0) {
        uVar12 = *param_3;
        if (uVar12 < (ulong)(lVar1 + *piVar11)) {
          return 1;
        }
        uVar15 = uStack_38 - 1;
        if (uVar12 < (ulong)(lVar1 + piVar11[uVar15 * 2])) {
          uVar16 = 0;
          uVar18 = uVar15;
          do {
            uVar10 = uVar18;
            if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar15 = uVar10 + uVar16 >> 1;
            uVar18 = uVar15;
          } while ((uVar12 < (ulong)(lVar1 + piVar11[uVar15 * 2])) ||
                  (uVar16 = uVar15 + 1, uVar18 = uVar10,
                  (ulong)(lVar1 + piVar11[uVar15 * 2 + 2]) <= uVar12));
        }
        uVar12 = lVar1 + piVar11[uVar15 * 2 + 1];
        bVar6 = FUN_01272fb8(uVar12);
        uVar16 = FUN_01272abc(bVar6);
        FUN_01272bdc(bVar6 & 0xf,0,uVar12 + (uVar16 & 0xffffffff) + 8,&lStack_30);
        iVar2 = piVar11[uVar15 * 2];
        if (*param_3 < (ulong)(lVar1 + iVar2 + lStack_30)) {
          param_3[4] = uVar12;
        }
        param_3[3] = lVar1 + iVar2;
        return 1;
      }
    }
    uStack_28 = param_3[1];
    uStack_20 = param_3[2];
    uStack_10 = 4;
    lStack_30 = 0;
    uStack_18 = uStack_40;
    uVar12 = FUN_01272e58(&lStack_30,uStack_40,*param_3);
    param_3[4] = uVar12;
    if (uVar12 != 0) {
      uVar7 = FUN_01272fb8();
      uVar8 = FUN_01272b7c(uVar7,param_3);
      FUN_01272bdc(uVar7,uVar8,param_3[4] + 8,&uStack_38);
      param_3[3] = uStack_38;
    }
    return 1;
  }
  return 0;
}

