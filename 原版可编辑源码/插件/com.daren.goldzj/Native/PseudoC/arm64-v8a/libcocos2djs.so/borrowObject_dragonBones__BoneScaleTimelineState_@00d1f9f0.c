
/* dragonBones::BoneScaleTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::BoneScaleTimelineState>() */

BoneScaleTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::BoneScaleTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoneScaleTimelineState *pBVar4;
  
  if (((BoneScaleTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoneScaleTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    BoneScaleTimelineState::getTypeIndex()::typeIndex = "N11dragonBones22BoneScaleTimelineStateE";
    __cxa_guard_release(&BoneScaleTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= BoneScaleTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < BoneScaleTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= BoneScaleTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoneScaleTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoneScaleTimelineState)0x0;
      return pBVar4;
    }
  }
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__BoneScaleTimelineState_01c90480;
    BoneTimelineState::_onClear((BoneTimelineState *)this);
  }
  return (BoneScaleTimelineState *)this;
}

