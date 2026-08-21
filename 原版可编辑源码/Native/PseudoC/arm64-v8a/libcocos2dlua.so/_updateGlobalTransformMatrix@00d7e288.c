
/* dragonBones::Bone::_updateGlobalTransformMatrix(bool) */

void __thiscall dragonBones::Bone::_updateGlobalTransformMatrix(Bone *this,bool param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  TransformObject *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined8 uVar9;
  ulong uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_c0;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
                    /* try { // try from 00d7e288 to 00e7e2ab has its CatchHandler @ 00d7dc8c */
  bVar3 = DragonBones::yDown;
                    /* try { // try from 00d7e2ac to 00e7e2b3 has its CatchHandler @ 00d7e4d4 */
  this_00 = *(TransformObject **)(this + 0xc0);
  bVar1 = *(byte *)(*(long *)(this + 0x68) + 0x5c);
  bVar2 = *(byte *)(*(long *)(this + 0x68) + 0x5d);
  if (*(int *)(this + 0x74) == 0) {
    puVar4 = *(undefined8 **)(this + 0x58);
    if (puVar4 == (undefined8 *)0x0) {
      uVar10 = *(ulong *)(this + 0x78);
      uVar9 = *(undefined8 *)(this + 0x80);
      fVar24 = *(float *)(this + 0x8c);
      fVar11 = (float)(uVar10 >> 0x20);
      uVar17 = (ulong)*(uint *)(this + 0x88);
      *(ulong *)(this + 0x28) = uVar10;
      *(undefined8 *)(this + 0x30) = uVar9;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x88);
      *(float *)(this + 0x3c) = fVar24;
      fVar6 = (float)((ulong)uVar9 >> 0x20);
    }
    else {
      uVar9 = *puVar4;
      uVar15 = puVar4[1];
      uVar18 = puVar4[2];
LAB_00d7e398:
      fVar11 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) + (float)((ulong)uVar9 >> 0x20);
      uVar10 = CONCAT44(fVar11,(float)*(undefined8 *)(this + 0x78) + (float)uVar9);
      uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) +
                       (float)((ulong)uVar15 >> 0x20),
                       (float)*(undefined8 *)(this + 0x80) + (float)uVar15);
      uVar17 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20) *
                        (float)((ulong)uVar18 >> 0x20),
                        (float)*(undefined8 *)(this + 0x88) * (float)uVar18);
      *(ulong *)(this + 0x28) = uVar10;
      *(undefined8 *)(this + 0x30) = uVar9;
      *(ulong *)(this + 0x38) = uVar17;
