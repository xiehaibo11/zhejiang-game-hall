
/* dragonBones::IKConstraintData*
   dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintData>() */

IKConstraintData * dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraintData *pIVar4;
  
                    /* try { // try from 00d900ac to 00e9010f has its CatchHandler @ 00d900ac
                       catch() { ... } // from try @ 00d900ac with catch @ 00d900ac
                       catch() { ... } // from try @ 00d905ac with catch @ 00d900ac
                       catch() { ... } // from try @ 00d9080c with catch @ 00d900ac
                       catch() { ... } // from try @ 00d90a5c with catch @ 00d900ac
                       catch() { ... } // from try @ 00d90cac with catch @ 00d900ac
                       catch() { ... } // from try @ 00d90f0c with catch @ 00d900ac
                       catch() { ... } // from try @ 00d91440 with catch @ 00d900ac */
  if (((IKConstraintData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraintData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    IKConstraintData::getTypeIndex()::typeIndex = "N11dragonBones16IKConstraintDataE";
    __cxa_guard_release(&IKConstraintData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= IKConstraintData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < IKConstraintData::getTypeIndex()::typeIndex]
      ;
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d90110 to 00e9011b has its CatchHandler @ 00d914f8 */
                    /* try { // try from 00d9011c to 00e9012b has its CatchHandler @ 00d914e8 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= IKConstraintData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraintData *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraintData)0x0;
      return pIVar4;
                    /* try { // try from 00d9012c to 00e9013b has its CatchHandler @ 00d914d8 */
    }
  }
                    /* try { // try from 00d9013c to 00e9014b has its CatchHandler @ 00d914c8 */
  pIVar4 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (pIVar4 != (IKConstraintData *)0x0) {
                    /* try { // try from 00d9014c to 00e9015b has its CatchHandler @ 00d914b8 */
    pIVar4[0xc] = (IKConstraintData)0x0;
    *(undefined8 *)(pIVar4 + 0x20) = 0;
    *(undefined8 *)(pIVar4 + 0x28) = 0;
    *(undefined8 *)(pIVar4 + 0x18) = 0;
                    /* try { // try from 00d9015c to 00e9016b has its CatchHandler @ 00d914a8 */
                    /* try { // try from 00d9016c to 00e9017b has its CatchHandler @ 00d91498 */
    *(int *)(pIVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
                    /* try { // try from 00d9017c to 00e9018b has its CatchHandler @ 00d91488 */
    *(undefined ***)pIVar4 = &PTR__IKConstraintData_016d83a0;
    IKConstraintData::_onClear(pIVar4);
  }
                    /* try { // try from 00d9018c to 00e9019b has its CatchHandler @ 00d91478 */
  return pIVar4;
}

