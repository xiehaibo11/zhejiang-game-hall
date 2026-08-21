
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dragonBones::RectangleBoundingBoxData*
   dragonBones::BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>() */

RectangleBoundingBoxData *
dragonBones::BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  RectangleBoundingBoxData *pRVar4;
  
  if (((RectangleBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&RectangleBoundingBoxData::getTypeIndex()::typeIndex), iVar1 != 0)
     ) {
    _typeIndex = "N11dragonBones24RectangleBoundingBoxDataE";
    __cxa_guard_release(&RectangleBoundingBoxData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= _typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < _typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) && ((char *)puVar2[4] <= _typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pRVar4 = (RectangleBoundingBoxData *)*puVar3;
      puVar2[6] = puVar3;
      pRVar4[0xc] = (RectangleBoundingBoxData)0x0;
      return pRVar4;
    }
  }
  this = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__RectangleBoundingBoxData_01c90d48;
    RectangleBoundingBoxData::_onClear((RectangleBoundingBoxData *)this);
  }
  return (RectangleBoundingBoxData *)this;
}

