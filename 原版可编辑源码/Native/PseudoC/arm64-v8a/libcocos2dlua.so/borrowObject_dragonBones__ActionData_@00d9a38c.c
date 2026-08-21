
/* dragonBones::ActionData* dragonBones::BaseObject::borrowObject<dragonBones::ActionData>() */

ActionData * dragonBones::BaseObject::borrowObject<dragonBones::ActionData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ActionData *pAVar4;
  
  if (((ActionData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ActionData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ActionData::getTypeIndex()::typeIndex = "N11dragonBones10ActionDataE";
    __cxa_guard_release(&ActionData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ActionData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ActionData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ActionData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ActionData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ActionData)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (ActionData *)0x0) {
    pAVar4[0xc] = (ActionData)0x0;
    *(undefined8 *)(pAVar4 + 0x20) = 0;
    *(undefined8 *)(pAVar4 + 0x28) = 0;
    *(undefined ***)pAVar4 = &PTR__ActionData_016d86c8;
    *(undefined8 *)(pAVar4 + 0x18) = 0;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    ActionData::_onClear(pAVar4);
  }
  return pAVar4;
}

