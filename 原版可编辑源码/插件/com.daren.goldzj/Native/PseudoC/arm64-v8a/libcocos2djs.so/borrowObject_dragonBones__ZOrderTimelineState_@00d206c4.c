
/* dragonBones::ZOrderTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::ZOrderTimelineState>() */

ZOrderTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::ZOrderTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ZOrderTimelineState *pZVar4;
  
  if (((ZOrderTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ZOrderTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    ZOrderTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19ZOrderTimelineStateE";
    __cxa_guard_release(&ZOrderTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= ZOrderTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < ZOrderTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
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
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__ZOrderTimelineState_01c902c0;
    TimelineState::_onClear((TimelineState *)this);
  }
  return (ZOrderTimelineState *)this;
}

