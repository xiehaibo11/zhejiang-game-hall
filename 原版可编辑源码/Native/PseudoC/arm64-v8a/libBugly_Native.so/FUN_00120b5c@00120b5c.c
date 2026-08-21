
void FUN_00120b5c(long param_1,long param_2,ulong *param_3,ulong *param_4,int param_5,long param_6,
                 undefined8 param_7)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong local_110;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined4 local_78;
  uint uStack_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar21 = *param_3;
  log2Console(3,"Bugly-libunwind","FDE @ 0x%lx\n",uVar21);
  local_90 = uVar21 + 1;
  local_a0 = 0;
  local_a8 = 0;
  puVar14 = (undefined8 *)(param_2 + 0x18);
  uVar6 = (*(code *)*puVar14)(param_1,uVar21 & 0xfffffffffffffff8,&local_80,0,param_7);
  uVar16 = local_80;
  uVar22 = local_90;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar24 = local_90 & 0xfffffffffffffff8;
  local_90 = local_90 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar24,&local_80,0,param_7);
  uVar18 = local_90;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar8 = (uint)(uVar16 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f));
  uVar11 = (uint)(local_80 >> ((uVar22 - uVar24) * 8 & 0x3f));
  uVar22 = local_90 & 0xfffffffffffffff8;
  uVar20 = uVar8 & 0xff | uVar11 << 8;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar20 = uVar11 & 0xff | uVar8 << 8;
  }
  local_90 = local_90 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
  uVar21 = local_80;
  uVar16 = local_90;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar23 = local_90 & 0xfffffffffffffff8;
  local_90 = local_90 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
  uVar24 = local_90;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar8 = (uint)(local_80 >> ((uVar16 - uVar23) * 8 & 0x3f));
  uVar11 = (uint)(uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar20 = uVar20 & 0xffff | (uVar11 & 0xff | uVar8 << 8) << 0x10;
  }
  else {
    uVar20 = uVar8 & 0xff | (uVar11 & 0xff) << 8 | uVar20 << 0x10;
  }
  if (uVar20 == 0xffffffff) {
    uVar21 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar16 >> ((uVar24 - uVar21) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_90 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar24 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar21 = uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f);
    uVar22 = local_80 >> ((uVar16 - uVar23) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar22 = (ulong)uVar20 & 0xffff | (uVar21 & 0xff | (uVar22 & 0xff) << 8) << 0x10;
    }
    else {
      uVar22 = uVar22 & 0xff | (uVar21 & 0xff) << 8 | ((ulong)uVar20 & 0xffff) << 0x10;
    }
    uVar18 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar19 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar19,&local_80,0,param_7);
    uVar23 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar21 >> ((uVar24 - uVar18) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar19) * 8 & 0x3f));
    uVar16 = local_90 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar16,&local_80,0,param_7);
    uVar18 = local_80;
    uVar21 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar19 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar19,&local_80,0,param_7);
    uVar24 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar18 = uVar18 >> ((uVar23 - uVar16) * 8 & 0x3f);
    uVar16 = local_80 >> ((uVar21 - uVar19) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = (ulong)uVar20 & 0xffff | (uVar18 & 0xff | (uVar16 & 0xff) << 8) << 0x10;
    }
    else {
      uVar16 = uVar16 & 0xff | (uVar18 & 0xff) << 8 | ((ulong)uVar20 & 0xffff) << 0x10;
    }
    local_110 = uVar22 | uVar16 << 0x20;
    if (*(int *)(param_1 + 0x40) != 0) {
      local_110 = uVar16 | uVar22 << 0x20;
    }
    local_110 = local_110 + local_90;
    *param_3 = local_110;
    uVar21 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar16 >> ((uVar24 - uVar21) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_90 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar19 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar19,&local_80,0,param_7);
    uVar23 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar21 = uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f);
    uVar22 = local_80 >> ((uVar16 - uVar19) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar22 = (ulong)uVar20 & 0xffff | (uVar21 & 0xff | (uVar22 & 0xff) << 8) << 0x10;
    }
    else {
      uVar22 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar21 & 0xff) << 8 | uVar22 & 0xff;
    }
    uVar18 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar7 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar7,&local_80,0,param_7);
    uVar19 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar21 >> ((uVar23 - uVar18) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar7) * 8 & 0x3f));
    uVar16 = local_90 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar16,&local_80,0,param_7);
    uVar18 = local_80;
    uVar21 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar18 = uVar18 >> ((uVar19 - uVar16) * 8 & 0x3f);
    uVar16 = local_80 >> ((uVar21 - uVar23) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = (ulong)uVar20 & 0xffff | (uVar18 & 0xff | (uVar16 & 0xff) << 8) << 0x10;
    }
    else {
      uVar16 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar18 & 0xff) << 8 | uVar16 & 0xff;
    }
    uVar21 = uVar22 | uVar16 << 0x20;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar21 = uVar16 | uVar22 << 0x20;
    }
    if (param_6 == 0) {
      if (uVar21 == 0) goto LAB_00121110;
    }
    else {
      uVar6 = 0;
      if ((uVar21 == 0xffffffffffffffff) || (uVar21 == 0xffffffff)) goto LAB_001223f4;
    }
  }
  else {
    if (uVar20 == 0) {
      uVar6 = 0xfffffff6;
      goto LAB_001223f4;
    }
    local_110 = local_90 + uVar20;
    *param_3 = local_110;
    uVar21 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar16 >> ((uVar24 - uVar21) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_90 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_90;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_90 & 0xfffffffffffffff8;
    local_90 = local_90 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar23) * 8 & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar20 = uVar20 & 0xffff | (uVar8 & 0xff | uVar11 << 8) << 0x10;
    }
    else {
      uVar20 = uVar20 << 0x10 | (uVar8 & 0xff) << 8 | uVar11 & 0xff;
    }
    bVar5 = uVar20 == 0xffffffff;
    if (param_6 == 0) {
      bVar5 = uVar20 == 0;
    }
    if (bVar5) {
LAB_00121110:
      uVar6 = 0;
      goto LAB_001223f4;
    }
    uVar21 = (ulong)(int)uVar20;
  }
  uVar22 = uVar21 + param_6;
  if (param_6 == 0) {
    uVar22 = uVar24 - uVar21;
  }
  log2Console(3,"Bugly-libunwind","looking for CIE at address %lx\n",uVar22);
  local_88 = uVar22 + 1;
  local_a0._0_6_ = CONCAT15(0xff,(undefined5)local_a0);
  local_a8 = 0;
  uVar6 = (*(code *)*puVar14)(param_1,uVar22 & 0xfffffffffffffff8,&local_80,0,param_7);
  uVar21 = local_80;
  uVar16 = local_88;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar24 = local_88 & 0xfffffffffffffff8;
  local_88 = local_88 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar24,&local_80,0,param_7);
  uVar18 = local_88;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar8 = (uint)(uVar21 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f));
  uVar11 = (uint)(local_80 >> ((uVar16 - uVar24) * 8 & 0x3f));
  uVar22 = local_88 & 0xfffffffffffffff8;
  uVar20 = uVar8 & 0xff | uVar11 << 8;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar20 = uVar11 & 0xff | uVar8 << 8;
  }
  local_88 = local_88 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
  uVar21 = local_80;
  uVar16 = local_88;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar23 = local_88 & 0xfffffffffffffff8;
  local_88 = local_88 + 1;
  uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
  uVar24 = local_88;
  if ((int)uVar6 < 0) goto LAB_001223f4;
  uVar8 = (uint)(uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f));
  uVar11 = (uint)(local_80 >> ((uVar16 - uVar23) * 8 & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar20 = uVar20 & 0xffff | (uVar8 & 0xff | uVar11 << 8) << 0x10;
  }
  else {
    uVar20 = uVar20 << 0x10 | (uVar8 & 0xff) << 8 | uVar11 & 0xff;
  }
  if (uVar20 == 0xffffffff) {
    uVar21 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar16 >> ((uVar24 - uVar21) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_88 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar24 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar21 = uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f);
    uVar22 = local_80 >> ((uVar16 - uVar23) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar22 = (ulong)uVar20 & 0xffff | (uVar21 & 0xff | (uVar22 & 0xff) << 8) << 0x10;
    }
    else {
      uVar22 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar21 & 0xff) << 8 | uVar22 & 0xff;
    }
    uVar18 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar19 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar19,&local_80,0,param_7);
    uVar23 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar21 >> ((uVar24 - uVar18) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar19) * 8 & 0x3f));
    uVar16 = local_88 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar16,&local_80,0,param_7);
    uVar18 = local_80;
    uVar21 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar24 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar24,&local_80,0,param_7);
    uVar19 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar18 = uVar18 >> ((uVar23 - uVar16) * 8 & 0x3f);
    uVar16 = local_80 >> ((uVar21 - uVar24) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = (ulong)uVar20 & 0xffff | (uVar18 & 0xff | (uVar16 & 0xff) << 8) << 0x10;
    }
    else {
      uVar16 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar18 & 0xff) << 8 | uVar16 & 0xff;
    }
    uVar21 = local_88 & 0xfffffffffffffff8;
    uVar24 = uVar22 | uVar16 << 0x20;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar24 = uVar16 | uVar22 << 0x20;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar16 >> ((uVar19 - uVar21) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_88 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar7 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar7,&local_80,0,param_7);
    uVar23 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar21 = uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f);
    uVar22 = local_80 >> ((uVar16 - uVar7) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar22 = (ulong)uVar20 & 0xffff | (uVar21 & 0xff | (uVar22 & 0xff) << 8) << 0x10;
    }
    else {
      uVar22 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar21 & 0xff) << 8 | uVar22 & 0xff;
    }
    uVar18 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar10 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar10,&local_80,0,param_7);
    uVar7 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar8 = (uint)(uVar21 >> ((uVar23 - uVar18) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar10) * 8 & 0x3f));
    uVar16 = local_88 & 0xfffffffffffffff8;
    uVar20 = uVar8 & 0xff | uVar11 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar20 = uVar11 & 0xff | uVar8 << 8;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar16,&local_80,0,param_7);
    uVar18 = local_80;
    uVar21 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar24 = uVar24 + uVar19;
    uVar18 = uVar18 >> ((uVar7 - uVar16) * 8 & 0x3f);
    uVar16 = local_80 >> ((uVar21 - uVar23) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = (ulong)uVar20 & 0xffff | (uVar18 & 0xff | (uVar16 & 0xff) << 8) << 0x10;
    }
    else {
      uVar16 = ((ulong)uVar20 & 0xffff) << 0x10 | (uVar18 & 0xff) << 8 | uVar16 & 0xff;
    }
    uVar21 = uVar22 | uVar16 << 0x20;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar21 = uVar16 | uVar22 << 0x20;
    }
    if (uVar21 == -(ulong)(param_6 != 0)) goto LAB_001217b0;
    log2Console(3,"Bugly-libunwind","Unexpected CIE id %llx\n");
  }
  else {
    uVar21 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
    uVar16 = local_80;
    uVar22 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    uVar18 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar11 = (uint)(uVar16 >> ((uVar24 - uVar21) * 8 & 0x3f));
    uVar12 = (uint)(local_80 >> ((uVar22 - uVar23) * 8 & 0x3f));
    uVar22 = local_88 & 0xfffffffffffffff8;
    uVar8 = uVar11 & 0xff | uVar12 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar8 = uVar12 & 0xff | uVar11 << 8;
    }
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    uVar21 = local_80;
    uVar16 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar23 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar24 = uVar24 + uVar20;
    uVar20 = (uint)(uVar21 >> ((uVar18 - uVar22) * 8 & 0x3f));
    uVar11 = (uint)(local_80 >> ((uVar16 - uVar23) * 8 & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar20 = uVar8 & 0xffff | (uVar20 & 0xff | uVar11 << 8) << 0x10;
    }
    else {
      uVar20 = uVar8 << 0x10 | (uVar20 & 0xff) << 8 | uVar11 & 0xff;
    }
    if (uVar20 == -(uint)(param_6 != 0)) {
LAB_001217b0:
      uVar22 = local_88;
      uVar16 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar16,&local_80,0,param_7);
      if (-1 < (int)uVar6) {
        uVar20 = (uint)(local_80 >> ((uVar22 - uVar16) * 8 & 0x3f));
        if ((uVar20 & 0xff | 2) == 3) {
          uStack_74 = uStack_74 & 0xffffff00;
          local_78 = 0;
          uVar22 = 0;
          while( true ) {
            uVar16 = local_88;
            uVar21 = local_88 & 0xfffffffffffffff8;
            local_88 = local_88 + 1;
            uVar6 = (*(code *)*puVar14)(param_1,uVar21,&local_80,0,param_7);
            if ((int)uVar6 < 0) break;
            uVar16 = local_80 >> ((uVar16 - uVar21) * 8 & 0x3f);
            if ((uVar16 & 0xff) == 0) {
              uVar16 = 0;
              uVar22 = 0;
              goto LAB_00121a70;
            }
            if (uVar22 < 4) {
              *(char *)((long)&local_78 + uVar22) = (char)uVar16;
              uVar22 = uVar22 + 1;
            }
          }
        }
        else {
          log2Console(3,"Bugly-libunwind","Got CIE version %u, expected version 1 or 3\n",
                      uVar20 & 0xff);
          uVar6 = 0xfffffff7;
        }
      }
      goto LAB_001223f4;
    }
    log2Console(3,"Bugly-libunwind","Unexpected CIE id %x\n",uVar20);
  }
