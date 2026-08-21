
/* dragonBones::WeightData* dragonBones::BaseObject::borrowObject<dragonBones::WeightData>() */

WeightData * dragonBones::BaseObject::borrowObject<dragonBones::WeightData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  WeightData *pWVar4;
  
  if (((WeightData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&WeightData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    WeightData::getTypeIndex()::typeIndex = "N11dragonBones10WeightDataE";
    __cxa_guard_release(&WeightData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= WeightData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < WeightData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d89a68 to 00e89a83 has its CatchHandler @ 00d8a4f0 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= WeightData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pWVar4 = (WeightData *)*puVar3;
      puVar2[6] = puVar3;
      pWVar4[0xc] = (WeightData)0x0;
      return pWVar4;
    }
  }
                    /* try { // try from 00d89a88 to 00e89a97 has its CatchHandler @ 00d8a4f4 */
  pWVar4 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pWVar4 != (WeightData *)0x0) {
    pWVar4[0xc] = (WeightData)0x0;
    *(undefined8 *)(pWVar4 + 0x20) = 0;
    *(undefined8 *)(pWVar4 + 0x28) = 0;
    *(undefined ***)pWVar4 = &PTR__WeightData_016d8550;
    *(int *)(pWVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pWVar4 + 0x18) = 0;
    WeightData::_onClear(pWVar4);
  }
  return pWVar4;
}

