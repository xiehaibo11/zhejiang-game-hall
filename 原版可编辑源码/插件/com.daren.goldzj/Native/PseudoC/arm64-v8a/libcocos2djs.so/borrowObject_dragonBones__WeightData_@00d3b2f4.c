
/* dragonBones::WeightData* dragonBones::BaseObject::borrowObject<dragonBones::WeightData>() */

WeightData * dragonBones::BaseObject::borrowObject<dragonBones::WeightData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  WeightData *pWVar4;
  
  if (((WeightData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&WeightData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    WeightData::getTypeIndex()::typeIndex = "N11dragonBones10WeightDataE";
    __cxa_guard_release(&WeightData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= WeightData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < WeightData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= WeightData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pWVar4 = (WeightData *)*puVar3;
      puVar2[6] = puVar3;
      pWVar4[0xc] = (WeightData)0x0;
      return pWVar4;
    }
  }
  this = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR__WeightData_01c91048;
    WeightData::_onClear((WeightData *)this);
  }
  return (WeightData *)this;
}

