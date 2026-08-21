
/* dragonBones::ArmatureData* dragonBones::BaseObject::borrowObject<dragonBones::ArmatureData>() */

ArmatureData * dragonBones::BaseObject::borrowObject<dragonBones::ArmatureData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ArmatureData *pAVar4;
  
  if (((ArmatureData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ArmatureData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ArmatureData::getTypeIndex()::typeIndex = "N11dragonBones12ArmatureDataE";
    __cxa_guard_release(&ArmatureData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ArmatureData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ArmatureData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= ArmatureData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ArmatureData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ArmatureData)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__ArmatureData_01c90c18;
    *(undefined8 *)(this + 200) = 0;
    *(BaseObject **)(this + 0xc0) = this + 200;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(BaseObject **)(this + 0xd8) = this + 0xe0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(BaseObject **)(this + 0x120) = this + 0x128;
    *(undefined8 *)(this + 0x100) = 0;
    *(BaseObject **)(this + 0x108) = this + 0x110;
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(BaseObject **)(this + 0xf0) = this + 0xf8;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    ArmatureData::_onClear((ArmatureData *)this);
  }
  return (ArmatureData *)this;
}

