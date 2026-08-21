
/* dragonBones::IKConstraint* dragonBones::BaseObject::borrowObject<dragonBones::IKConstraint>() */

IKConstraint * dragonBones::BaseObject::borrowObject<dragonBones::IKConstraint>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraint *pIVar4;
  
  if (((IKConstraint::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraint::getTypeIndex()::typeIndex), iVar1 != 0)) {
    IKConstraint::getTypeIndex()::typeIndex = "N11dragonBones12IKConstraintE";
    __cxa_guard_release(&IKConstraint::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= IKConstraint::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < IKConstraint::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= IKConstraint::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraint *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraint)0x0;
      return pIVar4;
    }
  }
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__IKConstraint_01c91f20;
    IKConstraint::_onClear((IKConstraint *)this);
  }
  return (IKConstraint *)this;
}

