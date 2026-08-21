
/* dragonBones::ImageDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::ImageDisplayData>() */

ImageDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::ImageDisplayData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ImageDisplayData *pIVar4;
  undefined8 uVar5;
  
  if (((ImageDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ImageDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
                    /* try { // try from 00d91fe8 to 00e92007 has its CatchHandler @ 00d93680 */
    ImageDisplayData::getTypeIndex()::typeIndex = "N11dragonBones16ImageDisplayDataE";
    __cxa_guard_release(&ImageDisplayData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ImageDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < ImageDisplayData::getTypeIndex()::typeIndex]
      ;
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ImageDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (ImageDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (ImageDisplayData)0x0;
      return pIVar4;
    }
  }
                    /* try { // try from 00d91f4c to 00e91f53 has its CatchHandler @ 00d9360c */
  pIVar4 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (pIVar4 != (ImageDisplayData *)0x0) {
    pIVar4[0xc] = (ImageDisplayData)0x0;
    *(undefined8 *)(pIVar4 + 0x20) = 0;
    *(undefined8 *)(pIVar4 + 0x18) = 0;
    *(undefined8 *)(pIVar4 + 0x30) = 0;
    *(undefined8 *)(pIVar4 + 0x28) = 0;
    *(undefined ***)pIVar4 = &PTR__ImageDisplayData_016d8430;
                    /* try { // try from 00d91f8c to 00e91f9f has its CatchHandler @ 00d93680 */
    *(undefined8 *)(pIVar4 + 0x40) = 0;
    *(undefined8 *)(pIVar4 + 0x38) = 0;
    *(undefined8 *)(pIVar4 + 0x50) = 0;
    *(undefined8 *)(pIVar4 + 0x48) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(int *)(pIVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pIVar4 + 0x58) = uVar5;
                    /* try { // try from 00d91fb4 to 00e91fbb has its CatchHandler @ 00d93598 */
    *(undefined8 *)(pIVar4 + 0x68) = 0;
    ImageDisplayData::_onClear(pIVar4);
  }
                    /* try { // try from 00d91fbc to 00e91fc7 has its CatchHandler @ 00d935c8 */
  return pIVar4;
}

