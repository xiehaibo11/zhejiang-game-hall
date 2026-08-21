
/* cocos2d::extension::ControlSaturationBrightnessPicker::updateSliderPosition(cocos2d::Vec2) */

void cocos2d::extension::ControlSaturationBrightnessPicker::updateSliderPosition
               (float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_78;
  float fStack_74;
  undefined1 auStack_70 [8];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e10570 to 00f1059b has its CatchHandler @ 00e10804 */
  fVar3 = *(float *)(param_3 + 0x380);
  local_60 = param_1;
  local_5c = param_2;
  (**(code **)(**(long **)(param_3 + 0x360) + 0x370))(auStack_70);
  fVar4 = *(float *)(param_3 + 900);
  fVar3 = fVar3 + local_68 * 0.5;
  (**(code **)(**(long **)(param_3 + 0x360) + 0x370))(auStack_70);
  param_1 = param_1 - fVar3;
  fVar4 = fVar4 + local_64 * 0.5;
  param_2 = param_2 - fVar4;
  fVar2 = atan2f(param_2,param_1);
  (**(code **)(**(long **)(param_3 + 0x360) + 0x370))(auStack_70);
  local_68 = local_68 * 0.5;
  if (local_68 < SQRT(param_1 * param_1 + param_2 * param_2)) {
    sincosf(fVar2,&fStack_74,&local_78);
    local_60 = fVar3 + local_78 * local_68;
    local_5c = fVar4 + fStack_74 * local_68;
  }
  (**(code **)(**(long **)(param_3 + 0x378) + 0x98))(*(long **)(param_3 + 0x378),&local_60);
  fVar4 = *(float *)(param_3 + 0x380) + (float)*(int *)(param_3 + 0x388);
  fVar2 = fVar4;
  if ((local_60 < fVar4) ||
     (fVar2 = fVar4 + (float)*(int *)(param_3 + 0x38c) + -1.0, fVar2 < local_60)) {
    local_60 = fVar2;
  }
  fVar2 = *(float *)(param_3 + 900) + (float)*(int *)(param_3 + 0x388);
  if (fVar2 <= local_5c) {
    fVar3 = (float)*(int *)(param_3 + 0x38c);
    if (fVar2 + fVar3 < local_5c) {
      local_5c = fVar2 + fVar3;
    }
  }
  else {
    fVar3 = (float)*(int *)(param_3 + 0x38c);
    local_5c = fVar2;
  }
  *(float *)(param_3 + 0x35c) = ABS((fVar2 - local_5c) / fVar3);
  *(float *)(param_3 + 0x358) = 1.0 - ABS((fVar4 - local_60) / fVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

