
/* btRayAabb(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&, float&,
   btVector3&) */

undefined8
btRayAabb(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,float *param_5
         ,btVector3 *param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  fVar14 = *(float *)param_4 - *(float *)param_3;
  fVar12 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar13 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar9 = fVar14 * 0.5;
  fVar6 = fVar12 * 0.5;
  fVar2 = fVar13 * 0.5;
  fVar4 = (*(float *)param_4 + *(float *)param_3) * 0.5;
  fVar8 = (*(float *)(param_4 + 4) + *(float *)(param_3 + 4)) * 0.5;
  fVar12 = fVar12 * -0.5;
  fVar13 = fVar13 * -0.5;
  fVar14 = fVar14 * -0.5;
  fVar16 = (*(float *)(param_4 + 8) + *(float *)(param_3 + 8)) * 0.5;
  fVar10 = *(float *)param_1 - fVar4;
  fVar7 = *(float *)(param_1 + 4) - fVar8;
  fVar4 = *(float *)param_2 - fVar4;
  fVar3 = *(float *)(param_1 + 8) - fVar16;
  bVar1 = fVar2 < fVar3;
  fVar8 = *(float *)(param_2 + 4) - fVar8;
  fVar16 = *(float *)(param_2 + 8) - fVar16;
  if ((byte)(((fVar9 < fVar10) << 3 | (fVar6 < fVar7) << 4 |
              fVar10 < fVar14 | (fVar7 < fVar12) << 1 | (fVar3 < fVar13) << 2 | bVar1 << 5) &
            ((fVar9 < fVar4) << 3 | (fVar6 < fVar8) << 4 |
             fVar4 < fVar14 | (fVar8 < fVar12) << 1 | (fVar16 < fVar13) << 2 | (fVar2 < fVar16) << 5
            )) != 0) {
    return 0;
  }
  fVar5 = *param_5;
  fVar11 = fVar4 - fVar10;
  local_10 = 0;
  if (fVar14 <= fVar10) {
    fVar15 = 0.0;
    if ((fVar4 < fVar14) && (fVar14 = (-fVar10 - fVar9) / fVar11, fVar14 < fVar5)) {
      fVar5 = fVar14;
    }
  }
  else {
    fVar15 = (-fVar10 - fVar9) / fVar11;
    if (0.0 <= fVar15) {
      local_10 = 0x3f800000;
    }
    else {
      fVar15 = 0.0;
    }
  }
  uStack_c = 0;
  fVar14 = fVar8 - fVar7;
  if (fVar12 <= fVar7) {
    if ((fVar8 < fVar12) && (fVar12 = (-fVar7 - fVar6) / fVar14, fVar12 < fVar5)) {
      fVar5 = fVar12;
    }
  }
  else {
    fVar12 = (-fVar7 - fVar6) / fVar14;
    if (fVar15 <= fVar12) {
      local_10 = 0;
      uStack_c = 0x3f800000;
      fVar15 = fVar12;
    }
  }
  local_8 = 0;
  fVar12 = fVar16 - fVar3;
  if (fVar13 <= fVar3) {
    if ((fVar16 < fVar13) && (fVar13 = (-fVar3 - fVar2) / fVar12, fVar13 < fVar5)) {
      fVar5 = fVar13;
    }
LAB_0121f1fc:
    if (fVar10 <= fVar9) goto LAB_0121f1ac;
LAB_0121f208:
    fVar11 = (fVar9 - fVar10) / fVar11;
    if (fVar11 < fVar15) goto LAB_0121f218;
    uStack_c = 0;
    local_8 = 0;
    local_10 = 0xbf800000;
    if (fVar6 < fVar7) goto LAB_0121f224;
LAB_0121f294:
    if ((fVar6 < fVar8) && (fVar14 = (fVar6 - fVar7) / fVar14, fVar14 < fVar5)) {
      fVar5 = fVar14;
    }
LAB_0121f2b8:
    if (bVar1) goto LAB_0121f244;
LAB_0121f2c0:
    if ((fVar2 < fVar16) && (fVar12 = (fVar2 - fVar3) / fVar12, fVar12 < fVar5)) {
      fVar5 = fVar12;
    }
  }
  else {
    fVar13 = (-fVar3 - fVar2) / fVar12;
    if (fVar13 < fVar15) goto LAB_0121f1fc;
    local_10 = 0;
    uStack_c = 0;
    local_8 = 0x3f800000;
    fVar15 = fVar13;
    if (fVar9 < fVar10) goto LAB_0121f208;
LAB_0121f1ac:
    if ((fVar9 < fVar4) && (fVar11 = (fVar9 - fVar10) / fVar11, fVar11 < fVar5)) {
      fVar5 = fVar11;
    }
LAB_0121f218:
    fVar11 = fVar15;
    if (fVar7 <= fVar6) goto LAB_0121f294;
LAB_0121f224:
    fVar14 = (fVar6 - fVar7) / fVar14;
    if (fVar14 < fVar11) goto LAB_0121f2b8;
    local_10 = 0;
    local_8 = 0;
    uStack_c = 0xbf800000;
    fVar11 = fVar14;
    if (!bVar1) goto LAB_0121f2c0;
LAB_0121f244:
    fVar12 = (fVar2 - fVar3) / fVar12;
    if (fVar11 <= fVar12) {
      local_10 = 0;
      uStack_c = 0;
      local_8 = 0xbf800000;
      fVar11 = fVar12;
      if (fVar5 < fVar12) {
        return 0;
      }
      goto LAB_0121f268;
    }
  }
  if (fVar5 < fVar11) {
    return 0;
  }
LAB_0121f268:
  *param_5 = fVar11;
  *(ulong *)(param_6 + 8) = (ulong)local_8;
  *(ulong *)param_6 = CONCAT44(uStack_c,local_10);
  return 1;
}

