
/* dragonBones::PolygonBoundingBoxData*
   dragonBones::BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>() */

PolygonBoundingBoxData *
dragonBones::BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  PolygonBoundingBoxData *pPVar4;
  
  if (((PolygonBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&PolygonBoundingBoxData::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    PolygonBoundingBoxData::getTypeIndex()::typeIndex = "N11dragonBones22PolygonBoundingBoxDataE";
    __cxa_guard_release(&PolygonBoundingBoxData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= PolygonBoundingBoxData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < PolygonBoundingBoxData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= PolygonBoundingBoxData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pPVar4 = (PolygonBoundingBoxData *)*puVar3;
      puVar2[6] = puVar3;
      pPVar4[0xc] = (PolygonBoundingBoxData)0x0;
      return pPVar4;
    }
  }
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__PolygonBoundingBoxData_01c90df8;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    PolygonBoundingBoxData::_onClear((PolygonBoundingBoxData *)this);
  }
  return (PolygonBoundingBoxData *)this;
}

