
/* dragonBones::MeshDisplayData*
   dragonBones::BaseObject::borrowObject<dragonBones::MeshDisplayData>() */

MeshDisplayData * dragonBones::BaseObject::borrowObject<dragonBones::MeshDisplayData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  MeshDisplayData *pMVar4;
  undefined8 uVar5;
  
                    /* try { // try from 00d92140 to 00e9215f has its CatchHandler @ 00d93670 */
  if (((MeshDisplayData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&MeshDisplayData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    MeshDisplayData::getTypeIndex()::typeIndex = "N11dragonBones15MeshDisplayDataE";
                    /* try { // try from 00d92264 to 00e9226b has its CatchHandler @ 00d93590 */
    __cxa_guard_release(&MeshDisplayData::getTypeIndex()::typeIndex);
                    /* try { // try from 00d9226c to 00e92277 has its CatchHandler @ 00d935c0 */
  }
                    /* try { // try from 00d92160 to 00e9216f has its CatchHandler @ 00d935f4 */
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= MeshDisplayData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < MeshDisplayData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= MeshDisplayData::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pMVar4 = (MeshDisplayData *)*puVar3;
      puVar2[6] = puVar3;
      pMVar4[0xc] = (MeshDisplayData)0x0;
      return pMVar4;
    }
  }
  pMVar4 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (pMVar4 != (MeshDisplayData *)0x0) {
    pMVar4[0xc] = (MeshDisplayData)0x0;
    *(undefined8 *)(pMVar4 + 0x20) = 0;
    *(undefined8 *)(pMVar4 + 0x18) = 0;
    *(undefined8 *)(pMVar4 + 0x30) = 0;
    *(undefined8 *)(pMVar4 + 0x28) = 0;
                    /* try { // try from 00d921fc to 00e92203 has its CatchHandler @ 00d935e4 */
    *(undefined ***)pMVar4 = &PTR__MeshDisplayData_016d84c0;
    *(undefined8 *)(pMVar4 + 0x40) = 0;
    *(undefined8 *)(pMVar4 + 0x38) = 0;
    *(undefined8 *)(pMVar4 + 0x50) = 0;
    *(undefined8 *)(pMVar4 + 0x48) = 0;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(int *)(pMVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pMVar4 + 0x58) = uVar5;
    *(undefined8 *)(pMVar4 + 0x78) = 0;
    MeshDisplayData::_onClear(pMVar4);
  }
                    /* try { // try from 00d9223c to 00e9224f has its CatchHandler @ 00d93660 */
  return pMVar4;
}

