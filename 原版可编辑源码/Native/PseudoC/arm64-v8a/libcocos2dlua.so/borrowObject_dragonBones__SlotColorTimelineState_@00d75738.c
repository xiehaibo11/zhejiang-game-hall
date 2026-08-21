
/* dragonBones::SlotColorTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::SlotColorTimelineState>() */

SlotColorTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::SlotColorTimelineState>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotColorTimelineState *pSVar4;
  
  if (((SlotColorTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotColorTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    SlotColorTimelineState::getTypeIndex()::typeIndex = "N11dragonBones22SlotColorTimelineStateE";
    __cxa_guard_release(&SlotColorTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= SlotColorTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < SlotColorTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= SlotColorTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SlotColorTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SlotColorTimelineState)0x0;
      return pSVar4;
    }
  }
  pSVar4 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (pSVar4 != (SlotColorTimelineState *)0x0) {
    pSVar4[0xc] = (SlotColorTimelineState)0x0;
    *(int *)(pSVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)pSVar4 = &PTR__SlotColorTimelineState_016d65a0;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(pSVar4 + 200) = puVar2;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(pSVar4 + 0xd0) = puVar2;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(pSVar4 + 0xd8) = puVar2;
    SlotColorTimelineState::_onClear(pSVar4);
  }
  return pSVar4;
}

