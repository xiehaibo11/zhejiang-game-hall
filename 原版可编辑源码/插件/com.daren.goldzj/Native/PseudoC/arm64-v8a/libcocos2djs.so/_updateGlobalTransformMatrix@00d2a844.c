
/* dragonBones::Bone::_updateGlobalTransformMatrix(bool) */

void __thiscall dragonBones::Bone::_updateGlobalTransformMatrix(Bone *this,bool param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  TransformObject *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float local_e0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_58;
  float fStack_54;
  ulong uVar10;
  
  bVar3 = DragonBones::yDown;
  this_00 = *(TransformObject **)(this + 0xc0);
  bVar1 = *(byte *)(*(long *)(this + 0x68) + 0x5c);
  bVar2 = *(byte *)(*(long *)(this + 0x68) + 0x5d);
  if (*(int *)(this + 0x74) == 0) {
    puVar5 = *(undefined8 **)(this + 0x58);
    if (puVar5 == (undefined8 *)0x0) {
      fVar7 = *(float *)(this + 0x78);
      fVar11 = *(float *)(this + 0x7c);
      fVar8 = *(float *)(this + 0x8c);
      uVar20 = *(undefined8 *)(this + 0x80);
      uVar21 = (ulong)*(uint *)(this + 0x88);
      *(float *)(this + 0x28) = fVar7;
      *(float *)(this + 0x2c) = fVar11;
      *(undefined8 *)(this + 0x30) = uVar20;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x88);
      *(float *)(this + 0x3c) = fVar8;
      fVar16 = (float)((ulong)uVar20 >> 0x20);
      fVar23 = fVar7;
    }
    else {
      fVar7 = (float)*(undefined8 *)(this + 0x78) + (float)*puVar5;
      fVar11 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) +
               (float)((ulong)*puVar5 >> 0x20);
      uVar10 = CONCAT44(fVar11,fVar7);
      uVar20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) +
                        (float)((ulong)puVar5[1] >> 0x20),
                        (float)*(undefined8 *)(this + 0x80) + (float)puVar5[1]);
      uVar21 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20) *
                        (float)((ulong)puVar5[2] >> 0x20),
                        (float)*(undefined8 *)(this + 0x88) * (float)puVar5[2]);
      *(ulong *)(this + 0x28) = uVar10;
      *(undefined8 *)(this + 0x30) = uVar20;
      *(ulong *)(this + 0x38) = uVar21;
LAB_00d2aba4:
      fVar23 = (float)uVar10;
      fVar8 = (float)(uVar21 >> 0x20);
      fVar16 = (float)((ulong)uVar20 >> 0x20);
    }
    fVar14 = (float)uVar21;
