
/* dragonBones::EventObject* dragonBones::BaseObject::borrowObject<dragonBones::EventObject>() */

EventObject * dragonBones::BaseObject::borrowObject<dragonBones::EventObject>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  EventObject *pEVar4;
  
  if (((EventObject::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&EventObject::getTypeIndex()::typeIndex), iVar1 != 0)) {
    EventObject::getTypeIndex()::typeIndex = "N11dragonBones11EventObjectE";
    __cxa_guard_release(&EventObject::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= EventObject::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < EventObject::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= EventObject::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pEVar4 = (EventObject *)*puVar3;
      puVar2[6] = puVar3;
      pEVar4[0xc] = (EventObject)0x0;
      return pEVar4;
    }
  }
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__EventObject_01c90a08;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    EventObject::_onClear((EventObject *)this);
  }
  return (EventObject *)this;
}

