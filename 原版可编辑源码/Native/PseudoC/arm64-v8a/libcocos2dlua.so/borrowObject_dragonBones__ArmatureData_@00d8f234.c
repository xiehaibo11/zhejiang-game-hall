
/* dragonBones::ArmatureData* dragonBones::BaseObject::borrowObject<dragonBones::ArmatureData>() */

ArmatureData * dragonBones::BaseObject::borrowObject<dragonBones::ArmatureData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ArmatureData *pAVar4;
  
                    /* try { // try from 00d8f250 to 00e8f27f has its CatchHandler @ 00d8fb18 */
  if (((ArmatureData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ArmatureData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ArmatureData::getTypeIndex()::typeIndex = "N11dragonBones12ArmatureDataE";
    __cxa_guard_release(&ArmatureData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ArmatureData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ArmatureData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d8f290 to 00e8f29b has its CatchHandler @ 00d8faa8 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ArmatureData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6]))
    {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ArmatureData *)*puVar3;
                    /* try { // try from 00d8f2b0 to 00e8f3e7 has its CatchHandler @ 00d8fb18 */
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ArmatureData)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (ArmatureData *)0x0) {
    pAVar4[0xc] = (ArmatureData)0x0;
    iVar1 = _hashCode;
    *(undefined8 *)(pAVar4 + 0xd0) = 0;
    _hashCode = _hashCode + 1;
    *(undefined ***)pAVar4 = &PTR__ArmatureData_016d6b38;
    *(int *)(pAVar4 + 8) = iVar1;
    *(undefined8 *)(pAVar4 + 200) = 0;
    *(ArmatureData **)(pAVar4 + 0xc0) = pAVar4 + 200;
    *(undefined8 *)(pAVar4 + 0x28) = 0;
    *(undefined8 *)(pAVar4 + 0x20) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x30) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(undefined8 *)(pAVar4 + 0x58) = 0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0x68) = 0;
    *(undefined8 *)(pAVar4 + 0x60) = 0;
    *(undefined8 *)(pAVar4 + 0x78) = 0;
    *(undefined8 *)(pAVar4 + 0x70) = 0;
    *(undefined8 *)(pAVar4 + 0x88) = 0;
    *(undefined8 *)(pAVar4 + 0x80) = 0;
    *(undefined8 *)(pAVar4 + 0x98) = 0;
    *(undefined8 *)(pAVar4 + 0x90) = 0;
    *(undefined8 *)(pAVar4 + 0xa8) = 0;
    *(undefined8 *)(pAVar4 + 0xa0) = 0;
    *(undefined8 *)(pAVar4 + 0xb8) = 0;
    *(undefined8 *)(pAVar4 + 0xb0) = 0;
    *(undefined8 *)(pAVar4 + 0xe0) = 0;
    *(ArmatureData **)(pAVar4 + 0xd8) = pAVar4 + 0xe0;
    *(undefined8 *)(pAVar4 + 0x100) = 0;
    *(ArmatureData **)(pAVar4 + 0x108) = pAVar4 + 0x110;
    *(undefined8 *)(pAVar4 + 0xf8) = 0;
    *(undefined8 *)(pAVar4 + 0x110) = 0;
    *(undefined8 *)(pAVar4 + 0x118) = 0;
    *(undefined8 *)(pAVar4 + 0x128) = 0;
    *(undefined8 *)(pAVar4 + 0x130) = 0;
    *(ArmatureData **)(pAVar4 + 0x120) = pAVar4 + 0x128;
    *(undefined8 *)(pAVar4 + 0xe8) = 0;
    *(ArmatureData **)(pAVar4 + 0xf0) = pAVar4 + 0xf8;
    *(undefined8 *)(pAVar4 + 0x148) = 0;
    *(undefined8 *)(pAVar4 + 0x150) = 0;
    ArmatureData::_onClear(pAVar4);
  }
  return pAVar4;
}

