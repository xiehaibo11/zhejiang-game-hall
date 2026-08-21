
/* dragonBones::ZOrderTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::ZOrderTimelineState>() */

ZOrderTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::ZOrderTimelineState>(void)

{
  int iVar1;
  TimelineState *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ZOrderTimelineState *pZVar4;
  
  if (((ZOrderTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ZOrderTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ZOrderTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19ZOrderTimelineStateE";
    __cxa_guard_release(&ZOrderTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= ZOrderTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ZOrderTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= ZOrderTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pZVar4 = (ZOrderTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pZVar4[0xc] = (ZOrderTimelineState)0x0;
      return pZVar4;
    }
  }
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this != (TimelineState *)0x0) {
    this[0xc] = (TimelineState)0x0;
    *(int *)(this + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)this = &PTR__ZOrderTimelineState_016d6300;
    TimelineState::_onClear(this);
  }
  return (ZOrderTimelineState *)this;
}

