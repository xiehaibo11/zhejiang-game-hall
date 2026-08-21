
/* dragonBones::BoundingBoxDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::BoundingBoxDisplayData>() */

BoundingBoxDisplayData *
dragonBones::BaseObject::borrowObject<dragonBones::BoundingBoxDisplayData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoundingBoxDisplayData *pBVar4;
  undefined8 uVar5;
  
  if (((BoundingBoxDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoundingBoxDisplayData::getTypeIndex()::typeIndex), iVar1 != 0))
  {
                    /* try { // try from 00d92394 to 00e923a7 has its CatchHandler @ 00d9365c */
    BoundingBoxDisplayData::getTypeIndex()::typeIndex = "N11dragonBones22BoundingBoxDisplayDataE";
    __cxa_guard_release(&BoundingBoxDisplayData::getTypeIndex()::typeIndex);
  }
                    /* try { // try from 00d92298 to 00e922b7 has its CatchHandler @ 00d93660 */
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
                    /* try { // try from 00d922b8 to 00e922c7 has its CatchHandler @ 00d935e0 */
      if ((char *)puVar3[4] >= BoundingBoxDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < BoundingBoxDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= BoundingBoxDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoundingBoxDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoundingBoxDisplayData)0x0;
      return pBVar4;
    }
  }
  pBVar4 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (pBVar4 != (BoundingBoxDisplayData *)0x0) {
    pBVar4[0xc] = (BoundingBoxDisplayData)0x0;
    *(undefined8 *)(pBVar4 + 0x20) = 0;
    *(undefined8 *)(pBVar4 + 0x18) = 0;
    *(undefined8 *)(pBVar4 + 0x30) = 0;
    *(undefined8 *)(pBVar4 + 0x28) = 0;
    *(undefined ***)pBVar4 = &PTR__BoundingBoxDisplayData_016d8508;
    *(undefined8 *)(pBVar4 + 0x40) = 0;
    *(undefined8 *)(pBVar4 + 0x38) = 0;
    *(undefined8 *)(pBVar4 + 0x50) = 0;
    *(undefined8 *)(pBVar4 + 0x48) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(int *)(pBVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
                    /* try { // try from 00d92354 to 00e9235b has its CatchHandler @ 00d935d0 */
    *(undefined8 *)(pBVar4 + 0x58) = uVar5;
    *(undefined8 *)(pBVar4 + 0x68) = 0;
    BoundingBoxDisplayData::_onClear(pBVar4);
  }
  return pBVar4;
}

