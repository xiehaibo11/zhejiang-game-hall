
/* dragonBones::SlotDislayTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>() */

SlotDislayTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>(void)

{
  int iVar1;
  SlotTimelineState *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotDislayTimelineState *pSVar4;
  
  if (((SlotDislayTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotDislayTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    SlotDislayTimelineState::getTypeIndex()::typeIndex = "N11dragonBones23SlotDislayTimelineStateE";
    __cxa_guard_release(&SlotDislayTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= SlotDislayTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < SlotDislayTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= SlotDislayTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SlotDislayTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SlotDislayTimelineState)0x0;
      return pSVar4;
    }
  }
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (SlotTimelineState *)0x0) {
    this[0xc] = (SlotTimelineState)0x0;
    *(int *)(this + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)this = &PTR__SlotDislayTimelineState_016d6530;
    SlotTimelineState::_onClear(this);
  }
  return (SlotDislayTimelineState *)this;
}

