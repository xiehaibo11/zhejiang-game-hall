
/* dragonBones::DeformTimelineState::_onArriveAtFrame() */

void __thiscall dragonBones::DeformTimelineState::_onArriveAtFrame(DeformTimelineState *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  
  TweenTimelineState::_onArriveAtFrame((TweenTimelineState *)this);
  if (*(long *)(this + 0x58) == 0) {
    uVar10 = (ulong)*(uint *)(this + 0xd0);
    if (*(uint *)(this + 0xd0) != 0) {
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      memset(*(void **)(this + 0xd8),0,uVar10 << 2);
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xd0);
    uVar10 = (ulong)uVar4;
    fVar23 = *(float *)(*(long *)(*(long *)(this + 0x60) + 0x20) + 0x1c);
    lVar8 = *(long *)(this + 0x88);
    uVar1 = *(int *)(this + 0x24) + *(int *)(*(long *)(this + 0x50) + 0x14);
    uVar5 = uVar1 + uVar4 * *(int *)(this + 0x30);
    if (*(int *)(this + 0x1c) == 2) {
      if (uVar4 != 0) {
        puVar12 = *(undefined8 **)(this + 0xd8);
        puVar14 = *(undefined8 **)(this + 0xf0);
        if (*(int *)(this + 0x30) != *(int *)(this + 0x28) + -1) {
          uVar1 = uVar5 + uVar4;
        }
        uVar19 = (ulong)uVar1;
        uVar16 = (ulong)uVar5;
        uVar20 = 0;
        if (3 < uVar4) {
          puVar6 = (undefined8 *)((long)puVar14 + uVar10 * 4);
          puVar7 = (undefined8 *)((long)puVar12 + uVar10 * 4);
          puVar21 = (undefined8 *)(lVar8 + (uVar10 + uVar16) * 4);
          puVar22 = (undefined8 *)(lVar8 + uVar16 * 4);
          puVar2 = (undefined8 *)(lVar8 + (uVar19 + uVar10) * 4);
          puVar3 = (undefined8 *)(lVar8 + uVar19 * 4);
          if ((((puVar6 <= puVar12 || puVar7 <= puVar14) &&
               (puVar21 <= puVar12 || puVar7 <= puVar22)) && (puVar2 <= puVar12 || puVar7 <= puVar3)
              ) && ((puVar21 <= puVar14 || puVar6 <= puVar22 &&
                    (puVar2 <= puVar14 || puVar6 <= puVar3)))) {
            uVar20 = uVar10 & 0xfffffffc;
            puVar6 = puVar14;
            puVar7 = puVar12;
            puVar21 = (undefined8 *)(lVar8 + uVar19 * 4);
            puVar22 = (undefined8 *)(lVar8 + uVar16 * 4);
            uVar18 = uVar20;
            do {
              uVar25 = puVar21[1];
              uVar24 = *puVar21;
              uVar18 = uVar18 - 4;
              fVar26 = fVar23 * (float)*puVar22;
              fVar27 = fVar23 * (float)((ulong)*puVar22 >> 0x20);
              fVar28 = fVar23 * (float)puVar22[1];
              fVar30 = fVar23 * (float)((ulong)puVar22[1] >> 0x20);
              puVar7[1] = CONCAT44(fVar30,fVar28);
              *puVar7 = CONCAT44(fVar27,fVar26);
              puVar6[1] = CONCAT44(fVar23 * (float)((ulong)uVar25 >> 0x20) - fVar30,
                                   fVar23 * (float)uVar25 - fVar28);
              *puVar6 = CONCAT44(fVar23 * (float)((ulong)uVar24 >> 0x20) - fVar27,
                                 fVar23 * (float)uVar24 - fVar26);
              puVar6 = puVar6 + 2;
              puVar7 = puVar7 + 2;
              puVar21 = puVar21 + 2;
              puVar22 = puVar22 + 2;
            } while (uVar18 != 0);
            if (uVar20 == uVar10) {
              return;
            }
          }
        }
        lVar11 = uVar10 - uVar20;
        pfVar9 = (float *)(lVar8 + (uVar20 + uVar16) * 4);
        pfVar13 = (float *)((long)puVar12 + uVar20 * 4);
        pfVar15 = (float *)((long)puVar14 + uVar20 * 4);
        pfVar17 = (float *)(lVar8 + (uVar20 + uVar19) * 4);
        do {
          fVar26 = *pfVar17;
          fVar27 = *pfVar9;
          lVar11 = lVar11 + -1;
          *pfVar13 = fVar23 * fVar27;
          *pfVar15 = fVar23 * fVar26 - fVar23 * fVar27;
          pfVar9 = pfVar9 + 1;
          pfVar13 = pfVar13 + 1;
          pfVar15 = pfVar15 + 1;
          pfVar17 = pfVar17 + 1;
        } while (lVar11 != 0);
      }
    }
    else if (uVar4 != 0) {
      uVar19 = *(ulong *)(this + 0xd8);
      uVar16 = (ulong)uVar5;
      if ((uVar4 < 8) ||
         ((uVar20 = lVar8 + uVar16 * 4, uVar19 < lVar8 + (uVar10 + uVar16) * 4 &&
          (uVar20 < uVar19 + uVar10 * 4)))) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar10 & 0xfffffff8;
        puVar12 = (undefined8 *)(uVar20 + 0x10);
        puVar14 = (undefined8 *)(uVar19 + 0x10);
        uVar20 = uVar18;
        do {
          puVar6 = puVar12 + -1;
          uVar24 = puVar12[-2];
          uVar29 = puVar12[1];
          uVar25 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar20 = uVar20 - 8;
          puVar14[-1] = CONCAT44(fVar23 * (float)((ulong)*puVar6 >> 0x20),fVar23 * (float)*puVar6);
          puVar14[-2] = CONCAT44(fVar23 * (float)((ulong)uVar24 >> 0x20),fVar23 * (float)uVar24);
          puVar14[1] = CONCAT44(fVar23 * (float)((ulong)uVar29 >> 0x20),fVar23 * (float)uVar29);
          *puVar14 = CONCAT44(fVar23 * (float)((ulong)uVar25 >> 0x20),fVar23 * (float)uVar25);
          puVar14 = puVar14 + 4;
        } while (uVar20 != 0);
        if (uVar18 == uVar10) {
          return;
        }
      }
      lVar11 = uVar10 - uVar18;
      pfVar9 = (float *)(lVar8 + (uVar18 + uVar16) * 4);
      pfVar13 = (float *)(uVar19 + uVar18 * 4);
      do {
        lVar11 = lVar11 + -1;
        *pfVar13 = fVar23 * *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar13 = pfVar13 + 1;
      } while (lVar11 != 0);
    }
  }
  return;
}

