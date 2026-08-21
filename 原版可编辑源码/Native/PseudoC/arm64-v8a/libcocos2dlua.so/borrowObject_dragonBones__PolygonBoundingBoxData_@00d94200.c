
/* dragonBones::PolygonBoundingBoxData*
   dragonBones::BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>() */

PolygonBoundingBoxData *
dragonBones::BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  PolygonBoundingBoxData *pPVar4;
  
  if (((PolygonBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&PolygonBoundingBoxData::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    PolygonBoundingBoxData::getTypeIndex()::typeIndex = "N11dragonBones22PolygonBoundingBoxDataE";
    __cxa_guard_release(&PolygonBoundingBoxData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= PolygonBoundingBoxData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < PolygonBoundingBoxData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= PolygonBoundingBoxData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pPVar4 = (PolygonBoundingBoxData *)*puVar3;
      puVar2[6] = puVar3;
      pPVar4[0xc] = (PolygonBoundingBoxData)0x0;
      return pPVar4;
    }
  }
  pPVar4 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (pPVar4 != (PolygonBoundingBoxData *)0x0) {
    pPVar4[0xc] = (PolygonBoundingBoxData)0x0;
    *(undefined ***)pPVar4 = &PTR__PolygonBoundingBoxData_016d82b8;
    *(undefined8 *)(pPVar4 + 0x30) = 0;
    *(undefined8 *)(pPVar4 + 0x28) = 0;
    *(int *)(pPVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pPVar4 + 0x40) = 0;
    *(undefined8 *)(pPVar4 + 0x38) = 0;
    PolygonBoundingBoxData::_onClear(pPVar4);
  }
  return pPVar4;
}

