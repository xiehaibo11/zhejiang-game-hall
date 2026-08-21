
/* dragonBones::Animation* dragonBones::BaseObject::borrowObject<dragonBones::Animation>() */

Animation * dragonBones::BaseObject::borrowObject<dragonBones::Animation>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Animation *pAVar4;
  
  if (((Animation::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&Animation::getTypeIndex()::typeIndex), iVar1 != 0)) {
    Animation::getTypeIndex()::typeIndex = "N11dragonBones9AnimationE";
    __cxa_guard_release(&Animation::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= Animation::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < Animation::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= Animation::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (Animation *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (Animation)0x0;
      return pAVar4;
    }
  }
  pAVar4 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (pAVar4 != (Animation *)0x0) {
    pAVar4[0xc] = (Animation)0x0;
    *(undefined ***)pAVar4 = &PTR__Animation_016d5f78;
    *(int *)(pAVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pAVar4 + 0x58) = 0;
    *(undefined8 *)(pAVar4 + 0x60) = 0;
    *(undefined8 *)(pAVar4 + 0x28) = 0;
    *(undefined8 *)(pAVar4 + 0x20) = 0;
    *(undefined8 *)(pAVar4 + 0x38) = 0;
    *(undefined8 *)(pAVar4 + 0x30) = 0;
    *(undefined8 *)(pAVar4 + 0x48) = 0;
    *(undefined8 *)(pAVar4 + 0x40) = 0;
    *(Animation **)(pAVar4 + 0x50) = pAVar4 + 0x58;
    *(undefined8 *)(pAVar4 + 0x70) = 0;
    Animation::_onClear(pAVar4);
  }
  return pAVar4;
}

