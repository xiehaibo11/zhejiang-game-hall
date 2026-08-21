
void FUN_0116b094(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  float local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  float local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  float fStack_5c;
  float local_58;
  long local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  
  pcStack_38 = FUN_0116c280;
  local_40 = FUN_0116c280;
  local_50 = param_1;
  lStack_48 = param_2;
  FUN_0116b360(&local_70,&local_50,param_3 + 0x10);
  local_80 = *(float *)(param_1 + 0x88);
  local_b0 = *(float *)(param_2 + 0x88);
  if ((local_58 - local_80) - local_b0 <= 0.0) {
    uVar2 = *(uint *)(param_1 + 0x8c);
    lVar6 = *(long *)(param_1 + 0x90);
    if ((int)uVar2 < 1) {
      iVar5 = 0;
    }
    else {
      uVar8 = 0;
      pfVar10 = (float *)(lVar6 + 4);
      fVar13 = -INFINITY;
      iVar4 = 0;
      do {
        pfVar1 = pfVar10 + -1;
        fVar14 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        fVar14 = *pfVar1 * local_60 + fStack_5c * fVar14;
        iVar5 = (int)uVar8;
        if (fVar14 <= fVar13) {
          iVar5 = iVar4;
        }
        uVar8 = uVar8 + 1;
        fVar13 = fVar14;
        iVar4 = iVar5;
      } while (uVar2 != uVar8);
    }
    puVar11 = (undefined8 *)(lVar6 + (long)iVar5 * 0x10);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = (iVar5 + 1) / (int)uVar2;
    }
    iVar4 = (iVar5 + 1) - iVar4 * uVar2;
    lVar7 = lVar6 + (long)iVar4 * 0x10;
    if (*(float *)(puVar11 + 1) * local_60 + fStack_5c * *(float *)((long)puVar11 + 0xc) <=
        *(float *)(lVar7 + 8) * local_60 + fStack_5c * *(float *)(lVar7 + 0xc)) {
      lVar12 = (long)iVar4;
      puVar9 = (undefined8 *)(lVar6 + lVar12 * 0x10);
      lVar7 = (long)iVar5;
    }
    else {
      iVar4 = uVar2 + iVar5 + -1;
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = iVar4 / (int)uVar2;
      }
      iVar4 = iVar4 - iVar3 * uVar2;
      lVar7 = (long)iVar4;
      puVar9 = puVar11;
      lVar12 = (long)iVar5;
      puVar11 = (undefined8 *)(lVar6 + (long)iVar4 * 0x10);
    }
    local_a0 = *puVar11;
    local_90 = *puVar9;
    local_7c = *(undefined8 *)(lVar6 + lVar12 * 0x10 + 8);
    uStack_88 = *(long *)(param_1 + 0x80) * 0xc75f71e1;
    uStack_98 = lVar7 * 0xc75f71e1 ^ uStack_88;
    uStack_88 = lVar12 * 0xc75f71e1 ^ uStack_88;
    uVar2 = *(uint *)(param_2 + 0x8c);
    lVar6 = *(long *)(param_2 + 0x90);
    local_60 = -local_60;
    fStack_5c = -fStack_5c;
    if ((int)uVar2 < 1) {
      iVar5 = 0;
    }
    else {
      uVar8 = 0;
      pfVar10 = (float *)(lVar6 + 4);
      fVar13 = -INFINITY;
      iVar4 = 0;
      do {
        pfVar1 = pfVar10 + -1;
        fVar14 = *pfVar10;
        pfVar10 = pfVar10 + 4;
        fVar14 = *pfVar1 * local_60 + fStack_5c * fVar14;
        iVar5 = (int)uVar8;
        if (fVar14 <= fVar13) {
          iVar5 = iVar4;
        }
        uVar8 = uVar8 + 1;
        fVar13 = fVar14;
        iVar4 = iVar5;
      } while (uVar2 != uVar8);
    }
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = (iVar5 + 1) / (int)uVar2;
    }
    iVar4 = (iVar5 + 1) - iVar4 * uVar2;
    puVar11 = (undefined8 *)(lVar6 + (long)iVar5 * 0x10);
    lVar7 = lVar6 + (long)iVar4 * 0x10;
    if (*(float *)(puVar11 + 1) * local_60 + fStack_5c * *(float *)((long)puVar11 + 0xc) <=
        *(float *)(lVar7 + 8) * local_60 + fStack_5c * *(float *)(lVar7 + 0xc)) {
      lVar12 = (long)iVar4;
      puVar9 = (undefined8 *)(lVar6 + lVar12 * 0x10);
      lVar7 = (long)iVar5;
    }
    else {
      iVar4 = uVar2 + iVar5 + -1;
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = iVar4 / (int)uVar2;
      }
      iVar4 = iVar4 - iVar3 * uVar2;
      lVar7 = (long)iVar4;
      lVar12 = (long)iVar5;
      puVar9 = puVar11;
      puVar11 = (undefined8 *)(lVar6 + (long)iVar4 * 0x10);
    }
    local_d0 = *puVar11;
    local_c0 = *puVar9;
    local_ac = *(undefined8 *)(lVar6 + lVar12 * 0x10 + 8);
    uStack_b8 = *(long *)(param_2 + 0x80) * 0xc75f71e1;
    uStack_c8 = lVar7 * 0xc75f71e1 ^ uStack_b8;
    uStack_b8 = lVar12 * 0xc75f71e1 ^ uStack_b8;
    uStack_e8 = uStack_68;
    local_f0 = local_70;
    FUN_0116b738(&local_a0,&local_d0,&local_f0,param_3);
  }
  return;
}

