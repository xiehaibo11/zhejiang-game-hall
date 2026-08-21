
/* cocos2d::ui::Text::getEffectColor() const */

void __thiscall cocos2d::ui::Text::getEffectColor(Text *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc8b4c to 00ec8baf has its CatchHandler @ 00dc8b4c
                       catch() { ... } // from try @ 00dc8b4c with catch @ 00dc8b4c
                       catch() { ... } // from try @ 00dc8f8c with catch @ 00dc8b4c */
  lVar2 = *(long *)(this + 0x528);
  Color4B::Color4B((Color4B *)&local_2c,(uchar)(int)(*(float *)(lVar2 + 0x4a0) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x4a4) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x4a8) * 255.0),
                   (uchar)(int)(*(float *)(lVar2 + 0x4ac) * 255.0));
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00dc8bb0 to 00ec8bbb has its CatchHandler @ 00dc8ff0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}

