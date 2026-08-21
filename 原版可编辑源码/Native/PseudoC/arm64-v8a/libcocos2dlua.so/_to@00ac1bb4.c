
/* fairygui::GTweener::_to(cocos2d::Vec2 const&, cocos2d::Vec2 const&, float) */

GTweener * __thiscall
fairygui::GTweener::_to(GTweener *this,Vec2 *param_1,Vec2 *param_2,float param_3)

{
  *(undefined4 *)(this + 0xd8) = 2;
  TweenValue::setVec2((TweenValue *)(this + 0x28),param_1);
  TweenValue::setVec2((TweenValue *)(this + 0x40),param_2);
  TweenValue::setVec2((TweenValue *)(this + 0x58),param_1);
  *(float *)(this + 0xa4) = param_3;
  return this;
}

