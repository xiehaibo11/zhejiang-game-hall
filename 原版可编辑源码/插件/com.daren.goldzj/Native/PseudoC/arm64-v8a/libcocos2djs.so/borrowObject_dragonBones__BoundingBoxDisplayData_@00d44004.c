
/* dragonBones::BoundingBoxDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::BoundingBoxDisplayData>() */

BoundingBoxDisplayData *
dragonBones::BaseObject::borrowObject<dragonBones::BoundingBoxDisplayData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoundingBoxDisplayData *pBVar4;
  undefined8 uVar5;
  
  if (((BoundingBoxDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoundingBoxDisplayData::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    BoundingBoxDisplayData::getTypeIndex()::typeIndex = "N11dragonBones22BoundingBoxDisplayDataE";
    __cxa_guard_release(&BoundingBoxDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= BoundingBoxDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < BoundingBoxDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= BoundingBoxDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoundingBoxDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoundingBoxDisplayData)0x0;
      return pBVar4;
    }
  }
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
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
    *(undefined ***)this = &PTR__BoundingBoxDisplayData_01c91000;
    *(undefined8 *)(this + 0x68) = 0;
    BoundingBoxDisplayData::_onClear((BoundingBoxDisplayData *)this);
  }
  return (BoundingBoxDisplayData *)this;
}

