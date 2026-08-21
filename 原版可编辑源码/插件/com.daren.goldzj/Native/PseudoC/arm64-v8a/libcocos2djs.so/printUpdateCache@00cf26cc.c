
/* spine::Skeleton::printUpdateCache() */

Skeleton * __thiscall spine::Skeleton::printUpdateCache(Skeleton *this)

{
  uint uVar1;
  RTTI *pRVar2;
  ulong uVar3;
  BoneData *this_00;
  long lVar4;
  ConstraintData *pCVar5;
  char *__format;
  Skeleton *pSVar6;
  undefined8 uVar7;
  ulong uVar8;
  Bone *this_01;
  
  pSVar6 = this;
  if (*(long *)(this + 0xd8) != 0) {
    uVar8 = 0;
    do {
      this_01 = *(Bone **)(*(long *)(this + 0xe8) + uVar8 * 8);
      pRVar2 = (RTTI *)(**(code **)(*(long *)this_01 + 0x10))(this_01);
      uVar3 = RTTI::isExactly(pRVar2,(RTTI *)Bone::rtti);
      if ((uVar3 & 1) == 0) {
        pRVar2 = (RTTI *)(**(code **)(*(long *)this_01 + 0x10))(this_01);
        uVar3 = RTTI::isExactly(pRVar2,(RTTI *)TransformConstraint::rtti);
        if ((uVar3 & 1) != 0) {
          pCVar5 = (ConstraintData *)TransformConstraint::getData((TransformConstraint *)this_01);
          lVar4 = ConstraintData::getName(pCVar5);
          uVar7 = *(undefined8 *)(lVar4 + 0x10);
          __format = "transform constraint %s\n";
          goto LAB_00cf2808;
        }
        pRVar2 = (RTTI *)(**(code **)(*(long *)this_01 + 0x10))(this_01);
        uVar3 = RTTI::isExactly(pRVar2,(RTTI *)IkConstraint::rtti);
        if ((uVar3 & 1) != 0) {
          pCVar5 = (ConstraintData *)IkConstraint::getData((IkConstraint *)this_01);
          lVar4 = ConstraintData::getName(pCVar5);
          uVar7 = *(undefined8 *)(lVar4 + 0x10);
          __format = "ik constraint %s\n";
          goto LAB_00cf2808;
        }
        pRVar2 = (RTTI *)(**(code **)(*(long *)this_01 + 0x10))(this_01);
        pSVar6 = (Skeleton *)RTTI::isExactly(pRVar2,(RTTI *)PathConstraint::rtti);
        if (((ulong)pSVar6 & 1) != 0) {
          pCVar5 = (ConstraintData *)PathConstraint::getData((PathConstraint *)this_01);
          lVar4 = ConstraintData::getName(pCVar5);
          uVar7 = *(undefined8 *)(lVar4 + 0x10);
          __format = "path constraint %s\n";
          goto LAB_00cf2808;
        }
      }
      else {
        this_00 = (BoneData *)Bone::getData(this_01);
        lVar4 = BoneData::getName(this_00);
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
        __format = "bone %s\n";
LAB_00cf2808:
        uVar1 = printf(__format,uVar7);
        pSVar6 = (Skeleton *)(ulong)uVar1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(this + 0xd8));
  }
  return pSVar6;
}