LAB_00d7e3b8:
      fVar24 = (float)(uVar17 >> 0x20);
      fVar6 = (float)((ulong)uVar9 >> 0x20);
    }
    fVar13 = (float)uVar17;
    local_c0 = (float)uVar9;
    fVar23 = (float)uVar10;
    if (this_00 != (TransformObject *)0x0) {
      lVar5 = *(long *)(this + 0xa8);
                    /* try { // try from 00d7e3c8 to 00e7e437 has its CatchHandler @ 00d7e510 */
      if (*(char *)(lVar5 + 0xf) != '\0') {
        if (*(char *)(lVar5 + 0xe) != '\0') goto LAB_00d7e694;
        TransformObject::updateGlobalTransform(this_00);
        fVar6 = *(float *)(this + 0x34);
        fVar11 = *(float *)(*(long *)(this + 0xc0) + 0x34);
        if ((bVar1 == 0) || (bVar2 != bVar3)) {
          if (bVar1 == 0) {
            if (bVar2 != bVar3) goto LAB_00d7e408;
            fVar6 = fVar6 + fVar11;
          }
          else {
            fVar6 = fVar6 + fVar11 + 3.1415927;
          }
        }
        else {
          fVar11 = fVar11 + 3.1415927;
LAB_00d7e408:
          fVar6 = fVar6 - fVar11;
        }
        local_c0 = *(float *)(this + 0x30);
        *(float *)(this + 0x34) = fVar6;
LAB_00d7e694:
        sincosf(fVar6,&fStack_84,&local_88);
        fVar11 = 0.0;
        fVar23 = 1.0;
        if (fVar6 != 0.0) {
          fVar11 = fStack_84;
          fVar23 = local_88;
        }
        *(float *)(this + 0x10) = fVar23;
        *(float *)(this + 0x14) = fVar11;
        fVar13 = fVar11;
        fVar7 = fVar23;
        if (local_c0 != 0.0) {
          sincosf(fVar6 + local_c0,&fStack_8c,&local_90);
          fVar13 = fStack_8c;
          fVar7 = local_90;
        }
        fVar6 = *(float *)(this + 0x38);
        fVar13 = -fVar13;
        *(float *)(this + 0x18) = fVar13;
        *(float *)(this + 0x1c) = fVar7;
        if (fVar6 != 1.0) {
          fVar23 = fVar23 * fVar6;
          fVar11 = fVar11 * fVar6;
          *(float *)(this + 0x10) = fVar23;
          *(float *)(this + 0x14) = fVar11;
        }
        fVar24 = *(float *)(this + 0x3c);
        if (fVar24 != 1.0) {
          fVar13 = fVar24 * fVar13;
          fVar7 = fVar7 * fVar24;
          *(float *)(this + 0x18) = fVar13;
          *(float *)(this + 0x1c) = fVar7;
        }
        fVar8 = *(float *)(this + 0x28);
        fVar12 = *(float *)(this + 0x2c);
        *(float *)(this + 0x20) = fVar8;
        *(float *)(this + 0x24) = fVar12;
        fVar16 = (float)*(undefined8 *)(this_00 + 0x10);
        fVar19 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
        fVar20 = (float)*(undefined8 *)(this_00 + 0x18);
        fVar21 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
        fVar14 = fVar16 * fVar13 + fVar20 * fVar7;
        fVar7 = fVar19 * fVar13 + fVar21 * fVar7;
        fVar13 = fVar16 * fVar23 + fVar20 * fVar11;
        fVar22 = fVar19 * fVar23 + fVar21 * fVar11;
        fVar11 = fVar16 * fVar8 + fVar20 * fVar12 + (float)*(undefined8 *)(this_00 + 0x20);
        fVar23 = fVar19 * fVar8 + fVar21 * fVar12 +
                 (float)((ulong)*(undefined8 *)(this_00 + 0x20) >> 0x20);
        *(ulong *)(this + 0x10) = CONCAT44(fVar22,fVar13);
        *(ulong *)(this + 0x18) = CONCAT44(fVar7,fVar14);
        *(ulong *)(this + 0x20) = CONCAT44(fVar23,fVar11);
        if (*(char *)(*(long *)(this + 0xa8) + 0xd) == '\0') {
          *(float *)(this + 0x20) = fVar8;
          *(float *)(this + 0x24) = fVar12;
          fVar11 = fVar8;
          fVar23 = fVar12;
        }
        else {
          *(ulong *)(this + 0x28) = CONCAT44(fVar23,fVar11);
        }
        if (param_1) {
          *(float *)(this + 0x28) = fVar11;
          *(float *)(this + 0x2c) = fVar23;
          fVar11 = atanf(fVar22 / fVar13);
          *(float *)(this + 0x34) = fVar11;
          fVar14 = -fVar14;
          fVar23 = atanf(fVar14 / fVar7);
          if ((fVar11 <= -0.7853982) || (0.7853982 <= fVar11)) {
            fVar13 = sinf(fVar11);
            fVar13 = fVar22 / fVar13;
          }
          else {
            fVar8 = cosf(fVar11);
            fVar13 = fVar13 / fVar8;
          }
          *(float *)(this + 0x38) = fVar13;
          if ((fVar23 <= -0.7853982) || (0.7853982 <= fVar23)) {
            fVar7 = sinf(fVar23);
            fVar7 = fVar14 / fVar7;
          }
          else {
            fVar8 = cosf(fVar23);
            fVar7 = fVar7 / fVar8;
          }
          *(float *)(this + 0x3c) = fVar7;
          if ((0.0 <= fVar6) && (fVar13 < 0.0)) {
            fVar11 = fVar11 - 3.1415927;
            *(float *)(this + 0x34) = fVar11;
            *(float *)(this + 0x38) = -fVar13;
          }
          if ((0.0 <= fVar24) && (fVar7 < 0.0)) {
            *(float *)(this + 0x3c) = -fVar7;
            fVar23 = fVar23 - 3.1415927;
          }
          *(float *)(this + 0x30) = fVar23 - fVar11;
          return;
        }
        this[0x70] = (Bone)0x1;
        return;
      }
      if (*(char *)(lVar5 + 0xd) == '\0') {
        if (bVar1 != 0) {
          *(float *)(this + 0x28) = -fVar23;
        }
        if (bVar2 == bVar3) {
                    /* catch() { ... } // from try @ 00d7e008 with catch @ 00d7e5ac */
          *(float *)(this + 0x2c) = -fVar11;
        }
                    /* catch() { ... } // from try @ 00d7e028 with catch @ 00d7e5b0 */
        if (*(char *)(lVar5 + 0xe) != '\0') goto LAB_00d7e5b8;
LAB_00d7e43c:
        if ((bVar1 == 0) && (bVar2 != bVar3)) goto LAB_00d7e8dc;
        fVar11 = 3.1415927;
        if ((bVar1 == 0) || (bVar2 != bVar3)) {
          if (bVar1 == 0) {
            fVar11 = -0.0;
          }
          local_c0 = local_c0 + 3.1415927;
          fVar6 = fVar11 - fVar6;
          *(float *)(this + 0x30) = local_c0;
        }
        else {
          fVar6 = fVar6 + 3.1415927;
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
        if (*(char *)(lVar5 + 0xe) == '\0') goto LAB_00d7e43c;
LAB_00d7e5b8:
        TransformObject::updateGlobalTransform(this_00);
        fVar11 = *(float *)(this + 0x34);
        fVar23 = fVar11 + *(float *)(*(long *)(this + 0xc0) + 0x34);
        fVar6 = fVar23 + 3.1415927;
        if (0.0 <= *(float *)(*(long *)(this + 0xc0) + 0x38)) {
          fVar6 = fVar23;
        }
        if ((*(float *)(this_00 + 0x10) * *(float *)(this_00 + 0x1c) -
             *(float *)(this_00 + 0x14) * *(float *)(this_00 + 0x18) < 0.0) &&
           ((fVar6 = fVar6 - (fVar11 + fVar11), (byte)(bVar2 ^ bVar3 ^ 1) != bVar1 ||
            (*(char *)(*(long *)(this + 0xa8) + 0x10) != '\0')))) {
          *(float *)(this + 0x30) = *(float *)(this + 0x30) + 3.1415927;
        }
        local_c0 = *(float *)(this + 0x30);
      }
      *(float *)(this + 0x34) = fVar6;
LAB_00d7e8dc:
      sincosf(fVar6,&fStack_94,&local_98);
      fVar11 = 1.0;
      fVar23 = 0.0;
      if (fVar6 != 0.0) {
        fVar11 = local_98;
        fVar23 = fStack_94;
      }
      *(float *)(this + 0x10) = fVar11;
      *(float *)(this + 0x14) = fVar23;
      fVar13 = fVar23;
      fVar7 = fVar11;
      if (local_c0 != 0.0) {
        sincosf(fVar6 + local_c0,&fStack_9c,&local_a0);
        fVar13 = fStack_9c;
        fVar7 = local_a0;
      }
      fVar6 = *(float *)(this + 0x38);
      *(float *)(this + 0x18) = -fVar13;
      *(float *)(this + 0x1c) = fVar7;
      if (fVar6 != 1.0) {
        *(float *)(this + 0x10) = fVar11 * fVar6;
        *(float *)(this + 0x14) = fVar23 * fVar6;
      }
      fVar11 = *(float *)(this + 0x3c);
      if (fVar11 != 1.0) {
        *(float *)(this + 0x18) = fVar11 * -fVar13;
        *(float *)(this + 0x1c) = fVar7 * fVar11;
      }
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x28);
      return;
    }
    fVar7 = (float)(uVar10 >> 0x20);
  }
  else {
    if (*(int *)(this + 0x74) == 1) {
      puVar4 = *(undefined8 **)(this + 0x58);
      if (puVar4 == (undefined8 *)0x0) {
        uVar9 = *(undefined8 *)(this + 0x40);
        uVar15 = *(undefined8 *)(this + 0x48);
        uVar18 = *(undefined8 *)(this + 0x50);
        goto LAB_00d7e398;
      }
                    /* try { // try from 00d7e2fc to 00e7e2ff has its CatchHandler @ 00d7e4b8 */
      fVar11 = (float)((ulong)*puVar4 >> 0x20) +
               (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) +
               (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
      uVar10 = CONCAT44(fVar11,(float)*puVar4 + (float)*(undefined8 *)(this + 0x40) +
                               (float)*(undefined8 *)(this + 0x78));
      *(ulong *)(this + 0x28) = uVar10;
      uVar9 = CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20),
                       (float)puVar4[1] + (float)*(undefined8 *)(this + 0x48) +
                       (float)*(undefined8 *)(this + 0x80));
      *(undefined8 *)(this + 0x30) = uVar9;
                    /* try { // try from 00d7e31c to 00e7e353 has its CatchHandler @ 00d7e4bc */
      uVar17 = CONCAT44((float)((ulong)puVar4[2] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20),
                        (float)puVar4[2] * (float)*(undefined8 *)(this + 0x50) *
                        (float)*(undefined8 *)(this + 0x88));
      *(ulong *)(this + 0x38) = uVar17;
      goto LAB_00d7e3b8;
    }
    fVar23 = *(float *)(this + 0x40);
    fVar7 = *(float *)(this + 0x44);
    local_c0 = *(float *)(this + 0x48);
    fVar6 = *(float *)(this + 0x4c);
    fVar13 = *(float *)(this + 0x50);
    fVar24 = *(float *)(this + 0x54);
    uVar10 = (ulong)(uint)fVar23;
    *(float *)(this + 0x28) = fVar23;
    *(float *)(this + 0x2c) = fVar7;
    *(float *)(this + 0x30) = local_c0;
    *(float *)(this + 0x34) = fVar6;
                    /* try { // try from 00d7e374 to 00e7e37f has its CatchHandler @ 00d7e534 */
    *(float *)(this + 0x38) = fVar13;
    *(float *)(this + 0x3c) = fVar24;
    fVar11 = fVar7;
  }
  if ((bVar1 == 0) && (bVar2 != bVar3)) goto LAB_00d7e504;
  if (bVar1 != 0) {
    fVar23 = -(float)uVar10;
    *(float *)(this + 0x28) = fVar23;
  }
                    /* try { // try from 00d7e494 to 00e7e49b has its CatchHandler @ 00d7e4a0 */
  if (bVar2 == bVar3) {
                    /* try { // try from 00d7e49c to 00e7e5db has its CatchHandler @ 00d7dc8c */
    fVar7 = -fVar11;
                    /* catch() { ... } // from try @ 00d7e494 with catch @ 00d7e4a0 */
                    /* catch() { ... } // from try @ 00d7df30 with catch @ 00d7e4a4 */
    *(float *)(this + 0x2c) = fVar7;
                    /* catch() { ... } // from try @ 00d7dd00 with catch @ 00d7e4a8 */
    if (bVar1 == 0) {
LAB_00d7e4dc:
      fVar11 = -0.0;
      goto LAB_00d7e4f0;
    }
                    /* catch() { ... } // from try @ 00d7e2fc with catch @ 00d7e4b8 */
                    /* catch() { ... } // from try @ 00d7e31c with catch @ 00d7e4bc */
    fVar6 = fVar6 + 3.1415927;
                    /* catch() { ... } // from try @ 00d7e0fc with catch @ 00d7e4c0 */
  }
  else {
    if (bVar1 == 0) goto LAB_00d7e4dc;
                    /* catch() { ... } // from try @ 00d7e0f0 with catch @ 00d7e4d0 */
    fVar11 = 3.1415927;
                    /* catch() { ... } // from try @ 00d7e2ac with catch @ 00d7e4d4 */
LAB_00d7e4f0:
    fVar6 = fVar11 - fVar6;
    local_c0 = local_c0 + 3.1415927;
    *(float *)(this + 0x30) = local_c0;
  }
  *(float *)(this + 0x34) = fVar6;
