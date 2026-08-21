
/* dragonBones::EventObject* dragonBones::BaseObject::borrowObject<dragonBones::EventObject>() */

EventObject * dragonBones::BaseObject::borrowObject<dragonBones::EventObject>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  EventObject *pEVar4;
  
  if (((EventObject::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&EventObject::getTypeIndex()::typeIndex), iVar1 != 0)) {
    EventObject::getTypeIndex()::typeIndex = "N11dragonBones11EventObjectE";
    __cxa_guard_release(&EventObject::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= EventObject::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < EventObject::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= EventObject::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pEVar4 = (EventObject *)*puVar3;
      puVar2[6] = puVar3;
      pEVar4[0xc] = (EventObject)0x0;
      return pEVar4;
    }
  }
  pEVar4 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (pEVar4 != (EventObject *)0x0) {
    pEVar4[0xc] = (EventObject)0x0;
    *(undefined ***)pEVar4 = &PTR__EventObject_016d69b8;
    *(undefined8 *)(pEVar4 + 0x20) = 0;
    *(undefined8 *)(pEVar4 + 0x18) = 0;
    *(undefined8 *)(pEVar4 + 0x30) = 0;
    *(undefined8 *)(pEVar4 + 0x28) = 0;
    *(int *)(pEVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pEVar4 + 0x40) = 0;
    *(undefined8 *)(pEVar4 + 0x38) = 0;
    EventObject::_onClear(pEVar4);
  }
  return pEVar4;
}

