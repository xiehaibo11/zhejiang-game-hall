
/* spine::PathConstraint::PathConstraint(spine::PathConstraintData&, spine::Skeleton&) */

void __thiscall
spine::PathConstraint::PathConstraint
          (PathConstraint *this,PathConstraintData *param_1,Skeleton *param_2)

{
  SlotData *this_00;
  String *pSVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  Updatable::Updatable((Updatable *)this);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__PathConstraint_01c8efb0;
  *(PathConstraintData **)(this + 8) = param_1;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x18) = 0;
  this_00 = (SlotData *)PathConstraintData::getTarget(param_1);
  pSVar1 = (String *)SlotData::getName(this_00);
  uVar2 = Skeleton::findSlot(param_2,pSVar1);
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar11 = PathConstraintData::getPosition(param_1);
  *(undefined4 *)(this + 0x38) = uVar11;
  uVar11 = PathConstraintData::getSpacing(param_1);
  *(undefined4 *)(this + 0x3c) = uVar11;
  uVar11 = PathConstraintData::getRotateMix(param_1);
  *(undefined4 *)(this + 0x40) = uVar11;
  uVar11 = PathConstraintData::getTranslateMix(param_1);
  *(undefined4 *)(this + 0x44) = uVar11;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0x108] = (PathConstraint)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)(this + 0x88) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0xa8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined ***)(this + 200) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined ***)(this + 0xe8) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0xf0) = 0;
  lVar3 = PathConstraintData::getBones(*(PathConstraintData **)(this + 8));
  uVar9 = *(ulong *)(lVar3 + 8);
  if (*(ulong *)(this + 0x20) < uVar9) {
    uVar2 = *(undefined8 *)(this + 0x28);
    *(ulong *)(this + 0x20) = uVar9;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar2 = (**(code **)(*plVar4 + 0x20))
                      (plVar4,uVar2,uVar9 << 3,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x28) = uVar2;
  }
  lVar3 = PathConstraintData::getBones(*(PathConstraintData **)(this + 8));
  if (*(long *)(lVar3 + 8) != 0) {
    uVar9 = 0;
    do {
      lVar3 = PathConstraintData::getBones(*(PathConstraintData **)(this + 8));
      pSVar1 = (String *)BoneData::getName(*(BoneData **)(*(long *)(lVar3 + 0x18) + uVar9 * 8));
      uVar2 = Skeleton::findBone(param_2,pSVar1);
      uVar8 = *(ulong *)(this + 0x18);
      if (uVar8 == *(ulong *)(this + 0x20)) {
        uVar5 = (uint)((float)uVar8 * 1.75);
        uVar10 = *(undefined8 *)(this + 0x28);
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        *(long *)(this + 0x20) = (long)(int)uVar5;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar3 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar10,
                           -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar6 = *(long *)(this + 0x18);
        *(long *)(this + 0x28) = lVar3;
        *(long *)(this + 0x18) = lVar6 + 1;
        puVar7 = (undefined8 *)(lVar3 + lVar6 * 8);
      }
      else {
        *(ulong *)(this + 0x18) = uVar8 + 1;
        puVar7 = (undefined8 *)(*(long *)(this + 0x28) + uVar8 * 8);
      }
      *puVar7 = uVar2;
      uVar9 = uVar9 + 1;
      lVar3 = PathConstraintData::getBones(*(PathConstraintData **)(this + 8));
    } while (uVar9 < *(ulong *)(lVar3 + 8));
  }
  uVar9 = *(ulong *)(this + 0xf0);
  uVar8 = 10;
  *(undefined8 *)(this + 0xf0) = 10;
  if (*(ulong *)(this + 0xf8) < 10) {
    uVar2 = *(undefined8 *)(this + 0x100);
    *(undefined8 *)(this + 0xf8) = 0x11;
    plVar4 = (long *)SpineExtension::getInstance();
    uVar2 = (**(code **)(*plVar4 + 0x20))
                      (plVar4,uVar2,0x44,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x52);
    uVar8 = *(ulong *)(this + 0xf0);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  if (uVar9 <= uVar8 && uVar8 - uVar9 != 0) {
    memset((void *)(*(long *)(this + 0x100) + uVar9 * 4),0,(uVar8 - uVar9) * 4);
  }
  return;
}

