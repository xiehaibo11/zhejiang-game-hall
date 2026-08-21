
/* btTriangleRaycastCallback::processTriangle(btVector3*, int, int) */

void __thiscall
btTriangleRaycastCallback::processTriangle
          (btTriangleRaycastCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
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
  float fVar17;
  float fVar18;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  
  pfVar1 = &local_80;
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar10 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0x10) - fVar6;
  fVar11 = *(float *)(param_1 + 0x14) - fVar7;
  fVar13 = *(float *)(param_1 + 0x18) - fVar10;
  fVar15 = *(float *)(param_1 + 0x20) - fVar6;
  fVar17 = *(float *)(param_1 + 0x24) - fVar7;
  fVar18 = *(float *)(param_1 + 0x28) - fVar10;
  fVar8 = fVar11 * fVar18 - fVar13 * fVar17;
  fVar13 = fVar13 * fVar15 - fVar2 * fVar18;
  fVar2 = fVar2 * fVar17 - fVar11 * fVar15;
  local_64 = 0;
  fVar15 = fVar6 * fVar8 + fVar7 * fVar13 + fVar10 * fVar2;
  fVar11 = (fVar8 * *(float *)(this + 8) + fVar13 * *(float *)(this + 0xc) +
           fVar2 * *(float *)(this + 0x10)) - fVar15;
  fVar15 = (fVar8 * *(float *)(this + 0x18) + fVar13 * *(float *)(this + 0x1c) +
           fVar2 * *(float *)(this + 0x20)) - fVar15;
  if ((fVar11 * fVar15 < 0.0) &&
     (((0.0 < fVar11 || ((*(uint *)(this + 0x28) & 1) == 0)) &&
      (fVar15 = fVar11 / (fVar11 - fVar15), fVar15 < *(float *)(this + 0x2c))))) {
    fVar17 = 1.0 - fVar15;
    fVar18 = *(float *)(this + 0x18) * fVar15 + *(float *)(this + 8) * fVar17;
    fVar16 = *(float *)(this + 0x1c) * fVar15 + *(float *)(this + 0xc) * fVar17;
    fVar14 = *(float *)(this + 0x20) * fVar15 + *(float *)(this + 0x10) * fVar17;
    fVar17 = fVar8 * fVar8 + fVar13 * fVar13 + fVar2 * fVar2;
    fVar6 = fVar6 - fVar18;
    fVar7 = fVar7 - fVar16;
    fVar10 = fVar10 - fVar14;
    fVar12 = *(float *)(param_1 + 0x10) - fVar18;
    fVar5 = *(float *)(param_1 + 0x14) - fVar16;
    fVar9 = *(float *)(param_1 + 0x18) - fVar14;
    fVar4 = fVar17 * -0.0001;
    if (fVar4 <= fVar2 * (fVar6 * fVar5 - fVar7 * fVar12) +
                 fVar8 * (fVar7 * fVar9 - fVar10 * fVar5) +
                 fVar13 * (fVar10 * fVar12 - fVar6 * fVar9)) {
      fVar18 = *(float *)(param_1 + 0x20) - fVar18;
      fVar16 = *(float *)(param_1 + 0x24) - fVar16;
      fVar14 = *(float *)(param_1 + 0x28) - fVar14;
      if ((fVar4 <= fVar2 * (fVar12 * fVar16 - fVar5 * fVar18) +
                    fVar8 * (fVar5 * fVar14 - fVar9 * fVar16) +
                    fVar13 * (fVar9 * fVar18 - fVar12 * fVar14)) &&
         (fVar4 <= fVar2 * (fVar7 * fVar18 - fVar6 * fVar16) +
                   fVar8 * (fVar10 * fVar16 - fVar7 * fVar14) +
                   fVar13 * (fVar6 * fVar14 - fVar10 * fVar18))) {
        local_68 = SQRT(fVar17);
        if (NAN(local_68)) {
          local_70 = fVar8;
          fStack_6c = fVar13;
          local_68 = fVar2;
          local_68 = sqrtf(fVar17);
        }
        local_68 = 1.0 / local_68;
        local_70 = local_68 * fVar8;
        fStack_6c = local_68 * fVar13;
        local_68 = local_68 * fVar2;
        if ((0.0 < fVar11) || ((*(uint *)(this + 0x28) >> 1 & 1) != 0)) {
          pfVar1 = &local_70;
        }
        else {
          local_80 = -local_70;
          fStack_7c = -fStack_6c;
          local_78 = -local_68;
          local_74 = 0;
        }
        uVar3 = (**(code **)(*(long *)this + 0x18))(fVar15,this,pfVar1,param_2,param_3);
        *(undefined4 *)(this + 0x2c) = uVar3;
      }
    }
  }
  return;
}