LAB_0012183c:
  uVar6 = 0xfffffff8;
LAB_001223f4:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
  while( true ) {
    uVar21 = local_80 >> ((uVar21 - uVar18) * 8 & 0x3f);
    uVar16 = (uVar21 & 0x7f) << (uVar22 & 0x3f) | uVar16;
    uVar22 = uVar22 + 7;
    if (-1 < (char)uVar21) break;
LAB_00121a70:
    uVar21 = local_88;
    uVar18 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
  }
  uVar21 = 0;
  uVar22 = 0;
  do {
    uVar18 = local_88;
    uVar19 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar19,&local_80,0,param_7);
    uVar23 = local_88;
    if ((int)uVar6 < 0) goto LAB_001223f4;
    uVar18 = local_80 >> ((uVar18 - uVar19) * 8 & 0x3f);
    uVar21 = (uVar18 & 0x7f) << (uVar22 & 0x3f) | uVar21;
    uVar22 = uVar22 + 7;
  } while (((uint)uVar18 >> 7 & 1) != 0);
  uVar19 = 0;
  if ((uVar18 & 0x40) != 0 && uVar22 < 0x40) {
    uVar19 = -1L << (uVar22 & 0x3f);
  }
  if ((uVar20 & 0xff) == 1) {
    uVar22 = local_88 & 0xfffffffffffffff8;
    local_88 = local_88 + 1;
    uVar6 = (*(code *)*puVar14)(param_1,uVar22,&local_80,0,param_7);
    if ((int)uVar6 < 0) goto LAB_001223f4;
    local_b0 = local_80 >> ((uVar23 - uVar22) * 8 & 0x3f) & 0xff;
  }
  else {
    local_b0 = 0;
    uVar22 = 0;
    do {
      uVar18 = local_88;
      uVar23 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
      if ((int)uVar6 < 0) goto LAB_001223f4;
      uVar18 = local_80 >> ((uVar18 - uVar23) * 8 & 0x3f);
      local_b0 = (uVar18 & 0x7f) << (uVar22 & 0x3f) | local_b0;
      uVar22 = uVar22 + 7;
    } while ((char)uVar18 < '\0');
  }
  if ((char)local_78 == 'z') {
    uVar22 = 1;
    local_a0 = local_a0 | 0x1000000000000;
    do {
      uVar18 = local_88;
      uVar23 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar23,&local_80,0,param_7);
      if ((int)uVar6 < 0) goto LAB_001223f4;
    } while ((char)(local_80 >> ((uVar18 - uVar23) * 8 & 0x3f)) < '\0');
  }
  else {
    uVar22 = 0;
  }
  uVar18 = 4;
  do {
    uVar23 = local_88;
    uVar15 = (undefined1)uVar18;
    switch(*(char *)((long)&local_78 + uVar22)) {
    case 'L':
      uVar7 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar7,&local_80,0,param_7);
      if ((int)uVar6 < 0) goto LAB_001223f4;
      local_a0._0_6_ =
           CONCAT15((char)(local_80 >> ((uVar23 - uVar7) * 8 & 0x3f)),(undefined5)local_a0);
      break;
    case 'M':
    case 'N':
    case 'O':
    case 'Q':
      goto switchD_00121df4_caseD_4d;
    case 'P':
      uVar7 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar7,&local_80,0,param_7);
      if (((int)uVar6 < 0) ||
         (uVar6 = FUN_0011cb4c(param_1,param_2,&local_88,local_80 >> ((uVar23 - uVar7) * 8 & 0x3f),
                               param_4,&local_a8,param_7), (int)uVar6 < 0)) goto LAB_001223f4;
      break;
    case 'R':
      uVar18 = local_88 & 0xfffffffffffffff8;
      local_88 = local_88 + 1;
      uVar6 = (*(code *)*puVar14)(param_1,uVar18,&local_80,0,param_7);
      if ((int)uVar6 < 0) goto LAB_001223f4;
      uVar18 = local_80 >> ((uVar23 - uVar18) * 8 & 0x3f);
      break;
    case 'S':
      local_a0 = local_a0 | 0x6000000000000;
      break;
    default:
      if (*(char *)((long)&local_78 + uVar22) != '\0') {
switchD_00121df4_caseD_4d:
        log2Console(3,"Bugly-libunwind","Unexpected augmentation string `%s\'\n",&local_78);
        if ((local_a0 & 0x1000000000000) == 0) goto LAB_0012183c;
      }
      goto LAB_00122070;
    }
    uVar15 = (undefined1)uVar18;
    uVar22 = uVar22 + 1;
  } while (uVar22 < 5);
