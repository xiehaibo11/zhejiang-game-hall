
void spAnimationState_addEmptyAnimation
               (float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_2 <= 0.0) {
    param_2 = param_2 - param_1;
  }
  lVar1 = spAnimationState_addAnimation(param_2,param_3,param_4,DAT_017875f0,0);
  *(float *)(lVar1 + 100) = param_1;
  *(float *)(lVar1 + 0x54) = param_1;
  return;
}

