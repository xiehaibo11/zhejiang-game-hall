
/* cocos2d::extension::ControlHuePicker::updateSliderPosition(cocos2d::Vec2) */

void cocos2d::extension::ControlHuePicker::updateSliderPosition
               (float param_1,float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_48 [8];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3[0x6c] + 0x370))(auStack_48);
  fVar2 = atan2f(param_2 - (*(float *)((long)param_3 + 0x374) + fStack_3c * 0.5),
                 param_1 - (*(float *)(param_3 + 0x6e) + local_40 * 0.5));
  (**(code **)(*param_3 + 0x6c8))(fVar2 * 57.29578 + 180.0,param_3);
  (**(code **)(*param_3 + 0x688))(param_3,0x100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0f0b8 with catch @ 00e0f1a0
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

