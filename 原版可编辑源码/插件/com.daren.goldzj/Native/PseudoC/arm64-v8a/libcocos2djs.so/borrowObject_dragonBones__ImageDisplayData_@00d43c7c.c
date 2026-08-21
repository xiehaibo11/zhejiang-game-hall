
/* dragonBones::ImageDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::ImageDisplayData>() */

ImageDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::ImageDisplayData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ImageDisplayData *pIVar4;
  undefined8 uVar5;
  
  if (((ImageDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ImageDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ImageDisplayData::getTypeIndex()::typeIndex = "N11dragonBones16ImageDisplayDataE";
    __cxa_guard_release(&ImageDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ImageDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ImageDisplayData::getTypeIndex()::typeIndex]
      ;
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= ImageDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (ImageDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (ImageDisplayData)0x0;
      return pIVar4;
    }
  }
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
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
    *(undefined ***)this = &PTR__ImageDisplayData_01c90f28;
    *(undefined8 *)(this + 0x68) = 0;
    ImageDisplayData::_onClear((ImageDisplayData *)this);
  }
  return (ImageDisplayData *)this;
}

