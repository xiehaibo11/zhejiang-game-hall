
/* cocos2d::extension::ControlHuePicker::checkSliderPosition(cocos2d::Vec2) */

void cocos2d::extension::ControlHuePicker::checkSliderPosition
               (float param_1,float param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_48 [8];
  float local_40;
  float fStack_3c;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0f058 with catch @ 00e0f1b8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e0eef8 with catch @ 00e0f1cc
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = SQRT(param_2 * param_2 + (param_1 + 10.0) * (param_1 + 10.0));
  uVar2 = 0;
  if ((fVar3 < 80.0) && (59.0 < fVar3)) {
    (**(code **)(*(long *)param_3[0x6c] + 0x370))(auStack_48);
    fVar3 = atan2f(param_2 - (*(float *)((long)param_3 + 0x374) + fStack_3c * 0.5),
                   param_1 - (*(float *)(param_3 + 0x6e) + local_40 * 0.5));
    (**(code **)(*param_3 + 0x6c8))(fVar3 * 57.29578 + 180.0,param_3);
    (**(code **)(*param_3 + 0x688))(param_3,0x100);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

