
/* dragonBones::DragonBonesData*
   dragonBones::BaseObject::borrowObject<dragonBones::DragonBonesData>() */

DragonBonesData * dragonBones::BaseObject::borrowObject<dragonBones::DragonBonesData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DragonBonesData *pDVar4;
  
  if (((DragonBonesData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DragonBonesData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    DragonBonesData::getTypeIndex()::typeIndex = "N11dragonBones15DragonBonesDataE";
    __cxa_guard_release(&DragonBonesData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= DragonBonesData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < DragonBonesData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= DragonBonesData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pDVar4 = (DragonBonesData *)*puVar3;
      puVar2[6] = puVar3;
      pDVar4[0xc] = (DragonBonesData)0x0;
      return pDVar4;
    }
  }
  this = operator_new(0xe8,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined ***)this = &PTR__DragonBonesData_01c91090;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(BaseObject **)(this + 0x90) = this + 0x98;
    *(undefined8 *)(this + 0xe0) = 0;
    DragonBonesData::_onClear((DragonBonesData *)this);
  }
  return (DragonBonesData *)this;
}