joined_r0x00d2aa28:
    local_e0 = (float)uVar20;
    if (this_00 != (TransformObject *)0x0) {
      lVar6 = *(long *)(this + 0xa8);
      if (*(char *)(lVar6 + 0xf) != '\0') {
        if (*(char *)(lVar6 + 0xe) != '\0') goto LAB_00d2ad64;
        TransformObject::updateGlobalTransform(this_00);
        fVar16 = *(float *)(this + 0x34);
        fVar7 = *(float *)(*(long *)(this + 0xc0) + 0x34);
        if ((bVar1 == 0) || (bVar2 != bVar3)) {
          if (bVar1 == 0) {
            if (bVar2 != bVar3) goto LAB_00d2ac40;
            fVar16 = fVar16 + fVar7;
          }
          else {
            fVar16 = fVar16 + fVar7 + 3.1415927;
          }
        }
        else {
          fVar7 = fVar7 + 3.1415927;
LAB_00d2ac40:
          fVar16 = fVar16 - fVar7;
        }
        local_e0 = *(float *)(this + 0x30);
        *(float *)(this + 0x34) = fVar16;
LAB_00d2ad64:
        sincosf(fVar16,&fStack_54,&local_58);
        fVar7 = 1.0;
        fVar11 = 0.0;
        if (fVar16 != 0.0) {
          fVar7 = local_58;
          fVar11 = fStack_54;
        }
        *(float *)(this + 0x10) = fVar7;
        *(float *)(this + 0x14) = fVar11;
        fVar14 = fVar11;
        fVar8 = fVar7;
        if (local_e0 != 0.0) {
          sincosf(fVar16 + local_e0,&fStack_a4,&local_a8);
          fVar14 = fStack_a4;
          fVar8 = local_a8;
        }
        fVar16 = *(float *)(this + 0x38);
        fVar14 = -fVar14;
        *(float *)(this + 0x18) = fVar14;
        *(float *)(this + 0x1c) = fVar8;
        if (fVar16 != 1.0) {
          fVar7 = fVar7 * fVar16;
          fVar11 = fVar11 * fVar16;
          *(float *)(this + 0x10) = fVar7;
          *(float *)(this + 0x14) = fVar11;
        }
        fVar23 = *(float *)(this + 0x3c);
        if (fVar23 != 1.0) {
          fVar14 = fVar23 * fVar14;
          fVar8 = fVar8 * fVar23;
          *(float *)(this + 0x18) = fVar14;
          *(float *)(this + 0x1c) = fVar8;
        }
        fVar9 = *(float *)(this + 0x28);
        fVar12 = *(float *)(this + 0x2c);
        *(float *)(this + 0x20) = fVar9;
        *(float *)(this + 0x24) = fVar12;
        fVar15 = (float)*(undefined8 *)(this_00 + 0x10);
        fVar17 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
        fVar18 = (float)*(undefined8 *)(this_00 + 0x18);
        fVar19 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
        fVar13 = fVar15 * fVar14 + fVar18 * fVar8;
        fVar8 = fVar17 * fVar14 + fVar19 * fVar8;
        fVar14 = fVar15 * fVar7 + fVar18 * fVar11;
        fVar22 = fVar17 * fVar7 + fVar19 * fVar11;
        fVar7 = fVar15 * fVar9 + fVar18 * fVar12 + (float)*(undefined8 *)(this_00 + 0x20);
        fVar11 = fVar17 * fVar9 + fVar19 * fVar12 +
                 (float)((ulong)*(undefined8 *)(this_00 + 0x20) >> 0x20);
        *(ulong *)(this + 0x10) = CONCAT44(fVar22,fVar14);
        *(ulong *)(this + 0x18) = CONCAT44(fVar8,fVar13);
        *(ulong *)(this + 0x20) = CONCAT44(fVar11,fVar7);
        if (*(char *)(*(long *)(this + 0xa8) + 0xd) == '\0') {
          *(float *)(this + 0x20) = fVar9;
          *(float *)(this + 0x24) = fVar12;
          fVar7 = fVar9;
          fVar11 = fVar12;
        }
        else {
          *(ulong *)(this + 0x28) = CONCAT44(fVar11,fVar7);
        }
        if (param_1) {
          *(float *)(this + 0x28) = fVar7;
          *(float *)(this + 0x2c) = fVar11;
          fVar7 = atanf(fVar22 / fVar14);
          *(float *)(this + 0x34) = fVar7;
          fVar13 = -fVar13;
          fVar11 = atanf(fVar13 / fVar8);
          if ((fVar7 <= -0.7853982) || (0.7853982 <= fVar7)) {
            fVar14 = sinf(fVar7);
            fVar14 = fVar22 / fVar14;
          }
          else {
            fVar9 = cosf(fVar7);
            fVar14 = fVar14 / fVar9;
          }
          *(float *)(this + 0x38) = fVar14;
          if ((fVar11 <= -0.7853982) || (0.7853982 <= fVar11)) {
            fVar8 = sinf(fVar11);
            fVar8 = fVar13 / fVar8;
          }
          else {
            fVar9 = cosf(fVar11);
            fVar8 = fVar8 / fVar9;
          }
          *(float *)(this + 0x3c) = fVar8;
          if ((0.0 <= fVar16) && (fVar14 < 0.0)) {
            fVar7 = fVar7 - 3.1415927;
            *(float *)(this + 0x34) = fVar7;
            *(float *)(this + 0x38) = -fVar14;
          }
          if ((0.0 <= fVar23) && (fVar8 < 0.0)) {
            *(float *)(this + 0x3c) = -fVar8;
            fVar11 = fVar11 - 3.1415927;
          }
          *(float *)(this + 0x30) = fVar11 - fVar7;
          return;
        }
        this[0x70] = (Bone)0x1;
        return;
      }
      if (*(char *)(lVar6 + 0xd) == '\0') {
        if (bVar1 != 0) {
          *(float *)(this + 0x28) = -fVar23;
        }
        if (bVar2 == bVar3) {
          *(float *)(this + 0x2c) = -fVar11;
        }
        if (*(char *)(lVar6 + 0xe) != '\0') goto LAB_00d2ac6c;
LAB_00d2abfc:
        if ((bVar1 == 0) && (bVar2 != bVar3)) goto LAB_00d2afa8;
        if ((bVar1 == 0) || (bVar2 != bVar3)) {
          local_e0 = local_e0 + 3.1415927;
          fVar7 = 3.1415927;
          if (bVar1 == 0) {
            fVar7 = -0.0;
          }
          fVar16 = fVar7 - fVar16;
          *(float *)(this + 0x30) = local_e0;
        }
        else {
          fVar16 = fVar16 + 3.1415927;
        }
      }
      else {
        *(ulong *)(this + 0x28) =
             CONCAT44((float)((ulong)*(undefined8 *)(this_00 + 0x20) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20) * fVar23 +
                      (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20) * fVar11,
                      (float)*(undefined8 *)(this_00 + 0x20) +
                      (float)*(undefined8 *)(this_00 + 0x10) * fVar23 +
                      (float)*(undefined8 *)(this_00 + 0x18) * fVar11);
        if (*(char *)(lVar6 + 0xe) == '\0') goto LAB_00d2abfc;
LAB_00d2ac6c:
        TransformObject::updateGlobalTransform(this_00);
        fVar7 = *(float *)(this + 0x34);
        fVar11 = fVar7 + *(float *)(*(long *)(this + 0xc0) + 0x34);
        fVar16 = fVar11 + 3.1415927;
        if (0.0 <= *(float *)(*(long *)(this + 0xc0) + 0x38)) {
          fVar16 = fVar11;
        }
        if (*(float *)(this_00 + 0x10) * *(float *)(this_00 + 0x1c) -
            *(float *)(this_00 + 0x14) * *(float *)(this_00 + 0x18) < 0.0) {
          if (((byte)(bVar2 ^ bVar3 ^ 1) != bVar1) ||
             (*(char *)(*(long *)(this + 0xa8) + 0x10) != '\0')) {
            *(float *)(this + 0x30) = *(float *)(this + 0x30) + 3.1415927;
          }
          fVar16 = fVar16 - (fVar7 + fVar7);
          if (DragonBones::yDown == 0) {
            *(float *)(this + 0x30) = -*(float *)(this + 0x30);
          }
        }
        local_e0 = *(float *)(this + 0x30);
      }
      *(float *)(this + 0x34) = fVar16;
LAB_00d2afa8:
      sincosf(fVar16,&fStack_ac,&local_b0);
      fVar7 = 1.0;
      fVar11 = 0.0;
      if (fVar16 != 0.0) {
        fVar7 = local_b0;
        fVar11 = fStack_ac;
      }
      *(float *)(this + 0x10) = fVar7;
      *(float *)(this + 0x14) = fVar11;
      fVar14 = fVar11;
      fVar8 = fVar7;
      if (local_e0 != 0.0) {
        sincosf(fVar16 + local_e0,&fStack_b4,&local_b8);
        fVar14 = fStack_b4;
        fVar8 = local_b8;
      }
      fVar16 = *(float *)(this + 0x38);
      *(float *)(this + 0x18) = -fVar14;
      *(float *)(this + 0x1c) = fVar8;
      if (fVar16 != 1.0) {
        *(float *)(this + 0x10) = fVar7 * fVar16;
        *(float *)(this + 0x14) = fVar11 * fVar16;
      }
      fVar7 = *(float *)(this + 0x3c);
      if (fVar7 != 1.0) {
        *(float *)(this + 0x18) = fVar7 * -fVar14;
        *(float *)(this + 0x1c) = fVar8 * fVar7;
      }
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x28);
      return;
    }
  }
  else {
    if (*(int *)(this + 0x74) == 1) {
      pfVar4 = *(float **)(this + 0x58);
      if (pfVar4 != (float *)0x0) {
        fVar7 = *pfVar4 + *(float *)(this + 0x40) + *(float *)(this + 0x78);
        uVar10 = (ulong)(uint)fVar7;
        *(float *)(this + 0x28) = fVar7;
        uVar21 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20),
                          (float)*(undefined8 *)(pfVar4 + 4) * (float)*(undefined8 *)(this + 0x50) *
                          (float)*(undefined8 *)(this + 0x88));
        *(ulong *)(this + 0x38) = uVar21;
        if (bVar3 == 0) {
          uVar20 = *(undefined8 *)(this + 0x80);
          fVar11 = (pfVar4[1] - *(float *)(this + 0x44)) + *(float *)(this + 0x7c);
          *(float *)(this + 0x2c) = fVar11;
          fVar14 = (float)*(undefined8 *)(pfVar4 + 2) - (float)*(undefined8 *)(this + 0x48);
          fVar16 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
        }
        else {
          uVar20 = *(undefined8 *)(this + 0x80);
          fVar11 = pfVar4[1] + *(float *)(this + 0x44) + *(float *)(this + 0x7c);
          *(float *)(this + 0x2c) = fVar11;
          fVar14 = (float)*(undefined8 *)(pfVar4 + 2) + (float)*(undefined8 *)(this + 0x48);
          fVar16 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
        }
        uVar20 = CONCAT44(fVar16 + (float)((ulong)uVar20 >> 0x20),fVar14 + (float)uVar20);
        *(undefined8 *)(this + 0x30) = uVar20;
        goto LAB_00d2aba4;
      }
      fVar11 = *(float *)(this + 0x44);
      uVar20 = *(undefined8 *)(this + 0x48);
      *(float *)(this + 0x28) = *(float *)(this + 0x40);
      *(float *)(this + 0x2c) = fVar11;
      *(undefined8 *)(this + 0x30) = uVar20;
      *(float *)(this + 0x38) = *(float *)(this + 0x50);
      *(float *)(this + 0x3c) = *(float *)(this + 0x54);
      if (bVar3 == 0) {
        fVar11 = -fVar11;
        uVar20 = CONCAT44(-(float)((ulong)uVar20 >> 0x20),-(float)uVar20);
        *(float *)(this + 0x2c) = fVar11;
        *(undefined8 *)(this + 0x30) = uVar20;
      }
      fVar7 = *(float *)(this + 0x78) + *(float *)(this + 0x40);
      fVar11 = *(float *)(this + 0x7c) + fVar11;
      fVar16 = (float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) + (float)((ulong)uVar20 >> 0x20)
      ;
      uVar20 = CONCAT44(fVar16,(float)*(undefined8 *)(this + 0x80) + (float)uVar20);
      *(float *)(this + 0x28) = fVar7;
      *(float *)(this + 0x2c) = fVar11;
      fVar14 = *(float *)(this + 0x88) * *(float *)(this + 0x50);
      fVar8 = *(float *)(this + 0x8c) * *(float *)(this + 0x54);
      *(undefined8 *)(this + 0x30) = uVar20;
      *(float *)(this + 0x38) = fVar14;
      *(float *)(this + 0x3c) = fVar8;
      fVar23 = fVar7;
      goto joined_r0x00d2aa28;
    }
    fVar7 = *(float *)(this + 0x40);
    fVar11 = *(float *)(this + 0x44);
    local_e0 = *(float *)(this + 0x48);
    fVar16 = *(float *)(this + 0x4c);
    fVar14 = *(float *)(this + 0x50);
    fVar8 = *(float *)(this + 0x54);
    *(float *)(this + 0x28) = fVar7;
    *(float *)(this + 0x2c) = fVar11;
    *(float *)(this + 0x30) = local_e0;
    *(float *)(this + 0x34) = fVar16;
    *(float *)(this + 0x38) = fVar14;
    *(float *)(this + 0x3c) = fVar8;
    fVar23 = fVar7;
    if (bVar3 == 0) {
      fVar11 = -fVar11;
      local_e0 = -local_e0;
      fVar16 = -fVar16;
      *(float *)(this + 0x2c) = fVar11;
      *(float *)(this + 0x30) = local_e0;
      *(float *)(this + 0x34) = fVar16;
    }
  }
  if ((bVar1 == 0) && (bVar2 != bVar3)) goto LAB_00d2aae8;
  if (bVar1 != 0) {
    fVar7 = -fVar23;
    *(float *)(this + 0x28) = fVar7;
  }
  if (bVar2 == bVar3) {
    fVar11 = -fVar11;
    *(float *)(this + 0x2c) = fVar11;
    if (bVar1 == 0) {
LAB_00d2aac0:
      fVar23 = -0.0;
      goto LAB_00d2aad4;
    }
    fVar16 = fVar16 + 3.1415927;
  }
  else {
    if (bVar1 == 0) goto LAB_00d2aac0;
    fVar23 = 3.1415927;
LAB_00d2aad4:
    fVar16 = fVar23 - fVar16;
    local_e0 = local_e0 + 3.1415927;
    *(float *)(this + 0x30) = local_e0;
  }
  *(float *)(this + 0x34) = fVar16;
LAB_00d2aae8:
  sincosf(fVar16,&fStack_bc,&local_c0);
  fVar23 = 1.0;
  fVar9 = 0.0;
  if (fVar16 != 0.0) {
    fVar23 = local_c0;
    fVar9 = fStack_bc;
  }
  *(float *)(this + 0x10) = fVar23;
  *(float *)(this + 0x14) = fVar9;
  fVar12 = fVar9;
  fVar13 = fVar23;
  if (local_e0 != 0.0) {
    sincosf(fVar16 + local_e0,&fStack_c4,&local_c8);
    fVar12 = fStack_c4;
    fVar13 = local_c8;
  }
  *(float *)(this + 0x18) = -fVar12;
  *(float *)(this + 0x1c) = fVar13;
  if (fVar14 != 1.0) {
    *(float *)(this + 0x10) = fVar23 * fVar14;
    *(float *)(this + 0x14) = fVar9 * fVar14;
  }
  if (fVar8 != 1.0) {
    *(float *)(this + 0x18) = fVar8 * -fVar12;
    *(float *)(this + 0x1c) = fVar13 * fVar8;
  }
  *(float *)(this + 0x20) = fVar7;
  *(float *)(this + 0x24) = fVar11;
  return;
}

