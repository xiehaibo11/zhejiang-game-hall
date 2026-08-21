
/* spine::Skeleton::Skeleton(spine::SkeletonData*) */

void __thiscall spine::Skeleton::Skeleton(Skeleton *this,SkeletonData *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  SkeletonData *pSVar5;
  BoneData *this_00;
  Bone *pBVar6;
  long lVar7;
  Slot *this_01;
  IkConstraint *this_02;
  TransformConstraint *this_03;
  PathConstraint *this_04;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  BoneData *pBVar13;
  SlotData *this_05;
  IkConstraintData *pIVar14;
  TransformConstraintData *pTVar15;
  PathConstraintData *pPVar16;
  Bone *this_06;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR__Skeleton_01c8f330;
  *(SkeletonData **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined ***)(this + 0xf0) = &PTR__Vector_01c8d080;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d160;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8d160;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x70) = &PTR__Vector_01c8d198;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x90) = &PTR__Vector_01c8d240;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)(this + 0xb0) = &PTR__Vector_01c8d208;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined ***)(this + 0xd0) = &PTR__Vector_01c8d1d0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  auVar18 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0x128) = auVar18._8_8_;
  *(long *)(this + 0x120) = auVar18._0_8_;
  *(undefined ***)(this + 0x118) = &PTR__SpineObject_01c8eb68;
  uVar17 = MathUtil::clamp(1.0,0.0,1.0);
  *(undefined4 *)(this + 0x120) = uVar17;
  uVar17 = MathUtil::clamp(*(float *)(this + 0x124),0.0,1.0);
  *(undefined4 *)(this + 0x124) = uVar17;
  uVar17 = MathUtil::clamp(*(float *)(this + 0x128),0.0,1.0);
  *(undefined4 *)(this + 0x128) = uVar17;
  uVar17 = MathUtil::clamp(*(float *)(this + 300),0.0,1.0);
  *(undefined4 *)(this + 300) = uVar17;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0x3f800000;
  *(undefined8 *)(this + 0x130) = 0x3f80000000000000;
  lVar3 = SkeletonData::getBones(*(SkeletonData **)(this + 8));
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0x20) < uVar12) {
    uVar11 = *(undefined8 *)(this + 0x28);
    *(ulong *)(this + 0x20) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0x28) = uVar11;
  }
  lVar3 = SkeletonData::getBones(*(SkeletonData **)(this + 8));
  pSVar5 = *(SkeletonData **)(this + 8);
  if (*(long *)(lVar3 + 8) != 0) {
    uVar12 = 0;
    do {
      lVar3 = SkeletonData::getBones(pSVar5);
      pBVar13 = *(BoneData **)(*(long *)(lVar3 + 0x18) + uVar12 * 8);
      lVar3 = BoneData::getParent(pBVar13);
      if (lVar3 == 0) {
        pBVar6 = SpineObject::operator_new
                           (0x98,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                            ,0x4b);
        Bone::Bone(pBVar6,pBVar13,this,(Bone *)0x0);
      }
      else {
        this_00 = (BoneData *)BoneData::getParent(pBVar13);
        iVar2 = BoneData::getIndex(this_00);
        this_06 = *(Bone **)(*(long *)(this + 0x28) + (long)iVar2 * 8);
        pBVar6 = SpineObject::operator_new
                           (0x98,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                            ,0x4e);
        Bone::Bone(pBVar6,pBVar13,this,this_06);
        lVar3 = Bone::getChildren(this_06);
        uVar1 = *(ulong *)(lVar3 + 8);
        if (uVar1 == *(ulong *)(lVar3 + 0x10)) {
          uVar8 = (uint)((float)uVar1 * 1.75);
          uVar11 = *(undefined8 *)(lVar3 + 0x18);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          *(long *)(lVar3 + 0x10) = (long)(int)uVar8;
          plVar4 = (long *)SpineExtension::getInstance();
          lVar7 = (**(code **)(*plVar4 + 0x20))
                            (plVar4,uVar11,
                             -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar9 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 0x18) = lVar7;
          *(long *)(lVar3 + 8) = lVar9 + 1;
          *(Bone **)(lVar7 + lVar9 * 8) = pBVar6;
        }
        else {
          *(ulong *)(lVar3 + 8) = uVar1 + 1;
          *(Bone **)(*(long *)(lVar3 + 0x18) + uVar1 * 8) = pBVar6;
        }
      }
      uVar1 = *(ulong *)(this + 0x18);
      if (uVar1 == *(ulong *)(this + 0x20)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 0x28);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0x20) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x18);
        *(long *)(this + 0x28) = lVar3;
        *(long *)(this + 0x18) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0x28) + uVar1 * 8);
      }
      *puVar10 = pBVar6;
      uVar12 = uVar12 + 1;
      lVar3 = SkeletonData::getBones(*(SkeletonData **)(this + 8));
      pSVar5 = *(SkeletonData **)(this + 8);
    } while (uVar12 < *(ulong *)(lVar3 + 8));
  }
  lVar3 = SkeletonData::getSlots(pSVar5);
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0x40) < uVar12) {
    uVar11 = *(undefined8 *)(this + 0x48);
    *(ulong *)(this + 0x40) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0x48) = uVar11;
  }
  lVar3 = SkeletonData::getSlots(*(SkeletonData **)(this + 8));
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0x60) < uVar12) {
    uVar11 = *(undefined8 *)(this + 0x68);
    *(ulong *)(this + 0x60) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0x68) = uVar11;
  }
  lVar3 = SkeletonData::getSlots(*(SkeletonData **)(this + 8));
  pSVar5 = *(SkeletonData **)(this + 8);
  if (*(long *)(lVar3 + 8) != 0) {
    uVar12 = 0;
    do {
      lVar3 = SkeletonData::getSlots(pSVar5);
      this_05 = *(SlotData **)(*(long *)(lVar3 + 0x18) + uVar12 * 8);
      pBVar13 = (BoneData *)SlotData::getBoneData(this_05);
      iVar2 = BoneData::getIndex(pBVar13);
      pBVar6 = *(Bone **)(*(long *)(this + 0x28) + (long)iVar2 * 8);
      this_01 = SpineObject::operator_new
                          (0x88,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                           ,0x5b);
      Slot::Slot(this_01,this_05,pBVar6);
      uVar1 = *(ulong *)(this + 0x38);
      if (uVar1 == *(ulong *)(this + 0x40)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 0x48);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0x40) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x38);
        *(long *)(this + 0x48) = lVar3;
        *(long *)(this + 0x38) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x38) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0x48) + uVar1 * 8);
      }
      *puVar10 = this_01;
      uVar1 = *(ulong *)(this + 0x58);
      if (uVar1 == *(ulong *)(this + 0x60)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 0x68);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x58);
        *(long *)(this + 0x68) = lVar3;
        *(long *)(this + 0x58) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x58) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0x68) + uVar1 * 8);
      }
      *puVar10 = this_01;
      uVar12 = uVar12 + 1;
      lVar3 = SkeletonData::getSlots(*(SkeletonData **)(this + 8));
      pSVar5 = *(SkeletonData **)(this + 8);
    } while (uVar12 < *(ulong *)(lVar3 + 8));
  }
  lVar3 = SkeletonData::getIkConstraints(pSVar5);
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0x80) < uVar12) {
    uVar11 = *(undefined8 *)(this + 0x88);
    *(ulong *)(this + 0x80) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0x88) = uVar11;
  }
  lVar3 = SkeletonData::getIkConstraints(*(SkeletonData **)(this + 8));
  pSVar5 = *(SkeletonData **)(this + 8);
  if (*(long *)(lVar3 + 8) != 0) {
    uVar12 = 0;
    do {
      lVar3 = SkeletonData::getIkConstraints(pSVar5);
      pIVar14 = *(IkConstraintData **)(*(long *)(lVar3 + 0x18) + uVar12 * 8);
      this_02 = SpineObject::operator_new
                          (0x50,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                           ,0x65);
      IkConstraint::IkConstraint(this_02,pIVar14,this);
      uVar1 = *(ulong *)(this + 0x78);
      if (uVar1 == *(ulong *)(this + 0x80)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 0x88);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0x80) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x78);
        *(long *)(this + 0x88) = lVar3;
        *(long *)(this + 0x78) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x78) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0x88) + uVar1 * 8);
      }
      *puVar10 = this_02;
      uVar12 = uVar12 + 1;
      lVar3 = SkeletonData::getIkConstraints(*(SkeletonData **)(this + 8));
      pSVar5 = *(SkeletonData **)(this + 8);
    } while (uVar12 < *(ulong *)(lVar3 + 8));
  }
  lVar3 = SkeletonData::getTransformConstraints(pSVar5);
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0xa0) < uVar12) {
    uVar11 = *(undefined8 *)(this + 0xa8);
    *(ulong *)(this + 0xa0) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 0xa8) = uVar11;
  }
  lVar3 = SkeletonData::getTransformConstraints(*(SkeletonData **)(this + 8));
  pSVar5 = *(SkeletonData **)(this + 8);
  if (*(long *)(lVar3 + 8) != 0) {
    uVar12 = 0;
    do {
      lVar3 = SkeletonData::getTransformConstraints(pSVar5);
      pTVar15 = *(TransformConstraintData **)(*(long *)(lVar3 + 0x18) + uVar12 * 8);
      this_03 = SpineObject::operator_new
                          (0x50,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                           ,0x6e);
      TransformConstraint::TransformConstraint(this_03,pTVar15,this);
      uVar1 = *(ulong *)(this + 0x98);
      if (uVar1 == *(ulong *)(this + 0xa0)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 0xa8);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0xa0) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x98);
        *(long *)(this + 0xa8) = lVar3;
        *(long *)(this + 0x98) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x98) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0xa8) + uVar1 * 8);
      }
      *puVar10 = this_03;
      uVar12 = uVar12 + 1;
      lVar3 = SkeletonData::getTransformConstraints(*(SkeletonData **)(this + 8));
      pSVar5 = *(SkeletonData **)(this + 8);
    } while (uVar12 < *(ulong *)(lVar3 + 8));
  }
  lVar3 = SkeletonData::getPathConstraints(pSVar5);
  uVar12 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0xc0) < uVar12) {
    uVar11 = *(undefined8 *)(this + 200);
    *(ulong *)(this + 0xc0) = uVar12;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar11 = (**(code **)(*plVar4 + 0x20))
                       (plVar4,uVar11,uVar12 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0x5e);
    *(undefined8 *)(this + 200) = uVar11;
  }
  lVar3 = SkeletonData::getPathConstraints(*(SkeletonData **)(this + 8));
  if (*(long *)(lVar3 + 8) != 0) {
    uVar12 = 0;
    do {
      lVar3 = SkeletonData::getPathConstraints(*(SkeletonData **)(this + 8));
      pPVar16 = *(PathConstraintData **)(*(long *)(lVar3 + 0x18) + uVar12 * 8);
      this_04 = SpineObject::operator_new
                          (0x110,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.cpp"
                           ,0x77);
      PathConstraint::PathConstraint(this_04,pPVar16,this);
      uVar1 = *(ulong *)(this + 0xb8);
      if (uVar1 == *(ulong *)(this + 0xc0)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar11 = *(undefined8 *)(this + 200);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0xc0) = (long)(int)uVar8;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar11,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0xb8);
        *(long *)(this + 200) = lVar3;
        *(long *)(this + 0xb8) = lVar7 + 1;
        puVar10 = (undefined8 *)(lVar3 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0xb8) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 200) + uVar1 * 8);
      }
      *puVar10 = this_04;
      uVar12 = uVar12 + 1;
      lVar3 = SkeletonData::getPathConstraints(*(SkeletonData **)(this + 8));
    } while (uVar12 < *(ulong *)(lVar3 + 8));
  }
  updateCache(this);
  return;
}

