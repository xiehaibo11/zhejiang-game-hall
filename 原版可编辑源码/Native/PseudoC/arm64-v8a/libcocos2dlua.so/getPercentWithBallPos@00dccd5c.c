
/* cocos2d::ui::Slider::getPercentWithBallPos(cocos2d::Vec2 const&) const */

float __thiscall cocos2d::ui::Slider::getPercentWithBallPos(Slider *this,Vec2 *param_1)

{
  long lVar1;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)local_48);
  Widget::hitTest((Widget *)this,param_1,*(Camera **)(this + 0x3b8),(Vec3 *)local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (local_48[0] / *(float *)(this + 0x550)) * (float)*(int *)(this + 0x558);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

