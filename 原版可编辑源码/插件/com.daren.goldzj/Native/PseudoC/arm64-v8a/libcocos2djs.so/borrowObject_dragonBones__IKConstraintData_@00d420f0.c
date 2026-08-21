
/* dragonBones::IKConstraintData*
   dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintData>() */

IKConstraintData * dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraintData *pIVar4;
  
  if (((IKConstraintData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraintData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    IKConstraintData::getTypeIndex()::typeIndex = "N11dragonBones16IKConstraintDataE";
    __cxa_guard_release(&IKConstraintData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= IKConstraintData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < IKConstraintData::getTypeIndex()::typeIndex]
      ;
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= IKConstraintData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraintData *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraintData)0x0;
      return pIVar4;
    }
  }
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__IKConstraintData_01c90e98;
    IKConstraintData::_onClear((IKConstraintData *)this);
  }
  return (IKConstraintData *)this;
}

