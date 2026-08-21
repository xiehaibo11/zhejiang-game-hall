
/* dragonBones::SkinData* dragonBones::BaseObject::borrowObject<dragonBones::SkinData>() */

SkinData * dragonBones::BaseObject::borrowObject<dragonBones::SkinData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SkinData *pSVar4;
  
  if (((SkinData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SkinData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    SkinData::getTypeIndex()::typeIndex = "N11dragonBones8SkinDataE";
    __cxa_guard_release(&SkinData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= SkinData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < SkinData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= SkinData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SkinData *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SkinData)0x0;
      return pSVar4;
    }
  }
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR__SkinData_01c910d8;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(BaseObject **)(this + 0x28) = this + 0x30;
    SkinData::_onClear((SkinData *)this);
  }
  return (SkinData *)this;
}

