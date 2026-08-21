
void FUN_01468528(ulong param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 in_x9;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long unaff_x26;
  undefined8 *unaff_x29;
  double dVar17;
  double dVar18;
  
  while( true ) {
    uVar11 = *(ulong *)((long)register0x00000008 + 0x20);
    uVar10 = *(undefined8 *)((long)register0x00000008 + 8);
    lVar16 = *(long *)((long)register0x00000008 + 0x40);
    lVar15 = *(long *)((long)register0x00000008 + 0x38);
    lVar6 = *(long *)((long)register0x00000008 + 0x30);
    uVar7 = *(undefined8 *)((long)register0x00000008 + 0x18);
    bVar3 = (param_1 & 1) == 0;
    iVar12 = (int)*(undefined8 *)(unaff_x26 + 0x140);
    uVar4 = (uint)in_x9;
    if ((uVar11 & 1) == 0) break;
    lVar5 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
    iVar14 = (int)lVar5;
    if (bVar3) {
      if (iVar14 != iVar12) {
        FUN_01468888();
        return;
      }
      dVar17 = *(double *)(uVar11 + 3);
      dVar18 = (double)((int)param_1 >> 1);
      goto LAB_014685d8;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    iVar13 = (int)lVar1;
    if (iVar14 == iVar12) {
      if (iVar13 != iVar14) {
        FUN_01468830();
        return;
      }
      dVar17 = *(double *)(uVar11 + 3);
      dVar18 = *(double *)(param_1 + 3);
      goto LAB_014685d8;
    }
    *unaff_x29 = *unaff_x29;
    unaff_x29[1] = unaff_x29[1];
    register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -10);
    unaff_x29[-1] = 0x1a;
    uVar2 = *(ushort *)(lVar5 + 7);
    unaff_x29[-2] = lVar16;
    unaff_x29[-3] = lVar15;
    unaff_x29[-4] = lVar6;
    unaff_x29[-5] = param_1;
    unaff_x29[-6] = uVar11;
    unaff_x29[-7] = uVar7;
    unaff_x29[-9] = uVar10;
    uVar9 = (undefined4)uVar10;
    if (uVar2 == 0x41) {
      if (iVar13 == iVar12) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        unaff_x29[-0xb] = 0;
        unaff_x29[-0xd] = uVar11;
        unaff_x29[-0xc] = 0x24;
        unaff_x29[-0xe] = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c00));
      }
      if (*(ushort *)(lVar1 + 7) == 0x41) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        unaff_x29[-0xb] = 0;
        unaff_x29[-0xd] = uVar11;
        unaff_x29[-0xc] = 0x24;
        unaff_x29[-0xe] = param_1;
        unaff_x29[-8] = (long)(int)(uVar4 | 0x80);
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf8));
      }
      if (*(ushort *)(lVar1 + 7) < 0x40) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        unaff_x29[-0xb] = 0;
        unaff_x29[-0xd] = uVar11;
        unaff_x29[-0xc] = 0x24;
        unaff_x29[-0xe] = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c08));
      }
      *(undefined4 *)(lVar6 + -0x20) = uVar9;
      param_1 = thunk_FUN_01349d90();
      in_x9 = 0x3fe;
    }
    else if (uVar2 < 0x40) {
      uVar2 = *(ushort *)(lVar1 + 7);
      if (uVar2 < 0x40) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        unaff_x29[-8] = (long)(int)(uVar4 | 0x30);
        uVar7 = FUN_01345d20(param_1,uVar11);
        lVar6 = unaff_x29[-4];
        uVar4 = (uint)unaff_x29[-8];
        lVar16 = unaff_x29[-2];
        lVar15 = unaff_x29[-3];
        goto LAB_01468608;
      }
      if (uVar2 == 0x41) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        unaff_x29[-0xb] = 0;
        unaff_x29[-0xd] = param_1;
        unaff_x29[-0xc] = 0x28;
        unaff_x29[-0xe] = uVar11;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c08));
      }
      if (uVar2 < 0xa9) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        uVar7 = thunk_FUN_01349d90(uVar11);
        *(int *)(unaff_x29[-4] + -0x20) = (int)unaff_x29[-9];
        unaff_x29[-6] = uVar7;
        param_1 = FUN_0134a180(unaff_x29[-5]);
        in_x9 = 0x3fe;
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -10);
      }
      else {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        param_1 = FUN_013498a0();
        in_x9 = 0x3fe;
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -10);
      }
    }
    else {
      if ((uVar2 == 0x43) && ((iVar13 == iVar12 || (*(short *)(lVar1 + 7) == 0x43)))) {
        lVar15 = (long)(int)(uVar4 | 0xe);
      }
      else {
        lVar15 = 0x3fe;
      }
      unaff_x29[-8] = lVar15;
      if (uVar2 < 0xa9) {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        uVar7 = FUN_0134a180();
        *(int *)(unaff_x29[-4] + -0x20) = (int)unaff_x29[-9];
        unaff_x29[-5] = uVar7;
        uVar7 = thunk_FUN_01349d90(unaff_x29[-6]);
        in_x9 = unaff_x29[-8];
        unaff_x29[-6] = uVar7;
        param_1 = unaff_x29[-5];
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -10);
      }
      else {
        *(undefined4 *)(lVar6 + -0x20) = uVar9;
        uVar7 = FUN_013498a0(uVar11);
        in_x9 = unaff_x29[-8];
        unaff_x29[-6] = uVar7;
        param_1 = unaff_x29[-5];
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -10);
      }
    }
  }
  if (bVar3) {
    uVar4 = uVar4 | 2;
    if ((int)uVar11 < (int)param_1) goto LAB_01468604;
  }
  else {
    if ((int)unaff_x26 + *(int *)(param_1 - 1) != iVar12) {
      FUN_014688f0();
      return;
    }
    dVar18 = *(double *)(param_1 + 3);
    dVar17 = (double)((int)uVar11 >> 1);
LAB_014685d8:
    uVar4 = uVar4 | 6;
    if (dVar17 < dVar18) {
LAB_01468604:
      uVar7 = *(undefined8 *)(unaff_x26 + 0xb8);
      goto LAB_01468608;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x26 + 0xc0);
LAB_01468608:
  lVar5 = *(long *)(lVar6 + -0x18);
  lVar6 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(lVar6 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar6 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar6 = *(long *)(unaff_x26 + 0xa0);
  }
  if ((int)lVar6 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = (ulong)*(uint *)(lVar5 + lVar15 + 5) * 4 + 0x1f;
    uVar8 = (int)unaff_x26 + *(int *)(lVar6 + lVar1);
    uVar4 = uVar8 | uVar4;
    if (uVar8 != uVar4) {
      *(uint *)(lVar6 + lVar1) = uVar4;
      *(undefined4 *)(lVar6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01468684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + (ulong)*(byte *)(lVar5 + lVar15 + 9) * 8))(uVar7);
  return;
}

