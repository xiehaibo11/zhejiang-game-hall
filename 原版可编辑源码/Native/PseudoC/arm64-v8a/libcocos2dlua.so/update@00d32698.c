
/* cocos2d::MotionStreak3D::update(float) */

void __thiscall cocos2d::MotionStreak3D::update(MotionStreak3D *this,float param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (this[0x300] == (MotionStreak3D)0x0) {
    return;
  }
  uVar13 = *(uint *)(this + 0x348);
  if (uVar13 == 0) {
    iVar7 = 0;
  }
  else {
    fVar18 = *(float *)(this + 0x33c);
    lVar8 = 0;
    uVar9 = 0;
    iVar7 = 0;
    uVar10 = 6;
    uVar12 = 1;
    do {
      lVar16 = *(long *)(this + 0x358);
      fVar19 = *(float *)(lVar16 + uVar9 * 4) - fVar18 * param_1;
      *(float *)(lVar16 + uVar9 * 4) = fVar19;
      if (fVar19 <= 0.0) {
        iVar7 = iVar7 + 1;
      }
      else {
        uVar2 = uVar9 + (uint)-iVar7;
        if (iVar7 == 0) {
          uVar13 = (int)uVar9 * 8;
        }
        else {
          *(float *)(lVar16 + (uVar2 & 0xffffffff) * 4) = fVar19;
          puVar15 = (undefined8 *)(*(long *)(this + 0x350) + lVar8);
          uVar17 = *puVar15;
          puVar14 = (undefined8 *)(*(long *)(this + 0x350) + (uVar2 & 0xffffffff) * 0xc);
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar15 + 1);
          *puVar14 = uVar17;
          uVar13 = uVar12 + iVar7 * -2;
          puVar14 = (undefined8 *)(*(long *)(this + 0x360) + (ulong)(uVar12 - 1) * 0xc);
          uVar17 = *puVar14;
          puVar15 = (undefined8 *)(*(long *)(this + 0x360) + (ulong)(uVar13 - 1) * 0xc);
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar15 = uVar17;
          puVar14 = (undefined8 *)(*(long *)(this + 0x360) + (ulong)uVar12 * 0xc);
          uVar17 = *puVar14;
          puVar15 = (undefined8 *)(*(long *)(this + 0x360) + (ulong)uVar13 * 0xc);
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar15 = uVar17;
          uVar5 = uVar10 + iVar7 * -8;
          uVar13 = uVar5 - 6;
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)uVar13) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar10 - 6));
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar5 - 5)) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar10 - 5));
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar5 - 4)) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar10 - 4));
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar5 - 2)) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar10 - 2));
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar5 - 1)) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)(uVar10 - 1));
          *(undefined1 *)(*(long *)(this + 0x368) + (ulong)uVar5) =
               *(undefined1 *)(*(long *)(this + 0x368) + (ulong)uVar10);
          lVar16 = *(long *)(this + 0x358);
        }
        uVar4 = (undefined1)(int)(*(float *)(lVar16 + (uVar2 & 0xffffffff) * 4) * 255.0);
        *(undefined1 *)(*(long *)(this + 0x368) + ((ulong)uVar13 | 3)) = uVar4;
        *(undefined1 *)(*(long *)(this + 0x368) + ((ulong)uVar13 | 7)) = uVar4;
        uVar13 = *(uint *)(this + 0x348);
      }
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 8;
      uVar12 = uVar12 + 2;
      lVar8 = lVar8 + 0xc;
    } while (uVar9 < uVar13);
  }
  uVar13 = uVar13 - iVar7;
  *(uint *)(this + 0x348) = uVar13;
  if (uVar13 < *(uint *)(this + 0x344)) {
    lVar8 = *(long *)(this + 0x350);
    if (uVar13 != 0) {
      pfVar11 = (float *)(lVar8 + (ulong)(uVar13 - 1) * 0xc);
      fVar18 = *pfVar11 - *(float *)(this + 0x318);
      fVar20 = pfVar11[1] - *(float *)(this + 0x31c);
      fVar19 = *(float *)(this + 0x340);
      fVar25 = pfVar11[2] - *(float *)(this + 800);
      if (uVar13 - 1 == 0) {
        bVar6 = false;
      }
      else {
        pfVar11 = (float *)(lVar8 + (ulong)(uVar13 - 2) * 0xc);
        fVar21 = *pfVar11 - *(float *)(this + 0x318);
        fVar23 = pfVar11[1] - *(float *)(this + 0x31c);
        fVar24 = pfVar11[2] - *(float *)(this + 800);
        bVar6 = fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24 < fVar19 + fVar19;
      }
      if ((fVar18 * fVar18 + fVar20 * fVar20 + fVar25 * fVar25 < fVar19) || (bVar6))
      goto LAB_00d329e4;
    }
    uVar17 = *(undefined8 *)(this + 0x318);
    puVar15 = (undefined8 *)(lVar8 + (ulong)uVar13 * 0xc);
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(this + 800);
    *puVar15 = uVar17;
    uVar13 = *(uint *)(this + 0x348);
    *(undefined4 *)(*(long *)(this + 0x358) + (ulong)uVar13 * 4) = 0x3f800000;
    lVar8 = *(long *)(this + 0x368);
    uVar3 = *(undefined2 *)(this + 0x21a);
    uVar9 = (ulong)(uVar13 << 3);
    *(MotionStreak3D *)((undefined2 *)(lVar8 + uVar9) + 1) = this[0x21c];
    *(undefined2 *)(lVar8 + uVar9) = uVar3;
    lVar8 = *(long *)(this + 0x368);
    uVar3 = *(undefined2 *)(this + 0x21a);
    *(MotionStreak3D *)(lVar8 + uVar9 + 6) = this[0x21c];
    *(undefined2 *)(lVar8 + uVar9 + 4) = uVar3;
    *(undefined1 *)(*(long *)(this + 0x368) + (uVar9 | 3)) = 0xff;
    *(undefined1 *)(*(long *)(this + 0x368) + (uVar9 | 7)) = 0xff;
    uVar22 = *(undefined8 *)(this + 0x32c);
    fVar19 = *(float *)(this + 0x334);
    puVar15 = (undefined8 *)(*(long *)(this + 0x350) + (ulong)*(uint *)(this + 0x348) * 0xc);
    fVar18 = *(float *)(this + 0x338) * 0.5;
    uVar17 = *puVar15;
    fVar20 = *(float *)(puVar15 + 1);
    puVar15 = (undefined8 *)(*(long *)(this + 0x360) + (ulong)(*(uint *)(this + 0x348) << 1) * 0xc);
    *puVar15 = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar18 + (float)((ulong)uVar17 >> 0x20),
                        (float)uVar22 * fVar18 + (float)uVar17);
    *(float *)(puVar15 + 1) = fVar18 * fVar19 + fVar20;
    uVar17 = *(undefined8 *)(this + 0x32c);
    fVar19 = *(float *)(this + 0x334);
    puVar15 = (undefined8 *)(*(long *)(this + 0x350) + (ulong)*(uint *)(this + 0x348) * 0xc);
    uVar22 = *puVar15;
    fVar20 = *(float *)(puVar15 + 1);
    puVar15 = (undefined8 *)
              (*(long *)(this + 0x360) + (ulong)(*(uint *)(this + 0x348) << 1 | 1) * 0xc);
    *puVar15 = CONCAT44((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar17 >> 0x20) * fVar18,
                        (float)uVar22 - (float)uVar17 * fVar18);
    *(float *)(puVar15 + 1) = fVar20 - fVar18 * fVar19;
    uVar13 = *(int *)(this + 0x348) + 1;
    *(uint *)(this + 0x348) = uVar13;
  }
  if (uVar13 == 0) {
    return;
  }
LAB_00d329e4:
  if (*(uint *)(this + 0x34c) != uVar13) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      fVar18 = (1.0 / (float)uVar13) * (float)(uVar9 & 0xffffffff);
      puVar1 = (undefined4 *)(*(long *)(this + 0x370) + (ulong)(uVar10 - 1) * 8);
      *puVar1 = 0;
      puVar1[1] = fVar18;
      uVar9 = uVar9 + 1;
      puVar1 = (undefined4 *)(*(long *)(this + 0x370) + (ulong)uVar10 * 8);
      *puVar1 = 0x3f800000;
      puVar1[1] = fVar18;
      uVar10 = uVar10 + 2;
    } while (uVar9 < *(uint *)(this + 0x348));
    *(uint *)(this + 0x34c) = *(uint *)(this + 0x348);
  }
  return;
}

