
/* dragonBones::BoneTranslateTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::BoneTranslateTimelineState>() */

BoneTranslateTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::BoneTranslateTimelineState>(void)

{
  int iVar1;
  BoneTimelineState *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BoneTranslateTimelineState *pBVar4;
  
  if (((BoneTranslateTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&BoneTranslateTimelineState::getTypeIndex()::typeIndex),
     iVar1 != 0)) {
    BoneTranslateTimelineState::getTypeIndex()::typeIndex =
         "N11dragonBones26BoneTranslateTimelineStateE";
    __cxa_guard_release(&BoneTranslateTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= BoneTranslateTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < BoneTranslateTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= BoneTranslateTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pBVar4 = (BoneTranslateTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pBVar4[0xc] = (BoneTranslateTimelineState)0x0;
      return pBVar4;
    }
  }
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (BoneTimelineState *)0x0) {
    this[0xc] = (BoneTimelineState)0x0;
    *(int *)(this + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined ***)this = &PTR__BoneTranslateTimelineState_016d63e0;
    BoneTimelineState::_onClear(this);
  }
  return (BoneTranslateTimelineState *)this;
}

