
/* dragonBones::SlotDislayTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>() */

SlotDislayTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotDislayTimelineState *pSVar4;
  
  if (((SlotDislayTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotDislayTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    SlotDislayTimelineState::getTypeIndex()::typeIndex = "N11dragonBones23SlotDislayTimelineStateE";
    __cxa_guard_release(&SlotDislayTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= SlotDislayTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < SlotDislayTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
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
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__SlotDislayTimelineState_01c904f0;
    SlotTimelineState::_onClear((SlotTimelineState *)this);
  }
  return (SlotDislayTimelineState *)this;
}

