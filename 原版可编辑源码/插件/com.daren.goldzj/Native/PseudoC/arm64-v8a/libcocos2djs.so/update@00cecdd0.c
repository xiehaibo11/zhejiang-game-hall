
/* spine::PathConstraint::update() */

void __thiscall spine::PathConstraint::update(PathConstraint *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  PathAttachment *pPVar6;
  RTTI *this_00;
  ulong uVar7;
  long *plVar8;
  Bone *this_01;
  PathConstraintData *this_02;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar24;
  
  pPVar6 = (PathAttachment *)Slot::getAttachment(*(Slot **)(this + 0x30));
  if (pPVar6 == (PathAttachment *)0x0) {
    return;
  }
  this_00 = (RTTI *)(**(code **)(*(long *)pPVar6 + 0x10))();
  uVar7 = RTTI::instanceOf(this_00,(RTTI *)PathAttachment::rtti);
  if ((uVar7 & 1) == 0) {
    return;
  }
  fVar35 = *(float *)(this + 0x40);
  fVar34 = *(float *)(this + 0x44);
  if ((fVar35 <= 0.0) && (fVar34 <= 0.0)) {
    return;
  }
  this_02 = *(PathConstraintData **)(this + 8);
  uVar20 = *(ulong *)(this + 0x18);
  iVar2 = *(int *)(this_02 + 0x5c);
  iVar3 = *(int *)(this_02 + 0x60);
  uVar15 = *(ulong *)(this + 0x50);
  uVar7 = uVar20;
  if (iVar3 != 0) {
    uVar7 = uVar20 + 1;
  }
  *(ulong *)(this + 0x50) = uVar7;
  uVar9 = uVar7;
  if (*(ulong *)(this + 0x58) < uVar7) {
    uVar12 = (uint)((float)uVar7 * 1.75);
    uVar18 = *(undefined8 *)(this + 0x60);
    if (uVar12 < 9) {
      uVar12 = 8;
    }
    *(long *)(this + 0x58) = (long)(int)uVar12;
    plVar8 = (long *)SpineExtension::getInstance();
    uVar18 = (**(code **)(*plVar8 + 0x20))
                       (plVar8,uVar18,
                        -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x52);
    uVar9 = *(ulong *)(this + 0x50);
    *(undefined8 *)(this + 0x60) = uVar18;
  }
  if (uVar15 <= uVar9 && uVar9 - uVar15 != 0) {
    memset((void *)(*(long *)(this + 0x60) + uVar15 * 4),0,(uVar9 - uVar15) * 4);
  }
  fVar21 = *(float *)(this + 0x3c);
  if ((iVar3 == 2) || (iVar2 != 2)) {
    if (iVar3 == 2) {
      uVar15 = *(ulong *)(this + 0xd0);
      *(ulong *)(this + 0xd0) = uVar20;
      uVar9 = uVar20;
      if (*(ulong *)(this + 0xd8) < uVar20) {
        uVar12 = (uint)((float)uVar20 * 1.75);
        uVar18 = *(undefined8 *)(this + 0xe0);
        if (uVar12 < 9) {
          uVar12 = 8;
        }
        *(long *)(this + 0xd8) = (long)(int)uVar12;
        plVar8 = (long *)SpineExtension::getInstance();
        uVar18 = (**(code **)(*plVar8 + 0x20))
                           (plVar8,uVar18,
                            -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x52);
        uVar9 = *(ulong *)(this + 0xd0);
        *(undefined8 *)(this + 0xe0) = uVar18;
      }
      if (uVar15 <= uVar9 && uVar9 - uVar15 != 0) {
        memset((void *)(*(long *)(this + 0xe0) + uVar15 * 4),0,(uVar9 - uVar15) * 4);
      }
    }
    if (uVar7 != 1) {
      uVar15 = 0;
      iVar5 = *(int *)(this_02 + 0x5c);
      do {
        lVar13 = *(long *)(*(long *)(this + 0x28) + uVar15 * 8);
        fVar30 = (float)BoneData::getLength(*(BoneData **)(lVar13 + 8));
        if (1e-05 <= fVar30) {
          if (iVar2 == 2) {
            fVar32 = fVar21;
            if (iVar3 == 2) {
              fVar28 = fVar30 * *(float *)(lVar13 + 0x7c);
              fVar30 = fVar30 * *(float *)(lVar13 + 0x88);
              uVar22 = MathUtil::sqrt(fVar28 * fVar28 + fVar30 * fVar30);
              *(undefined4 *)(*(long *)(this + 0xe0) + uVar15 * 4) = uVar22;
            }
          }
          else {
            fVar32 = fVar30 * *(float *)(lVar13 + 0x7c);
            fVar28 = fVar30 * *(float *)(lVar13 + 0x88);
            fVar32 = (float)MathUtil::sqrt(fVar32 * fVar32 + fVar28 * fVar28);
            if (iVar3 == 2) {
              *(float *)(*(long *)(this + 0xe0) + uVar15 * 4) = fVar32;
            }
            fVar28 = fVar21 + fVar30;
            if (iVar5 != 0) {
              fVar28 = fVar21;
            }
            fVar32 = (fVar28 * fVar32) / fVar30;
          }
        }
        else {
          fVar32 = 0.0;
          if (iVar3 == 2) {
            *(undefined4 *)(*(long *)(this + 0xe0) + uVar15 * 4) = 0;
          }
        }
        lVar13 = uVar15 * 4;
        uVar15 = uVar15 + 1;
        *(float *)(*(long *)(this + 0x60) + lVar13 + 4) = fVar32;
      } while (uVar15 < uVar7 - 1);
    }
  }
  else if (1 < uVar7) {
    lVar10 = *(long *)(this + 0x60);
    lVar13 = uVar20 + (iVar3 != 0);
    uVar15 = lVar13 - 1;
    if (uVar15 < 8) {
      uVar14 = 1;
    }
    else {
      uVar16 = uVar15 & 0xfffffffffffffff8;
      uVar14 = uVar16 | 1;
      puVar17 = (undefined8 *)(lVar10 + 0x14);
      uVar9 = uVar16;
      do {
        puVar17[-1] = CONCAT44(fVar21,fVar21);
        puVar17[-2] = CONCAT44(fVar21,fVar21);
        puVar17[1] = CONCAT44(fVar21,fVar21);
        *puVar17 = CONCAT44(fVar21,fVar21);
        uVar9 = uVar9 - 8;
        puVar17 = puVar17 + 4;
      } while (uVar9 != 0);
      if (uVar15 == uVar16) goto LAB_00ced0ec;
    }
    lVar13 = lVar13 - uVar14;
    pfVar11 = (float *)(lVar10 + uVar14 * 4);
    do {
      lVar13 = lVar13 + -1;
      *pfVar11 = fVar21;
      pfVar11 = pfVar11 + 1;
    } while (lVar13 != 0);
  }
LAB_00ced0ec:
  iVar5 = PathConstraintData::getPositionMode(this_02);
  lVar13 = computeWorldPositions(this,pPVar6,(int)uVar7,iVar3 == 0,iVar5 == 1,iVar2 == 2);
  fVar30 = **(float **)(lVar13 + 0x18);
  fVar32 = (*(float **)(lVar13 + 0x18))[1];
  fVar21 = (float)PathConstraintData::getOffsetRotation(this_02);
  if (fVar21 == 0.0) {
    bVar4 = iVar3 == 1;
  }
  else {
    this_01 = (Bone *)Slot::getBone(*(Slot **)(this + 0x30));
    fVar29 = (float)Bone::getA(this_01);
    fVar31 = (float)Bone::getD(this_01);
    fVar36 = (float)Bone::getB(this_01);
    fVar33 = (float)Bone::getC(this_01);
    bVar4 = false;
    fVar28 = 0.017453292;
    if (fVar29 * fVar31 - fVar36 * fVar33 <= 0.0) {
      fVar28 = -0.017453292;
    }
    fVar21 = fVar21 * fVar28;
  }
  if (uVar20 != 0) {
    lVar10 = 0;
    uVar7 = 0;
    do {
      lVar19 = *(long *)(*(long *)(this + 0x28) + uVar7 * 8);
      *(float *)(lVar19 + 0x84) =
           *(float *)(lVar19 + 0x84) + fVar34 * (fVar30 - *(float *)(lVar19 + 0x84));
      *(float *)(lVar19 + 0x90) =
           *(float *)(lVar19 + 0x90) + fVar34 * (fVar32 - *(float *)(lVar19 + 0x90));
      lVar1 = *(long *)(lVar13 + 0x18) + lVar10;
      fVar28 = *(float *)(lVar1 + 0xc);
      fVar36 = *(float *)(lVar1 + 0x10);
      fVar31 = fVar28 - fVar30;
      fVar29 = fVar36 - fVar32;
      if ((iVar3 == 2) && (fVar30 = *(float *)(*(long *)(this + 0xe0) + uVar7 * 4), 1e-05 <= fVar30)
         ) {
        fVar32 = (float)MathUtil::sqrt(fVar31 * fVar31 + fVar29 * fVar29);
        fVar30 = fVar35 * (fVar32 / fVar30 + -1.0) + 1.0;
        *(float *)(lVar19 + 0x7c) = *(float *)(lVar19 + 0x7c) * fVar30;
        *(float *)(lVar19 + 0x88) = *(float *)(lVar19 + 0x88) * fVar30;
      }
      fVar30 = fVar28;
      fVar32 = fVar36;
      if (0.0 < fVar35) {
        uVar18 = *(undefined8 *)(lVar19 + 0x7c);
        uVar27 = *(undefined8 *)(lVar19 + 0x88);
        if (iVar3 == 0) {
          fVar33 = *(float *)(*(long *)(lVar13 + 0x18) + lVar10 + 8);
        }
        else if (1e-05 <= *(float *)(*(long *)(this + 0x60) + uVar7 * 4 + 4)) {
          fVar33 = (float)MathUtil::atan2(fVar29,fVar31);
        }
        else {
          fVar33 = *(float *)(*(long *)(lVar13 + 0x18) + lVar10 + 0x14);
        }
        fVar24 = (float)uVar27;
        fVar26 = (float)uVar18;
        fVar23 = (float)MathUtil::atan2(fVar24,fVar26);
        fVar33 = fVar33 - fVar23;
        if (bVar4) {
          fVar32 = (float)MathUtil::cos(fVar33);
          fVar23 = (float)MathUtil::sin(fVar33);
          fVar25 = (float)BoneData::getLength(*(BoneData **)(lVar19 + 8));
          fVar30 = fVar28 + fVar35 * (fVar25 * (fVar26 * fVar32 - fVar24 * fVar23) - fVar31);
          fVar32 = fVar36 + fVar35 * (fVar25 * (fVar24 * fVar32 + fVar26 * fVar23) - fVar29);
        }
        else {
          fVar33 = fVar21 + fVar33;
        }
        if (fVar33 <= 3.1415927) {
          if (fVar33 < -3.1415927) {
            fVar33 = fVar33 + 6.2831855;
          }
        }
        else {
          fVar33 = fVar33 - 6.2831855;
        }
        fVar28 = (float)MathUtil::cos(fVar35 * fVar33);
        fVar29 = (float)MathUtil::sin(fVar35 * fVar33);
        fVar36 = (float)((ulong)uVar27 >> 0x20);
        fVar31 = (float)((ulong)uVar18 >> 0x20);
        *(ulong *)(lVar19 + 0x7c) =
             CONCAT44(fVar31 * fVar28 - fVar36 * fVar29,fVar26 * fVar28 - fVar24 * fVar29);
        *(ulong *)(lVar19 + 0x88) =
             CONCAT44(fVar36 * fVar28 + fVar31 * fVar29,fVar24 * fVar28 + fVar26 * fVar29);
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0xc;
      *(undefined1 *)(lVar19 + 0x78) = 0;
    } while (uVar20 != uVar7);
  }
  return;
}

