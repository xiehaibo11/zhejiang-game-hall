
/* dragonBones::AnimationState* dragonBones::BaseObject::borrowObject<dragonBones::AnimationState>()
    */

AnimationState * dragonBones::BaseObject::borrowObject<dragonBones::AnimationState>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimationState *pAVar4;
  
  if (((AnimationState::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&AnimationState::getTypeIndex()::typeIndex), iVar1 != 0)) {
    AnimationState::getTypeIndex()::typeIndex = "N11dragonBones14AnimationStateE";
    __cxa_guard_release(&AnimationState::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= AnimationState::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < AnimationState::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= AnimationState::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pAVar4 = (AnimationState *)*puVar3;
      puVar2[6] = puVar3;
      pAVar4[0xc] = (AnimationState)0x0;
      return pAVar4;
    }
  }
  this = operator_new(0x140,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined ***)this = &PTR__AnimationState_01c8ff90;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x110) = 0;
    *(BaseObject **)(this + 0x118) = this + 0x120;
    *(undefined8 *)(this + 0x138) = 0;
    AnimationState::_onClear((AnimationState *)this);
  }
  return (AnimationState *)this;
}

