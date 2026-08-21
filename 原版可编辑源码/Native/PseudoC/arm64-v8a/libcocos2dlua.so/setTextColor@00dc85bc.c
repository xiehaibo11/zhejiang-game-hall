
/* cocos2d::ui::Text::setTextColor(cocos2d::Color4B) */

void __thiscall cocos2d::ui::Text::setTextColor(Text *this,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  (**(code **)(**(long **)(this + 0x528) + 0x598))(*(long **)(this + 0x528),&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

