
/* cocos2d::LayerColor::changeWidthAndHeight(float, float) */

void __thiscall
cocos2d::LayerColor::changeWidthAndHeight(LayerColor *this,float param_1,float param_2)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_30,param_1,param_2);
  (**(code **)(*(long *)this + 0x160))(this,aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

