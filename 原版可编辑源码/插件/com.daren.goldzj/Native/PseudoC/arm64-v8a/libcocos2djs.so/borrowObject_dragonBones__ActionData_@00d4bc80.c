
/* dragonBones::ActionData* dragonBones::BaseObject::borrowObject<dragonBones::ActionData>() */

ActionData * dragonBones::BaseObject::borrowObject<dragonBones::ActionData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ActionData *pAVar4;
  
  if (((ActionData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ActionData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ActionData::getTypeIndex()::typeIndex = "N11dragonBones10ActionDataE";
    __cxa_guard_release(&ActionData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ActionData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ActionData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= ActionData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ActionData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ActionData)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR__ActionData_01c91208;
    *(undefined8 *)(this + 0x40) = 0;
    ActionData::_onClear((ActionData *)this);
  }
  return (ActionData *)this;
}

