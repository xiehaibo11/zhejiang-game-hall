
/* dragonBones::BoneRotateTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::BoneRotateTimelineState>() */

BoneRotateTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::BoneRotateTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoneRotateTimelineState *pBVar4;
  
  if (((BoneRotateTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoneRotateTimelineState::getTypeIndex()::typeIndex), iVar1 != 0))
  {
    BoneRotateTimelineState::getTypeIndex()::typeIndex = "N11dragonBones23BoneRotateTimelineStateE";
    __cxa_guard_release(&BoneRotateTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= BoneRotateTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < BoneRotateTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= BoneRotateTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoneRotateTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoneRotateTimelineState)0x0;
      return pBVar4;
    }
  }
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__BoneRotateTimelineState_01c90410;
    BoneTimelineState::_onClear((BoneTimelineState *)this);
  }
  return (BoneRotateTimelineState *)this;
}

