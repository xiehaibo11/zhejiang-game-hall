
/* spine::AnimationState::setEmptyAnimations(float) */

void __thiscall spine::AnimationState::setEmptyAnimations(AnimationState *this,float param_1)

{
  EventQueue EVar1;
  EventQueue *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  this_00 = *(EventQueue **)(this + 0x90);
  EVar1 = this_00[0x38];
  this_00[0x38] = (EventQueue)0x1;
  uVar4 = *(ulong *)(this + 0x58);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x68) + uVar3 * 8) != 0) {
        getEmptyAnimation();
        lVar2 = setAnimation(this,uVar3,(Animation *)&DAT_01d3d8a0,false);
        *(float *)(lVar2 + 0x84) = param_1;
        *(float *)(lVar2 + 0x74) = param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
    this_00 = *(EventQueue **)(this + 0x90);
  }
  this_00[0x38] = EVar1;
  EventQueue::drain(this_00);
  return;
}

