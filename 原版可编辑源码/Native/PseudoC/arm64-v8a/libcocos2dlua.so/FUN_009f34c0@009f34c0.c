
int FUN_009f34c0(long param_1,ulong *param_2,undefined8 *param_3,long param_4,ulong param_5,
                long param_6,ulong param_7,long param_8,ulong param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long local_108;
  byte local_100;
  undefined7 uStack_ff;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  int local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulong local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    iVar5 = -0x66;
    goto LAB_009f3d20;
  }
  lVar10 = (**(code **)(param_1 + 0x20))
                     (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x68),0);
  if ((lVar10 == 0) &&
     (iVar5 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&local_108), iVar5 == 0)) {
    iVar5 = 0;
    if (local_108 != 0x2014b50) {
      iVar5 = -0x67;
    }
  }
  else {
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_f8,1);
  if (iVar6 == 1) {
    uVar14 = local_f8 & 0xff;
LAB_009f3594:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_f8,1);
    if (iVar6 == 1) {
      uVar13 = local_f8 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f35d4;
    }
    local_f8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3594;
LAB_009f35d4:
    local_f8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3620:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f3660;
    }
    uStack_f0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3620;
LAB_009f3660:
    uStack_f0 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f36ac:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f36ec;
    }
    local_e8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f36ac;
LAB_009f36ec:
    local_e8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3738:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f3778;
    }
    uStack_e0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3738;
LAB_009f3778:
    uStack_e0 = 0;
    iVar5 = -1;
  }
  iVar6 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&local_d8);
  auVar15._8_8_ = 0xffffffffffffffe7;
  auVar15._0_8_ = 0xffffffffffffffeb;
  auVar16._8_8_ = local_d8;
  auVar16._0_8_ = local_d8;
  auVar16 = NEON_ushl(auVar16,auVar15,8);
  uVar14 = CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x7f0000000f;
  uVar12 = (uint)local_d8;
  uStack_7c = uVar12 >> 0x10 & 0x1f;
  uStack_80 = uVar12 >> 0xb & 0x1f;
  uStack_84 = uVar12 >> 5 & 0x3f;
  local_88 = (uVar12 & 0x1f) << 1;
  local_78 = CONCAT44((int)(uVar14 >> 0x20) + 0x7bc,(int)uVar14 + -1);
  iVar7 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_d0);
  iVar8 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&local_c8);
  iVar9 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_c0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if (((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) {
    iVar5 = -1;
  }
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3874:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f38b4;
    }
    local_b8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3874;
LAB_009f38b4:
    local_b8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3900:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f3940;
    }
    uStack_b0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3900;
LAB_009f3940:
    uStack_b0 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f398c:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f39cc;
    }
    local_a8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f398c;
LAB_009f39cc:
    local_a8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3a24:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f3a68;
    }
    uStack_a0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3a24;
LAB_009f3a68:
    uStack_a0 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_009f3ac4:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_009f3b08;
    }
    local_98 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_009f3ac4;
LAB_009f3b08:
    local_98 = 0;
    iVar5 = -1;
  }
  iVar6 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_90);
  iVar7 = FUN_009f3164(param_1,*(undefined8 *)(param_1 + 0x40),&local_100);
  uVar14 = local_b8;
  if (iVar7 != 0 || iVar6 != 0) {
    iVar5 = -1;
  }
  if (param_4 == 0) {
    if (param_6 != 0) goto LAB_009f3ba8;
LAB_009f3cd4:
    lVar10 = uStack_b0 + uVar14;
    uVar14 = local_a8;
  }
  else {
    if (iVar5 == 0) {
      uVar13 = param_5;
      if (local_b8 < param_5) {
        *(undefined1 *)(param_4 + local_b8) = 0;
        uVar13 = local_b8;
      }
      iVar5 = 0;
      if ((param_5 != 0) && (local_b8 != 0)) {
        uVar11 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_4,
                            uVar13);
        iVar5 = -(uint)(uVar11 != uVar13);
      }
      uVar14 = uVar14 - uVar13;
    }
    if (param_6 == 0) goto LAB_009f3cd4;
LAB_009f3ba8:
    uVar13 = uStack_b0;
    if (iVar5 != 0) goto LAB_009f3cd4;
    uVar11 = uStack_b0;
    if (param_7 <= uStack_b0) {
      uVar11 = param_7;
    }
    if (uVar14 == 0) {
      iVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar10 = (**(code **)(param_1 + 0x20))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar14,1);
      iVar5 = -(uint)(lVar10 != 0);
      uVar4 = 0;
      if (lVar10 != 0) {
        uVar4 = uVar14;
      }
    }
    if (((param_7 != 0) && (uVar13 != 0)) &&
       (uVar14 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_6,
                            uVar11), uVar14 != uVar11)) {
      iVar5 = -1;
    }
    lVar10 = (uVar13 - uVar11) + uVar4;
    uVar14 = local_a8;
  }
  local_a8 = uVar14;
  if ((param_8 != 0) && (iVar5 == 0)) {
    uVar13 = param_9;
    if (uVar14 < param_9) {
      *(undefined1 *)(param_8 + uVar14) = 0;
      uVar13 = uVar14;
    }
    if (lVar10 == 0) {
      iVar5 = 0;
    }
    else {
      lVar10 = (**(code **)(param_1 + 0x20))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar10,1);
      iVar5 = -(uint)(lVar10 != 0);
    }
    if (((param_9 != 0) && (uVar14 != 0)) &&
       (uVar14 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_8,
                            uVar13), uVar14 != uVar13)) {
      iVar5 = -1;
    }
  }
  if ((param_2 != (ulong *)0x0) && (iVar5 == 0)) {
    param_2[1] = uStack_f0;
    *param_2 = local_f8;
    param_2[7] = uStack_c0;
    param_2[6] = local_c8;
    param_2[9] = uStack_b0;
    param_2[8] = local_b8;
    param_2[3] = uStack_e0;
    param_2[2] = local_e8;
    param_2[5] = uStack_d0;
    param_2[4] = local_d8;
    auVar3._8_4_ = uStack_80;
    auVar3._0_8_ = CONCAT44(uStack_84,local_88);
    auVar3._12_4_ = uStack_7c;
    param_2[0x10] = local_78;
    param_2[0xb] = uStack_a0;
    param_2[10] = local_a8;
    param_2[0xd] = uStack_90;
    param_2[0xc] = local_98;
    param_2[0xf] = auVar3._8_8_;
    param_2[0xe] = CONCAT44(uStack_84,local_88);
  }
  if ((param_3 != (undefined8 *)0x0) && (iVar5 == 0)) {
    *param_3 = CONCAT71(uStack_ff,local_100);
  }
LAB_009f3d20:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

