
/* dragonBones::EllipseBoundingBoxData*
   dragonBones::BaseObject::borrowObject<dragonBones::EllipseBoundingBoxData>() */

EllipseBoundingBoxData *
dragonBones::BaseObject::borrowObject<dragonBones::EllipseBoundingBoxData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  EllipseBoundingBoxData *pEVar4;
  
  if (((EllipseBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&EllipseBoundingBoxData::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    EllipseBoundingBoxData::getTypeIndex()::typeIndex = "N11dragonBones22EllipseBoundingBoxDataE";
    __cxa_guard_release(&EllipseBoundingBoxData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= EllipseBoundingBoxData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < EllipseBoundingBoxData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= EllipseBoundingBoxData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pEVar4 = (EllipseBoundingBoxData *)*puVar3;
      puVar2[6] = puVar3;
      pEVar4[0xc] = (EllipseBoundingBoxData)0x0;
      return pEVar4;
    }
  }
  this = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__EllipseBoundingBoxData_01c90da0;
    EllipseBoundingBoxData::_onClear((EllipseBoundingBoxData *)this);
  }
  return (EllipseBoundingBoxData *)this;
}

