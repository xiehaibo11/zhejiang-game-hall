
/* spine::IkConstraint::IkConstraint(spine::IkConstraintData&, spine::Skeleton&) */

void __thiscall
spine::IkConstraint::IkConstraint(IkConstraint *this,IkConstraintData *param_1,Skeleton *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  BoneData *this_00;
  String *pSVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  Updatable::Updatable((Updatable *)this);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__IkConstraint_01c8edf8;
  *(IkConstraintData **)(this + 8) = param_1;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x18) = 0;
  uVar3 = IkConstraintData::getBendDirection(param_1);
  *(undefined4 *)(this + 0x30) = uVar3;
  bVar2 = IkConstraintData::getCompress(param_1);
  this[0x34] = (IkConstraint)(bVar2 & 1);
  bVar2 = IkConstraintData::getStretch(param_1);
  this[0x35] = (IkConstraint)(bVar2 & 1);
  uVar3 = IkConstraintData::getMix(param_1);
  *(undefined4 *)(this + 0x38) = uVar3;
  uVar3 = IkConstraintData::getSoftness(param_1);
  *(undefined4 *)(this + 0x3c) = uVar3;
  this_00 = (BoneData *)IkConstraintData::getTarget(param_1);
  pSVar4 = (String *)BoneData::getName(this_00);
  uVar5 = Skeleton::findBone(param_2,pSVar4);
  *(undefined8 *)(this + 0x40) = uVar5;
  this[0x48] = (IkConstraint)0x0;
  lVar6 = IkConstraintData::getBones(*(IkConstraintData **)(this + 8));
  uVar11 = *(ulong *)(lVar6 + 8);
  if (*(ulong *)(this + 0x20) < uVar11) {
    uVar5 = *(undefined8 *)(this + 0x28);
    *(ulong *)(this + 0x20) = uVar11;
    plVar7 = (long *)SpineExtension::getInstance();
    uVar5 = (**(code **)(*plVar7 + 0x20))
                      (plVar7,uVar5,uVar11 << 3,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x28) = uVar5;
  }
  lVar6 = IkConstraintData::getBones(*(IkConstraintData **)(this + 8));
  if (*(long *)(lVar6 + 8) != 0) {
    uVar11 = 0;
    do {
      lVar6 = IkConstraintData::getBones(*(IkConstraintData **)(this + 8));
      pSVar4 = (String *)BoneData::getName(*(BoneData **)(*(long *)(lVar6 + 0x18) + uVar11 * 8));
      uVar5 = Skeleton::findBone(param_2,pSVar4);
      uVar1 = *(ulong *)(this + 0x18);
      if (uVar1 == *(ulong *)(this + 0x20)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar12 = *(undefined8 *)(this + 0x28);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0x20) = (long)(int)uVar8;
        plVar7 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar7 + 0x20))
                          (plVar7,uVar12,
                           -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar9 = *(long *)(this + 0x18);
        *(long *)(this + 0x28) = lVar6;
        *(long *)(this + 0x18) = lVar9 + 1;
        puVar10 = (undefined8 *)(lVar6 + lVar9 * 8);
      }
      else {
        *(ulong *)(this + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(*(long *)(this + 0x28) + uVar1 * 8);
      }
      *puVar10 = uVar5;
      uVar11 = uVar11 + 1;
      lVar6 = IkConstraintData::getBones(*(IkConstraintData **)(this + 8));
    } while (uVar11 < *(ulong *)(lVar6 + 8));
  }
  return;
}