LAB_00122070:
  uVar22 = local_88;
  local_a0._0_5_ = CONCAT14(uVar15,(undefined4)local_a0);
  log2Console(3,"Bugly-libunwind","CIE parsed OK, augmentation = \"%s\", handler=0x%lx\n",&local_78,
              local_a8);
  bVar3 = local_a0._4_1_;
  uVar6 = FUN_0011cb4c(param_1,param_2,&local_90,local_a0._4_1_,param_4,&local_88,param_7);
  if ((-1 < (int)uVar6) &&
     (uVar6 = FUN_0011cb4c(param_1,param_2,&local_90,bVar3 & 0xf,param_4,&local_78,param_7),
     -1 < (int)uVar6)) {
    *param_4 = local_88;
    param_4[1] = CONCAT44(uStack_74,local_78) + local_88;
    param_4[3] = local_a8;
    if ((local_a0 & 0x1000000000000) == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      uVar18 = 0;
      do {
        uVar7 = local_90;
        uVar10 = local_90 & 0xfffffffffffffff8;
        local_90 = local_90 + 1;
        uVar6 = (*(code *)*puVar14)(param_1,uVar10,&local_80,0,param_7);
        if ((int)uVar6 < 0) goto LAB_001223f4;
        uVar7 = local_80 >> ((uVar7 - uVar10) * 8 & 0x3f);
        uVar23 = (uVar7 & 0x7f) << (uVar18 & 0x3f) | uVar23;
        uVar18 = uVar18 + 7;
      } while ((char)uVar7 < '\0');
      uVar23 = local_90 + uVar23;
    }
    uVar6 = FUN_0011cb4c(param_1,param_2,&local_90,local_a0._5_1_,param_4,param_4 + 2,param_7);
    if (-1 < (int)uVar6) {
      log2Console(3,"Bugly-libunwind","FDE covers IP 0x%lx-0x%lx, LSDA=0x%lx\n",*param_4,param_4[1],
                  param_4[2]);
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        param_4[6] = 0x4800000001;
        uVar7 = FUN_0011e7d4(&DAT_00177448);
        uVar18 = local_90;
        param_4[7] = uVar7;
        if (uVar7 == 0) {
          uVar6 = 0xfffffffe;
        }
        else {
          if ((local_a0._6_1_ >> 1 & 1) != 0) {
            uVar13 = local_90 & 0xfffffffffffffff8;
            local_90 = local_90 + 1;
            uVar6 = (*(code *)*puVar14)(param_1,uVar13,&local_80,0,param_7);
            uVar10 = local_80;
            uVar7 = local_90;
            if ((int)uVar6 < 0) goto LAB_001223f4;
            uVar17 = local_90 & 0xfffffffffffffff8;
            local_90 = local_90 + 1;
            uVar6 = (*(code *)*puVar14)(param_1,uVar17,&local_80,0,param_7);
            uVar4 = local_90;
            if ((int)uVar6 < 0) goto LAB_001223f4;
            uVar10 = uVar10 >> ((uVar18 - uVar13) * 8 & 0x3f);
            uVar18 = local_80 >> ((uVar7 - uVar17) * 8 & 0x3f);
            uVar1 = (ushort)uVar10 & 0xff | (ushort)((int)uVar18 << 8);
            if (*(int *)(param_1 + 0x40) != 0) {
              uVar1 = (ushort)uVar18 & 0xff | (ushort)((int)uVar10 << 8);
            }
            local_a0 = CONCAT62(local_a0._2_6_,uVar1);
            uVar10 = local_90 & 0xfffffffffffffff8;
            local_90 = local_90 + 1;
            uVar6 = (*(code *)*puVar14)(param_1,uVar10,&local_80,0,param_7);
            uVar7 = local_80;
            uVar18 = local_90;
            if ((int)uVar6 < 0) goto LAB_001223f4;
            uVar13 = local_90 & 0xfffffffffffffff8;
            local_90 = local_90 + 1;
            uVar6 = (*(code *)*puVar14)(param_1,uVar13,&local_80,0,param_7);
            if ((int)uVar6 < 0) goto LAB_001223f4;
            uVar8 = (uint)(uVar7 >> ((uVar4 - uVar10) * 8 & 0x3f));
            uVar7 = local_a0 & 0xffff;
            uVar11 = (uint)(local_80 >> ((uVar18 - uVar13) * 8 & 0x3f));
            uVar20 = uVar8 & 0xff | uVar11 << 8;
            if (*(int *)(param_1 + 0x40) != 0) {
              uVar20 = uVar11 & 0xff | uVar8 << 8;
            }
            local_a0._0_4_ = CONCAT22((short)uVar20,(undefined2)local_a0);
            log2Console(3,"Bugly-libunwind","Found ABI marker = (abi=%u, tag=%u)\n",uVar7,
                        uVar20 & 0xffff);
          }
          uVar6 = 0;
          uVar18 = local_90;
          if ((local_a0._6_1_ & 1) != 0) {
            uVar18 = uVar23;
          }
          puVar9 = (ulong *)param_4[7];
          puVar9[8] = local_a0;
          puVar9[5] = uVar19 | uVar21;
          puVar9[4] = uVar16;
          puVar9[7] = local_a8;
          puVar9[6] = local_b0;
          puVar9[3] = local_110;
          puVar9[2] = uVar18;
          puVar9[1] = uVar24;
          *puVar9 = uVar22;
        }
      }
    }
  }
  goto LAB_001223f4;
}

