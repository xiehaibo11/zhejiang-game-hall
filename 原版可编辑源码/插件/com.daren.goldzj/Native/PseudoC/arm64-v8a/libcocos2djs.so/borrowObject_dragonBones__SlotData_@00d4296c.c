
/* dragonBones::SlotData* dragonBones::BaseObject::borrowObject<dragonBones::SlotData>() */

SlotData * dragonBones::BaseObject::borrowObject<dragonBones::SlotData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotData *pSVar4;
  
  if (((SlotData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    SlotData::getTypeIndex()::typeIndex = "N11dragonBones8SlotDataE";
    __cxa_guard_release(&SlotData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= SlotData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < SlotData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= SlotData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SlotData *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SlotData)0x0;
      return pSVar4;
    }
  }
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR__SlotData_01c90ca8;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    SlotData::_onClear((SlotData *)this);
  }
  return (SlotData *)this;
}

