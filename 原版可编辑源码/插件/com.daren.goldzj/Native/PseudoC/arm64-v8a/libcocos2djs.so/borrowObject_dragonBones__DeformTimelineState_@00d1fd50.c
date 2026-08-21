
/* dragonBones::DeformTimelineState*
   dragonBones::BaseObject::borrowObject<dragonBones::DeformTimelineState>() */

DeformTimelineState * dragonBones::BaseObject::borrowObject<dragonBones::DeformTimelineState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DeformTimelineState *pDVar4;
  
  if (((DeformTimelineState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DeformTimelineState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    DeformTimelineState::getTypeIndex()::typeIndex = "N11dragonBones19DeformTimelineStateE";
    __cxa_guard_release(&DeformTimelineState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= DeformTimelineState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)
               puVar3[(char *)puVar3[4] < DeformTimelineState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= DeformTimelineState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pDVar4 = (DeformTimelineState *)*puVar3;
      puVar2[6] = puVar3;
      pDVar4[0xc] = (DeformTimelineState)0x0;
      return pDVar4;
    }
  }
  this = operator_new(0x120,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined ***)this = &PTR__DeformTimelineState_01c905d0;
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    DeformTimelineState::_onClear((DeformTimelineState *)this);
  }
  return (DeformTimelineState *)this;
}

