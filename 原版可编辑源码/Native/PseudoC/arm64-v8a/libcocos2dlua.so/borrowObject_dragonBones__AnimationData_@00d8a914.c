
/* dragonBones::AnimationData* dragonBones::BaseObject::borrowObject<dragonBones::AnimationData>()
    */

AnimationData * dragonBones::BaseObject::borrowObject<dragonBones::AnimationData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationData *pAVar4;
  
  if (((AnimationData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    AnimationData::getTypeIndex()::typeIndex = "N11dragonBones13AnimationDataE";
    __cxa_guard_release(&AnimationData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= AnimationData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < AnimationData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= AnimationData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])
       ) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationData)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (AnimationData *)0x0) {
    pAVar4[0xc] = (AnimationData)0x0;
    iVar1 = _hashCode + 1;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = iVar1;
    *(undefined ***)pAVar4 = &PTR__AnimationData_016d8120;
    *(undefined8 *)(pAVar4 + 0x70) = 0;
    *(AnimationData **)(pAVar4 + 0x68) = pAVar4 + 0x70;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(undefined8 *)(pAVar4 + 0x60) = 0;
    *(undefined8 *)(pAVar4 + 0x58) = 0;
    *(undefined8 *)(pAVar4 + 0x88) = 0;
    *(undefined8 *)(pAVar4 + 0x78) = 0;
    *(AnimationData **)(pAVar4 + 0x80) = pAVar4 + 0x88;
    *(undefined8 *)(pAVar4 + 0xa0) = 0;
    *(undefined8 *)(pAVar4 + 0x90) = 0;
    *(AnimationData **)(pAVar4 + 0x98) = pAVar4 + 0xa0;
    *(undefined8 *)(pAVar4 + 0xb8) = 0;
    *(undefined8 *)(pAVar4 + 0xd8) = 0;
    *(undefined8 *)(pAVar4 + 0xe0) = 0;
    *(undefined8 *)(pAVar4 + 0xa8) = 0;
    *(AnimationData **)(pAVar4 + 0xb0) = pAVar4 + 0xb8;
    *(undefined8 *)(pAVar4 + 0xd0) = 0;
    *(undefined8 *)(pAVar4 + 0xc0) = 0;
    *(AnimationData **)(pAVar4 + 200) = pAVar4 + 0xd0;
    *(undefined8 *)(pAVar4 + 0xe8) = 0;
    AnimationData::_onClear(pAVar4);
  }
  return pAVar4;
}

