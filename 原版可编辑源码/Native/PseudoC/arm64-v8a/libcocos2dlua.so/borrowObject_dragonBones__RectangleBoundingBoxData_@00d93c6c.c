
/* dragonBones::RectangleBoundingBoxData*
   dragonBones::BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>() */

RectangleBoundingBoxData *
dragonBones::BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  RectangleBoundingBoxData *pRVar4;
  
  if (((RectangleBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&RectangleBoundingBoxData::getTypeIndex()::typeIndex), iVar1 != 0)
     ) {
    RectangleBoundingBoxData::getTypeIndex()::typeIndex =
         "N11dragonBones24RectangleBoundingBoxDataE";
    __cxa_guard_release(&RectangleBoundingBoxData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= RectangleBoundingBoxData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < RectangleBoundingBoxData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= RectangleBoundingBoxData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pRVar4 = (RectangleBoundingBoxData *)*puVar3;
      puVar2[6] = puVar3;
      pRVar4[0xc] = (RectangleBoundingBoxData)0x0;
      return pRVar4;
    }
  }
  pRVar4 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (pRVar4 != (RectangleBoundingBoxData *)0x0) {
    pRVar4[0xc] = (RectangleBoundingBoxData)0x0;
    *(int *)(pRVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)pRVar4 = &PTR__RectangleBoundingBoxData_016d8208;
    RectangleBoundingBoxData::_onClear(pRVar4);
  }
  return pRVar4;
}

