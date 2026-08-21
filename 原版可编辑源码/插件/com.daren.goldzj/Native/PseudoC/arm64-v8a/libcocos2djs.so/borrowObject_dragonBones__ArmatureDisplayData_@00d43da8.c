
/* dragonBones::ArmatureDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::ArmatureDisplayData>() */

ArmatureDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::ArmatureDisplayData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ArmatureDisplayData *pAVar4;
  undefined8 uVar5;
  
  if (((ArmatureDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ArmatureDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ArmatureDisplayData::getTypeIndex()::typeIndex = "N11dragonBones19ArmatureDisplayDataE";
    __cxa_guard_release(&ArmatureDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ArmatureDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ArmatureDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= ArmatureDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ArmatureDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ArmatureDisplayData)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x58) = uVar5;
    *(undefined ***)this = &PTR__ArmatureDisplayData_01c90f70;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    ArmatureDisplayData::_onClear((ArmatureDisplayData *)this);
  }
  return (ArmatureDisplayData *)this;
}

