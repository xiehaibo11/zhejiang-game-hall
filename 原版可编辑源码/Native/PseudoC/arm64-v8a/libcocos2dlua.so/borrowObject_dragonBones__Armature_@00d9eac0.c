
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* dragonBones::Armature* dragonBones::BaseObject::borrowObject<dragonBones::Armature>() */

Armature * dragonBones::BaseObject::borrowObject<dragonBones::Armature>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Armature *pAVar4;
  
  if (((Armature::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Armature::getTypeIndex()::typeIndex), iVar1 != 0)) {
    _typeIndex = "N11dragonBones8ArmatureE";
    __cxa_guard_release(&Armature::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= _typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < _typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) && ((char *)puVar2[4] <= _typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (Armature *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (Armature)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (Armature *)0x0) {
    pAVar4[0xc] = (Armature)0x0;
    *(undefined8 *)(pAVar4 + 0xc0) = 0;
    *(undefined8 *)pAVar4 = 0x16d6758;
    *(undefined8 *)(pAVar4 + 0xd0) = 0x16d67c0;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x50) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
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
    *(undefined8 *)(pAVar4 + 0xb0) = 0;
    Armature::_onClear(pAVar4);
  }
                    /* try { // try from 00d9ebc8 to 00e9ebfb has its CatchHandler @ 00d9f2fc */
  return pAVar4;
}

