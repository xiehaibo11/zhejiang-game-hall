
/* dragonBones::BoneData* dragonBones::BaseObject::borrowObject<dragonBones::BoneData>() */

BoneData * dragonBones::BaseObject::borrowObject<dragonBones::BoneData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoneData *pBVar4;
  undefined8 uVar5;
  
  if (((BoneData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoneData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    BoneData::getTypeIndex()::typeIndex = "N11dragonBones8BoneDataE";
    __cxa_guard_release(&BoneData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= BoneData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < BoneData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= BoneData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoneData *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoneData)0x0;
      return pBVar4;
    }
  }
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__BoneData_01c90c60;
    *(undefined8 *)(this + 0x40) = uVar5;
    *(undefined8 *)(this + 0x48) = 0;
    BoneData::_onClear((BoneData *)this);
  }
  return (BoneData *)this;
}

