
/* dragonBones::SkinData* dragonBones::BaseObject::borrowObject<dragonBones::SkinData>() */

SkinData * dragonBones::BaseObject::borrowObject<dragonBones::SkinData>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SkinData *pSVar4;
  
                    /* try { // try from 00d91064 to 00e9106f has its CatchHandler @ 00d91460 */
  if (((SkinData::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SkinData::getTypeIndex()::typeIndex), iVar1 != 0)) {
    SkinData::getTypeIndex()::typeIndex = "N11dragonBones8SkinDataE";
    __cxa_guard_release(&SkinData::getTypeIndex()::typeIndex);
  }
                    /* try { // try from 00d9108c to 00e91097 has its CatchHandler @ 00d91464 */
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= SkinData::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < SkinData::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
                    /* try { // try from 00d910cc to 00e912f7 has its CatchHandler @ 00d91604 */
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= SkinData::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SkinData *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SkinData)0x0;
      return pSVar4;
    }
  }
  pSVar4 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (pSVar4 != (SkinData *)0x0) {
    pSVar4[0xc] = (SkinData)0x0;
    iVar1 = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pSVar4 + 0x18) = 0;
    *(undefined8 *)(pSVar4 + 0x20) = 0;
    *(undefined8 *)(pSVar4 + 0x10) = 0;
    *(int *)(pSVar4 + 8) = iVar1;
    *(undefined ***)pSVar4 = &PTR__SkinData_016d6c10;
    *(undefined8 *)(pSVar4 + 0x30) = 0;
    *(undefined8 *)(pSVar4 + 0x38) = 0;
    *(SkinData **)(pSVar4 + 0x28) = pSVar4 + 0x30;
    SkinData::_onClear(pSVar4);
  }
  return pSVar4;
}

