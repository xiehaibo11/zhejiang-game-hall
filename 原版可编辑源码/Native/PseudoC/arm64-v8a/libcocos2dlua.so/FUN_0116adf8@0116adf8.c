
void FUN_0116adf8(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 local_100 [8];
  undefined8 uStack_f8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  float local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  float local_90;
  undefined8 local_8c;
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  long local_60;
  long lStack_58;
  code *local_50;
  code *pcStack_48;
  
  pcStack_48 = FUN_0116c280;
  local_50 = FUN_0116b328;
  local_60 = param_3;
  lStack_58 = param_4;
  FUN_0116b360(&local_80,&local_60,param_5 + 0x10);
  fVar13 = (float)cpBodyGetRotation(*(undefined8 *)(param_3 + 0x10));
  local_90 = *(float *)(param_3 + 0xb8);
  local_c0 = *(float *)(param_4 + 0x88);
  if ((((local_68 - local_90) - local_c0 <= 0.0) &&
      (((local_80 != *(float *)(param_3 + 0xa0) || (fStack_7c != *(float *)(param_3 + 0xa4))) ||
       ((*(float *)(param_3 + 0xbc) * param_2 + fVar13 * *(float *)(param_3 + 0xc0)) * fStack_6c +
        local_70 * (*(float *)(param_3 + 0xbc) * fVar13 - *(float *)(param_3 + 0xc0) * param_2) <=
        0.0)))) &&
     (((local_80 != *(float *)(param_3 + 0xa8) || (fStack_7c != *(float *)(param_3 + 0xac))) ||
      ((*(float *)(param_3 + 0xc4) * param_2 + fVar13 * *(float *)(param_3 + 200)) * fStack_6c +
       local_70 * (*(float *)(param_3 + 0xc4) * fVar13 - *(float *)(param_3 + 200) * param_2) <= 0.0
      )))) {
    if (*(float *)(param_3 + 0xb0) * local_70 + fStack_6c * *(float *)(param_3 + 0xb4) <= 0.0) {
      local_a0 = *(undefined8 *)(param_3 + 0xa0);
      local_b0 = *(undefined8 *)(param_3 + 0xa8);
      uStack_98 = *(long *)(param_3 + 0x80) * 0xc75f71e1;
      uStack_a8 = uStack_98 ^ 0xc75f71e1;
      local_8c = CONCAT44(-*(float *)(param_3 + 0xb4),-*(float *)(param_3 + 0xb0));
    }
    else {
      local_b0 = *(undefined8 *)(param_3 + 0xa0);
      local_a0 = *(undefined8 *)(param_3 + 0xa8);
      local_8c = *(undefined8 *)(param_3 + 0xb0);
      uStack_a8 = *(long *)(param_3 + 0x80) * 0xc75f71e1;
      uStack_98 = uStack_a8 ^ 0xc75f71e1;
    }
    uVar2 = *(uint *)(param_4 + 0x8c);
    lVar4 = *(long *)(param_4 + 0x90);
    local_70 = -local_70;
    fStack_6c = -fStack_6c;
    if ((int)uVar2 < 1) {
      iVar7 = 0;
    }
    else {
      uVar8 = 0;
      pfVar10 = (float *)(lVar4 + 4);
      fVar13 = -INFINITY;
      iVar6 = 0;
      do {
        pfVar1 = pfVar10 + -1;
        fVar14 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        fVar14 = *pfVar1 * local_70 + fStack_6c * fVar14;
        iVar7 = (int)uVar8;
        if (fVar14 <= fVar13) {
          iVar7 = iVar6;
        }
        uVar8 = uVar8 + 1;
        fVar13 = fVar14;
        iVar6 = iVar7;
      } while (uVar2 != uVar8);
    }
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar6 = (iVar7 + 1) / (int)uVar2;
    }
    iVar6 = (iVar7 + 1) - iVar6 * uVar2;
    puVar11 = (undefined8 *)(lVar4 + (long)iVar7 * 0x10);
    lVar5 = lVar4 + (long)iVar6 * 0x10;
    if (*(float *)(puVar11 + 1) * local_70 + fStack_6c * *(float *)((long)puVar11 + 0xc) <=
        *(float *)(lVar5 + 8) * local_70 + fStack_6c * *(float *)(lVar5 + 0xc)) {
      lVar12 = (long)iVar6;
      puVar9 = (undefined8 *)(lVar4 + lVar12 * 0x10);
      lVar5 = (long)iVar7;
    }
    else {
      iVar6 = uVar2 + iVar7 + -1;
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = iVar6 / (int)uVar2;
      }
      iVar6 = iVar6 - iVar3 * uVar2;
      lVar5 = (long)iVar6;
      lVar12 = (long)iVar7;
      puVar9 = puVar11;
      puVar11 = (undefined8 *)(lVar4 + (long)iVar6 * 0x10);
    }
    local_e0 = *puVar11;
    local_d0 = *puVar9;
    local_bc = *(undefined8 *)(lVar4 + lVar12 * 0x10 + 8);
    uStack_c8 = *(long *)(param_4 + 0x80) * 0xc75f71e1;
    uStack_d8 = lVar5 * 0xc75f71e1 ^ uStack_c8;
    uStack_c8 = lVar12 * 0xc75f71e1 ^ uStack_c8;
    uStack_f8 = uStack_78;
    FUN_0116b738(&local_b0,&local_e0,local_100,param_5);
  }
  return;
}

