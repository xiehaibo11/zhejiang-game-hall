
/* dragonBones::CCTextureAtlasData*
   dragonBones::BaseObject::borrowObject<dragonBones::CCTextureAtlasData>() */

CCTextureAtlasData * dragonBones::BaseObject::borrowObject<dragonBones::CCTextureAtlasData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CCTextureAtlasData *pCVar4;
  
  if (((CCTextureAtlasData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CCTextureAtlasData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CCTextureAtlasData::getTypeIndex()::typeIndex = "N11dragonBones18CCTextureAtlasDataE";
                    /* try { // try from 00d9ea20 to 00e9eb93 has its CatchHandler @ 00d9f318 */
    __cxa_guard_release(&CCTextureAtlasData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= CCTextureAtlasData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < CCTextureAtlasData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= CCTextureAtlasData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CCTextureAtlasData *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CCTextureAtlasData)0x0;
      return pCVar4;
    }
  }
  pCVar4 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (pCVar4 != (CCTextureAtlasData *)0x0) {
    pCVar4[0xc] = (CCTextureAtlasData)0x0;
    *(undefined8 *)(pCVar4 + 0x60) = 0;
    *(undefined8 *)(pCVar4 + 0x68) = 0;
    iVar1 = _hashCode + 1;
    *(int *)(pCVar4 + 8) = _hashCode;
    _hashCode = iVar1;
    *(undefined8 *)(pCVar4 + 0x58) = 0;
    *(undefined8 *)(pCVar4 + 0x28) = 0;
    *(undefined8 *)(pCVar4 + 0x20) = 0;
    *(undefined8 *)(pCVar4 + 0x38) = 0;
    *(undefined8 *)(pCVar4 + 0x30) = 0;
    *(undefined8 *)(pCVar4 + 0x48) = 0;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    *(CCTextureAtlasData **)(pCVar4 + 0x50) = pCVar4 + 0x58;
    *(undefined ***)pCVar4 = &PTR__CCTextureAtlasData_016d7f78;
    CCTextureAtlasData::_onClear(pCVar4);
  }
  return pCVar4;
}

