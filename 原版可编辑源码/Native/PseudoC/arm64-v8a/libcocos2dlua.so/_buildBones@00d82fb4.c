
/* dragonBones::BaseFactory::_buildBones(dragonBones::BuildArmaturePackage const&,
   dragonBones::Armature*) const */

BaseFactory * __thiscall
dragonBones::BaseFactory::_buildBones
          (BaseFactory *this,BuildArmaturePackage *param_1,Armature *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  Bone *this_00;
  IKConstraint *pIVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  BoneData *pBVar7;
  undefined8 *puVar8;
  long *plVar10;
  undefined8 *puVar9;
  
  lVar4 = *(long *)(param_1 + 0x38);
                    /* try { // try from 00d82fcc to 00e82fd3 has its CatchHandler @ 00d83618 */
  puVar8 = *(undefined8 **)(lVar4 + 0x60);
  puVar1 = *(undefined8 **)(lVar4 + 0x68);
  if (puVar8 != puVar1) {
    do {
      puVar9 = puVar8 + 1;
      pBVar7 = (BoneData *)*puVar8;
      this_00 = BaseObject::borrowObject<dragonBones::Bone>();
      this = (BaseFactory *)Bone::init(this_00,pBVar7,param_2);
      puVar8 = puVar9;
    } while (puVar1 != puVar9);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  plVar10 = *(long **)(lVar4 + 0xf0);
  while (plVar10 != (long *)(lVar4 + 0xf8)) {
    pIVar3 = BaseObject::borrowObject<dragonBones::IKConstraint>();
                    /* try { // try from 00d83024 to 00e83063 has its CatchHandler @ 00d83610 */
    (**(code **)(*(long *)pIVar3 + 0x20))(pIVar3,plVar10[7],param_2);
    this = (BaseFactory *)Armature::_addConstraint(param_2,(Constraint *)pIVar3);
    plVar5 = (long *)plVar10[1];
    if ((long *)plVar10[1] == (long *)0x0) {
      plVar5 = plVar10 + 2;
      bVar2 = *(long **)*plVar5 != plVar10;
      plVar10 = (long *)*plVar5;
                    /* try { // try from 00d83070 to 00e83077 has its CatchHandler @ 00d835e8 */
      if (bVar2) {
        do {
          lVar6 = *plVar5;
                    /* try { // try from 00d83078 to 00e83083 has its CatchHandler @ 00d835f0 */
          plVar5 = (long *)(lVar6 + 0x10);
          plVar10 = (long *)*plVar5;
        } while (*plVar10 != lVar6);
      }
    }
    else {
      do {
        plVar10 = plVar5;
        plVar5 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
                    /* try { // try from 00d83098 to 00e830a7 has its CatchHandler @ 00d83610 */
  return this;
}

