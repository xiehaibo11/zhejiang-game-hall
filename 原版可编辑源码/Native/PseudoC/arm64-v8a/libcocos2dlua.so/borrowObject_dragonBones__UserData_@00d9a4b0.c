
/* dragonBones::UserData* dragonBones::BaseObject::borrowObject<dragonBones::UserData>() */

UserData * dragonBones::BaseObject::borrowObject<dragonBones::UserData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UserData *pUVar4;
  
  if (((UserData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&UserData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    UserData::getTypeIndex()::typeIndex = "N11dragonBones8UserDataE";
    __cxa_guard_release(&UserData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= UserData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < UserData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= UserData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pUVar4 = (UserData *)*puVar3;
      puVar2[6] = puVar3;
      pUVar4[0xc] = (UserData)0x0;
      return pUVar4;
    }
  }
  pUVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (pUVar4 != (UserData *)0x0) {
    pUVar4[0xc] = (UserData)0x0;
    *(undefined8 *)(pUVar4 + 0x18) = 0;
    *(undefined8 *)(pUVar4 + 0x10) = 0;
    *(undefined8 *)(pUVar4 + 0x28) = 0;
    *(undefined8 *)(pUVar4 + 0x20) = 0;
    *(undefined ***)pUVar4 = &PTR__UserData_016d8680;
    *(undefined8 *)(pUVar4 + 0x38) = 0;
    *(undefined8 *)(pUVar4 + 0x30) = 0;
    *(undefined8 *)(pUVar4 + 0x48) = 0;
    *(undefined8 *)(pUVar4 + 0x40) = 0;
    *(undefined8 *)(pUVar4 + 0x50) = 0;
    *(int *)(pUVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    UserData::_onClear(pUVar4);
  }
  return pUVar4;
}

