
/* dragonBones::UserData* dragonBones::BaseObject::borrowObject<dragonBones::UserData>() */

UserData * dragonBones::BaseObject::borrowObject<dragonBones::UserData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UserData *pUVar4;
  
  if (((UserData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&UserData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    UserData::getTypeIndex()::typeIndex = "N11dragonBones8UserDataE";
    __cxa_guard_release(&UserData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= UserData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < UserData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= UserData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pUVar4 = (UserData *)*puVar3;
      puVar2[6] = puVar3;
      pUVar4[0xc] = (UserData)0x0;
      return pUVar4;
    }
  }
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__UserData_01c911c0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    UserData::_onClear((UserData *)this);
  }
  return (UserData *)this;
}

