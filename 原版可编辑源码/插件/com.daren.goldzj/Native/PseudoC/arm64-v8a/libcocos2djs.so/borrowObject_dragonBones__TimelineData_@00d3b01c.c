
/* dragonBones::TimelineData* dragonBones::BaseObject::borrowObject<dragonBones::TimelineData>() */

TimelineData * dragonBones::BaseObject::borrowObject<dragonBones::TimelineData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  TimelineData *pTVar4;
  
  if (((TimelineData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&TimelineData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    TimelineData::getTypeIndex()::typeIndex = "N11dragonBones12TimelineDataE";
    __cxa_guard_release(&TimelineData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= TimelineData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < TimelineData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= TimelineData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pTVar4 = (TimelineData *)*puVar3;
      puVar2[6] = puVar3;
      pTVar4[0xc] = (TimelineData)0x0;
      return pTVar4;
    }
  }
  this = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__TimelineData_01c90bd0;
    TimelineData::_onClear((TimelineData *)this);
  }
  return (TimelineData *)this;
}

