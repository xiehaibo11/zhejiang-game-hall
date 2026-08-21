
/* dragonBones::CCTextureAtlasData*
   dragonBones::BaseObject::borrowObject<dragonBones::CCTextureAtlasData>() */

CCTextureAtlasData * dragonBones::BaseObject::borrowObject<dragonBones::CCTextureAtlasData>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CCTextureAtlasData *pCVar4;
  
  if (((CCTextureAtlasData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CCTextureAtlasData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CCTextureAtlasData::getTypeIndex()::typeIndex = "N11dragonBones18CCTextureAtlasDataE";
    __cxa_guard_release(&CCTextureAtlasData::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= CCTextureAtlasData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < CCTextureAtlasData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= CCTextureAtlasData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CCTextureAtlasData *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CCTextureAtlasData)0x0;
      return pCVar4;
    }
  }
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(BaseObject **)(this + 0x50) = this + 0x58;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined ***)this = &PTR__CCTextureAtlasData_01c91a70;
    *(undefined8 *)(this + 0x68) = 0;
    CCTextureAtlasData::_onClear((CCTextureAtlasData *)this);
  }
  return (CCTextureAtlasData *)this;
}

