
/* dragonBones::SlotData* dragonBones::BaseObject::borrowObject<dragonBones::SlotData>() */

SlotData * dragonBones::BaseObject::borrowObject<dragonBones::SlotData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotData *pSVar4;
  
                    /* try { // try from 00d909d0 to 00e90a5b has its CatchHandler @ 00d915c4 */
                    /* try { // try from 00d90ac8 to 00e90ad3 has its CatchHandler @ 00d91554 */
  if (((SlotData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    SlotData::getTypeIndex()::typeIndex = "N11dragonBones8SlotDataE";
                    /* try { // try from 00d90ae4 to 00e90ae7 has its CatchHandler @ 00d91470 */
    __cxa_guard_release(&SlotData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= SlotData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < SlotData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= SlotData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SlotData *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SlotData)0x0;
      return pSVar4;
    }
  }
                    /* try { // try from 00d90a5c to 00e90a7f has its CatchHandler @ 00d900ac */
  pSVar4 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pSVar4 != (SlotData *)0x0) {
    pSVar4[0xc] = (SlotData)0x0;
                    /* try { // try from 00d90a80 to 00e90a87 has its CatchHandler @ 00d91570 */
    *(undefined ***)pSVar4 = &PTR__SlotData_016d6bc8;
    *(undefined8 *)(pSVar4 + 0x28) = 0;
    *(undefined8 *)(pSVar4 + 0x20) = 0;
    *(undefined8 *)(pSVar4 + 0x38) = 0;
    *(undefined8 *)(pSVar4 + 0x30) = 0;
    *(int *)(pSVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pSVar4 + 0x40) = 0;
    SlotData::_onClear(pSVar4);
  }
                    /* try { // try from 00d90ab4 to 00e90ac7 has its CatchHandler @ 00d91558 */
  return pSVar4;
}

