
/* fairygui::FUISprite::setContentSize(cocos2d::Size const&) */

void __thiscall fairygui::FUISprite::setContentSize(FUISprite *this,Size *param_1)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x53d] == (FUISprite)0x0) {
    cocos2d::Sprite::setContentSize((Sprite *)this,param_1);
  }
  else {
    cocos2d::Rect::Rect(aRStack_38,(Vec2 *)&cocos2d::Vec2::ZERO,param_1);
                    /* try { // try from 00aaab70 to 00baab9f has its CatchHandler @ 00aaaab8 */
    (**(code **)(*(long *)this + 0x558))(this,aRStack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00aaaba0 to 00baabb3 has its CatchHandler @ 00aaabf4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

