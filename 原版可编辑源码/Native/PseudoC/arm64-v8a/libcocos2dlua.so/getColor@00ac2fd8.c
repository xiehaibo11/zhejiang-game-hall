
/* fairygui::TweenValue::getColor() const */

void __thiscall fairygui::TweenValue::getColor(TweenValue *this)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4B::Color4B
            ((Color4B *)&local_2c,(uchar)(int)*(float *)this,(uchar)(int)*(float *)(this + 4),
             (uchar)(int)*(float *)(this + 8),(uchar)(int)*(float *)(this + 0xc));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}

