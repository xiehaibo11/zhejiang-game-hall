
/* dragonBones::MeshDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::MeshDisplayData>() */

MeshDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::MeshDisplayData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  MeshDisplayData *pMVar4;
  undefined8 uVar5;
  
  if (((MeshDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&MeshDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    MeshDisplayData::getTypeIndex()::typeIndex = "N11dragonBones15MeshDisplayDataE";
    __cxa_guard_release(&MeshDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= MeshDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < MeshDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= MeshDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pMVar4 = (MeshDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pMVar4[0xc] = (MeshDisplayData)0x0;
      return pMVar4;
    }
  }
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
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
    *(undefined ***)this = &PTR__MeshDisplayData_01c90fb8;
    *(undefined8 *)(this + 0x78) = 0;
    MeshDisplayData::_onClear((MeshDisplayData *)this);
  }
  return (MeshDisplayData *)this;
}

