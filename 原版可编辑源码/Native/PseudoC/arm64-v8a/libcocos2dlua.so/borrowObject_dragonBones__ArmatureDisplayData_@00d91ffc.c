
/* dragonBones::ArmatureDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::ArmatureDisplayData>() */

ArmatureDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::ArmatureDisplayData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ArmatureDisplayData *pAVar4;
  undefined8 uVar5;
  
                    /* try { // try from 00d92008 to 00e92017 has its CatchHandler @ 00d93608 */
                    /* try { // try from 00d9210c to 00e92113 has its CatchHandler @ 00d93594 */
                    /* try { // try from 00d92114 to 00e9211f has its CatchHandler @ 00d935c4 */
  if (((ArmatureDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ArmatureDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ArmatureDisplayData::getTypeIndex()::typeIndex = "N11dragonBones19ArmatureDisplayDataE";
    __cxa_guard_release(&ArmatureDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ArmatureDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ArmatureDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ArmatureDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ArmatureDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ArmatureDisplayData)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (ArmatureDisplayData *)0x0) {
                    /* try { // try from 00d920a4 to 00e920ab has its CatchHandler @ 00d935f8 */
    pAVar4[0xc] = (ArmatureDisplayData)0x0;
    *(undefined8 *)(pAVar4 + 0x20) = 0;
    *(undefined8 *)(pAVar4 + 0x18) = 0;
    *(undefined8 *)(pAVar4 + 0x30) = 0;
    *(undefined8 *)(pAVar4 + 0x28) = 0;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(pAVar4 + 0x78) = 0;
    *(undefined8 *)(pAVar4 + 0x80) = 0;
    *(undefined ***)pAVar4 = &PTR__ArmatureDisplayData_016d8478;
    *(undefined8 *)(pAVar4 + 0x58) = uVar5;
                    /* try { // try from 00d920e4 to 00e920f7 has its CatchHandler @ 00d93670 */
    *(undefined8 *)(pAVar4 + 0x70) = 0;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    ArmatureDisplayData::_onClear(pAVar4);
  }
  return pAVar4;
}

