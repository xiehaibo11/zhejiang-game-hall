
/* dragonBones::CCTextureData* dragonBones::BaseObject::borrowObject<dragonBones::CCTextureData>()
    */

CCTextureData * dragonBones::BaseObject::borrowObject<dragonBones::CCTextureData>(void)

{
  int iVar1;
  TextureData *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CCTextureData *pCVar4;
  
  if (((CCTextureData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CCTextureData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CCTextureData::getTypeIndex()::typeIndex = "N11dragonBones13CCTextureDataE";
    __cxa_guard_release(&CCTextureData::getTypeIndex()::typeIndex);
  }
                    /* try { // try from 00da0384 to 00ea04af has its CatchHandler @ 00da0588 */
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= CCTextureData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < CCTextureData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= CCTextureData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])
       ) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CCTextureData *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CCTextureData)0x0;
      return pCVar4;
    }
  }
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (TextureData *)0x0) {
    this[0xc] = (TextureData)0x0;
    *(undefined ***)this = &PTR__CCTextureData_016d7fd0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(int *)(this + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(this + 0x48) = 0;
    TextureData::_onClear(this);
    if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x48));
      *(undefined8 *)(this + 0x48) = 0;
    }
  }
  return (CCTextureData *)this;
}

