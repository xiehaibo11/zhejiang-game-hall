
/* spine::TransformConstraint::TransformConstraint(spine::TransformConstraintData&,
   spine::Skeleton&) */

void __thiscall
spine::TransformConstraint::TransformConstraint
          (TransformConstraint *this,TransformConstraintData *param_1,Skeleton *param_2)

{
  ulong uVar1;
  BoneData *this_00;
  String *pSVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  Updatable::Updatable((Updatable *)this);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TransformConstraint_01c8f7f0;
  *(TransformConstraintData **)(this + 8) = param_1;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x18) = 0;
  this_00 = (BoneData *)TransformConstraintData::getTarget(param_1);
  pSVar2 = (String *)BoneData::getName(this_00);
  uVar3 = Skeleton::findBone(param_2,pSVar2);
  *(undefined8 *)(this + 0x30) = uVar3;
  uVar11 = TransformConstraintData::getRotateMix(param_1);
  *(undefined4 *)(this + 0x38) = uVar11;
  uVar11 = TransformConstraintData::getTranslateMix(param_1);
  *(undefined4 *)(this + 0x3c) = uVar11;
  uVar11 = TransformConstraintData::getScaleMix(param_1);
  *(undefined4 *)(this + 0x40) = uVar11;
  uVar11 = TransformConstraintData::getShearMix(param_1);
  *(undefined4 *)(this + 0x44) = uVar11;
  this[0x48] = (TransformConstraint)0x0;
  lVar4 = TransformConstraintData::getBones(*(TransformConstraintData **)(this + 8));
  uVar9 = *(ulong *)(lVar4 + 8);
  if (*(ulong *)(this + 0x20) < uVar9) {
    uVar3 = *(undefined8 *)(this + 0x28);
    *(ulong *)(this + 0x20) = uVar9;
    plVar5 = (long *)SpineExtension::getInstance();
    uVar3 = (**(code **)(*plVar5 + 0x20))
                      (plVar5,uVar3,uVar9 << 3,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x28) = uVar3;
  }
  lVar4 = TransformConstraintData::getBones(*(TransformConstraintData **)(this + 8));
  if (*(long *)(lVar4 + 8) != 0) {
    uVar9 = 0;
    do {
      lVar4 = TransformConstraintData::getBones(*(TransformConstraintData **)(this + 8));
      pSVar2 = (String *)BoneData::getName(*(BoneData **)(*(long *)(lVar4 + 0x18) + uVar9 * 8));
      uVar3 = Skeleton::findBone(param_2,pSVar2);
      uVar1 = *(ulong *)(this + 0x18);
      if (uVar1 == *(ulong *)(this + 0x20)) {
        uVar6 = (uint)((float)uVar1 * 1.75);
        uVar10 = *(undefined8 *)(this + 0x28);
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        *(long *)(this + 0x20) = (long)(int)uVar6;
        plVar5 = (long *)SpineExtension::getInstance();
        lVar4 = (**(code **)(*plVar5 + 0x20))
                          (plVar5,uVar10,
                           -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x18);
        *(long *)(this + 0x28) = lVar4;
        *(long *)(this + 0x18) = lVar7 + 1;
        puVar8 = (undefined8 *)(lVar4 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(*(long *)(this + 0x28) + uVar1 * 8);
      }
      *puVar8 = uVar3;
      uVar9 = uVar9 + 1;
      lVar4 = TransformConstraintData::getBones(*(TransformConstraintData **)(this + 8));
    } while (uVar9 < *(ulong *)(lVar4 + 8));
  }
  return;
}

