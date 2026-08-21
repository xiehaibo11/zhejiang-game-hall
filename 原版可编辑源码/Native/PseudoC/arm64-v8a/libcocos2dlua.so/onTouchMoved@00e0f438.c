
/* cocos2d::extension::ControlHuePicker::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void __thiscall
cocos2d::extension::ControlHuePicker::onTouchMoved
          (ControlHuePicker *this,Touch *param_1,Event *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float in_s1;
  undefined1 auStack_48 [8];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*(long *)this + 0x6a0))();
  fVar3 = SQRT(in_s1 * in_s1 + (fVar2 + 10.0) * (fVar2 + 10.0));
  if ((fVar3 < 80.0) && (59.0 < fVar3)) {
    (**(code **)(**(long **)(this + 0x360) + 0x370))(auStack_48);
    fVar3 = atan2f(in_s1 - (*(float *)(this + 0x374) + fStack_3c * 0.5),
                   fVar2 - (*(float *)(this + 0x370) + local_40 * 0.5));
    (**(code **)(*(long *)this + 0x6c8))(fVar3 * 57.29578 + 180.0,this);
    (**(code **)(*(long *)this + 0x688))(this,0x100);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

