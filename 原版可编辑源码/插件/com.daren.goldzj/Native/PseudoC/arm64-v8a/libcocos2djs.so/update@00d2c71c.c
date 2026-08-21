
/* dragonBones::Slot::update(int) */

void __thiscall dragonBones::Slot::update(Slot *this,int param_1)

{
  undefined4 uVar1;
  Slot SVar2;
  undefined4 uVar3;
  DeformVertices *this_00;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  DeformVertices *pDVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  uVar9 = (ulong)(uint)param_1;
  if (this[0xf8] == (Slot)0x0) {
LAB_00d2c84c:
    SVar2 = this[0xf9];
  }
  else {
    this[0xf8] = (Slot)0x0;
    _updateDisplay(this);
    if (this[0xfc] == (Slot)0x0) goto LAB_00d2c84c;
    puVar5 = *(undefined8 **)(this + 0x58);
    if (puVar5 != (undefined8 *)0x0) {
      uVar22 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) +
                        (float)((ulong)*puVar5 >> 0x20),
                        (float)*(undefined8 *)(this + 0x40) + (float)*puVar5);
      fVar12 = (float)puVar5[1];
      fVar19 = (float)*(undefined8 *)(this + 0x48);
      fVar16 = fVar19 + fVar12;
      fVar13 = (float)((ulong)puVar5[1] >> 0x20);
      fVar17 = (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
      fVar18 = fVar17 + fVar13;
      fVar14 = (float)puVar5[2];
      fVar20 = (float)*(undefined8 *)(this + 0x50);
      fVar15 = (float)((ulong)puVar5[2] >> 0x20);
      fVar21 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
      auVar10._0_4_ = fVar19 * fVar12;
      auVar10._4_4_ = fVar17 * fVar13;
      auVar10._8_4_ = fVar20 * fVar14;
      auVar10._12_4_ = fVar21 * fVar15;
      *(undefined8 *)(this + 0x28) = uVar22;
      auVar11._4_4_ = fVar18;
      auVar11._0_4_ = fVar16;
      auVar11._8_4_ = fVar20 + fVar14;
      auVar11._12_4_ = fVar21 + fVar15;
      auVar11 = NEON_ext(auVar10,auVar11,8,1);
      auVar11 = NEON_ext(auVar11,auVar11,8,1);
      *(long *)(this + 0x38) = auVar11._8_8_;
      *(long *)(this + 0x30) = auVar11._0_8_;
      sincosf(fVar18,&fStack_74,&local_78);
      fVar12 = 1.0;
      fVar13 = 0.0;
      if (fVar18 != 0.0) {
        fVar12 = local_78;
        fVar13 = fStack_74;
      }
      *(float *)(this + 0x10c) = fVar12;
      *(float *)(this + 0x110) = fVar13;
      fVar15 = fVar13;
      fVar14 = fVar12;
      if (fVar16 != 0.0) {
        sincosf(fVar16 + fVar18,&fStack_7c,&local_80);
        fVar15 = fStack_7c;
        fVar14 = local_80;
      }
      *(float *)(this + 0x118) = fVar14;
      *(float *)(this + 0x114) = -fVar15;
      if (auVar10._8_4_ != 1.0) {
        *(float *)(this + 0x10c) = fVar12 * auVar10._8_4_;
        *(float *)(this + 0x110) = fVar13 * auVar10._8_4_;
      }
      if (auVar10._12_4_ != 1.0) {
        *(float *)(this + 0x114) = auVar10._12_4_ * -fVar15;
        *(float *)(this + 0x118) = auVar10._12_4_ * fVar14;
      }
      *(undefined8 *)(this + 0x11c) = uVar22;
      goto LAB_00d2c84c;
    }
    fVar12 = *(float *)(this + 0x48);
    fVar14 = *(float *)(this + 0x4c);
    uVar3 = *(undefined4 *)(this + 0x40);
    uVar1 = *(undefined4 *)(this + 0x44);
    fVar13 = *(float *)(this + 0x50);
    fVar15 = *(float *)(this + 0x54);
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = uVar1;
    *(float *)(this + 0x30) = fVar12;
    *(float *)(this + 0x34) = fVar14;
    *(float *)(this + 0x38) = fVar13;
    *(float *)(this + 0x3c) = fVar15;
    sincosf(fVar14,&fStack_84,&local_88);
    fVar16 = 0.0;
    fVar18 = 1.0;
    if (fVar14 != 0.0) {
      fVar16 = fStack_84;
      fVar18 = local_88;
    }
    *(float *)(this + 0x10c) = fVar18;
    *(float *)(this + 0x110) = fVar16;
    fVar17 = fVar16;
    fVar19 = fVar18;
    if (fVar12 != 0.0) {
      sincosf(fVar14 + fVar12,&fStack_8c,&local_90);
      fVar17 = fStack_8c;
      fVar19 = local_90;
    }
    *(float *)(this + 0x118) = fVar19;
    *(float *)(this + 0x114) = -fVar17;
    if (fVar13 != 1.0) {
      *(float *)(this + 0x10c) = fVar18 * fVar13;
      *(float *)(this + 0x110) = fVar16 * fVar13;
    }
    if (fVar15 != 1.0) {
      *(float *)(this + 0x114) = fVar15 * -fVar17;
      *(float *)(this + 0x118) = fVar19 * fVar15;
    }
    *(undefined4 *)(this + 0x11c) = uVar3;
    *(undefined4 *)(this + 0x120) = uVar1;
    SVar2 = this[0xf9];
  }
  if (SVar2 != (Slot)0x0) {
    this[0xf9] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x50))(this);
  }
  if ((param_1 < 0) || (*(long **)(this + 0xf0) == (long *)0x0)) {
    if ((this[0xfc] != (Slot)0x0) || (*(char *)(*(long *)(this + 0x180) + 0x91) != '\0')) {
      uVar9 = 0xffffffff;
      this[0xfc] = (Slot)0x1;
      *(undefined4 *)(this + 0x108) = 0xffffffff;
    }
    lVar6 = *(long *)(this + 0x170);
  }
  else {
    lVar6 = **(long **)(this + 0xf0);
    iVar8 = *(int *)(lVar6 + (long)param_1 * 4);
    if (iVar8 < 0) {
      if (((this[0xfc] != (Slot)0x0) || (*(char *)(*(long *)(this + 0x180) + 0x91) != '\0')) ||
         (*(int *)(this + 0x108) < 0)) {
        iVar8 = -1;
        goto LAB_00d2cacc;
      }
      this[0xfc] = (Slot)0x0;
      *(int *)(lVar6 + (long)param_1 * 4) = *(int *)(this + 0x108);
      lVar6 = *(long *)(this + 0x170);
    }
    else if (*(int *)(this + 0x108) == iVar8) {
      this[0xfc] = (Slot)0x0;
      lVar6 = *(long *)(this + 0x170);
    }
    else {
LAB_00d2cacc:
      this[0xfc] = (Slot)0x1;
      *(int *)(this + 0x108) = iVar8;
      lVar6 = *(long *)(this + 0x170);
    }
  }
  if (lVar6 == 0) {
    return;
  }
  if (this[0xfa] != (Slot)0x0) {
    this[0xfa] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x78))(this);
  }
  if (this[0xfb] != (Slot)0x0) {
    this[0xfb] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x80))(this);
  }
  if (this[0x90] != (Slot)0x0) {
    this[0x90] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  this_00 = *(DeformVertices **)(this + 0xd8);
  if (((this_00 != (DeformVertices *)0x0) && (*(long *)(this_00 + 0x40) != 0)) &&
     (*(long *)(this + 0x170) == *(long *)(this + 0xe8))) {
    lVar6 = *(long *)(*(long *)(this_00 + 0x40) + 0x10);
    pDVar7 = this_00 + 0xd;
    if (*pDVar7 == (DeformVertices)0x0) {
      if (lVar6 == 0) goto LAB_00d2c93c;
      uVar4 = DeformVertices::isBonesUpdate(this_00);
      if ((uVar4 & 1) == 0) {
        return;
      }
      pDVar7 = (DeformVertices *)(*(long *)(this + 0xd8) + 0xd);
    }
    *pDVar7 = (DeformVertices)0x0;
    (**(code **)(*(long *)this + 0x60))(this);
    if (lVar6 != 0) {
      return;
    }
  }
LAB_00d2c93c:
  if (this[0xfc] == (Slot)0x0) {
    return;
  }
  this[0xfc] = (Slot)0x0;
  if ((int)*(uint *)(this + 0x108) < 0) {
    _updateGlobalTransformMatrix(this,(bool)((byte)(uVar9 >> 0x1f) ^ 1));
    if ((-1 < (int)uVar9) && (*(long *)(this + 0xf0) != 0)) {
      uVar3 = ArmatureData::setCacheFrame
                        (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
                         (Transform *)(this + 0x28));
      *(undefined4 *)(**(long **)(this + 0xf0) + (long)(int)uVar9 * 4) = uVar3;
      *(undefined4 *)(this + 0x108) = uVar3;
    }
  }
  else {
    ArmatureData::getCacheFrame
              (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
               (Transform *)(this + 0x28),*(uint *)(this + 0x108));
  }
                    /* WARNING: Could not recover jumptable at 0x00d2c994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this);
  return;
}

