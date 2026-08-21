
/* dragonBones::IKConstraintTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>() */

IKConstraintTimelineState *
dragonBones::BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IKConstraintTimelineState *pIVar4;
  
  if (((IKConstraintTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&IKConstraintTimelineState::getTypeIndex()::typeIndex), iVar1 != 0
     )) {
    IKConstraintTimelineState::getTypeIndex()::typeIndex =
         "N11dragonBones25IKConstraintTimelineStateE";
    __cxa_guard_release(&IKConstraintTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= IKConstraintTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < IKConstraintTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= IKConstraintTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pIVar4 = (IKConstraintTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pIVar4[0xc] = (IKConstraintTimelineState)0x0;
      return pIVar4;
    }
  }
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined ***)this = &PTR__IKConstraintTimelineState_01c90640;
    IKConstraintTimelineState::_onClear((IKConstraintTimelineState *)this);
  }
  return (IKConstraintTimelineState *)this;
}

