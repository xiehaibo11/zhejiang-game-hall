
/* dragonBones::CanvasData* dragonBones::BaseObject::borrowObject<dragonBones::CanvasData>() */

CanvasData * dragonBones::BaseObject::borrowObject<dragonBones::CanvasData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CanvasData *pCVar4;
  
  if (((CanvasData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CanvasData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CanvasData::getTypeIndex()::typeIndex = "N11dragonBones10CanvasDataE";
    __cxa_guard_release(&CanvasData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= CanvasData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < CanvasData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= CanvasData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CanvasData *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CanvasData)0x0;
      return pCVar4;
    }
  }
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined ***)this = &PTR__CanvasData_01c91fc8;
    CanvasData::_onClear((CanvasData *)this);
  }
  return (CanvasData *)this;
}

