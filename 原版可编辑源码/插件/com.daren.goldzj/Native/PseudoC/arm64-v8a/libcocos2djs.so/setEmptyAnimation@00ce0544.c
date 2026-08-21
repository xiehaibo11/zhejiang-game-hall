
/* spine::AnimationState::setEmptyAnimation(unsigned long, float) */

void __thiscall
spine::AnimationState::setEmptyAnimation(AnimationState *this,ulong param_1,float param_2)

{
  long lVar1;
  
  getEmptyAnimation();
  lVar1 = setAnimation(this,param_1,(Animation *)&DAT_01d3d8a0,false);
  *(float *)(lVar1 + 0x84) = param_2;
  *(float *)(lVar1 + 0x74) = param_2;
  return;
}

