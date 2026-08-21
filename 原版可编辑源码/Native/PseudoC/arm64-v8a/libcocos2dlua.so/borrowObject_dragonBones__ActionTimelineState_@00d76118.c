
/* dragonBones::ActionTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::ActionTimelineState>() */

ActionTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::ActionTimelineState>(void)

{
  int iVar1;
  TimelineState *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ActionTimelineState *pAVar4;
  
  if (((ActionTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ActionTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ActionTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19ActionTimelineStateE";
    __cxa_guard_release(&ActionTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ActionTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ActionTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ActionTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (ActionTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (ActionTimelineState)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this != (TimelineState *)0x0) {
    this[0xc] = (TimelineState)0x0;
    *(int *)(this + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)this = &PTR__ActionTimelineState_016d6290;
    TimelineState::_onClear(this);
  }
  return (ActionTimelineState *)this;
}

