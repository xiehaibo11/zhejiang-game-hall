
/* cocos2d::extension::ControlHuePicker::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlHuePicker::onTouchBegan(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float in_s1;
  undefined1 auStack_58 [8];
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x658))();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
    fVar5 = SQRT(in_s1 * in_s1 + (fVar4 + 10.0) * (fVar4 + 10.0));
    uVar3 = 0;
    if ((fVar5 < 80.0) && (59.0 < fVar5)) {
      (**(code **)(**(long **)(param_1 + 0x360) + 0x370))(auStack_58);
      fVar5 = atan2f(in_s1 - (*(float *)(param_1 + 0x374) + fStack_4c * 0.5),
                     fVar4 - (*(float *)(param_1 + 0x370) + local_50 * 0.5));
      (**(code **)(*(long *)param_1 + 0x6c8))(fVar5 * 57.29578 + 180.0,param_1);
      (**(code **)(*(long *)param_1 + 0x688))(param_1,0x100);
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

