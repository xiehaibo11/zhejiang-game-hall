
/* cocos2d::LayerColor::changeWidth(float) */

void __thiscall cocos2d::LayerColor::changeWidth(LayerColor *this,float param_1)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_30,param_1,*(float *)(this + 0x84));
  (**(code **)(*(long *)this + 0x160))(this,aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

