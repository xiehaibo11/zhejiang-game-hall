
/* cocos2d::MotionStreak::update(float) */

void __thiscall cocos2d::MotionStreak::update(MotionStreak *this,float param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (this[0x301] == (MotionStreak)0x0) {
    return;
  }
  uVar12 = *(uint *)(this + 0x330);
  if (uVar12 == 0) {
    iVar7 = 0;
  }
  else {
    fVar16 = *(float *)(this + 0x324);
    uVar9 = 0;
    uVar10 = 0;
    iVar7 = 0;
    uVar11 = 1;
    do {
      lVar15 = *(long *)(this + 0x340);
      fVar17 = *(float *)(lVar15 + uVar10 * 4) - fVar16 * param_1;
      *(float *)(lVar15 + uVar10 * 4) = fVar17;
      if (fVar17 <= 0.0) {
        iVar7 = iVar7 + 1;
      }
      else {
        uVar3 = uVar10 + (uint)-iVar7;
        if (iVar7 == 0) {
          uVar14 = (ulong)(uint)((int)uVar10 * 8);
        }
        else {
          *(float *)(lVar15 + (uVar3 & 0xffffffff) * 4) = fVar17;
          uVar12 = uVar11 + iVar7 * -2;
          *(undefined8 *)(*(long *)(this + 0x338) + (uVar3 & 0xffffffff) * 8) =
               *(undefined8 *)(*(long *)(this + 0x338) + uVar9);
          *(undefined8 *)(*(long *)(this + 0x348) + (ulong)(uVar12 - 1) * 8) =
               *(undefined8 *)(*(long *)(this + 0x348) + (ulong)(uVar11 - 1) * 8);
          *(undefined8 *)(*(long *)(this + 0x348) + (ulong)uVar12 * 8) =
               *(undefined8 *)(*(long *)(this + 0x348) + (ulong)uVar11 * 8);
          uVar14 = uVar9 + (uint)(iVar7 * -8);
          iVar13 = (int)uVar14;
          *(undefined1 *)(*(long *)(this + 0x350) + (uVar14 & 0xffffffff)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (uVar9 & 0xffffffff));
          iVar8 = (int)uVar9;
          *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar13 + 1)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar8 + 1));
          *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar13 + 2)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar8 + 2));
          *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar13 + 4)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar8 + 4));
          *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar13 + 5)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar8 + 5));
          *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar13 + 6)) =
               *(undefined1 *)(*(long *)(this + 0x350) + (ulong)(iVar8 + 6));
          lVar15 = *(long *)(this + 0x340);
        }
        uVar5 = (undefined1)(int)(*(float *)(lVar15 + (uVar3 & 0xffffffff) * 4) * 255.0);
        *(undefined1 *)(*(long *)(this + 0x350) + (uVar14 & 0xffffffff | 3)) = uVar5;
        *(undefined1 *)(*(long *)(this + 0x350) + (uVar14 & 0xffffffff | 7)) = uVar5;
        uVar12 = *(uint *)(this + 0x330);
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 8;
      uVar11 = uVar11 + 2;
    } while (uVar10 < uVar12);
  }
                    /* catch() { ... } // from try @ 00f22358 with catch @ 00f2232c */
  uVar12 = uVar12 - iVar7;
  *(uint *)(this + 0x330) = uVar12;
  if (uVar12 < *(uint *)(this + 0x32c)) {
    lVar15 = *(long *)(this + 0x338);
    if (uVar12 != 0) {
      pfVar1 = (float *)(lVar15 + (ulong)(uVar12 - 1) * 8);
                    /* try { // try from 00f22350 to 01022357 has its CatchHandler @ 00f22384 */
                    /* try { // try from 00f22358 to 0102239f has its CatchHandler @ 00f2232c */
      fVar16 = *(float *)(this + 0x328);
      fVar17 = *pfVar1 - *(float *)(this + 0x318);
      fVar20 = pfVar1[1] - *(float *)(this + 0x31c);
      if (uVar12 - 1 == 0) {
        bVar6 = false;
      }
      else {
        pfVar1 = (float *)(lVar15 + (ulong)(uVar12 - 2) * 8);
        fVar18 = *pfVar1 - *(float *)(this + 0x318);
        fVar19 = pfVar1[1] - *(float *)(this + 0x31c);
        bVar6 = fVar18 * fVar18 + fVar19 * fVar19 < fVar16 + fVar16;
      }
      if ((fVar17 * fVar17 + fVar20 * fVar20 < fVar16) || (bVar6)) goto LAB_00f22468;
    }
                    /* catch() { ... } // from try @ 00f22350 with catch @ 00f22384 */
    *(undefined8 *)(lVar15 + (ulong)uVar12 * 8) = *(undefined8 *)(this + 0x318);
    uVar12 = *(uint *)(this + 0x330);
    *(undefined4 *)(*(long *)(this + 0x340) + (ulong)uVar12 * 4) = 0x3f800000;
    lVar15 = *(long *)(this + 0x350);
    uVar4 = *(undefined2 *)(this + 0x21a);
    uVar10 = (ulong)(uVar12 << 3);
    *(MotionStreak *)((undefined2 *)(lVar15 + uVar10) + 1) = this[0x21c];
    *(undefined2 *)(lVar15 + uVar10) = uVar4;
    lVar15 = *(long *)(this + 0x350);
    uVar4 = *(undefined2 *)(this + 0x21a);
    *(MotionStreak *)(lVar15 + uVar10 + 6) = this[0x21c];
    *(undefined2 *)(lVar15 + uVar10 + 4) = uVar4;
    *(undefined1 *)(*(long *)(this + 0x350) + (uVar10 | 3)) = 0xff;
    *(undefined1 *)(*(long *)(this + 0x350) + (uVar10 | 7)) = 0xff;
    uVar12 = *(uint *)(this + 0x330);
    if ((uVar12 != 0) && (this[0x300] != (MotionStreak)0x0)) {
      if (uVar12 < 2) {
        uVar11 = 2;
        uVar12 = 0;
      }
      else {
        uVar11 = 1;
      }
      ccVertexLineToPolygon
                (*(Vec2 **)(this + 0x338),*(float *)(this + 800),*(Vec2 **)(this + 0x348),uVar12,
                 uVar11);
    }
    uVar12 = *(int *)(this + 0x330) + 1;
    *(uint *)(this + 0x330) = uVar12;
  }
LAB_00f22468:
  if (this[0x300] == (MotionStreak)0x0) {
    ccVertexLineToPolygon
              (*(Vec2 **)(this + 0x338),*(float *)(this + 800),*(Vec2 **)(this + 0x348),0,uVar12);
    uVar12 = *(uint *)(this + 0x330);
  }
  if ((uVar12 != 0) && (*(uint *)(this + 0x334) != uVar12)) {
    uVar10 = 0;
    uVar11 = 1;
    do {
      fVar16 = (1.0 / (float)uVar12) * (float)(uVar10 & 0xffffffff);
      puVar2 = (undefined4 *)(*(long *)(this + 0x358) + (ulong)(uVar11 - 1) * 8);
      *puVar2 = 0;
      puVar2[1] = fVar16;
      uVar10 = uVar10 + 1;
      puVar2 = (undefined4 *)(*(long *)(this + 0x358) + (ulong)uVar11 * 8);
      *puVar2 = 0x3f800000;
      puVar2[1] = fVar16;
      uVar11 = uVar11 + 2;
    } while (uVar10 < *(uint *)(this + 0x330));
    *(uint *)(this + 0x334) = *(uint *)(this + 0x330);
  }
  return;
}

