
/* dragonBones::CCSlot* dragonBones::BaseObject::borrowObject<dragonBones::CCSlot>() */

CCSlot * dragonBones::BaseObject::borrowObject<dragonBones::CCSlot>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  CCSlot *pCVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (((CCSlot::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CCSlot::getTypeIndex()::typeIndex), iVar1 != 0)) {
    CCSlot::getTypeIndex()::typeIndex = "N11dragonBones6CCSlotE";
    __cxa_guard_release(&CCSlot::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= CCSlot::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < CCSlot::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= CCSlot::getTypeIndex()::typeIndex)) && (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pCVar4 = (CCSlot *)*puVar3;
      puVar2[6] = puVar3;
      pCVar4[0xc] = (CCSlot)0x0;
      return pCVar4;
    }
  }
  pCVar4 = operator_new(0x198,(nothrow_t *)&std::nothrow);
  if (pCVar4 != (CCSlot *)0x0) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(pCVar4 + 0x38) = uVar5;
    *(undefined8 *)(pCVar4 + 0x50) = uVar5;
    auVar6 = NEON_fmov(0x3f800000,4);
    *(long *)(pCVar4 + 0xac) = auVar6._8_8_;
    *(long *)(pCVar4 + 0xa4) = auVar6._0_8_;
    *(undefined8 *)(pCVar4 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(pCVar4 + 0x10) = 0x3f800000;
    pCVar4[0xc] = (CCSlot)0x0;
    *(undefined8 *)(pCVar4 + 0x28) = 0;
    *(undefined8 *)(pCVar4 + 0x30) = 0;
    *(undefined8 *)(pCVar4 + 0x20) = 0;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    *(undefined8 *)(pCVar4 + 0x48) = 0;
                    /* try { // try from 00d9ed94 to 00e9edc3 has its CatchHandler @ 00d9f2e8 */
    *(undefined8 *)(pCVar4 + 0x80) = 0;
    *(undefined8 *)(pCVar4 + 0x88) = 0;
    *(undefined8 *)(pCVar4 + 0x78) = 0;
    *(undefined8 *)(pCVar4 + 0xbc) = 0;
    *(undefined8 *)(pCVar4 + 0xb4) = 0;
    *(undefined8 *)(pCVar4 + 0xe0) = 0;
    *(undefined8 *)(pCVar4 + 0xe8) = 0;
    *(undefined8 *)(pCVar4 + 0xd8) = 0;
    *(int *)(pCVar4 + 8) = _hashCode;
    *(undefined8 *)(pCVar4 + 0x10c) = 0x3f800000;
    *(undefined8 *)(pCVar4 + 0x11c) = 0;
    *(undefined8 *)(pCVar4 + 0x114) = 0x3f80000000000000;
    *(undefined8 *)(pCVar4 + 0x140) = 0;
    *(undefined8 *)(pCVar4 + 0x138) = 0;
    *(undefined8 *)(pCVar4 + 0x150) = 0;
    *(undefined8 *)(pCVar4 + 0x148) = 0;
    *(undefined8 *)(pCVar4 + 0x130) = 0;
    *(undefined8 *)(pCVar4 + 0x128) = 0;
    _hashCode = _hashCode + 1;
    *(undefined ***)pCVar4 = &PTR__CCSlot_016d7ec0;
    CCSlot::_onClear(pCVar4);
  }
  return pCVar4;
}

