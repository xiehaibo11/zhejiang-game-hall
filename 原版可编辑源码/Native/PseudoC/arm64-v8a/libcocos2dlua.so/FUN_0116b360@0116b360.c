
void FUN_0116b360(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  uint local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint local_94;
  
  uVar8 = *param_3;
  puVar7 = (undefined8 *)*param_2;
  if (uVar8 == 0) {
    lVar2 = param_2[1];
    fVar17 = ((*(float *)((long)puVar7 + 0x34) + *(float *)((long)puVar7 + 0x2c)) -
             *(float *)(lVar2 + 0x2c)) - *(float *)(lVar2 + 0x34);
    fVar18 = ((*(float *)(puVar7 + 7) + *(float *)(puVar7 + 6)) - *(float *)(lVar2 + 0x30)) -
             *(float *)(lVar2 + 0x38);
    fVar19 = fVar18 * 0.5;
    fVar20 = fVar17 * -0.5;
    fVar17 = fVar17 * 0.5;
    fVar18 = fVar18 * -0.5;
    auVar23 = (*(code *)param_2[2])(fVar19,fVar20,puVar7);
    uVar13 = auVar23._0_8_;
    auVar24 = (*(code *)param_2[3])(fVar18,fVar17,param_2[1]);
    uVar14 = auVar24._0_8_;
    fVar21 = auVar24._0_4_ - auVar23._0_4_;
    fVar22 = auVar24._4_4_ - auVar23._4_4_;
    uVar16 = auVar24._8_4_ & 0xff | (auVar23._8_4_ & 0xff) << 8;
    auVar23 = (*(code *)param_2[2])(fVar18,fVar17,*param_2);
    uVar15 = auVar23._0_8_;
    auVar24 = (*(code *)param_2[3])(fVar19,fVar20,param_2[1]);
    uVar6 = auVar24._0_8_;
    local_e0 = auVar24._0_4_ - auVar23._0_4_;
    uVar8 = (auVar23._8_4_ & 0xff) << 8;
    fStack_dc = auVar24._4_4_ - auVar23._4_4_;
    local_d8 = auVar24._8_4_ & 0xff;
  }
  else {
    iVar3 = *(int *)*puVar7;
    uVar16 = uVar8 >> 0x18;
    uVar9 = (ulong)uVar16;
    if (iVar3 == 2) {
      if (*(int *)((long)puVar7 + 0x8c) <= (int)uVar16) {
        uVar9 = 0;
      }
      uVar13 = *(undefined8 *)(puVar7[0x12] + uVar9 * 0x10);
    }
    else if (iVar3 == 1) {
      puVar1 = (undefined4 *)((long)puVar7 + 0xa4);
      puVar10 = puVar7 + 0x14;
      if (uVar16 != 0) {
        puVar1 = (undefined4 *)((long)puVar7 + 0xac);
        puVar10 = puVar7 + 0x15;
      }
      uVar13 = CONCAT44(*puVar1,*(undefined4 *)puVar10);
    }
    else {
      if (iVar3 == 0) {
        uVar13 = puVar7[0x12];
      }
      else {
        uVar13 = 0;
      }
      uVar9 = 0;
    }
    puVar10 = (undefined8 *)param_2[1];
    uVar16 = uVar8 >> 0x10 & 0xff;
    uVar11 = (ulong)uVar16;
    iVar4 = *(int *)*puVar10;
    if (iVar4 == 2) {
      if (*(int *)((long)puVar10 + 0x8c) <= (int)uVar16) {
        uVar11 = 0;
      }
      uVar14 = *(undefined8 *)(puVar10[0x12] + uVar11 * 0x10);
    }
    else if (iVar4 == 1) {
      puVar1 = (undefined4 *)((long)puVar10 + 0xa4);
      puVar5 = puVar10 + 0x14;
      if (uVar16 != 0) {
        puVar1 = (undefined4 *)((long)puVar10 + 0xac);
        puVar5 = puVar10 + 0x15;
      }
      uVar14 = CONCAT44(*puVar1,*(undefined4 *)puVar5);
    }
    else {
      if (iVar4 == 0) {
        uVar14 = puVar10[0x12];
      }
      else {
        uVar14 = 0;
      }
      uVar11 = 0;
    }
    uVar16 = uVar8 >> 8 & 0xff;
    uVar12 = (ulong)uVar16;
    if (iVar3 == 2) {
      if (*(int *)((long)puVar7 + 0x8c) <= (int)uVar16) {
        uVar12 = 0;
      }
      uVar15 = *(undefined8 *)(puVar7[0x12] + uVar12 * 0x10);
    }
    else if (iVar3 == 1) {
      puVar1 = (undefined4 *)((long)puVar7 + 0xa4);
      puVar5 = puVar7 + 0x14;
      if (uVar16 != 0) {
        puVar1 = (undefined4 *)((long)puVar7 + 0xac);
        puVar5 = puVar7 + 0x15;
      }
      uVar15 = CONCAT44(*puVar1,*(undefined4 *)puVar5);
    }
    else {
      if (iVar3 == 0) {
        uVar15 = puVar7[0x12];
      }
      else {
        uVar15 = 0;
      }
      uVar12 = 0;
    }
    uVar16 = (uint)uVar11 | (int)uVar9 << 8;
    uVar8 = uVar8 & 0xff;
    uVar9 = (ulong)uVar8;
    if (iVar4 == 2) {
      if (*(int *)((long)puVar10 + 0x8c) <= (int)uVar8) {
        uVar9 = 0;
      }
      uVar6 = *(undefined8 *)(puVar10[0x12] + uVar9 * 0x10);
    }
    else if (iVar4 == 1) {
      puVar1 = (undefined4 *)((long)puVar10 + 0xa4);
      puVar7 = puVar10 + 0x14;
      if (uVar8 != 0) {
        puVar1 = (undefined4 *)((long)puVar10 + 0xac);
        puVar7 = puVar10 + 0x15;
      }
      uVar6 = CONCAT44(*puVar1,*(undefined4 *)puVar7);
    }
    else {
      if (iVar4 == 0) {
        uVar6 = puVar10[0x12];
      }
      else {
        uVar6 = 0;
      }
      uVar9 = 0;
    }
    fVar21 = (float)uVar14 - (float)uVar13;
    fVar22 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
    local_e0 = (float)uVar6 - (float)uVar15;
    local_d8 = (int)uVar12 << 8;
    fStack_dc = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
    uVar8 = (uint)uVar9;
  }
  local_d8 = local_d8 | uVar8;
  local_e8 = (undefined4)uVar6;
  uStack_e4 = (undefined4)((ulong)uVar6 >> 0x20);
  local_d0 = (undefined4)uVar13;
  uStack_cc = (undefined4)((ulong)uVar13 >> 0x20);
  local_c8 = (undefined4)uVar14;
  uStack_c4 = (undefined4)((ulong)uVar14 >> 0x20);
  local_f0 = (undefined4)uVar15;
  uStack_ec = (undefined4)((ulong)uVar15 >> 0x20);
  local_c0 = fVar21;
  fStack_bc = fVar22;
  local_b8 = uVar16;
  FUN_0116b940(&local_b0,param_2,&local_d0,&local_f0,1);
  *param_3 = local_94;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = CONCAT44(local_94,uStack_98);
  param_1[2] = uStack_a0;
  return;
}

