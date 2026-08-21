
/* cocos2d::ActionFloat::update(float) */

void __thiscall cocos2d::ActionFloat::update(ActionFloat *this,float param_1)

{
  long lVar1;
  long *plVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x90);
  if (plVar2 != (long *)0x0) {
    local_2c = *(float *)(this + 0x5c) - (1.0 - param_1) * *(float *)(this + 0x60);
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

