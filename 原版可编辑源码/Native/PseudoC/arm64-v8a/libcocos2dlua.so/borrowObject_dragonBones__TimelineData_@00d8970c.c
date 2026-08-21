
/* dragonBones::TimelineData* dragonBones::BaseObject::borrowObject<dragonBones::TimelineData>() */

TimelineData * dragonBones::BaseObject::borrowObject<dragonBones::TimelineData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  TimelineData *pTVar4;
  
  if (((TimelineData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&TimelineData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    TimelineData::getTypeIndex()::typeIndex = "N11dragonBones12TimelineDataE";
    __cxa_guard_release(&TimelineData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= TimelineData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < TimelineData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= TimelineData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pTVar4 = (TimelineData *)*puVar3;
      puVar2[6] = puVar3;
      pTVar4[0xc] = (TimelineData)0x0;
      return pTVar4;
    }
  }
  pTVar4 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (pTVar4 != (TimelineData *)0x0) {
    pTVar4[0xc] = (TimelineData)0x0;
    *(int *)(pTVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)pTVar4 = &PTR__TimelineData_016d8168;
    TimelineData::_onClear(pTVar4);
  }
  return pTVar4;
}

