
/* dragonBones::SlotColorTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::SlotColorTimelineState>() */

SlotColorTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::SlotColorTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  SlotColorTimelineState *pSVar4;
  
  if (((SlotColorTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&SlotColorTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    SlotColorTimelineState::getTypeIndex()::typeIndex = "N11dragonBones22SlotColorTimelineStateE";
    __cxa_guard_release(&SlotColorTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= SlotColorTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < SlotColorTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= SlotColorTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pSVar4 = (SlotColorTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pSVar4[0xc] = (SlotColorTimelineState)0x0;
      return pSVar4;
    }
  }
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__SlotColorTimelineState_01c90560;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(this + 200) = puVar2;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(this + 0xd0) = puVar2;
    puVar2 = operator_new__(0x20);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(this + 0xd8) = puVar2;
    SlotColorTimelineState::_onClear((SlotColorTimelineState *)this);
  }
  return (SlotColorTimelineState *)this;
}