LAB_00d7e504:
                    /* catch() { ... } // from try @ 00d7e3c8 with catch @ 00d7e510 */
  sincosf(fVar6,&fStack_a4,&local_a8);
                    /* catch() { ... } // from try @ 00d7e1fc with catch @ 00d7e514 */
  fVar11 = 1.0;
  fVar8 = 0.0;
  if (fVar6 != 0.0) {
    fVar11 = local_a8;
    fVar8 = fStack_a4;
  }
                    /* catch() { ... } // from try @ 00d7e374 with catch @ 00d7e534 */
                    /* catch() { ... } // from try @ 00d7df94 with catch @ 00d7e538 */
                    /* catch() { ... } // from try @ 00d7dd5c with catch @ 00d7e53c */
  *(float *)(this + 0x10) = fVar11;
  *(float *)(this + 0x14) = fVar8;
  fVar12 = fVar8;
  fVar14 = fVar11;
  if (local_c0 != 0.0) {
    sincosf(fVar6 + local_c0,&fStack_ac,&local_b0);
    fVar12 = fStack_ac;
    fVar14 = local_b0;
  }
  *(float *)(this + 0x18) = -fVar12;
  *(float *)(this + 0x1c) = fVar14;
                    /* catch() { ... } // from try @ 00d7dd70 with catch @ 00d7e568 */
  if (fVar13 != 1.0) {
    *(float *)(this + 0x10) = fVar11 * fVar13;
    *(float *)(this + 0x14) = fVar8 * fVar13;
  }
                    /* catch() { ... } // from try @ 00d7e11c with catch @ 00d7e578 */
                    /* catch() { ... } // from try @ 00d7e13c with catch @ 00d7e57c */
  if (fVar24 != 1.0) {
    *(float *)(this + 0x18) = fVar24 * -fVar12;
    *(float *)(this + 0x1c) = fVar14 * fVar24;
  }
  *(float *)(this + 0x20) = fVar23;
  *(float *)(this + 0x24) = fVar7;
                    /* try { // try from 00d7e974 to 00e7ea3b has its CatchHandler @ 00d7e974
                       catch() { ... } // from try @ 00d7e974 with catch @ 00d7e974
                       catch() { ... } // from try @ 00d7ee70 with catch @ 00d7e974 */
  return;
}

