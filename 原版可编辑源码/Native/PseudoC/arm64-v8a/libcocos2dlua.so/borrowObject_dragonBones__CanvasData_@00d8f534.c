
/* dragonBones::CanvasData* dragonBones::BaseObject::borrowObject<dragonBones::CanvasData>() */

CanvasData * dragonBones::BaseObject::borrowObject<dragonBones::CanvasData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CanvasData *pCVar4;
  
                    /* try { // try from 00d8f53c to 00e8f54b has its CatchHandler @ 00d8fa84 */
                    /* try { // try from 00d8f624 to 00e8f637 has its CatchHandler @ 00d8fa60 */
  if (((CanvasData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CanvasData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CanvasData::getTypeIndex()::typeIndex = "N11dragonBones10CanvasDataE";
                    /* try { // try from 00d8f648 to 00e8f64f has its CatchHandler @ 00d8fa5c */
    __cxa_guard_release(&CanvasData::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= CanvasData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < CanvasData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d8f5a8 to 00e8f5b3 has its CatchHandler @ 00d8fa80 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= CanvasData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CanvasData *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CanvasData)0x0;
      return pCVar4;
                    /* try { // try from 00d8f5b8 to 00e8f5cb has its CatchHandler @ 00d8fa7c */
    }
  }
  pCVar4 = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (pCVar4 != (CanvasData *)0x0) {
                    /* try { // try from 00d8f5dc to 00e8f5e3 has its CatchHandler @ 00d8fa6c */
    pCVar4[0xc] = (CanvasData)0x0;
                    /* try { // try from 00d8f5e8 to 00e8f5ff has its CatchHandler @ 00d8fa68 */
    *(undefined8 *)(pCVar4 + 0x1c) = 0;
    *(undefined ***)pCVar4 = &PTR__CanvasData_016d8310;
                    /* try { // try from 00d8f600 to 00e8f60f has its CatchHandler @ 00d8fa64 */
    *(int *)(pCVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pCVar4 + 0x14) = 0;
    CanvasData::_onClear(pCVar4);
  }
                    /* try { // try from 00d8f614 to 00e8f61f has its CatchHandler @ 00d8fa78 */
  return pCVar4;
}

