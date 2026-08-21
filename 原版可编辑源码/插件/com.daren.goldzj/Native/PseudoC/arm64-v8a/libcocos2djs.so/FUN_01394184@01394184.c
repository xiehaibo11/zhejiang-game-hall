
undefined8 FUN_01394184(ulong param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x26;
  undefined8 uVar9;
  undefined8 *unaff_x29;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  while( true ) {
    uVar5 = *(ulong *)((long)register0x00000008 + 8);
    uVar9 = *(undefined8 *)register0x00000008;
    bVar4 = (param_1 & 1) == 0;
    uVar7 = *(undefined8 *)(unaff_x26 + 0x140);
    iVar6 = (int)uVar7;
    if ((uVar5 & 1) == 0) break;
    lVar1 = unaff_x26 + (ulong)*(uint *)(uVar5 - 1);
    iVar8 = (int)lVar1;
    if (bVar4) {
      if (iVar8 != iVar6) {
        uVar7 = FUN_01394368();
        return uVar7;
      }
      dVar10 = *(double *)(uVar5 + 3);
      dVar11 = (double)((int)param_1 >> 1);
      goto LAB_01394218;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if (iVar8 == iVar6) {
      if ((int)lVar2 != iVar8) {
        uVar7 = FUN_01394334();
        return uVar7;
      }
      dVar10 = *(double *)(uVar5 + 3);
      dVar11 = *(double *)(param_1 + 3);
      goto LAB_01394218;
    }
    *unaff_x29 = *unaff_x29;
    unaff_x29[1] = unaff_x29[1];
    register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -4);
    unaff_x29[-1] = 0x1a;
    uVar3 = *(ushort *)(lVar1 + 7);
    unaff_x29[-2] = param_1;
    unaff_x29[-3] = uVar5;
    unaff_x29[-4] = uVar9;
    if (uVar3 == 0x41) {
      if ((int)lVar2 == iVar6) {
        unaff_x29[-5] = 0;
        unaff_x29[-7] = uVar5;
        unaff_x29[-6] = 0x26;
        unaff_x29[-8] = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c00),0x26,*(undefined8 *)(unaff_x26 + 0x1c00))
        ;
      }
      if (*(ushort *)(lVar2 + 7) == 0x41) {
        unaff_x29[-5] = 0;
        unaff_x29[-7] = uVar5;
        unaff_x29[-6] = 0x26;
        unaff_x29[-8] = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf8));
      }
      if (*(ushort *)(lVar2 + 7) < 0x40) {
        unaff_x29[-5] = 0;
        unaff_x29[-7] = uVar5;
        unaff_x29[-6] = 0x26;
        unaff_x29[-8] = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c08));
      }
      param_1 = thunk_FUN_01349d90();
    }
    else if (uVar3 < 0x40) {
      uVar3 = *(ushort *)(lVar2 + 7);
      if (uVar3 < 0x40) {
        uVar7 = FUN_01345e80();
        return uVar7;
      }
      if (uVar3 == 0x41) {
        unaff_x29[-5] = 0;
        unaff_x29[-7] = param_1;
        unaff_x29[-6] = 0x2a;
        unaff_x29[-8] = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c08),0x2a,3);
      }
      if (uVar3 < 0xa9) {
        uVar7 = thunk_FUN_01349d90(uVar5,uVar5,uVar7,param_1,uVar9);
        unaff_x29[-3] = uVar7;
        param_1 = FUN_0134a180(unaff_x29[-2],uVar7);
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -4);
      }
      else {
        param_1 = FUN_013498a0();
        register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -4);
      }
    }
    else if (uVar3 < 0xa9) {
      auVar12 = FUN_0134a180();
      unaff_x29[-2] = auVar12._0_8_;
      uVar7 = thunk_FUN_01349d90(unaff_x29[-3],auVar12._8_8_,auVar12._0_8_);
      unaff_x29[-3] = uVar7;
      param_1 = unaff_x29[-2];
      register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -4);
    }
    else {
      uVar7 = FUN_013498a0(uVar5,uVar5,uVar7,param_1,uVar9);
      unaff_x29[-3] = uVar7;
      param_1 = unaff_x29[-2];
      register0x00000008 = (BADSPACEBASE *)(unaff_x29 + -4);
    }
  }
  if (bVar4) {
    if ((int)uVar5 <= (int)param_1) goto LAB_01394234;
  }
  else {
    if ((int)unaff_x26 + *(int *)(param_1 - 1) != iVar6) {
      uVar7 = FUN_013943ac();
      return uVar7;
    }
    dVar11 = *(double *)(param_1 + 3);
    dVar10 = (double)((int)uVar5 >> 1);
LAB_01394218:
    if (dVar10 <= dVar11) {
LAB_01394234:
      return *(undefined8 *)(unaff_x26 + 0xb8);
    }
  }
  return *(undefined8 *)(unaff_x26 + 0xc0);
}

