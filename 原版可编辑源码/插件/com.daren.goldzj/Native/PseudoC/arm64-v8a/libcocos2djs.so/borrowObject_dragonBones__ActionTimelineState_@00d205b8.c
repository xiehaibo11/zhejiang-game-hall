
/* dragonBones::ActionTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::ActionTimelineState>() */

ActionTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::ActionTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ActionTimelineState *pAVar4;
  
  if (((ActionTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ActionTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ActionTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19ActionTimelineStateE";
    __cxa_guard_release(&ActionTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ActionTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ActionTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
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
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__ActionTimelineState_01c90250;
    TimelineState::_onClear((TimelineState *)this);
  }
  return (ActionTimelineState *)this;
}

