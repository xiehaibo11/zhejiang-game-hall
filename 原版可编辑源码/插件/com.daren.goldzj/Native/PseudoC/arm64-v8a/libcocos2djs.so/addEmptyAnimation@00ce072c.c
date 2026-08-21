
/* spine::AnimationState::addEmptyAnimation(unsigned long, float, float) */

void __thiscall
spine::AnimationState::addEmptyAnimation
          (AnimationState *this,ulong param_1,float param_2,float param_3)

{
  long lVar1;
  
  if (param_3 <= 0.0) {
    param_3 = param_3 - param_2;
  }
  getEmptyAnimation();
  lVar1 = addAnimation(this,param_1,(Animation *)&DAT_01d3d8a0,false,param_3);
  *(float *)(lVar1 + 0x84) = param_2;
  *(float *)(lVar1 + 0x74) = param_2;
  return;
}

