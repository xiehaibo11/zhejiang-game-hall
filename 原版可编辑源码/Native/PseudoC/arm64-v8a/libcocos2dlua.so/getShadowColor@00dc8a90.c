
/* cocos2d::ui::Text::getShadowColor() const */

void __thiscall cocos2d::ui::Text::getShadowColor(Text *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x528);
  Color4B::Color4B((Color4B *)&local_2c,(uchar)(int)(*(float *)(lVar2 + 0x618) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x61c) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x620) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x624) * 255.0));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}

