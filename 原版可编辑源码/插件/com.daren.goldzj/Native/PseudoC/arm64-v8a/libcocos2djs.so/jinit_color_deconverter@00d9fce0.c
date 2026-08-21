
void jinit_color_deconverter(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x38);
  param_1[0x51] = (long)puVar3;
  *puVar3 = FUN_00da0688;
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xccU) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x30U) == 0) {
        if (uVar1 != 1) goto LAB_00da00f4;
        if ((int)param_1[7] != 1) goto LAB_00d9fd50;
      }
      else if ((int)param_1[7] != 4) goto LAB_00d9fd50;
    }
    else if ((int)param_1[7] != 3) goto LAB_00d9fd50;
  }
  else {
LAB_00da00f4:
    if ((int)param_1[7] < 1) {
LAB_00d9fd50:
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0xb;
      (*(code *)*puVar7)(param_1);
    }
  }
  if ((*(int *)((long)param_1 + 0x18c) != 0) && ((*(uint *)((long)param_1 + 0x3c) | 4) != 6)) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x1c;
    (*(code *)*puVar7)(param_1);
  }
  lVar18 = -0xb2f480;
  pcVar19 = "PNS1_12JSHeapBrokerEPPNS1_10ObjectDataENS0_6HandleINS0_15CallHandlerInfoEEE";
  lVar20 = 0x2c8c80;
  switch((int)param_1[8]) {
  case 1:
    *(undefined4 *)(param_1 + 0x12) = 1;
    switch(*(undefined4 *)((long)param_1 + 0x3c)) {
    case 1:
    case 3:
    case 7:
      puVar3[1] = FUN_00da068c;
      iVar2 = (int)param_1[7];
      if (1 < iVar2) {
        lVar20 = param_1[0x26];
        uVar12 = (long)iVar2 - 1;
        if ((uVar12 < 2) || (uVar13 = uVar12 & 0xfffffffffffffffe, uVar13 == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar12 | 1;
          puVar11 = (undefined4 *)(lVar20 + 0x94);
          uVar15 = uVar13;
          do {
            *puVar11 = 0;
            puVar11[0x18] = 0;
            uVar15 = uVar15 - 2;
            puVar11 = puVar11 + 0x30;
          } while (uVar15 != 0);
          if (uVar12 == uVar13) break;
        }
        puVar11 = (undefined4 *)(lVar20 + uVar9 * 0x60 + 0x34);
        do {
          uVar9 = uVar9 + 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 0x18;
        } while ((long)uVar9 < (long)iVar2);
      }
      break;
    case 2:
      if (*(int *)((long)param_1 + 0x18c) == 1) {
        puVar3[1] = FUN_00da0744;
      }
      else if (*(int *)((long)param_1 + 0x18c) == 0) {
        puVar3[1] = FUN_00da06a8;
      }
      else {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x1c;
        (*(code *)*puVar3)(param_1);
      }
      lVar17 = param_1[0x51];
      lVar18 = (**(code **)param_1[1])(param_1,1,0x1800);
      lVar22 = 1;
      lVar21 = 0;
      lVar20 = 0;
      *(long *)(lVar17 + 0x30) = lVar18;
      do {
        plVar5 = (long *)(lVar18 + lVar20);
        plVar5[1] = lVar22 * 0x4c8b;
        *plVar5 = lVar21 * 0x4c8b;
        lVar14 = lVar21 * 0x1d2f;
        lVar17 = lVar22 * 0x1d2f;
        plVar5[0x101] = lVar22 * 0x9646;
        plVar5[0x100] = lVar21 * 0x9646;
        lVar20 = lVar20 + 0x10;
        lVar21 = lVar21 + 2;
        lVar22 = lVar22 + 2;
        plVar5[0x201] = lVar17 + 0x8000;
        plVar5[0x200] = lVar14 + 0x8000;
      } while (lVar20 != 0x800);
      break;
    default:
      goto switchD_00d9febc_caseD_4;
    }
    goto LAB_00da00cc;
  case 2:
    *(undefined4 *)(param_1 + 0x12) = 3;
    switch(*(undefined4 *)((long)param_1 + 0x3c)) {
    case 1:
      pcVar8 = FUN_00da07f8;
      goto LAB_00da0178;
    case 2:
      if (*(int *)((long)param_1 + 0x18c) == 1) {
LAB_00da0170:
        pcVar8 = FUN_00da0b00;
      }
      else {
        if (*(int *)((long)param_1 + 0x18c) != 0) goto switchD_00d9febc_caseD_4;
LAB_00da0164:
        pcVar8 = FUN_00da09a4;
      }
LAB_00da0178:
      puVar3[1] = pcVar8;
      iVar2 = *(int *)((long)param_1 + 0x6c);
      goto joined_r0x00d9fef0;
    case 3:
      puVar3[1] = FUN_00da08e8;
      lVar17 = param_1[0x51];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar17 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar17 + 0x18) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
      *(undefined8 *)(lVar17 + 0x20) = uVar4;
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
      uVar12 = *(ulong *)(lVar17 + 0x10);
      uVar13 = *(ulong *)(lVar17 + 0x18);
      plVar10 = *(long **)(lVar17 + 0x20);
      *(long **)(lVar17 + 0x28) = plVar5;
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
        lVar17 = 0;
        lVar21 = -0xe25100;
        do {
          lVar22 = lVar17 + 1;
          *(int *)(uVar12 + lVar17 * 4) = (int)((ulong)lVar18 >> 0x10);
          *(int *)(uVar13 + lVar17 * 4) = (int)((ulong)lVar21 >> 0x10);
          plVar10[lVar17] = (long)pcVar19;
          plVar5[lVar17] = lVar20;
          lVar20 = lVar20 + -0x5819;
          pcVar19 = pcVar19 + -0xb6d2;
          lVar18 = lVar18 + 0x166e9;
          lVar17 = lVar22;
          lVar21 = lVar21 + 0x1c5a2;
        } while (lVar22 != 0x100);
      }
      else {
        lVar17 = -0x7f;
        lVar18 = -0x80;
        lVar20 = 0;
        do {
          *(ulong *)(uVar12 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x166e9 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x166e9 + 0x8000) >> 0x10));
          *(ulong *)(uVar13 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x1c5a2 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x1c5a2 + 0x8000) >> 0x10));
          plVar10[1] = lVar17 * -0xb6d2;
          *plVar10 = lVar18 * -0xb6d2;
          lVar20 = lVar20 + 8;
          plVar5[1] = lVar17 * -0x5819 + 0x8000;
          *plVar5 = lVar18 * -0x5819 + 0x8000;
          lVar18 = lVar18 + 2;
          lVar17 = lVar17 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar20 != 0x400);
      }
      break;
    default:
      goto switchD_00d9febc_caseD_4;
    case 7:
      puVar3[1] = FUN_00da08e8;
      lVar20 = param_1[0x51];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar20 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar20 + 0x18) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
      *(undefined8 *)(lVar20 + 0x20) = uVar4;
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
      uVar12 = *(ulong *)(lVar20 + 0x10);
      uVar13 = *(ulong *)(lVar20 + 0x18);
      plVar10 = *(long **)(lVar20 + 0x20);
      *(long **)(lVar20 + 0x28) = plVar5;
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
        lVar20 = -0x1666980;
        pcVar19 = "ratorBuilder20Int64AbsWithOverflowEv";
        puVar16 = &LAB_00b6d180;
        lVar18 = 0;
        lVar17 = -0x1c52200;
        do {
          lVar21 = lVar18 + 1;
          *(int *)(uVar12 + lVar18 * 4) = (int)((ulong)lVar20 >> 0x10);
          *(int *)(uVar13 + lVar18 * 4) = (int)((ulong)lVar17 >> 0x10);
          plVar10[lVar18] = (long)puVar16;
          plVar5[lVar18] = (long)pcVar19;
          pcVar19 = pcVar19 + -0xb033;
          puVar16 = puVar16 + -0x16da3;
          lVar20 = lVar20 + 0x2cdd3;
          lVar18 = lVar21;
          lVar17 = lVar17 + 0x38b44;
        } while (lVar21 != 0x100);
      }
      else {
        lVar17 = -0x7f;
        lVar18 = -0x80;
        lVar20 = 0;
        do {
          *(ulong *)(uVar12 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x2cdd3 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x2cdd3 + 0x8000) >> 0x10));
          *(ulong *)(uVar13 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x38b44 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x38b44 + 0x8000) >> 0x10));
          plVar10[1] = lVar17 * -0x16da3;
          *plVar10 = lVar18 * -0x16da3;
          lVar20 = lVar20 + 8;
          plVar5[1] = lVar17 * -0xb033 + 0x8000;
          *plVar5 = lVar18 * -0xb033 + 0x8000;
          lVar18 = lVar18 + 2;
          lVar17 = lVar17 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar20 != 0x400);
      }
    }
    goto LAB_00da00cc;
  default:
    if ((int)param_1[8] == *(int *)((long)param_1 + 0x3c)) {
      *(int *)(param_1 + 0x12) = (int)param_1[7];
      puVar3[1] = FUN_00da0d38;
      iVar2 = *(int *)((long)param_1 + 0x6c);
      goto joined_r0x00d9fef0;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x12) = 4;
    if (*(int *)((long)param_1 + 0x3c) == 4) {
      pcVar8 = FUN_00da0d38;
      goto LAB_00da0178;
    }
    if (*(int *)((long)param_1 + 0x3c) == 5) {
      puVar3[1] = FUN_00da0c68;
      lVar17 = param_1[0x51];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar17 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar17 + 0x18) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
      *(undefined8 *)(lVar17 + 0x20) = uVar4;
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
      uVar12 = *(ulong *)(lVar17 + 0x10);
      uVar13 = *(ulong *)(lVar17 + 0x18);
      plVar10 = *(long **)(lVar17 + 0x20);
      *(long **)(lVar17 + 0x28) = plVar5;
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
        lVar17 = 0;
        lVar21 = -0xe25100;
        do {
          lVar22 = lVar17 + 1;
          *(int *)(uVar12 + lVar17 * 4) = (int)((ulong)lVar18 >> 0x10);
          *(int *)(uVar13 + lVar17 * 4) = (int)((ulong)lVar21 >> 0x10);
          plVar10[lVar17] = (long)pcVar19;
          plVar5[lVar17] = lVar20;
          lVar20 = lVar20 + -0x5819;
          pcVar19 = pcVar19 + -0xb6d2;
          lVar18 = lVar18 + 0x166e9;
          lVar17 = lVar22;
          lVar21 = lVar21 + 0x1c5a2;
        } while (lVar22 != 0x100);
      }
      else {
        lVar17 = -0x7f;
        lVar18 = -0x80;
        lVar20 = 0;
        do {
          *(ulong *)(uVar12 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x166e9 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x166e9 + 0x8000) >> 0x10));
          *(ulong *)(uVar13 + lVar20) =
               CONCAT44((int)((ulong)(lVar17 * 0x1c5a2 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar18 * 0x1c5a2 + 0x8000) >> 0x10));
          plVar10[1] = lVar17 * -0xb6d2;
          *plVar10 = lVar18 * -0xb6d2;
          lVar20 = lVar20 + 8;
          plVar5[1] = lVar17 * -0x5819 + 0x8000;
          *plVar5 = lVar18 * -0x5819 + 0x8000;
          lVar18 = lVar18 + 2;
          lVar17 = lVar17 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar20 != 0x400);
      }
      goto LAB_00da00cc;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x12) = 3;
    if (*(int *)((long)param_1 + 0x3c) == 6) {
      if (*(int *)((long)param_1 + 0x18c) == 1) goto LAB_00da0170;
      if (*(int *)((long)param_1 + 0x18c) == 0) goto LAB_00da0164;
    }
  }
switchD_00d9febc_caseD_4:
  puVar3 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar3 + 5) = 0x1c;
  (*(code *)*puVar3)(param_1);
LAB_00da00cc:
  iVar2 = *(int *)((long)param_1 + 0x6c);
joined_r0x00d9fef0:
  if (iVar2 == 0) {
    uVar6 = (undefined4)param_1[0x12];
  }
  else {
    uVar6 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar6;
  return;
}

