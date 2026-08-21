
/* fairygui::GTweener::_shake(cocos2d::Vec2 const&, float, float) */

GTweener * __thiscall
fairygui::GTweener::_shake(GTweener *this,Vec2 *param_1,float param_2,float param_3)

{
  *(undefined4 *)(this + 0xd8) = 6;
  TweenValue::setVec2((TweenValue *)(this + 0x28),param_1);
  *(float *)(this + 0x34) = param_2;
  *(float *)(this + 0xa4) = param_3;
  *(undefined4 *)(this + 0xac) = 0;
  return this;
}

